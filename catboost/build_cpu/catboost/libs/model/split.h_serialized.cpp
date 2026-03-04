// This file was auto-generated. Do not edit!!!
#include <catboost/libs/model/split.h>
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

// I/O for ESplitType
namespace { namespace NESplitTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<ESplitType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 4> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 4>{{
        TNameBufsBase::EnumStringPair(ESplitType::FloatFeature, "FloatFeature"sv),
        TNameBufsBase::EnumStringPair(ESplitType::EstimatedFeature, "EstimatedFeature"sv),
        TNameBufsBase::EnumStringPair(ESplitType::OneHotFeature, "OneHotFeature"sv),
        TNameBufsBase::EnumStringPair(ESplitType::OnlineCtr, "OnlineCtr"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[4]{
        TNameBufsBase::EnumStringPair(ESplitType::EstimatedFeature, "EstimatedFeature"sv),
        TNameBufsBase::EnumStringPair(ESplitType::FloatFeature, "FloatFeature"sv),
        TNameBufsBase::EnumStringPair(ESplitType::OneHotFeature, "OneHotFeature"sv),
        TNameBufsBase::EnumStringPair(ESplitType::OnlineCtr, "OnlineCtr"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[4]{
        "FloatFeature"sv,
        "EstimatedFeature"sv,
        "OneHotFeature"sv,
        "OnlineCtr"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("ESplitType::"sv, "ESplitType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("ESplitType::"sv, "ESplitType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<ESplitType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<ESplitType>;

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

const TString& ToString(ESplitType x) {
    const NESplitTypePrivate::TNameBufs& names = NESplitTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
ESplitType FromStringImpl<ESplitType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NESplitTypePrivate::TNameBufs, ESplitType>(data, len);
}

template<>
bool TryFromStringImpl<ESplitType>(const char* data, size_t len, ESplitType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NESplitTypePrivate::TNameBufs, ESplitType>(data, len, result);
}

bool FromString(const TString& name, ESplitType& ret) {
    return ::TryFromStringImpl<ESplitType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, ESplitType& ret) {
    return ::TryFromStringImpl<ESplitType>(name.data(), name.size(), ret);
}

template<>
void Out<ESplitType>(IOutputStream& os, TTypeTraits<ESplitType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NESplitTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<ESplitType>(ESplitType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NESplitTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<ESplitType> GetEnumAllValuesImpl<ESplitType>() {
        const NESplitTypePrivate::TNameBufs& names = NESplitTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<ESplitType>() {
        const NESplitTypePrivate::TNameBufs& names = NESplitTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<ESplitType, TString> GetEnumNamesImpl<ESplitType>() {
        const NESplitTypePrivate::TNameBufs& names = NESplitTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<ESplitType>() {
        const NESplitTypePrivate::TNameBufs& names = NESplitTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

