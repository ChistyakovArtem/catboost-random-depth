// This file was auto-generated. Do not edit!!!
#include <catboost/private/libs/documents_importance/enums.h>
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

// I/O for EDocumentStrengthType
namespace { namespace NEDocumentStrengthTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<EDocumentStrengthType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(EDocumentStrengthType::PerObject, "PerObject"sv),
        TNameBufsBase::EnumStringPair(EDocumentStrengthType::Average, "Average"sv),
        TNameBufsBase::EnumStringPair(EDocumentStrengthType::Raw, "Raw"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(EDocumentStrengthType::Average, "Average"sv),
        TNameBufsBase::EnumStringPair(EDocumentStrengthType::PerObject, "PerObject"sv),
        TNameBufsBase::EnumStringPair(EDocumentStrengthType::Raw, "Raw"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "PerObject"sv,
        "Average"sv,
        "Raw"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("EDocumentStrengthType::"sv, "EDocumentStrengthType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("EDocumentStrengthType::"sv, "EDocumentStrengthType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<EDocumentStrengthType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<EDocumentStrengthType>;

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

const TString& ToString(EDocumentStrengthType x) {
    const NEDocumentStrengthTypePrivate::TNameBufs& names = NEDocumentStrengthTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
EDocumentStrengthType FromStringImpl<EDocumentStrengthType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NEDocumentStrengthTypePrivate::TNameBufs, EDocumentStrengthType>(data, len);
}

template<>
bool TryFromStringImpl<EDocumentStrengthType>(const char* data, size_t len, EDocumentStrengthType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NEDocumentStrengthTypePrivate::TNameBufs, EDocumentStrengthType>(data, len, result);
}

bool FromString(const TString& name, EDocumentStrengthType& ret) {
    return ::TryFromStringImpl<EDocumentStrengthType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, EDocumentStrengthType& ret) {
    return ::TryFromStringImpl<EDocumentStrengthType>(name.data(), name.size(), ret);
}

template<>
void Out<EDocumentStrengthType>(IOutputStream& os, TTypeTraits<EDocumentStrengthType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NEDocumentStrengthTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<EDocumentStrengthType>(EDocumentStrengthType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NEDocumentStrengthTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<EDocumentStrengthType> GetEnumAllValuesImpl<EDocumentStrengthType>() {
        const NEDocumentStrengthTypePrivate::TNameBufs& names = NEDocumentStrengthTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<EDocumentStrengthType>() {
        const NEDocumentStrengthTypePrivate::TNameBufs& names = NEDocumentStrengthTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<EDocumentStrengthType, TString> GetEnumNamesImpl<EDocumentStrengthType>() {
        const NEDocumentStrengthTypePrivate::TNameBufs& names = NEDocumentStrengthTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<EDocumentStrengthType>() {
        const NEDocumentStrengthTypePrivate::TNameBufs& names = NEDocumentStrengthTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

// I/O for EUpdateType
namespace { namespace NEUpdateTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<EUpdateType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(EUpdateType::SinglePoint, "SinglePoint"sv),
        TNameBufsBase::EnumStringPair(EUpdateType::AllPoints, "AllPoints"sv),
        TNameBufsBase::EnumStringPair(EUpdateType::TopKLeaves, "TopKLeaves"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(EUpdateType::AllPoints, "AllPoints"sv),
        TNameBufsBase::EnumStringPair(EUpdateType::SinglePoint, "SinglePoint"sv),
        TNameBufsBase::EnumStringPair(EUpdateType::TopKLeaves, "TopKLeaves"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "SinglePoint"sv,
        "AllPoints"sv,
        "TopKLeaves"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("EUpdateType::"sv, "EUpdateType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("EUpdateType::"sv, "EUpdateType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<EUpdateType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<EUpdateType>;

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

const TString& ToString(EUpdateType x) {
    const NEUpdateTypePrivate::TNameBufs& names = NEUpdateTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
EUpdateType FromStringImpl<EUpdateType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NEUpdateTypePrivate::TNameBufs, EUpdateType>(data, len);
}

template<>
bool TryFromStringImpl<EUpdateType>(const char* data, size_t len, EUpdateType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NEUpdateTypePrivate::TNameBufs, EUpdateType>(data, len, result);
}

bool FromString(const TString& name, EUpdateType& ret) {
    return ::TryFromStringImpl<EUpdateType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, EUpdateType& ret) {
    return ::TryFromStringImpl<EUpdateType>(name.data(), name.size(), ret);
}

template<>
void Out<EUpdateType>(IOutputStream& os, TTypeTraits<EUpdateType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NEUpdateTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<EUpdateType>(EUpdateType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NEUpdateTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<EUpdateType> GetEnumAllValuesImpl<EUpdateType>() {
        const NEUpdateTypePrivate::TNameBufs& names = NEUpdateTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<EUpdateType>() {
        const NEUpdateTypePrivate::TNameBufs& names = NEUpdateTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<EUpdateType, TString> GetEnumNamesImpl<EUpdateType>() {
        const NEUpdateTypePrivate::TNameBufs& names = NEUpdateTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<EUpdateType>() {
        const NEUpdateTypePrivate::TNameBufs& names = NEUpdateTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

// I/O for EImportanceValuesSign
namespace { namespace NEImportanceValuesSignPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<EImportanceValuesSign>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(EImportanceValuesSign::Positive, "Positive"sv),
        TNameBufsBase::EnumStringPair(EImportanceValuesSign::Negative, "Negative"sv),
        TNameBufsBase::EnumStringPair(EImportanceValuesSign::All, "All"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(EImportanceValuesSign::All, "All"sv),
        TNameBufsBase::EnumStringPair(EImportanceValuesSign::Negative, "Negative"sv),
        TNameBufsBase::EnumStringPair(EImportanceValuesSign::Positive, "Positive"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "Positive"sv,
        "Negative"sv,
        "All"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("EImportanceValuesSign::"sv, "EImportanceValuesSign"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("EImportanceValuesSign::"sv, "EImportanceValuesSign"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<EImportanceValuesSign> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<EImportanceValuesSign>;

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

const TString& ToString(EImportanceValuesSign x) {
    const NEImportanceValuesSignPrivate::TNameBufs& names = NEImportanceValuesSignPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
EImportanceValuesSign FromStringImpl<EImportanceValuesSign>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NEImportanceValuesSignPrivate::TNameBufs, EImportanceValuesSign>(data, len);
}

template<>
bool TryFromStringImpl<EImportanceValuesSign>(const char* data, size_t len, EImportanceValuesSign& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NEImportanceValuesSignPrivate::TNameBufs, EImportanceValuesSign>(data, len, result);
}

bool FromString(const TString& name, EImportanceValuesSign& ret) {
    return ::TryFromStringImpl<EImportanceValuesSign>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, EImportanceValuesSign& ret) {
    return ::TryFromStringImpl<EImportanceValuesSign>(name.data(), name.size(), ret);
}

template<>
void Out<EImportanceValuesSign>(IOutputStream& os, TTypeTraits<EImportanceValuesSign>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NEImportanceValuesSignPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<EImportanceValuesSign>(EImportanceValuesSign e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NEImportanceValuesSignPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<EImportanceValuesSign> GetEnumAllValuesImpl<EImportanceValuesSign>() {
        const NEImportanceValuesSignPrivate::TNameBufs& names = NEImportanceValuesSignPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<EImportanceValuesSign>() {
        const NEImportanceValuesSignPrivate::TNameBufs& names = NEImportanceValuesSignPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<EImportanceValuesSign, TString> GetEnumNamesImpl<EImportanceValuesSign>() {
        const NEImportanceValuesSignPrivate::TNameBufs& names = NEImportanceValuesSignPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<EImportanceValuesSign>() {
        const NEImportanceValuesSignPrivate::TNameBufs& names = NEImportanceValuesSignPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

