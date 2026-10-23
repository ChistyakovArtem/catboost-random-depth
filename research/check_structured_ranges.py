"""Remote checks for depth schedules, native parity and saved-model semantics."""
from pathlib import Path
import ast
import hashlib
import json
import os
import shutil
import subprocess
import sys
import time

from check_per_tree_ranges import sample

PROBLEMS=['regression','binclass','multiclass']
POLICIES={'curriculum':dict(per_tree_depth_sampling='curriculum'),
          'inverse':dict(per_tree_step_policy='inverse_depth'),
          'both':dict(per_tree_depth_sampling='curriculum',per_tree_step_policy='inverse_depth')}


def make(problem,**overrides):
    from catboost import CatBoostClassifier,CatBoostRegressor
    cls=CatBoostRegressor if problem=='regression' else CatBoostClassifier
    hp=dict(iterations=96,depth=5,learning_rate=.05,l2_leaf_reg=3,random_strength=1,
        rsm=.9,bootstrap_type='Bernoulli',subsample=.8,leaf_estimation_iterations=3,
        random_seed=11,thread_count=8,boosting_type='Plain',grow_policy='SymmetricTree',
        allow_writing_files=False,verbose=False,use_best_model=False)
    hp.update(overrides);return cls(**hp)


def fit(problem,**hp):
    from catboost import Pool
    x,y=sample(problem)
    train=Pool(x.iloc[:256],label=y[:256],cat_features=['category'])
    val=Pool(x.iloc[256:],label=y[256:],cat_features=['category'])
    m=make(problem,**hp);m.fit(train,eval_set=val)
    return m,val


def legacy(folder):
    import numpy as np
    ranges={'depth':[2,5],'l2_leaf_reg':[.1,6.],'random_strength':[.1,2.],
            'rsm':[.65,.95],'subsample':[.6,.95],'leaf_estimation_iterations':[1,7]}
    outputs={}
    for p in PROBLEMS:
        for policy in ['fixed','uniform','stratified']:
            kwargs={} if policy=='fixed' else dict(per_tree_ranges=ranges,per_tree_seed=91,per_tree_depth_sampling=policy)
            m,val=fit(p,**kwargs);outputs[p+'_'+policy]=m.predict(val,prediction_type='RawFormulaVal',thread_count=1)
            outputs[p+'_'+policy+'_leaves']=m.get_tree_leaf_counts()
    np.savez(folder,**outputs)


