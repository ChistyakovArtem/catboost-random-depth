// This file was auto-generated. Do not edit!!!
#include <library/cpp/par/par_host_stats.h>
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

// I/O for NPar::ETimingTag
namespace { namespace NNParETimingTagPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NPar::ETimingTag>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 3> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 3>{{
        TNameBufsBase::EnumStringPair(NPar::ETimingTag::QueryFullTime, "QueryFullTime"sv),
        TNameBufsBase::EnumStringPair(NPar::ETimingTag::QueryExecutionTime, "QueryExecutionTime"sv),
        TNameBufsBase::EnumStringPair(NPar::ETimingTag::TimingsCount, "TimingsCount"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[3]{
        TNameBufsBase::EnumStringPair(NPar::ETimingTag::QueryExecutionTime, "QueryExecutionTime"sv),
        TNameBufsBase::EnumStringPair(NPar::ETimingTag::QueryFullTime, "QueryFullTime"sv),
        TNameBufsBase::EnumStringPair(NPar::ETimingTag::TimingsCount, "TimingsCount"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[3]{
        "QueryFullTime"sv,
        "QueryExecutionTime"sv,
        "TimingsCount"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NPar::ETimingTag::"sv, "NPar::ETimingTag"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NPar::ETimingTag::"sv, "NPar::ETimingTag"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NPar::ETimingTag> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NPar::ETimingTag>;

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

const TString& ToString(NPar::ETimingTag x) {
    const NNParETimingTagPrivate::TNameBufs& names = NNParETimingTagPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NPar::ETimingTag FromStringImpl<NPar::ETimingTag>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNParETimingTagPrivate::TNameBufs, NPar::ETimingTag>(data, len);
}

template<>
bool TryFromStringImpl<NPar::ETimingTag>(const char* data, size_t len, NPar::ETimingTag& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNParETimingTagPrivate::TNameBufs, NPar::ETimingTag>(data, len, result);
}

bool FromString(const TString& name, NPar::ETimingTag& ret) {
    return ::TryFromStringImpl<NPar::ETimingTag>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NPar::ETimingTag& ret) {
    return ::TryFromStringImpl<NPar::ETimingTag>(name.data(), name.size(), ret);
}

template<>
void Out<NPar::ETimingTag>(IOutputStream& os, TTypeTraits<NPar::ETimingTag>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNParETimingTagPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NPar::ETimingTag>(NPar::ETimingTag e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNParETimingTagPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NPar::ETimingTag> GetEnumAllValuesImpl<NPar::ETimingTag>() {
        const NNParETimingTagPrivate::TNameBufs& names = NNParETimingTagPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NPar::ETimingTag>() {
        const NNParETimingTagPrivate::TNameBufs& names = NNParETimingTagPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NPar::ETimingTag, TString> GetEnumNamesImpl<NPar::ETimingTag>() {
        const NNParETimingTagPrivate::TNameBufs& names = NNParETimingTagPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NPar::ETimingTag>() {
        const NNParETimingTagPrivate::TNameBufs& names = NNParETimingTagPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

