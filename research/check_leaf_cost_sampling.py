"""Exercise late depth-12 trees and cache reuse on synthetic data, CPU only."""
from pathlib import Path
import hashlib
import json
import math
import argparse
import tempfile
import os
import subprocess
import sys
import time

POLICIES=['leaf_balanced','sqrt_leaf_balanced']
PROBLEMS=['regression','binclass','multiclass']

def target_depths(policy,count=96,lo=2,hi=5,warmup=32,model_seed=11,sampler_seed=91):
    mask=(1<<64)-1
    def mix(x):
        x=(x+0x9e3779b97f4a7c15)&mask;x=((x^(x>>30))*0xbf58476d1ce4e5b9)&mask
        x=((x^(x>>27))*0x94d049bb133111eb)&mask;return (x^(x>>31))&mask
    key=14695981039346656037
    for c in b'depth':key=((key^c)*1099511628211)&mask
    seed=mix((model_seed+0x517cc1b727220a95)&mask)^mix(sampler_seed);result=[]
    for iteration in range(count):
        u=(mix(seed^mix(iteration)^key)>>11)*2.**-53
        upper=lo+math.floor((hi-lo)*iteration/warmup) if iteration<warmup else hi
        alpha=1. if policy=='leaf_balanced' else .5
        weights=[math.exp2(-alpha*(d-lo)) for d in range(lo,upper+1)]
        threshold=u*sum(weights);cumulative=0.;value=upper
        for d,w in zip(range(lo,upper+1),weights):
            cumulative+=w
            if threshold<cumulative:value=d;break
        result.append(value)
    return result


def child(folder):
    import numpy as np
    from catboost import CatBoostClassifier, CatBoostRegressor, Pool
    import catboost
    extension=Path(catboost._catboost.__file__).resolve()
    assert extension.is_relative_to(Path(os.environ['CB_NATIVE_PACKAGE']).resolve())
    (folder/'ENGINE.json').write_text(json.dumps(dict(native_extension_sha256=hashlib.file_digest(extension.open('rb'),'sha256').hexdigest())))
    rng=np.random.default_rng(9127)
    x=rng.normal(size=(1920,32))
    latent=x[:,0]*x[:,1]+np.sin(2*x[:,2])+x[:,3]-.4*x[:,4]**2
    cases=[]
    for policy in POLICIES:
        # Pick by the sampler alone, before labels/fits: force rare late
        # maximum-depth trees, the original score-cache regression trigger.
        seed=next(s for s in range(1,10001) if 12 in target_depths(policy,256,1,12,64,sampler_seed=s)[128:])
        targets=np.array(target_depths(policy,256,1,12,64,sampler_seed=seed))
        for problem in PROBLEMS:
            y=(latent+.1*rng.normal(size=len(x))) if problem=='regression' else (latent>0).astype(int) if problem=='binclass' else np.digitize(latent,[-.7,.7])
            pool=Pool(x[1536:],label=y[1536:])
            arrays=[];leaves=[]
            for repeat in range(2):
                cls=CatBoostRegressor if problem=='regression' else CatBoostClassifier
                model=cls(iterations=256,depth=12,learning_rate=.03,l2_leaf_reg=3,random_strength=1,
                    rsm=.9,bootstrap_type='Bernoulli',subsample=.8,leaf_estimation_iterations=2,
                    random_seed=11,thread_count=8,boosting_type='Plain',grow_policy='SymmetricTree',
                    allow_writing_files=False,verbose=False,use_best_model=False,
                    per_tree_ranges={'depth':[1,12]},per_tree_seed=seed,per_tree_warmup=64,
                    per_tree_depth_sampling=policy)
                model.fit(x[:1536],y[:1536],eval_set=pool)
                raw=np.asarray(model.predict(pool,prediction_type='RawFormulaVal',thread_count=1))
                evaluation=np.asarray(model.get_test_eval())
                if problem=='multiclass':evaluation=evaluation.T
                np.testing.assert_allclose(raw.reshape(evaluation.shape),evaluation,rtol=1e-11,atol=1e-11)
                arrays.append(raw);leaves.append(model.get_tree_leaf_counts())
            np.testing.assert_array_equal(*arrays);np.testing.assert_array_equal(*leaves)
            actual=np.rint(np.log2(leaves[0])).astype(int)
            assert len(actual)==256 and np.all(actual<=targets)
            assert 12 in actual[128:],(policy,problem,targets.tolist(),actual.tolist())
            path=folder/(problem+'_'+policy+'.cbm');model.save_model(path)
            np.save(path.with_suffix('.npy'),raw)
            cases.append(dict(problem=problem,policy=policy,sampler_seed=seed,iterations=256,
                maximum_depth=12,late_depth12_indices=np.flatnonzero((actual==12)&(np.arange(256)>=128)).tolist(),
                repeat_exact=True,native_evaluation_matches_saved_model=True))
    np.save(folder/'features.npy',x[1536:]);(folder/'CASES.json').write_text(json.dumps(cases,indent=2))


def stock(folder):
    import numpy as np
    import catboost
    from catboost import CatBoost
    assert catboost.__version__=='1.2.8'
    native=json.loads((folder/'ENGINE.json').read_text())['native_extension_sha256']
    assert hashlib.file_digest(Path(catboost._catboost.__file__).open('rb'),'sha256').hexdigest()!=native
    x=np.load(folder/'features.npy')
    for path in sorted(folder.glob('*.cbm')):
        model=CatBoost();model.load_model(path)
        np.testing.assert_array_equal(model.predict(x,prediction_type='RawFormulaVal',thread_count=1),np.load(path.with_suffix('.npy')))


def main(args):
    script=Path(__file__).resolve()
    env=dict(os.environ,CUDA_VISIBLE_DEVICES='',OPENBLAS_NUM_THREADS='1',OMP_NUM_THREADS='1',MKL_NUM_THREADS='1',
        CB_NATIVE_PACKAGE=str(args.native_package.resolve()))
    with tempfile.TemporaryDirectory(prefix='catboost-leaf-cost-checks-') as temporary:
        folder=Path(temporary)
        subprocess.run([sys.executable,str(script),'--action','child','--folder',str(folder)],
            check=True,env=dict(env,PYTHONPATH=str(args.native_package.resolve())))
        stock_env=dict(env);stock_env.pop('PYTHONPATH',None)
        subprocess.run([str(args.stock_python),str(script),'--action','stock','--folder',str(folder)],check=True,env=stock_env)
        print(json.dumps(dict(passed=True,stock_saved_models_exact=True,real_data_accessed=False,
            cases=json.loads((folder/'CASES.json').read_text()),**json.loads((folder/'ENGINE.json').read_text()))),flush=True)


if __name__=='__main__':
    assert sys.platform!='darwin','Run scientific checks on the Linux CPU host'
    parser=argparse.ArgumentParser();parser.add_argument('--native-package',type=Path)
    parser.add_argument('--stock-python',type=Path,default=Path(sys.executable))
    parser.add_argument('--action',choices=['child','stock']);parser.add_argument('--folder',type=Path);args=parser.parse_args()
    if args.action=='child':child(args.folder)
    elif args.action=='stock':stock(args.folder)
    else:
        assert args.native_package is not None,'Pass --native-package for the modified CatBoost package'
        main(args)
