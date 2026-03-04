// This file was auto-generated. Do not edit!!!
#include <catboost/libs/dataset_statistics/histograms.h>
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

// I/O for NCB::EHistogramType
namespace { namespace NNCBEHistogramTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EHistogramType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(NCB::EHistogramType::Uniform, "Uniform"sv),
        TNameBufsBase::EnumStringPair(NCB::EHistogramType::Exact, "Exact"sv),
        TNameBufsBase::EnumStringPair(NCB::EHistogramType::Borders, "Borders"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(NCB::EHistogramType::Borders, "Borders"sv),
        TNameBufsBase::EnumStringPair(NCB::EHistogramType::Exact, "Exact"sv),
        TNameBufsBase::EnumStringPair(NCB::EHistogramType::Uniform, "Uniform"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "Uniform"sv,
        "Exact"sv,
        "Borders"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EHistogramType::"sv, "NCB::EHistogramType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EHistogramType::"sv, "NCB::EHistogramType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EHistogramType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EHistogramType>;

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

const TString& ToString(NCB::EHistogramType x) {
    const NNCBEHistogramTypePrivate::TNameBufs& names = NNCBEHistogramTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EHistogramType FromStringImpl<NCB::EHistogramType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEHistogramTypePrivate::TNameBufs, NCB::EHistogramType>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EHistogramType>(const char* data, size_t len, NCB::EHistogramType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEHistogramTypePrivate::TNameBufs, NCB::EHistogramType>(data, len, result);
}

bool FromString(const TString& name, NCB::EHistogramType& ret) {
    return ::TryFromStringImpl<NCB::EHistogramType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EHistogramType& ret) {
    return ::TryFromStringImpl<NCB::EHistogramType>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EHistogramType>(IOutputStream& os, TTypeTraits<NCB::EHistogramType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEHistogramTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EHistogramType>(NCB::EHistogramType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEHistogramTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EHistogramType> GetEnumAllValuesImpl<NCB::EHistogramType>() {
        const NNCBEHistogramTypePrivate::TNameBufs& names = NNCBEHistogramTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EHistogramType>() {
        const NNCBEHistogramTypePrivate::TNameBufs& names = NNCBEHistogramTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EHistogramType, TString> GetEnumNamesImpl<NCB::EHistogramType>() {
        const NNCBEHistogramTypePrivate::TNameBufs& names = NNCBEHistogramTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EHistogramType>() {
        const NNCBEHistogramTypePrivate::TNameBufs& names = NNCBEHistogramTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

