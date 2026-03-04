// This file was auto-generated. Do not edit!!!
#include <catboost/private/libs/quantization_schema/serialization.h>
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

// I/O for NCB::EQuantizationSchemaSerializationFormat
namespace { namespace NNCBEQuantizationSchemaSerializationFormatPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EQuantizationSchemaSerializationFormat>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(NCB::EQuantizationSchemaSerializationFormat::Unknown, "Unknown"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizationSchemaSerializationFormat::Protobuf, "Protobuf"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizationSchemaSerializationFormat::Matrixnet, "Matrixnet"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(NCB::EQuantizationSchemaSerializationFormat::Matrixnet, "Matrixnet"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizationSchemaSerializationFormat::Protobuf, "Protobuf"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizationSchemaSerializationFormat::Unknown, "Unknown"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "Unknown"sv,
        "Protobuf"sv,
        "Matrixnet"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EQuantizationSchemaSerializationFormat::"sv, "NCB::EQuantizationSchemaSerializationFormat"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EQuantizationSchemaSerializationFormat::"sv, "NCB::EQuantizationSchemaSerializationFormat"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EQuantizationSchemaSerializationFormat> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EQuantizationSchemaSerializationFormat>;

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

const TString& ToString(NCB::EQuantizationSchemaSerializationFormat x) {
    const NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs& names = NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EQuantizationSchemaSerializationFormat FromStringImpl<NCB::EQuantizationSchemaSerializationFormat>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs, NCB::EQuantizationSchemaSerializationFormat>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EQuantizationSchemaSerializationFormat>(const char* data, size_t len, NCB::EQuantizationSchemaSerializationFormat& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs, NCB::EQuantizationSchemaSerializationFormat>(data, len, result);
}

bool FromString(const TString& name, NCB::EQuantizationSchemaSerializationFormat& ret) {
    return ::TryFromStringImpl<NCB::EQuantizationSchemaSerializationFormat>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EQuantizationSchemaSerializationFormat& ret) {
    return ::TryFromStringImpl<NCB::EQuantizationSchemaSerializationFormat>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EQuantizationSchemaSerializationFormat>(IOutputStream& os, TTypeTraits<NCB::EQuantizationSchemaSerializationFormat>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EQuantizationSchemaSerializationFormat>(NCB::EQuantizationSchemaSerializationFormat e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EQuantizationSchemaSerializationFormat> GetEnumAllValuesImpl<NCB::EQuantizationSchemaSerializationFormat>() {
        const NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs& names = NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EQuantizationSchemaSerializationFormat>() {
        const NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs& names = NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EQuantizationSchemaSerializationFormat, TString> GetEnumNamesImpl<NCB::EQuantizationSchemaSerializationFormat>() {
        const NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs& names = NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EQuantizationSchemaSerializationFormat>() {
        const NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs& names = NNCBEQuantizationSchemaSerializationFormatPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

