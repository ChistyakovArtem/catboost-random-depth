// This file was auto-generated. Do not edit!!!
#include <catboost/libs/model/ctr_provider.h>
#include <tools/enum_parser/enum_serialization_runtime/enum_runtime.h>

#include <tools/enum_parser/enum_parser/stdlib_deps.h>

#include <util/generic/typetraits.h>
#include <util/generic/singleton.h>
#include <util/generic/string.h>
#include <util/generic/vector.h>
#include <util/generic/map.h>
#include <util/generic/serialized_enum.h>
#include <util/string/cast.h>
#include <util/stream/output.h>

// I/O for ECtrTableMergePolicy
namespace { namespace NECtrTableMergePolicyPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<ECtrTableMergePolicy>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 4> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 4>{{
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::FailIfCtrIntersects, "FailIfCtrIntersects"sv),
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::LeaveMostDiversifiedTable, "LeaveMostDiversifiedTable"sv),
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::IntersectingCountersAverage, "IntersectingCountersAverage"sv),
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::KeepAllTables, "KeepAllTables"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[4]{
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::FailIfCtrIntersects, "FailIfCtrIntersects"sv),
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::IntersectingCountersAverage, "IntersectingCountersAverage"sv),
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::KeepAllTables, "KeepAllTables"sv),
        TNameBufsBase::EnumStringPair(ECtrTableMergePolicy::LeaveMostDiversifiedTable, "LeaveMostDiversifiedTable"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[4]{
        "FailIfCtrIntersects"sv,
        "LeaveMostDiversifiedTable"sv,
        "IntersectingCountersAverage"sv,
        "KeepAllTables"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("ECtrTableMergePolicy::"sv, "ECtrTableMergePolicy"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("ECtrTableMergePolicy::"sv, "ECtrTableMergePolicy"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<ECtrTableMergePolicy> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<ECtrTableMergePolicy>;

        inline TNameBufs();

        static constexpr const TNameBufsBase::TInitializationData& EnumInitializationData = ENUM_INITIALIZATION_DATA;
        static constexpr ::NEnumSerializationRuntime::ESortOrder NamesOrder = NAMES_ORDER;
        static constexpr ::NEnumSerializationRuntime::ESortOrder ValuesOrder = VALUES_ORDER;

        static inline const TNameBufs& Instance() {
            return *SingletonWithPriority<TNameBufs, 0>();
        }
    };

    inline TNameBufs::TNameBufs()
        : TBase(TNameBufs::EnumInitializationData)
    {
    }

}}

const TString& ToString(ECtrTableMergePolicy x) {
    const NECtrTableMergePolicyPrivate::TNameBufs& names = NECtrTableMergePolicyPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
ECtrTableMergePolicy FromStringImpl<ECtrTableMergePolicy>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NECtrTableMergePolicyPrivate::TNameBufs, ECtrTableMergePolicy>(data, len);
}

template<>
bool TryFromStringImpl<ECtrTableMergePolicy>(const char* data, size_t len, ECtrTableMergePolicy& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NECtrTableMergePolicyPrivate::TNameBufs, ECtrTableMergePolicy>(data, len, result);
}

bool FromString(const TString& name, ECtrTableMergePolicy& ret) {
    return ::TryFromStringImpl<ECtrTableMergePolicy>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, ECtrTableMergePolicy& ret) {
    return ::TryFromStringImpl<ECtrTableMergePolicy>(name.data(), name.size(), ret);
}

template<>
void Out<ECtrTableMergePolicy>(IOutputStream& os, TTypeTraits<ECtrTableMergePolicy>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NECtrTableMergePolicyPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<ECtrTableMergePolicy>(ECtrTableMergePolicy e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NECtrTableMergePolicyPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<ECtrTableMergePolicy> GetEnumAllValuesImpl<ECtrTableMergePolicy>() {
        const NECtrTableMergePolicyPrivate::TNameBufs& names = NECtrTableMergePolicyPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<ECtrTableMergePolicy>() {
        const NECtrTableMergePolicyPrivate::TNameBufs& names = NECtrTableMergePolicyPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<ECtrTableMergePolicy, TString> GetEnumNamesImpl<ECtrTableMergePolicy>() {
        const NECtrTableMergePolicyPrivate::TNameBufs& names = NECtrTableMergePolicyPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<ECtrTableMergePolicy>() {
        const NECtrTableMergePolicyPrivate::TNameBufs& names = NECtrTableMergePolicyPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

