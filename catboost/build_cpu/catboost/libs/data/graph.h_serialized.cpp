// This file was auto-generated. Do not edit!!!
#include <catboost/libs/data/graph.h>
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

// I/O for NCB::EFloatGraphFeatureType
namespace { namespace NNCBEFloatGraphFeatureTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EFloatGraphFeatureType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(NCB::EFloatGraphFeatureType::Mean, "Mean"sv),
        TNameBufsBase::EnumStringPair(NCB::EFloatGraphFeatureType::Min, "Min"sv),
        TNameBufsBase::EnumStringPair(NCB::EFloatGraphFeatureType::Max, "Max"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(NCB::EFloatGraphFeatureType::Max, "Max"sv),
        TNameBufsBase::EnumStringPair(NCB::EFloatGraphFeatureType::Mean, "Mean"sv),
        TNameBufsBase::EnumStringPair(NCB::EFloatGraphFeatureType::Min, "Min"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "Mean"sv,
        "Min"sv,
        "Max"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EFloatGraphFeatureType::"sv, "NCB::EFloatGraphFeatureType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EFloatGraphFeatureType::"sv, "NCB::EFloatGraphFeatureType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EFloatGraphFeatureType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EFloatGraphFeatureType>;

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

const TString& ToString(NCB::EFloatGraphFeatureType x) {
    const NNCBEFloatGraphFeatureTypePrivate::TNameBufs& names = NNCBEFloatGraphFeatureTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EFloatGraphFeatureType FromStringImpl<NCB::EFloatGraphFeatureType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEFloatGraphFeatureTypePrivate::TNameBufs, NCB::EFloatGraphFeatureType>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EFloatGraphFeatureType>(const char* data, size_t len, NCB::EFloatGraphFeatureType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEFloatGraphFeatureTypePrivate::TNameBufs, NCB::EFloatGraphFeatureType>(data, len, result);
}

bool FromString(const TString& name, NCB::EFloatGraphFeatureType& ret) {
    return ::TryFromStringImpl<NCB::EFloatGraphFeatureType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EFloatGraphFeatureType& ret) {
    return ::TryFromStringImpl<NCB::EFloatGraphFeatureType>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EFloatGraphFeatureType>(IOutputStream& os, TTypeTraits<NCB::EFloatGraphFeatureType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEFloatGraphFeatureTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EFloatGraphFeatureType>(NCB::EFloatGraphFeatureType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEFloatGraphFeatureTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EFloatGraphFeatureType> GetEnumAllValuesImpl<NCB::EFloatGraphFeatureType>() {
        const NNCBEFloatGraphFeatureTypePrivate::TNameBufs& names = NNCBEFloatGraphFeatureTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EFloatGraphFeatureType>() {
        const NNCBEFloatGraphFeatureTypePrivate::TNameBufs& names = NNCBEFloatGraphFeatureTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EFloatGraphFeatureType, TString> GetEnumNamesImpl<NCB::EFloatGraphFeatureType>() {
        const NNCBEFloatGraphFeatureTypePrivate::TNameBufs& names = NNCBEFloatGraphFeatureTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EFloatGraphFeatureType>() {
        const NNCBEFloatGraphFeatureTypePrivate::TNameBufs& names = NNCBEFloatGraphFeatureTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

