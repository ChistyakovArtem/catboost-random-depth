// This file was auto-generated. Do not edit!!!
#include <catboost/app/model_metainfo_helpers.h>
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

// I/O for NCB::EInfoDumpFormat
namespace { namespace NNCBEInfoDumpFormatPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EInfoDumpFormat>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 2> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 2>{{
        TNameBufsBase::EnumStringPair(NCB::EInfoDumpFormat::Plain, "Plain"sv),
        TNameBufsBase::EnumStringPair(NCB::EInfoDumpFormat::JSON, "JSON"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[2]{
        TNameBufsBase::EnumStringPair(NCB::EInfoDumpFormat::JSON, "JSON"sv),
        TNameBufsBase::EnumStringPair(NCB::EInfoDumpFormat::Plain, "Plain"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[2]{
        "Plain"sv,
        "JSON"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EInfoDumpFormat::"sv, "NCB::EInfoDumpFormat"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EInfoDumpFormat::"sv, "NCB::EInfoDumpFormat"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EInfoDumpFormat> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EInfoDumpFormat>;

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

const TString& ToString(NCB::EInfoDumpFormat x) {
    const NNCBEInfoDumpFormatPrivate::TNameBufs& names = NNCBEInfoDumpFormatPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EInfoDumpFormat FromStringImpl<NCB::EInfoDumpFormat>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEInfoDumpFormatPrivate::TNameBufs, NCB::EInfoDumpFormat>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EInfoDumpFormat>(const char* data, size_t len, NCB::EInfoDumpFormat& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEInfoDumpFormatPrivate::TNameBufs, NCB::EInfoDumpFormat>(data, len, result);
}

bool FromString(const TString& name, NCB::EInfoDumpFormat& ret) {
    return ::TryFromStringImpl<NCB::EInfoDumpFormat>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EInfoDumpFormat& ret) {
    return ::TryFromStringImpl<NCB::EInfoDumpFormat>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EInfoDumpFormat>(IOutputStream& os, TTypeTraits<NCB::EInfoDumpFormat>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEInfoDumpFormatPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EInfoDumpFormat>(NCB::EInfoDumpFormat e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEInfoDumpFormatPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EInfoDumpFormat> GetEnumAllValuesImpl<NCB::EInfoDumpFormat>() {
        const NNCBEInfoDumpFormatPrivate::TNameBufs& names = NNCBEInfoDumpFormatPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EInfoDumpFormat>() {
        const NNCBEInfoDumpFormatPrivate::TNameBufs& names = NNCBEInfoDumpFormatPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EInfoDumpFormat, TString> GetEnumNamesImpl<NCB::EInfoDumpFormat>() {
        const NNCBEInfoDumpFormatPrivate::TNameBufs& names = NNCBEInfoDumpFormatPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EInfoDumpFormat>() {
        const NNCBEInfoDumpFormatPrivate::TNameBufs& names = NNCBEInfoDumpFormatPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

