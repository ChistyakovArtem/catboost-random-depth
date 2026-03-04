// This file was auto-generated. Do not edit!!!
#include <catboost/libs/data/visitor.h>
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

// I/O for NCB::EDatasetVisitorType
namespace { namespace NNCBEDatasetVisitorTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EDatasetVisitorType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(NCB::EDatasetVisitorType::RawObjectsOrder, "RawObjectsOrder"sv),
        TNameBufsBase::EnumStringPair(NCB::EDatasetVisitorType::RawFeaturesOrder, "RawFeaturesOrder"sv),
        TNameBufsBase::EnumStringPair(NCB::EDatasetVisitorType::QuantizedFeatures, "QuantizedFeatures"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(NCB::EDatasetVisitorType::QuantizedFeatures, "QuantizedFeatures"sv),
        TNameBufsBase::EnumStringPair(NCB::EDatasetVisitorType::RawFeaturesOrder, "RawFeaturesOrder"sv),
        TNameBufsBase::EnumStringPair(NCB::EDatasetVisitorType::RawObjectsOrder, "RawObjectsOrder"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "RawObjectsOrder"sv,
        "RawFeaturesOrder"sv,
        "QuantizedFeatures"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EDatasetVisitorType::"sv, "NCB::EDatasetVisitorType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EDatasetVisitorType::"sv, "NCB::EDatasetVisitorType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EDatasetVisitorType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EDatasetVisitorType>;

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

const TString& ToString(NCB::EDatasetVisitorType x) {
    const NNCBEDatasetVisitorTypePrivate::TNameBufs& names = NNCBEDatasetVisitorTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EDatasetVisitorType FromStringImpl<NCB::EDatasetVisitorType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEDatasetVisitorTypePrivate::TNameBufs, NCB::EDatasetVisitorType>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EDatasetVisitorType>(const char* data, size_t len, NCB::EDatasetVisitorType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEDatasetVisitorTypePrivate::TNameBufs, NCB::EDatasetVisitorType>(data, len, result);
}

bool FromString(const TString& name, NCB::EDatasetVisitorType& ret) {
    return ::TryFromStringImpl<NCB::EDatasetVisitorType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EDatasetVisitorType& ret) {
    return ::TryFromStringImpl<NCB::EDatasetVisitorType>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EDatasetVisitorType>(IOutputStream& os, TTypeTraits<NCB::EDatasetVisitorType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEDatasetVisitorTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EDatasetVisitorType>(NCB::EDatasetVisitorType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEDatasetVisitorTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EDatasetVisitorType> GetEnumAllValuesImpl<NCB::EDatasetVisitorType>() {
        const NNCBEDatasetVisitorTypePrivate::TNameBufs& names = NNCBEDatasetVisitorTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EDatasetVisitorType>() {
        const NNCBEDatasetVisitorTypePrivate::TNameBufs& names = NNCBEDatasetVisitorTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EDatasetVisitorType, TString> GetEnumNamesImpl<NCB::EDatasetVisitorType>() {
        const NNCBEDatasetVisitorTypePrivate::TNameBufs& names = NNCBEDatasetVisitorTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EDatasetVisitorType>() {
        const NNCBEDatasetVisitorTypePrivate::TNameBufs& names = NNCBEDatasetVisitorTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

