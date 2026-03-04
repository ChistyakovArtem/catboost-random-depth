// This file was auto-generated. Do not edit!!!
#include <library/cpp/neh/http_common.h>
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

// I/O for NNeh::NHttp::EResolverType
namespace { namespace NNNehNHttpEResolverTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::EResolverType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 2> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 2>{{
        TNameBufsBase::EnumStringPair(NNeh::NHttp::EResolverType::ETCP, "ETCP"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::EResolverType::EUNIXSOCKET, "EUNIXSOCKET"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[2]{
        TNameBufsBase::EnumStringPair(NNeh::NHttp::EResolverType::ETCP, "ETCP"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::EResolverType::EUNIXSOCKET, "EUNIXSOCKET"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[2]{
        "ETCP"sv,
        "EUNIXSOCKET"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NNeh::NHttp::EResolverType::"sv, "NNeh::NHttp::EResolverType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NNeh::NHttp::EResolverType::"sv, "NNeh::NHttp::EResolverType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::EResolverType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::EResolverType>;

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

const TString& ToString(NNeh::NHttp::EResolverType x) {
    const NNNehNHttpEResolverTypePrivate::TNameBufs& names = NNNehNHttpEResolverTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NNeh::NHttp::EResolverType FromStringImpl<NNeh::NHttp::EResolverType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNNehNHttpEResolverTypePrivate::TNameBufs, NNeh::NHttp::EResolverType>(data, len);
}

template<>
bool TryFromStringImpl<NNeh::NHttp::EResolverType>(const char* data, size_t len, NNeh::NHttp::EResolverType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNNehNHttpEResolverTypePrivate::TNameBufs, NNeh::NHttp::EResolverType>(data, len, result);
}

bool FromString(const TString& name, NNeh::NHttp::EResolverType& ret) {
    return ::TryFromStringImpl<NNeh::NHttp::EResolverType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NNeh::NHttp::EResolverType& ret) {
    return ::TryFromStringImpl<NNeh::NHttp::EResolverType>(name.data(), name.size(), ret);
}

template<>
void Out<NNeh::NHttp::EResolverType>(IOutputStream& os, TTypeTraits<NNeh::NHttp::EResolverType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNNehNHttpEResolverTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NNeh::NHttp::EResolverType>(NNeh::NHttp::EResolverType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNNehNHttpEResolverTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NNeh::NHttp::EResolverType> GetEnumAllValuesImpl<NNeh::NHttp::EResolverType>() {
        const NNNehNHttpEResolverTypePrivate::TNameBufs& names = NNNehNHttpEResolverTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NNeh::NHttp::EResolverType>() {
        const NNNehNHttpEResolverTypePrivate::TNameBufs& names = NNNehNHttpEResolverTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NNeh::NHttp::EResolverType, TString> GetEnumNamesImpl<NNeh::NHttp::EResolverType>() {
        const NNNehNHttpEResolverTypePrivate::TNameBufs& names = NNNehNHttpEResolverTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NNeh::NHttp::EResolverType>() {
        const NNNehNHttpEResolverTypePrivate::TNameBufs& names = NNNehNHttpEResolverTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

// I/O for NNeh::NHttp::ERequestType
namespace { namespace NNNehNHttpERequestTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::ERequestType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 6> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 6>{{
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Any, "ANY"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Post, "POST"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Get, "GET"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Put, "PUT"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Delete, "DELETE"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Patch, "PATCH"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[6]{
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Any, "ANY"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Delete, "DELETE"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Get, "GET"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Patch, "PATCH"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Post, "POST"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestType::Put, "PUT"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[6]{
        "Any"sv,
        "Post"sv,
        "Get"sv,
        "Put"sv,
        "Delete"sv,
        "Patch"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NNeh::NHttp::ERequestType::"sv, "NNeh::NHttp::ERequestType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NNeh::NHttp::ERequestType::"sv, "NNeh::NHttp::ERequestType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::ERequestType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::ERequestType>;

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

const TString& ToString(NNeh::NHttp::ERequestType x) {
    const NNNehNHttpERequestTypePrivate::TNameBufs& names = NNNehNHttpERequestTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NNeh::NHttp::ERequestType FromStringImpl<NNeh::NHttp::ERequestType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNNehNHttpERequestTypePrivate::TNameBufs, NNeh::NHttp::ERequestType>(data, len);
}

template<>
bool TryFromStringImpl<NNeh::NHttp::ERequestType>(const char* data, size_t len, NNeh::NHttp::ERequestType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNNehNHttpERequestTypePrivate::TNameBufs, NNeh::NHttp::ERequestType>(data, len, result);
}

bool FromString(const TString& name, NNeh::NHttp::ERequestType& ret) {
    return ::TryFromStringImpl<NNeh::NHttp::ERequestType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NNeh::NHttp::ERequestType& ret) {
    return ::TryFromStringImpl<NNeh::NHttp::ERequestType>(name.data(), name.size(), ret);
}

template<>
void Out<NNeh::NHttp::ERequestType>(IOutputStream& os, TTypeTraits<NNeh::NHttp::ERequestType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNNehNHttpERequestTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NNeh::NHttp::ERequestType>(NNeh::NHttp::ERequestType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNNehNHttpERequestTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NNeh::NHttp::ERequestType> GetEnumAllValuesImpl<NNeh::NHttp::ERequestType>() {
        const NNNehNHttpERequestTypePrivate::TNameBufs& names = NNNehNHttpERequestTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NNeh::NHttp::ERequestType>() {
        const NNNehNHttpERequestTypePrivate::TNameBufs& names = NNNehNHttpERequestTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NNeh::NHttp::ERequestType, TString> GetEnumNamesImpl<NNeh::NHttp::ERequestType>() {
        const NNNehNHttpERequestTypePrivate::TNameBufs& names = NNNehNHttpERequestTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NNeh::NHttp::ERequestType>() {
        const NNNehNHttpERequestTypePrivate::TNameBufs& names = NNNehNHttpERequestTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

// I/O for NNeh::NHttp::ERequestFlag
namespace { namespace NNNehNHttpERequestFlagPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::ERequestFlag>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 2> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 2>{{
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestFlag::None, "None"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestFlag::AbsoluteUri, "AbsoluteUri"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[2]{
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestFlag::AbsoluteUri, "AbsoluteUri"sv),
        TNameBufsBase::EnumStringPair(NNeh::NHttp::ERequestFlag::None, "None"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[2]{
        "None"sv,
        "AbsoluteUri"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NNeh::NHttp::ERequestFlag::"sv, "NNeh::NHttp::ERequestFlag"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NNeh::NHttp::ERequestFlag::"sv, "NNeh::NHttp::ERequestFlag"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::ERequestFlag> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NNeh::NHttp::ERequestFlag>;

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

const TString& ToString(NNeh::NHttp::ERequestFlag x) {
    const NNNehNHttpERequestFlagPrivate::TNameBufs& names = NNNehNHttpERequestFlagPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NNeh::NHttp::ERequestFlag FromStringImpl<NNeh::NHttp::ERequestFlag>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNNehNHttpERequestFlagPrivate::TNameBufs, NNeh::NHttp::ERequestFlag>(data, len);
}

template<>
bool TryFromStringImpl<NNeh::NHttp::ERequestFlag>(const char* data, size_t len, NNeh::NHttp::ERequestFlag& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNNehNHttpERequestFlagPrivate::TNameBufs, NNeh::NHttp::ERequestFlag>(data, len, result);
}

bool FromString(const TString& name, NNeh::NHttp::ERequestFlag& ret) {
    return ::TryFromStringImpl<NNeh::NHttp::ERequestFlag>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NNeh::NHttp::ERequestFlag& ret) {
    return ::TryFromStringImpl<NNeh::NHttp::ERequestFlag>(name.data(), name.size(), ret);
}

template<>
void Out<NNeh::NHttp::ERequestFlag>(IOutputStream& os, TTypeTraits<NNeh::NHttp::ERequestFlag>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNNehNHttpERequestFlagPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NNeh::NHttp::ERequestFlag>(NNeh::NHttp::ERequestFlag e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNNehNHttpERequestFlagPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NNeh::NHttp::ERequestFlag> GetEnumAllValuesImpl<NNeh::NHttp::ERequestFlag>() {
        const NNNehNHttpERequestFlagPrivate::TNameBufs& names = NNNehNHttpERequestFlagPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NNeh::NHttp::ERequestFlag>() {
        const NNNehNHttpERequestFlagPrivate::TNameBufs& names = NNNehNHttpERequestFlagPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NNeh::NHttp::ERequestFlag, TString> GetEnumNamesImpl<NNeh::NHttp::ERequestFlag>() {
        const NNNehNHttpERequestFlagPrivate::TNameBufs& names = NNNehNHttpERequestFlagPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NNeh::NHttp::ERequestFlag>() {
        const NNNehNHttpERequestFlagPrivate::TNameBufs& names = NNNehNHttpERequestFlagPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

