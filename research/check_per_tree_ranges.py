"""Behavioral checks for native semantics, seeds, snapshots and stock inference."""
from pathlib import Path
import json
import os
import subprocess
import sys
import time


def sample(problem):
    import numpy as np
    import pandas as pd
    rng=np.random.default_rng(42);x=rng.normal(size=(320,8))
    frame=pd.DataFrame(x,columns=[f'n{i}' for i in range(8)])
    frame['category']=np.array(['a','b','c','d'])[np.arange(len(x))%4]
    signal=x[:,0]+.5*x[:,1]+.1*rng.normal(size=len(x))
    y=signal if problem=='regression' else (signal>0).astype(int) if problem=='binclass' else np.digitize(signal,[-.5,.5])
    return frame,y


def model(problem, **kw):
    from catboost import CatBoostClassifier, CatBoostRegressor
    cls=CatBoostRegressor if problem=='regression' else CatBoostClassifier
    return cls(iterations=48,depth=5,learning_rate=.05,l2_leaf_reg=3,random_strength=1,
        rsm=.9,bootstrap_type='Bernoulli',subsample=.8,leaf_estimation_iterations=3,
        random_seed=11,thread_count=2,boosting_type='Plain',grow_policy='SymmetricTree',
        allow_writing_files=kw.pop('allow_writing_files',False),verbose=False,**kw)


def probe(mode, folder):
    import numpy as np
    from catboost import CatBoostRegressor
    if mode=='stock':
        values={}
        for problem in ['regression','binclass','multiclass']:
            x,y=sample(problem);m=model(problem);m.fit(x,y,cat_features=['category'])
            values[problem]=m.predict(x,prediction_type='RawFormulaVal')
        np.savez(folder/'stock.npz',**values)
        return
    if mode=='stock_load':
        x,y=sample('regression');m=CatBoostRegressor();m.load_model(folder/'random.cbm')
        np.testing.assert_array_equal(m.predict(x),np.load(folder/'random-pred.npy'))
        return
    if mode.startswith('snapshot'):
        x,y=sample('regression')
        m=model('regression',per_tree_ranges={'depth':[2,5],'l2_leaf_reg':[1.,4.]},
            save_snapshot=True,snapshot_file=str(folder/'resume.cbsnapshot'),snapshot_interval=0,
            allow_writing_files=True,train_dir=str(folder/'catboost-info'))
        class Kill:
            def after_iteration(self, info):
                if info.iteration==19:
                    os._exit(73)
                return True
        m.fit(x,y,cat_features=['category'],callbacks=[Kill()] if mode=='snapshot_kill' else None)
        np.save(folder/'resumed.npy',m.predict(x))
        return
    result={}
    stock=np.load(folder/'stock.npz')
    for problem in ['regression','binclass','multiclass']:
        x,y=sample(problem);fixed=model(problem);fixed.fit(x,y,cat_features=['category'])
        prediction=fixed.predict(x,prediction_type='RawFormulaVal')
        # The PyPI compiler can differ, so cross-build parity has tolerance.
        np.testing.assert_allclose(prediction,stock[problem],rtol=1e-10,atol=1e-10)
        flat={'depth':[5,5],'l2_leaf_reg':[3.,3.],'random_strength':[1.,1.],
              'rsm':[.9,.9],'subsample':[.8,.8],'leaf_estimation_iterations':[3,3]}
        for ranges in [{},flat]:
            same=model(problem,per_tree_ranges=ranges);same.fit(x,y,cat_features=['category'])
            np.testing.assert_array_equal(prediction,same.predict(x,prediction_type='RawFormulaVal'))
        draws=[]
        for _ in range(2):
            varied=model(problem,per_tree_ranges={'depth':[2,5],'l2_leaf_reg':[1.,4.]},per_tree_seed=91)
            varied.fit(x,y,cat_features=['category']);draws.append(varied.predict(x,prediction_type='RawFormulaVal'))
        np.testing.assert_array_equal(*draws)
        depths=np.rint(np.log2(varied.get_tree_leaf_counts())).astype(int)
        assert len(set(depths))>1 and depths.max()<=5
        result[problem]=dict(empty_and_degenerate_exact=True,deterministic=True,stock_parity=True,
                              actual_depths=sorted(set(depths.tolist())))
        all_ranges={'depth':[2,5],'l2_leaf_reg':[.1,6.],'random_strength':[.1,2.],
                    'rsm':[.65,.95],'subsample':[.6,.95],'leaf_estimation_iterations':[1,7]}
        for policy in ['uniform','stratified']:
            predictions=[]
            for repeat in range(2):
                varied_all=model(problem,per_tree_ranges=all_ranges,per_tree_seed=91,per_tree_depth_sampling=policy)
                varied_all.set_params(thread_count=8);varied_all.fit(x,y,cat_features=['category'])
                predictions.append(varied_all.predict(x,prediction_type='RawFormulaVal'))
            np.testing.assert_array_equal(*predictions)
        result[problem]['all_six_ranges_both_policies_threads8_exact']=True
        if problem=='regression':
            varied.save_model(folder/'random.cbm');np.save(folder/'random-pred.npy',draws[0])
            # Snapshot stream must match an uninterrupted run with the same HPs.
            uninterrupted=model(problem,per_tree_ranges={'depth':[2,5],'l2_leaf_reg':[1.,4.]})
            uninterrupted.fit(x,y,cat_features=['category']);np.save(folder/'uninterrupted.npy',uninterrupted.predict(x))
    x,y=sample('regression')
    invalid=[{'depth':[6,2]},{'depth':[1,13]},{'depth':[1.5,4]}, {'l2_leaf_reg':[0,1]},
             {'rsm':[.8,1.1]},{'subsample':[0,.5]},{'learning_rate':[.01,.1]}, {'random_strength':[float('nan'),1]}]
    for ranges in invalid:
        try:
            model('regression',per_tree_ranges=ranges).fit(x,y,cat_features=['category'])
        except Exception:
            pass
        else:
            raise AssertionError('Invalid range accepted: '+str(ranges))
    (folder/'checks.json').write_text(json.dumps(dict(cases=result,invalid_rejected=len(invalid)),indent=2))


