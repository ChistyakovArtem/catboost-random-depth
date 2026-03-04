// This file was auto-generated. Do not edit!!!
#include <catboost/libs/model/features.h>
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

// I/O for TFloatFeature::ENanValueTreatment
namespace { namespace NTFloatFeatureENanValueTreatmentPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<TFloatFeature::ENanValueTreatment>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(TFloatFeature::ENanValueTreatment::AsIs, "AsIs"sv),
        TNameBufsBase::EnumStringPair(TFloatFeature::ENanValueTreatment::AsFalse, "AsFalse"sv),
        TNameBufsBase::EnumStringPair(TFloatFeature::ENanValueTreatment::AsTrue, "AsTrue"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(TFloatFeature::ENanValueTreatment::AsFalse, "AsFalse"sv),
        TNameBufsBase::EnumStringPair(TFloatFeature::ENanValueTreatment::AsIs, "AsIs"sv),
        TNameBufsBase::EnumStringPair(TFloatFeature::ENanValueTreatment::AsTrue, "AsTrue"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "AsIs"sv,
        "AsFalse"sv,
        "AsTrue"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("TFloatFeature::ENanValueTreatment::"sv, "TFloatFeature::ENanValueTreatment"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("TFloatFeature::ENanValueTreatment::"sv, "TFloatFeature::ENanValueTreatment"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<TFloatFeature::ENanValueTreatment> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<TFloatFeature::ENanValueTreatment>;

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

const TString& ToString(TFloatFeature::ENanValueTreatment x) {
    const NTFloatFeatureENanValueTreatmentPrivate::TNameBufs& names = NTFloatFeatureENanValueTreatmentPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
TFloatFeature::ENanValueTreatment FromStringImpl<TFloatFeature::ENanValueTreatment>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NTFloatFeatureENanValueTreatmentPrivate::TNameBufs, TFloatFeature::ENanValueTreatment>(data, len);
}

template<>
bool TryFromStringImpl<TFloatFeature::ENanValueTreatment>(const char* data, size_t len, TFloatFeature::ENanValueTreatment& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NTFloatFeatureENanValueTreatmentPrivate::TNameBufs, TFloatFeature::ENanValueTreatment>(data, len, result);
}

bool FromString(const TString& name, TFloatFeature::ENanValueTreatment& ret) {
    return ::TryFromStringImpl<TFloatFeature::ENanValueTreatment>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, TFloatFeature::ENanValueTreatment& ret) {
    return ::TryFromStringImpl<TFloatFeature::ENanValueTreatment>(name.data(), name.size(), ret);
}

template<>
void Out<TFloatFeature::ENanValueTreatment>(IOutputStream& os, TTypeTraits<TFloatFeature::ENanValueTreatment>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NTFloatFeatureENanValueTreatmentPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<TFloatFeature::ENanValueTreatment>(TFloatFeature::ENanValueTreatment e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NTFloatFeatureENanValueTreatmentPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<TFloatFeature::ENanValueTreatment> GetEnumAllValuesImpl<TFloatFeature::ENanValueTreatment>() {
        const NTFloatFeatureENanValueTreatmentPrivate::TNameBufs& names = NTFloatFeatureENanValueTreatmentPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<TFloatFeature::ENanValueTreatment>() {
        const NTFloatFeatureENanValueTreatmentPrivate::TNameBufs& names = NTFloatFeatureENanValueTreatmentPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<TFloatFeature::ENanValueTreatment, TString> GetEnumNamesImpl<TFloatFeature::ENanValueTreatment>() {
        const NTFloatFeatureENanValueTreatmentPrivate::TNameBufs& names = NTFloatFeatureENanValueTreatmentPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<TFloatFeature::ENanValueTreatment>() {
        const NTFloatFeatureENanValueTreatmentPrivate::TNameBufs& names = NTFloatFeatureENanValueTreatmentPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

