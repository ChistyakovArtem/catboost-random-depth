// This file was auto-generated. Do not edit!!!
#include <catboost/libs/data/columns.h>
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

// I/O for NCB::EFeatureValuesType
namespace { namespace NNCBEFeatureValuesTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EFeatureValuesType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 10> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 10>{{
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::Float, "Float"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::QuantizedFloat, "QuantizedFloat"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::HashedCategorical, "HashedCategorical"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::PerfectHashedCategorical, "PerfectHashedCategorical"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::StringText, "StringText"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::TokenizedText, "TokenizedText"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::Embedding, "Embedding"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::BinaryPack, "BinaryPack"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::ExclusiveFeatureBundle, "ExclusiveFeatureBundle"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::FeaturesGroup, "FeaturesGroup"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[10]{
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::BinaryPack, "BinaryPack"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::Embedding, "Embedding"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::ExclusiveFeatureBundle, "ExclusiveFeatureBundle"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::FeaturesGroup, "FeaturesGroup"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::Float, "Float"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::HashedCategorical, "HashedCategorical"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::PerfectHashedCategorical, "PerfectHashedCategorical"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::QuantizedFloat, "QuantizedFloat"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::StringText, "StringText"sv),
        TNameBufsBase::EnumStringPair(NCB::EFeatureValuesType::TokenizedText, "TokenizedText"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[10]{
        "Float"sv,
        "QuantizedFloat"sv,
        "HashedCategorical"sv,
        "PerfectHashedCategorical"sv,
        "StringText"sv,
        "TokenizedText"sv,
        "Embedding"sv,
        "BinaryPack"sv,
        "ExclusiveFeatureBundle"sv,
        "FeaturesGroup"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EFeatureValuesType::"sv, "NCB::EFeatureValuesType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EFeatureValuesType::"sv, "NCB::EFeatureValuesType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EFeatureValuesType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EFeatureValuesType>;

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

const TString& ToString(NCB::EFeatureValuesType x) {
    const NNCBEFeatureValuesTypePrivate::TNameBufs& names = NNCBEFeatureValuesTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EFeatureValuesType FromStringImpl<NCB::EFeatureValuesType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEFeatureValuesTypePrivate::TNameBufs, NCB::EFeatureValuesType>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EFeatureValuesType>(const char* data, size_t len, NCB::EFeatureValuesType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEFeatureValuesTypePrivate::TNameBufs, NCB::EFeatureValuesType>(data, len, result);
}

bool FromString(const TString& name, NCB::EFeatureValuesType& ret) {
    return ::TryFromStringImpl<NCB::EFeatureValuesType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EFeatureValuesType& ret) {
    return ::TryFromStringImpl<NCB::EFeatureValuesType>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EFeatureValuesType>(IOutputStream& os, TTypeTraits<NCB::EFeatureValuesType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEFeatureValuesTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EFeatureValuesType>(NCB::EFeatureValuesType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEFeatureValuesTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EFeatureValuesType> GetEnumAllValuesImpl<NCB::EFeatureValuesType>() {
        const NNCBEFeatureValuesTypePrivate::TNameBufs& names = NNCBEFeatureValuesTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EFeatureValuesType>() {
        const NNCBEFeatureValuesTypePrivate::TNameBufs& names = NNCBEFeatureValuesTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EFeatureValuesType, TString> GetEnumNamesImpl<NCB::EFeatureValuesType>() {
        const NNCBEFeatureValuesTypePrivate::TNameBufs& names = NNCBEFeatureValuesTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EFeatureValuesType>() {
        const NNCBEFeatureValuesTypePrivate::TNameBufs& names = NNCBEFeatureValuesTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