def main():
    assert sys.platform!='darwin'
    work=Path(__file__).resolve().parents[1];out=work/'native_checks'/str(time.time_ns());out.mkdir(parents=True)
    env=dict(os.environ,CUDA_VISIBLE_DEVICES='',OPENBLAS_NUM_THREADS='1',OMP_NUM_THREADS='2')
    env.pop('PYTHONPATH',None)
    source=work/'catboost/catboost/python-package'
    for mode in ['stock','patched','snapshot_kill','snapshot_resume','stock_load']:
        child=dict(env)
        if mode not in ['stock','stock_load']:
            child['PYTHONPATH']=str(source)
        result=subprocess.run([sys.executable,str(Path(__file__).resolve()),mode,str(out)],env=child)
        expected=73 if mode=='snapshot_kill' else 0
        assert result.returncode==expected,(mode,result.returncode)
        if mode=='snapshot_kill':
            assert (out/'resume.cbsnapshot').stat().st_size>0
    import numpy as np
    np.testing.assert_array_equal(np.load(out/'resumed.npy'),np.load(out/'uninterrupted.npy'))
    record=json.loads((out/'checks.json').read_text())
    record.update(passed=True,snapshot_resume_exact=True,stock_wheel_load_and_inference_exact=True,time=time.time())
    (work/'NATIVE_CANARY_PASS.json').write_text(json.dumps(record,indent=2))
    print(json.dumps(record),flush=True)


if __name__=='__main__':
    if len(sys.argv)==1:
        main()
    else:
        probe(sys.argv[1],Path(sys.argv[2]))
