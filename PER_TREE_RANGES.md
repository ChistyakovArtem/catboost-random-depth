# Native per-tree hyperparameter ranges

This research prototype keeps one ordinary CatBoost model at inference. It adds
keyword arguments to the native Python estimators; no Python loop of one-tree
models or prediction-time ensemble is required. Randomization is opt-in: omit
`per_tree_ranges` for fixed-parameter CatBoost training.

```python
from catboost import CatBoostClassifier

model = CatBoostClassifier(
    iterations=10_000,
    depth=9,  # Allocation envelope: at least the upper depth bound.
    grow_policy="SymmetricTree",
    boosting_type="Plain",
    bootstrap_type="Bernoulli",
    learning_rate=0.03,
    l2_leaf_reg=3.0,
    per_tree_ranges={
        "depth": [3, 9],
        "l2_leaf_reg": [1.0, 5.0],
        "random_strength": [0.5, 1.5],
        "rsm": [0.8, 1.0],
        "subsample": [0.7, 1.0],
        "leaf_estimation_iterations": [1, 5],
    },
    per_tree_seed=123,
    per_tree_warmup=64,
    per_tree_depth_sampling="stratified",  # Or "uniform", "curriculum".
    per_tree_step_policy="fixed",  # Experimental alternative: "inverse_depth".
    random_seed=42,
)
model.fit(X_train, y_train, eval_set=(X_val, y_val))
model.save_model("single_model.cbm")
```

Supported ranges use finite inclusive endpoints with lower <= upper:

| Parameter | Domain | Sampling |
| --- | --- | --- |
| depth | Integer 1..12 | Discrete uniform, shuffled balanced blocks, or gradual upper bound |
| l2_leaf_reg | (0, 100] | Log uniform |
| random_strength | [0, 100] | Uniform |
| rsm | (0, 1] | Uniform |
| subsample | (0, 1], Bernoulli bootstrap | Uniform |
| leaf_estimation_iterations | Integer 1..20 | Discrete uniform |

The sampler mixes `random_seed` and `per_tree_seed` with a counter-based stream;
it does not consume CatBoost's training RNG. Each parameter has a separate key,
so adding a range does not change the depth draws. Stratified depth visits every
requested depth once in each shuffled block; redundant-split pruning can still
make an actual tree shallower. Intervals equal to the corresponding fixed HP
are exact no-ops under the default fixed step policy, as is an empty range map.

During the first `per_tree_warmup` iterations, samples that weaken L2 or split
noise are blended progressively from the fixed backbone value. Learning rate
remains fixed by default. The initial research scope is single-host CPU symmetric trees;
classification and regression are covered by the checks.

Two experimental schedules are available. `per_tree_depth_sampling="curriculum"`
starts with the lower depth bound, increases the allowed upper bound linearly
over `per_tree_warmup` iterations, then samples the full interval uniformly.
`per_tree_step_policy="inverse_depth"` multiplies the base learning rate by
`clip((midpoint + 1) / (actual_depth + 1), 0.5, 2)` after choosing each tree's
structure. Factors above one ramp in during warmup; the resulting rate is capped
at 0.1. This policy requires an explicit depth interval, Plain boosting, zero
model shrinkage, base learning rate <=0.1, and RMSE, Logloss or MultiClass loss.
The split-noise schedule still uses the base learning rate. Scaled leaf values
are stored directly in the ordinary model, so serving needs no schedule logic.
These schedules are research hypotheses; their frontier benefit is unproven.

The cache correction is necessary for variable depth: statistics cached while
building a shallow tree must not be reused if their vector is too small for a
later deeper tree. The old release build could access undersized storage. The
new check reallocates that feature's buffer and marks its statistics dirty.

The patch also corrects the prefix bound in `TruncateTrees`: the end index must
be checked against the number of trees, rather than the number of splits.
Constant trees have zero splits, so the old check can reject a valid prefix.
All new estimator arguments are appended to the constructor signature to keep
the existing positional argument order.

Checks cover stock-wheel fixed-training parity, exact empty/degenerate ranges,
repeatability with all six ranges and eight threads, both depth policies,
invalid-range rejection, and exact interrupted-snapshot recovery. A randomized
regression model also loads and predicts identically with the unmodified
CatBoost 1.2.8 wheel; that wheel warns that it ignores the extra training-only
parameter metadata.

Build on Linux with Python 3.12 and the CatBoost CMake prerequisites, then run
`research/check_per_tree_ranges.py` in an environment that also has the stock
`catboost==1.2.8` wheel installed. The modified package is selected explicitly
for the relevant subprocesses.

The initial symmetric-tree TabArena screen used 25 random configurations per
arm, one fit per configuration and no fold bagging or train+validation refit.
Uniform depth, stratified depth and randomized depth/regularization did not pass
the prespecified promotion rule. Median error ratios at the baseline's inference
cost were 1.0050, 1.0121 and 1.0112 respectively; smaller is better. These are
exploratory validation results, not test results. A matched fixed-depth control
based on expected leaf capacity was also run. Structured schedules and bounded
depth ranges are follow-up experiments; no frontier improvement is claimed.

Average depth or tree count alone is not an inference-cost guarantee; benchmark
actual latency and model bytes. The initial uniform ranges used fewer trees but
more leaves and had higher median inference cost in matched configurations.
