#pragma once

#include "learn_context.h"
#include <algorithm>
#include <cmath>

// Counter-based randomness: never advance CatBoost's training RNG. An empty
// map, or a degenerate interval equal to the fixed HP, is an exact no-op.
inline ui64 PerTreeMix(ui64 x) {
    x += 0x9e3779b97f4a7c15ULL;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
    x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
    return x ^ (x >> 31);
}

inline ui64 PerTreeKey(const TString& key) {
    ui64 hash = 14695981039346656037ULL;
    for (const unsigned char c : key) { hash = (hash ^ c) * 1099511628211ULL; }
    return hash;
}

class TPerTreeRangesGuard {
    using TOptions = NCatboostOptions::TObliviousTreeLearnerOptions;
    NCatboostOptions::TOption<TOptions>& Holder;
    const TOptions Original;
    NCatboostOptions::TOption<NCatboostOptions::TBoostingOptions>& BoostHolder;
    const NCatboostOptions::TBoostingOptions OriginalBoosting;
    const ui64 Iteration;
    bool Active;

public:
    explicit TPerTreeRangesGuard(TLearnContext* ctx)
        : Holder(ctx->Params.ObliviousTreeOptions)
        , Original(Holder.Get())
        , BoostHolder(ctx->Params.BoostingOptions)
        , OriginalBoosting(BoostHolder.Get())
        , Iteration(ctx->LearnProgress->TreeStruct.size())
        , Active(!Original.PerTreeRanges.Get().empty())
    {
        if (!Active) { return; }
        CB_ENSURE(ctx->Params.SystemOptions->IsSingleHost(), "Per-tree ranges require single-host training");
        if (Original.PerTreeStepPolicy != "fixed") {
            CB_ENSURE(OriginalBoosting.BoostingType == EBoostingType::Plain && OriginalBoosting.ModelShrinkRate == 0,
                      "Depth-aware steps require Plain boosting and zero model_shrink_rate");
            CB_ENSURE(OriginalBoosting.LearningRate.Get() <= 0.100001,
                      "Depth-aware steps require base learning_rate at most 0.1");
            const auto loss = ctx->Params.LossFunctionDescription->GetLossFunction();
            CB_ENSURE(loss == ELossFunction::RMSE || loss == ELossFunction::Logloss || loss == ELossFunction::MultiClass,
                      "Depth-aware steps support RMSE, Logloss and MultiClass research losses");
        }
        auto& options = Holder.Get();
        const ui64 iteration = ctx->LearnProgress->TreeStruct.size();
        const ui64 seed = PerTreeMix(ctx->Params.RandomSeed.Get() + 0x517cc1b727220a95ULL) ^ PerTreeMix(Original.PerTreeSeed.Get());
        for (const auto& item : Original.PerTreeRanges.Get()) {
            const auto& key = item.first;
            const double lo = item.second[0], hi = item.second[1];
            const double u = (PerTreeMix(seed ^ PerTreeMix(iteration) ^ PerTreeKey(key)) >> 11) * 0x1.0p-53;
            double value = lo;
            if (hi > lo) {
                if (key == "l2_leaf_reg") { value = std::exp(std::log(lo) + u * (std::log(hi) - std::log(lo))); }
                else if (key == "depth" || key == "leaf_estimation_iterations") { value = lo + std::floor(u * (hi - lo + 1)); }
                else { value = lo + u * (hi - lo); }
            }
            if (key == "depth" && Original.PerTreeDepthSampling == "stratified") {
                const ui32 count = static_cast<ui32>(hi - lo + 1);
                const ui64 block = iteration / count;
                TVector<std::pair<ui64, ui32>> order;
                for (ui32 d = 0; d < count; ++d) {
                    order.emplace_back(PerTreeMix(seed ^ PerTreeMix(block) ^ PerTreeMix(d + 12345)), d);
                }
                std::sort(order.begin(), order.end());
                value = lo + order[iteration % count].second;
            }
            if (key == "depth" && Original.PerTreeDepthSampling == "curriculum" && iteration < Original.PerTreeWarmup.Get()) {
                const double cap = lo + std::floor((hi - lo) * iteration / Original.PerTreeWarmup.Get());
                value = lo + std::floor(u * (cap - lo + 1));
            }
            // Start from at least the backbone's regularization and relax
            // continuously. Learning rate deliberately remains fixed.
            if (Original.PerTreeWarmup.Get() > iteration && (key == "l2_leaf_reg" || key == "random_strength")) {
                const double base = key == "l2_leaf_reg" ? Original.L2Reg.Get() : Original.RandomStrength.Get();
                if (value < base) { value = base + (value - base) * iteration / Original.PerTreeWarmup.Get(); }
            }
            if (key == "depth") { options.MaxDepth.Set(static_cast<ui32>(value)); }
            else if (key == "l2_leaf_reg") { options.L2Reg.Set(static_cast<float>(value)); }
            else if (key == "random_strength") { options.RandomStrength.Set(static_cast<float>(value)); }
            else if (key == "rsm") { options.Rsm.Set(static_cast<float>(value)); }
            else if (key == "subsample") { options.BootstrapConfig->GetTakenFraction().Set(static_cast<float>(value)); }
            else if (key == "leaf_estimation_iterations") { options.LeavesEstimationIterations.Set(static_cast<ui32>(value)); }
        }
    }

    ~TPerTreeRangesGuard() {
        if (Active) { Holder.Set(Original); }
        if (Active && Original.PerTreeStepPolicy != "fixed") { BoostHolder.Set(OriginalBoosting); }
    }

    // Called only after the structure is selected. The split-noise schedule
    // continues using the base rate; both approximate updates and stored leaf
    // values then use this bounded, depth-aware step.
    void SetStepForDepth(ui32 depth) const {
        if (!Active || Original.PerTreeStepPolicy == "fixed") { return; }
        const auto& range = Original.PerTreeRanges.Get().find("depth")->second;
        const double centre = (range[0] + range[1]) / 2;
        double factor = std::max(0.5, std::min(2.0, (centre + 1) / (depth + 1.0)));
        if (factor > 1 && Iteration < Original.PerTreeWarmup.Get()) {
            factor = 1 + (factor - 1) * Iteration / Original.PerTreeWarmup.Get();
        }
        BoostHolder->LearningRate.Set(static_cast<float>(std::min(0.1, OriginalBoosting.LearningRate.Get() * factor)));
    }

    TPerTreeRangesGuard(const TPerTreeRangesGuard&) = delete;
    TPerTreeRangesGuard& operator=(const TPerTreeRangesGuard&) = delete;
};
