// This file was auto-generated. Do not edit!!!
#include <library/cpp/coroutine/engine/poller.h>
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

// I/O for EContPoller
namespace { namespace NEContPollerPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<EContPoller>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 5> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 5>{{
        TNameBufsBase::EnumStringPair(EContPoller::Default, "default"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Select, "select"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Poll, "poll"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Epoll, "epoll"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Kqueue, "kqueue"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[5]{
        TNameBufsBase::EnumStringPair(EContPoller::Default, "default"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Epoll, "epoll"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Kqueue, "kqueue"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Poll, "poll"sv),
        TNameBufsBase::EnumStringPair(EContPoller::Select, "select"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[5]{
        "Default"sv,
        "Select"sv,
        "Poll"sv,
        "Epoll"sv,
        "Kqueue"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("EContPoller::"sv, "EContPoller"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("EContPoller::"sv, "EContPoller"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<EContPoller> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<EContPoller>;

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

const TString& ToString(EContPoller x) {
    const NEContPollerPrivate::TNameBufs& names = NEContPollerPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
EContPoller FromStringImpl<EContPoller>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NEContPollerPrivate::TNameBufs, EContPoller>(data, len);
}

template<>
bool TryFromStringImpl<EContPoller>(const char* data, size_t len, EContPoller& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NEContPollerPrivate::TNameBufs, EContPoller>(data, len, result);
}

bool FromString(const TString& name, EContPoller& ret) {
    return ::TryFromStringImpl<EContPoller>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, EContPoller& ret) {
    return ::TryFromStringImpl<EContPoller>(name.data(), name.size(), ret);
}

template<>
void Out<EContPoller>(IOutputStream& os, TTypeTraits<EContPoller>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NEContPollerPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<EContPoller>(EContPoller e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NEContPollerPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<EContPoller> GetEnumAllValuesImpl<EContPoller>() {
        const NEContPollerPrivate::TNameBufs& names = NEContPollerPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<EContPoller>() {
        const NEContPollerPrivate::TNameBufs& names = NEContPollerPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<EContPoller, TString> GetEnumNamesImpl<EContPoller>() {
        const NEContPollerPrivate::TNameBufs& names = NEContPollerPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<EContPoller>() {
        const NEContPollerPrivate::TNameBufs& names = NEContPollerPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