def probe(mode,folder):
    import numpy as np
    from catboost import CatBoost,Pool
    if mode in ['legacy_old','legacy_new']:legacy(folder/(mode+'.npz'));return
    if mode=='stock':
        for p in PROBLEMS:
            x,_=sample(p);val=Pool(x.iloc[256:],cat_features=['category'])
            for policy in POLICIES:
                m=CatBoost();m.load_model(folder/(p+'_'+policy+'.cbm'))
                np.testing.assert_array_equal(m.predict(val,prediction_type='RawFormulaVal',thread_count=1),
                    np.load(folder/(p+'_'+policy+'.npy')))
        return
    if mode.startswith('snapshot_'):
        x,y=sample('regression');policy=mode.split('_')[1];action=mode.split('_')[2]
        m=make('regression',per_tree_ranges={'depth':[2,5]},per_tree_seed=91,per_tree_warmup=32,
            **POLICIES[policy],save_snapshot=True,snapshot_file=str(folder/(policy+'.snapshot')),
            snapshot_interval=0,allow_writing_files=True,train_dir=str(folder/(policy+'-train')))
        class Kill:
            def after_iteration(self,info):
                if info.iteration==37:os._exit(73)
                return True
        m.fit(Pool(x.iloc[:256],label=y[:256],cat_features=['category']),
            eval_set=Pool(x.iloc[256:],label=y[256:],cat_features=['category']),
            callbacks=[Kill()] if action=='kill' else None)
        np.save(folder/(policy+'-resumed.npy'),m.predict(x,prediction_type='RawFormulaVal',thread_count=1));return
    checks={}
    for p in PROBLEMS:
        x,y=sample(p)
        for policy,extra in POLICIES.items():
            predictions=[]
            for repeat in range(2):
                m,val=fit(p,per_tree_ranges={'depth':[2,5]},per_tree_seed=91,per_tree_warmup=32,**extra)
                raw=np.asarray(m.predict(val,prediction_type='RawFormulaVal',thread_count=1))
                evaluation=np.asarray(m.get_test_eval())
                if p=='multiclass':evaluation=evaluation.T
                np.testing.assert_allclose(raw.reshape(evaluation.shape),evaluation,rtol=1e-12,atol=1e-12)
                predictions.append(raw)
            np.testing.assert_array_equal(*predictions)
            depth=np.rint(np.log2(m.get_tree_leaf_counts())).astype(int)
            assert np.all(depth<=5)
            if 'curriculum' in policy or policy=='both':
                cap=2+np.floor(3*np.minimum(np.arange(len(depth)),32)/32).astype(int)
                assert np.all(depth<=cap),(policy,depth,cap)
            m.save_model(folder/(p+'_'+policy+'.cbm'));np.save(folder/(p+'_'+policy+'.npy'),raw)
            if p=='regression':np.save(folder/(policy+'-uninterrupted.npy'),m.predict(x,prediction_type='RawFormulaVal',thread_count=1))
            checks[p+'_'+policy]=dict(repeat_exact=True,training_and_model_predictions_match=True,depths=sorted(set(depth.tolist())))
    # Empty and degenerate default-step ranges remain exact no-ops.
    fixed,val=fit('regression');reference=fixed.predict(val)
    for ranges in [{},{'depth':[5,5],'l2_leaf_reg':[3,3],'rsm':[.9,.9],'subsample':[.8,.8]}]:
        same,_=fit('regression',per_tree_ranges=ranges);np.testing.assert_array_equal(reference,same.predict(val))
    # The inserted hook must leave ordinary nonsymmetric CatBoost usable.
    ordinary,_=fit('regression',grow_policy='Depthwise');assert ordinary.tree_count_==96
    # A true zero-depth model must allow every valid prefix and reject invalid ones.
    x=np.arange(64).reshape(-1,1);y=np.full(64,2.)
    constant=make('regression',iterations=4,allow_const_label=True,random_strength=0);constant.fit(x,y)
    assert np.sum(np.log2(constant.get_tree_leaf_counts()))<constant.tree_count_
    reference=constant.predict(x,ntree_end=4);constant.shrink(4)
    np.testing.assert_array_equal(reference,constant.predict(x))
    try:fixed.shrink(fixed.tree_count_+1)
    except Exception:pass
    else:raise AssertionError('Invalid constant-tree prefix accepted')
    invalid=[dict(per_tree_step_policy='inverse_depth',per_tree_ranges={'depth':[2,5]},learning_rate=.2),
        dict(per_tree_step_policy='inverse_depth',per_tree_ranges={'depth':[2,5]},boosting_type='Ordered'),
        dict(per_tree_step_policy='inverse_depth',per_tree_ranges={'depth':[2,5]},model_shrink_rate=.01),
        dict(per_tree_step_policy='inverse_depth',per_tree_ranges={'depth':[2,5]},loss_function='Poisson'),
        dict(per_tree_step_policy='unknown',per_tree_ranges={'depth':[2,5]}),
        dict(per_tree_step_policy='inverse_depth'),dict(per_tree_depth_sampling='curriculum')]
    for kwargs in invalid:
        try:fit('regression',**kwargs)
        except Exception:pass
        else:raise AssertionError('Unsupported schedule accepted: '+str(kwargs))
    (folder/'checks.json').write_text(json.dumps(dict(cases=checks,invalid_rejected=len(invalid),
        default_noop_exact=True,nonsymmetric_unchanged=True,zero_depth_prefix_fixed=True),indent=2))


def main():
    import numpy as np
    work=Path(__file__).resolve().parents[1]
    source=work/'catboost/catboost/python-package'
    out=work/'structured_checks'/str(time.time_ns());out.mkdir(parents=True)
    env=dict(os.environ,CUDA_VISIBLE_DEVICES='',OPENBLAS_NUM_THREADS='1',OMP_NUM_THREADS='8',MKL_NUM_THREADS='8')
    env.pop('PYTHONPATH',None)
    for mode in ['checks','stock',*[f'snapshot_{p}_{a}' for p in POLICIES for a in ['kill','resume']]]:
        child=dict(env)
        if mode!='stock':child['PYTHONPATH']=str(source)
        result=subprocess.run([sys.executable,str(Path(__file__).resolve()),mode,str(out)],env=child)
        assert result.returncode==(73 if mode.endswith('_kill') else 0),(mode,result.returncode)
        if mode.endswith('_kill'):assert (out/(mode.split('_')[1]+'.snapshot')).stat().st_size>0
    for policy in POLICIES:
        np.testing.assert_array_equal(np.load(out/(policy+'-resumed.npy')),np.load(out/(policy+'-uninterrupted.npy')))
    record=json.loads((out/'checks.json').read_text());record.update(passed=True,snapshot_resume_exact=True,stock_saved_model_exact=True)
    print(json.dumps(record),flush=True)


if __name__=='__main__':
    assert sys.platform!='darwin'
    if len(sys.argv)==1:main()
    else:probe(sys.argv[1],Path(sys.argv[2]))
