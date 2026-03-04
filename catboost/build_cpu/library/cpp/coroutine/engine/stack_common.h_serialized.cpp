// This file was auto-generated. Do not edit!!!
#include <library/cpp/coroutine/engine/stack/stack_common.h>
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

// I/O for NCoro::NStack::EGuard
namespace { namespace NNCoroNStackEGuardPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCoro::NStack::EGuard>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 2> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 2>{{
        TNameBufsBase::EnumStringPair(NCoro::NStack::EGuard::Canary, "Canary"sv),
        TNameBufsBase::EnumStringPair(NCoro::NStack::EGuard::Page, "Page"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[2]{
        TNameBufsBase::EnumStringPair(NCoro::NStack::EGuard::Canary, "Canary"sv),
        TNameBufsBase::EnumStringPair(NCoro::NStack::EGuard::Page, "Page"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[2]{
        "Canary"sv,
        "Page"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCoro::NStack::EGuard::"sv, "NCoro::NStack::EGuard"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCoro::NStack::EGuard::"sv, "NCoro::NStack::EGuard"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCoro::NStack::EGuard> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCoro::NStack::EGuard>;

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

const TString& ToString(NCoro::NStack::EGuard x) {
    const NNCoroNStackEGuardPrivate::TNameBufs& names = NNCoroNStackEGuardPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCoro::NStack::EGuard FromStringImpl<NCoro::NStack::EGuard>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCoroNStackEGuardPrivate::TNameBufs, NCoro::NStack::EGuard>(data, len);
}

template<>
bool TryFromStringImpl<NCoro::NStack::EGuard>(const char* data, size_t len, NCoro::NStack::EGuard& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCoroNStackEGuardPrivate::TNameBufs, NCoro::NStack::EGuard>(data, len, result);
}

bool FromString(const TString& name, NCoro::NStack::EGuard& ret) {
    return ::TryFromStringImpl<NCoro::NStack::EGuard>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCoro::NStack::EGuard& ret) {
    return ::TryFromStringImpl<NCoro::NStack::EGuard>(name.data(), name.size(), ret);
}

template<>
void Out<NCoro::NStack::EGuard>(IOutputStream& os, TTypeTraits<NCoro::NStack::EGuard>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCoroNStackEGuardPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCoro::NStack::EGuard>(NCoro::NStack::EGuard e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCoroNStackEGuardPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCoro::NStack::EGuard> GetEnumAllValuesImpl<NCoro::NStack::EGuard>() {
        const NNCoroNStackEGuardPrivate::TNameBufs& names = NNCoroNStackEGuardPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCoro::NStack::EGuard>() {
        const NNCoroNStackEGuardPrivate::TNameBufs& names = NNCoroNStackEGuardPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCoro::NStack::EGuard, TString> GetEnumNamesImpl<NCoro::NStack::EGuard>() {
        const NNCoroNStackEGuardPrivate::TNameBufs& names = NNCoroNStackEGuardPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCoro::NStack::EGuard>() {
        const NNCoroNStackEGuardPrivate::TNameBufs& names = NNCoroNStackEGuardPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

