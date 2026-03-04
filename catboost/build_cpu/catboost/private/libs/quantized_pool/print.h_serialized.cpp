// This file was auto-generated. Do not edit!!!
#include <catboost/private/libs/quantized_pool/print.h>
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

// I/O for NCB::EQuantizedPoolPrintFormat
namespace { namespace NNCBEQuantizedPoolPrintFormatPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EQuantizedPoolPrintFormat>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(NCB::EQuantizedPoolPrintFormat::Unknown, "Unknown"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizedPoolPrintFormat::HumanReadableChunkWise, "HumanReadableChunkWise"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizedPoolPrintFormat::HumanReadableColumnWise, "HumanReadableColumnWise"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(NCB::EQuantizedPoolPrintFormat::HumanReadableChunkWise, "HumanReadableChunkWise"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizedPoolPrintFormat::HumanReadableColumnWise, "HumanReadableColumnWise"sv),
        TNameBufsBase::EnumStringPair(NCB::EQuantizedPoolPrintFormat::Unknown, "Unknown"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "Unknown"sv,
        "HumanReadableChunkWise"sv,
        "HumanReadableColumnWise"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EQuantizedPoolPrintFormat::"sv, "NCB::EQuantizedPoolPrintFormat"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::EQuantizedPoolPrintFormat::"sv, "NCB::EQuantizedPoolPrintFormat"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::EQuantizedPoolPrintFormat> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::EQuantizedPoolPrintFormat>;

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

const TString& ToString(NCB::EQuantizedPoolPrintFormat x) {
    const NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs& names = NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::EQuantizedPoolPrintFormat FromStringImpl<NCB::EQuantizedPoolPrintFormat>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs, NCB::EQuantizedPoolPrintFormat>(data, len);
}

template<>
bool TryFromStringImpl<NCB::EQuantizedPoolPrintFormat>(const char* data, size_t len, NCB::EQuantizedPoolPrintFormat& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs, NCB::EQuantizedPoolPrintFormat>(data, len, result);
}

bool FromString(const TString& name, NCB::EQuantizedPoolPrintFormat& ret) {
    return ::TryFromStringImpl<NCB::EQuantizedPoolPrintFormat>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::EQuantizedPoolPrintFormat& ret) {
    return ::TryFromStringImpl<NCB::EQuantizedPoolPrintFormat>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::EQuantizedPoolPrintFormat>(IOutputStream& os, TTypeTraits<NCB::EQuantizedPoolPrintFormat>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::EQuantizedPoolPrintFormat>(NCB::EQuantizedPoolPrintFormat e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::EQuantizedPoolPrintFormat> GetEnumAllValuesImpl<NCB::EQuantizedPoolPrintFormat>() {
        const NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs& names = NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::EQuantizedPoolPrintFormat>() {
        const NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs& names = NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::EQuantizedPoolPrintFormat, TString> GetEnumNamesImpl<NCB::EQuantizedPoolPrintFormat>() {
        const NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs& names = NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::EQuantizedPoolPrintFormat>() {
        const NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs& names = NNCBEQuantizedPoolPrintFormatPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

