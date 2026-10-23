"""Isolate each ranged HP against its actual fixed-HP semantics, on synthetic data."""
from pathlib import Path
import argparse
import hashlib
import json
import os
import sys
import time

RANGES = dict(depth=[2, 5], l2_leaf_reg=[.5, 10.], random_strength=[.05, 3.],
              rsm=[.45, .95], subsample=[.35, .95], leaf_estimation_iterations=[1, 8])
CONSTANTS = dict(depth=3, l2_leaf_reg=7., random_strength=2., rsm=.55,
                 subsample=.5, leaf_estimation_iterations=6)


def main(args):
    assert sys.platform != 'darwin'
    os.environ.update(CUDA_VISIBLE_DEVICES='', OPENBLAS_NUM_THREADS='1', OMP_NUM_THREADS='1', MKL_NUM_THREADS='1')
    sys.path.insert(0, str(args.package.resolve()))
    import numpy as np
    import pandas as pd
    import catboost
    from catboost import CatBoostClassifier, CatBoostRegressor, Pool
    extension = hashlib.file_digest(Path(catboost._catboost.__file__).open('rb'), 'sha256').hexdigest()
    assert extension == args.engine
    args.output.mkdir(parents=True, exist_ok=True)
    rng = np.random.default_rng(1280)
    x = rng.normal(size=(1280, 24))
    frame = pd.DataFrame(x, columns=[f'n{i}' for i in range(x.shape[1])])
    frame['category'] = np.array(['a', 'b', 'c', 'd'])[np.arange(len(x)) % 4]
    signal = 1.5*x[:, 0]*x[:, 1] + np.sin(2*x[:, 2]) + .5*x[:, 3]**2 + .2*rng.normal(size=len(x))
    targets = dict(regression=signal, binclass=(signal > np.median(signal)).astype(int),
                   multiclass=np.digitize(signal, np.quantile(signal, [1/3, 2/3])))
    arrays, cases = {}, []
    base_hp = dict(iterations=64, depth=5, learning_rate=.03, l2_leaf_reg=3,
        random_strength=1, rsm=.9, bootstrap_type='Bernoulli', subsample=.8,
        leaf_estimation_iterations=3, random_seed=11, thread_count=8,
        boosting_type='Plain', grow_policy='SymmetricTree', allow_writing_files=False,
        verbose=False, use_best_model=False)
    for problem, y in targets.items():
        train = Pool(frame.iloc[:1024], label=y[:1024], cat_features=['category'])
        val = Pool(frame.iloc[1024:], label=y[1024:], cat_features=['category'])
        cls = CatBoostRegressor if problem == 'regression' else CatBoostClassifier

        def fit(tag, **params):
            m = cls(**dict(base_hp, **params)); m.fit(train, eval_set=val)
            raw = np.asarray(m.predict(val, prediction_type='RawFormulaVal', thread_count=1))
            arrays[problem+'_'+tag] = raw
            arrays[problem+'_'+tag+'_leaves'] = m.get_tree_leaf_counts()
            return m, raw

        _, baseline = fit('fixed')
        for hp, bounds in RANGES.items():
            kwargs = dict(per_tree_ranges={hp: bounds}, per_tree_seed=91, per_tree_warmup=16)
            m, first = fit(hp+'_range', **kwargs)
            _, repeat = fit(hp+'_repeat', **kwargs)
            _, other = fit(hp+'_seed92', **dict(kwargs, per_tree_seed=92))
            value = CONSTANTS[hp]
            _, global_raw = fit(hp+'_global', **{hp: value})
            _, constant_raw = fit(hp+'_constant', per_tree_ranges={hp: [value, value]}, per_tree_warmup=16)
            training = np.asarray(m.get_test_eval())
            if problem == 'multiclass': training = training.T
            native_equal = bool(np.allclose(first.reshape(training.shape), training, rtol=1e-12, atol=1e-12))
            case = dict(problem=problem, hp=hp, repeat_exact=bool(np.array_equal(first, repeat)),
                differs_from_fixed=not bool(np.array_equal(first, baseline)),
                sampler_seed_has_effect=not bool(np.array_equal(first, other)),
                constant_matches_global=bool(np.array_equal(global_raw, constant_raw)),
                constant_global_max_difference=float(np.max(np.abs(global_raw-constant_raw))),
                native_evaluation_matches=native_equal)
            cases.append(case)
            m.save_model(args.output/(problem+'_'+hp+'.cbm'))
            np.save(args.output/(problem+'_'+hp+'.npy'), first)
            print(json.dumps(case), flush=True)
        # Boundary transitions to and from a full Bernoulli sample must also work.
        for value in [1., .99, .1]:
            _, global_raw = fit('subsample_boundary_global_'+str(value), subsample=value)
            _, constant_raw = fit('subsample_boundary_constant_'+str(value),
                per_tree_ranges={'subsample': [value, value]})
            cases.append(dict(problem=problem, hp='subsample_boundary', value=value,
                constant_matches_global=bool(np.array_equal(global_raw, constant_raw))))
    np.savez(args.output/'arrays.npz', **arrays)
    legacy_exact = None
    if args.reference:
        reference = np.load(args.reference/'arrays.npz')
        keys = [key for key in arrays if '_subsample_' not in key]
        for key in keys: np.testing.assert_array_equal(arrays[key], reference[key], err_msg=key)
        legacy_exact = dict(passed=True, checked_arrays=len(keys), excludes_subsample_ranges=True)
    passed = all(all(v for k, v in c.items() if k in ['repeat_exact', 'differs_from_fixed',
        'sampler_seed_has_effect', 'constant_matches_global', 'native_evaluation_matches']) for c in cases)
    result = dict(completed=True, semantics_passed=passed, cases=cases, extension_sha256=extension,
        time=time.time(), legacy_unaffected_exact=legacy_exact, real_data_accessed=False,
        source_sha256=hashlib.file_digest(Path(__file__).open('rb'), 'sha256').hexdigest())
    (args.output/'RESULT.json').write_text(json.dumps(result, indent=2))
    print(json.dumps(dict(completed=True, semantics_passed=passed, output=str(args.output))), flush=True)
    if args.require_pass: assert passed, 'At least one isolated HP failed its semantics check'


if __name__ == '__main__':
    p = argparse.ArgumentParser(); p.add_argument('--package', type=Path, required=True)
    p.add_argument('--engine', required=True); p.add_argument('--output', type=Path, required=True)
    p.add_argument('--reference', type=Path); p.add_argument('--require-pass', action='store_true')
    main(p.parse_args())
