// This file was auto-generated. Do not edit!!!
#include <catboost/private/libs/app_helpers/implementation_type_enum.h>
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

// I/O for NCB::EImplementationType
namespace { namespace NNCBEImplementationTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EImplementationType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 2> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 2>{{
        TNameBufsBase::EnumStringPair(NCB::EImplementationType::OpenSource, "OpenSource"sv),
        TNameBufsBase::EnumStringPair(NCB::EImplementationType::YandexSpecific, "YandexSpecific"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[2]{
        TNameBufsBase::EnumStringPair(NCB::EImplementationType::OpenSource, "OpenSource"sv),
        TNameBufsBase::EnumStringPair(NCB::EImplementationType::YandexSpecific, "YandexSpecific"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[2]{
        "OpenSource"sv,
        "YandexSpecific"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EImplementationType::"sv, "NCB::EImplementationType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EImplementationType::"sv, "NCB::EImplementationType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EImplementationType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EImplementationType>;

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

const TString& ToString(NCB::EImplementationType x) {
    const NNCBEImplementationTypePrivate::TNameBufs& names = NNCBEImplementationTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EImplementationType FromStringImpl<NCB::EImplementationType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEImplementationTypePrivate::TNameBufs, NCB::EImplementationType>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EImplementationType>(const char* data, size_t len, NCB::EImplementationType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEImplementationTypePrivate::TNameBufs, NCB::EImplementationType>(data, len, result);
}

bool FromString(const TString& name, NCB::EImplementationType& ret) {
    return ::TryFromStringImpl<NCB::EImplementationType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EImplementationType& ret) {
    return ::TryFromStringImpl<NCB::EImplementationType>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EImplementationType>(IOutputStream& os, TTypeTraits<NCB::EImplementationType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEImplementationTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EImplementationType>(NCB::EImplementationType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEImplementationTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EImplementationType> GetEnumAllValuesImpl<NCB::EImplementationType>() {
        const NNCBEImplementationTypePrivate::TNameBufs& names = NNCBEImplementationTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EImplementationType>() {
        const NNCBEImplementationTypePrivate::TNameBufs& names = NNCBEImplementationTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EImplementationType, TString> GetEnumNamesImpl<NCB::EImplementationType>() {
        const NNCBEImplementationTypePrivate::TNameBufs& names = NNCBEImplementationTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EImplementationType>() {
        const NNCBEImplementationTypePrivate::TNameBufs& names = NNCBEImplementationTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

