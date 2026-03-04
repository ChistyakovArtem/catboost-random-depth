// This file was auto-generated. Do not edit!!!
#include <library/cpp/http/misc/httpcodes.h>
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

// I/O for HttpCodes
namespace { namespace NHttpCodesPrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<HttpCodes>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 67> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 67>{{
        TNameBufsBase::EnumStringPair(HTTP_CONTINUE, "HTTP_CONTINUE"sv),
        TNameBufsBase::EnumStringPair(HTTP_SWITCHING_PROTOCOLS, "HTTP_SWITCHING_PROTOCOLS"sv),
        TNameBufsBase::EnumStringPair(HTTP_PROCESSING, "HTTP_PROCESSING"sv),
        TNameBufsBase::EnumStringPair(HTTP_EARLY_HINTS, "HTTP_EARLY_HINTS"sv),
        TNameBufsBase::EnumStringPair(HTTP_OK, "HTTP_OK"sv),
        TNameBufsBase::EnumStringPair(HTTP_CREATED, "HTTP_CREATED"sv),
        TNameBufsBase::EnumStringPair(HTTP_ACCEPTED, "HTTP_ACCEPTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NON_AUTHORITATIVE_INFORMATION, "HTTP_NON_AUTHORITATIVE_INFORMATION"sv),
        TNameBufsBase::EnumStringPair(HTTP_NO_CONTENT, "HTTP_NO_CONTENT"sv),
        TNameBufsBase::EnumStringPair(HTTP_RESET_CONTENT, "HTTP_RESET_CONTENT"sv),
        TNameBufsBase::EnumStringPair(HTTP_PARTIAL_CONTENT, "HTTP_PARTIAL_CONTENT"sv),
        TNameBufsBase::EnumStringPair(HTTP_MULTI_STATUS, "HTTP_MULTI_STATUS"sv),
        TNameBufsBase::EnumStringPair(HTTP_ALREADY_REPORTED, "HTTP_ALREADY_REPORTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_IM_USED, "HTTP_IM_USED"sv),
        TNameBufsBase::EnumStringPair(HTTP_MULTIPLE_CHOICES, "HTTP_MULTIPLE_CHOICES"sv),
        TNameBufsBase::EnumStringPair(HTTP_MOVED_PERMANENTLY, "HTTP_MOVED_PERMANENTLY"sv),
        TNameBufsBase::EnumStringPair(HTTP_FOUND, "HTTP_FOUND"sv),
        TNameBufsBase::EnumStringPair(HTTP_SEE_OTHER, "HTTP_SEE_OTHER"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_MODIFIED, "HTTP_NOT_MODIFIED"sv),
        TNameBufsBase::EnumStringPair(HTTP_USE_PROXY, "HTTP_USE_PROXY"sv),
        TNameBufsBase::EnumStringPair(HTTP_TEMPORARY_REDIRECT, "HTTP_TEMPORARY_REDIRECT"sv),
        TNameBufsBase::EnumStringPair(HTTP_PERMANENT_REDIRECT, "HTTP_PERMANENT_REDIRECT"sv),
        TNameBufsBase::EnumStringPair(HTTP_BAD_REQUEST, "HTTP_BAD_REQUEST"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNAUTHORIZED, "HTTP_UNAUTHORIZED"sv),
        TNameBufsBase::EnumStringPair(HTTP_PAYMENT_REQUIRED, "HTTP_PAYMENT_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_FORBIDDEN, "HTTP_FORBIDDEN"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_FOUND, "HTTP_NOT_FOUND"sv),
        TNameBufsBase::EnumStringPair(HTTP_METHOD_NOT_ALLOWED, "HTTP_METHOD_NOT_ALLOWED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_ACCEPTABLE, "HTTP_NOT_ACCEPTABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_PROXY_AUTHENTICATION_REQUIRED, "HTTP_PROXY_AUTHENTICATION_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_TIME_OUT, "HTTP_REQUEST_TIME_OUT"sv),
        TNameBufsBase::EnumStringPair(HTTP_CONFLICT, "HTTP_CONFLICT"sv),
        TNameBufsBase::EnumStringPair(HTTP_GONE, "HTTP_GONE"sv),
        TNameBufsBase::EnumStringPair(HTTP_LENGTH_REQUIRED, "HTTP_LENGTH_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_PRECONDITION_FAILED, "HTTP_PRECONDITION_FAILED"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_ENTITY_TOO_LARGE, "HTTP_REQUEST_ENTITY_TOO_LARGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_URI_TOO_LARGE, "HTTP_REQUEST_URI_TOO_LARGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNSUPPORTED_MEDIA_TYPE, "HTTP_UNSUPPORTED_MEDIA_TYPE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUESTED_RANGE_NOT_SATISFIABLE, "HTTP_REQUESTED_RANGE_NOT_SATISFIABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_EXPECTATION_FAILED, "HTTP_EXPECTATION_FAILED"sv),
        TNameBufsBase::EnumStringPair(HTTP_I_AM_A_TEAPOT, "HTTP_I_AM_A_TEAPOT"sv),
        TNameBufsBase::EnumStringPair(HTTP_AUTHENTICATION_TIMEOUT, "HTTP_AUTHENTICATION_TIMEOUT"sv),
        TNameBufsBase::EnumStringPair(HTTP_MISDIRECTED_REQUEST, "HTTP_MISDIRECTED_REQUEST"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNPROCESSABLE_ENTITY, "HTTP_UNPROCESSABLE_ENTITY"sv),
        TNameBufsBase::EnumStringPair(HTTP_LOCKED, "HTTP_LOCKED"sv),
        TNameBufsBase::EnumStringPair(HTTP_FAILED_DEPENDENCY, "HTTP_FAILED_DEPENDENCY"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNORDERED_COLLECTION, "HTTP_UNORDERED_COLLECTION"sv),
        TNameBufsBase::EnumStringPair(HTTP_UPGRADE_REQUIRED, "HTTP_UPGRADE_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_PRECONDITION_REQUIRED, "HTTP_PRECONDITION_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_TOO_MANY_REQUESTS, "HTTP_TOO_MANY_REQUESTS"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE, "HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUESTED_HOST_UNAVAILABLE, "HTTP_REQUESTED_HOST_UNAVAILABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNAVAILABLE_FOR_LEGAL_REASONS, "HTTP_UNAVAILABLE_FOR_LEGAL_REASONS"sv),
        TNameBufsBase::EnumStringPair(HTTP_INTERNAL_SERVER_ERROR, "HTTP_INTERNAL_SERVER_ERROR"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_IMPLEMENTED, "HTTP_NOT_IMPLEMENTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_BAD_GATEWAY, "HTTP_BAD_GATEWAY"sv),
        TNameBufsBase::EnumStringPair(HTTP_SERVICE_UNAVAILABLE, "HTTP_SERVICE_UNAVAILABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_GATEWAY_TIME_OUT, "HTTP_GATEWAY_TIME_OUT"sv),
        TNameBufsBase::EnumStringPair(HTTP_HTTP_VERSION_NOT_SUPPORTED, "HTTP_HTTP_VERSION_NOT_SUPPORTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_VARIANT_ALSO_NEGOTIATES, "HTTP_VARIANT_ALSO_NEGOTIATES"sv),
        TNameBufsBase::EnumStringPair(HTTP_INSUFFICIENT_STORAGE, "HTTP_INSUFFICIENT_STORAGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_LOOP_DETECTED, "HTTP_LOOP_DETECTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_BANDWIDTH_LIMIT_EXCEEDED, "HTTP_BANDWIDTH_LIMIT_EXCEEDED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_EXTENDED, "HTTP_NOT_EXTENDED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NETWORK_AUTHENTICATION_REQUIRED, "HTTP_NETWORK_AUTHENTICATION_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNASSIGNED_512, "HTTP_UNASSIGNED_512"sv),
        TNameBufsBase::EnumStringPair(HTTP_CODE_MAX, "HTTP_CODE_MAX"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[67]{
        TNameBufsBase::EnumStringPair(HTTP_ACCEPTED, "HTTP_ACCEPTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_ALREADY_REPORTED, "HTTP_ALREADY_REPORTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_AUTHENTICATION_TIMEOUT, "HTTP_AUTHENTICATION_TIMEOUT"sv),
        TNameBufsBase::EnumStringPair(HTTP_BAD_GATEWAY, "HTTP_BAD_GATEWAY"sv),
        TNameBufsBase::EnumStringPair(HTTP_BAD_REQUEST, "HTTP_BAD_REQUEST"sv),
        TNameBufsBase::EnumStringPair(HTTP_BANDWIDTH_LIMIT_EXCEEDED, "HTTP_BANDWIDTH_LIMIT_EXCEEDED"sv),
        TNameBufsBase::EnumStringPair(HTTP_CODE_MAX, "HTTP_CODE_MAX"sv),
        TNameBufsBase::EnumStringPair(HTTP_CONFLICT, "HTTP_CONFLICT"sv),
        TNameBufsBase::EnumStringPair(HTTP_CONTINUE, "HTTP_CONTINUE"sv),
        TNameBufsBase::EnumStringPair(HTTP_CREATED, "HTTP_CREATED"sv),
        TNameBufsBase::EnumStringPair(HTTP_EARLY_HINTS, "HTTP_EARLY_HINTS"sv),
        TNameBufsBase::EnumStringPair(HTTP_EXPECTATION_FAILED, "HTTP_EXPECTATION_FAILED"sv),
        TNameBufsBase::EnumStringPair(HTTP_FAILED_DEPENDENCY, "HTTP_FAILED_DEPENDENCY"sv),
        TNameBufsBase::EnumStringPair(HTTP_FORBIDDEN, "HTTP_FORBIDDEN"sv),
        TNameBufsBase::EnumStringPair(HTTP_FOUND, "HTTP_FOUND"sv),
        TNameBufsBase::EnumStringPair(HTTP_GATEWAY_TIME_OUT, "HTTP_GATEWAY_TIME_OUT"sv),
        TNameBufsBase::EnumStringPair(HTTP_GONE, "HTTP_GONE"sv),
        TNameBufsBase::EnumStringPair(HTTP_HTTP_VERSION_NOT_SUPPORTED, "HTTP_HTTP_VERSION_NOT_SUPPORTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_IM_USED, "HTTP_IM_USED"sv),
        TNameBufsBase::EnumStringPair(HTTP_INSUFFICIENT_STORAGE, "HTTP_INSUFFICIENT_STORAGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_INTERNAL_SERVER_ERROR, "HTTP_INTERNAL_SERVER_ERROR"sv),
        TNameBufsBase::EnumStringPair(HTTP_I_AM_A_TEAPOT, "HTTP_I_AM_A_TEAPOT"sv),
        TNameBufsBase::EnumStringPair(HTTP_LENGTH_REQUIRED, "HTTP_LENGTH_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_LOCKED, "HTTP_LOCKED"sv),
        TNameBufsBase::EnumStringPair(HTTP_LOOP_DETECTED, "HTTP_LOOP_DETECTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_METHOD_NOT_ALLOWED, "HTTP_METHOD_NOT_ALLOWED"sv),
        TNameBufsBase::EnumStringPair(HTTP_MISDIRECTED_REQUEST, "HTTP_MISDIRECTED_REQUEST"sv),
        TNameBufsBase::EnumStringPair(HTTP_MOVED_PERMANENTLY, "HTTP_MOVED_PERMANENTLY"sv),
        TNameBufsBase::EnumStringPair(HTTP_MULTIPLE_CHOICES, "HTTP_MULTIPLE_CHOICES"sv),
        TNameBufsBase::EnumStringPair(HTTP_MULTI_STATUS, "HTTP_MULTI_STATUS"sv),
        TNameBufsBase::EnumStringPair(HTTP_NETWORK_AUTHENTICATION_REQUIRED, "HTTP_NETWORK_AUTHENTICATION_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NON_AUTHORITATIVE_INFORMATION, "HTTP_NON_AUTHORITATIVE_INFORMATION"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_ACCEPTABLE, "HTTP_NOT_ACCEPTABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_EXTENDED, "HTTP_NOT_EXTENDED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_FOUND, "HTTP_NOT_FOUND"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_IMPLEMENTED, "HTTP_NOT_IMPLEMENTED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NOT_MODIFIED, "HTTP_NOT_MODIFIED"sv),
        TNameBufsBase::EnumStringPair(HTTP_NO_CONTENT, "HTTP_NO_CONTENT"sv),
        TNameBufsBase::EnumStringPair(HTTP_OK, "HTTP_OK"sv),
        TNameBufsBase::EnumStringPair(HTTP_PARTIAL_CONTENT, "HTTP_PARTIAL_CONTENT"sv),
        TNameBufsBase::EnumStringPair(HTTP_PAYMENT_REQUIRED, "HTTP_PAYMENT_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_PERMANENT_REDIRECT, "HTTP_PERMANENT_REDIRECT"sv),
        TNameBufsBase::EnumStringPair(HTTP_PRECONDITION_FAILED, "HTTP_PRECONDITION_FAILED"sv),
        TNameBufsBase::EnumStringPair(HTTP_PRECONDITION_REQUIRED, "HTTP_PRECONDITION_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_PROCESSING, "HTTP_PROCESSING"sv),
        TNameBufsBase::EnumStringPair(HTTP_PROXY_AUTHENTICATION_REQUIRED, "HTTP_PROXY_AUTHENTICATION_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUESTED_HOST_UNAVAILABLE, "HTTP_REQUESTED_HOST_UNAVAILABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUESTED_RANGE_NOT_SATISFIABLE, "HTTP_REQUESTED_RANGE_NOT_SATISFIABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_ENTITY_TOO_LARGE, "HTTP_REQUEST_ENTITY_TOO_LARGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE, "HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_TIME_OUT, "HTTP_REQUEST_TIME_OUT"sv),
        TNameBufsBase::EnumStringPair(HTTP_REQUEST_URI_TOO_LARGE, "HTTP_REQUEST_URI_TOO_LARGE"sv),
        TNameBufsBase::EnumStringPair(HTTP_RESET_CONTENT, "HTTP_RESET_CONTENT"sv),
        TNameBufsBase::EnumStringPair(HTTP_SEE_OTHER, "HTTP_SEE_OTHER"sv),
        TNameBufsBase::EnumStringPair(HTTP_SERVICE_UNAVAILABLE, "HTTP_SERVICE_UNAVAILABLE"sv),
        TNameBufsBase::EnumStringPair(HTTP_SWITCHING_PROTOCOLS, "HTTP_SWITCHING_PROTOCOLS"sv),
        TNameBufsBase::EnumStringPair(HTTP_TEMPORARY_REDIRECT, "HTTP_TEMPORARY_REDIRECT"sv),
        TNameBufsBase::EnumStringPair(HTTP_TOO_MANY_REQUESTS, "HTTP_TOO_MANY_REQUESTS"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNASSIGNED_512, "HTTP_UNASSIGNED_512"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNAUTHORIZED, "HTTP_UNAUTHORIZED"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNAVAILABLE_FOR_LEGAL_REASONS, "HTTP_UNAVAILABLE_FOR_LEGAL_REASONS"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNORDERED_COLLECTION, "HTTP_UNORDERED_COLLECTION"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNPROCESSABLE_ENTITY, "HTTP_UNPROCESSABLE_ENTITY"sv),
        TNameBufsBase::EnumStringPair(HTTP_UNSUPPORTED_MEDIA_TYPE, "HTTP_UNSUPPORTED_MEDIA_TYPE"sv),
        TNameBufsBase::EnumStringPair(HTTP_UPGRADE_REQUIRED, "HTTP_UPGRADE_REQUIRED"sv),
        TNameBufsBase::EnumStringPair(HTTP_USE_PROXY, "HTTP_USE_PROXY"sv),
        TNameBufsBase::EnumStringPair(HTTP_VARIANT_ALSO_NEGOTIATES, "HTTP_VARIANT_ALSO_NEGOTIATES"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[67]{
        "HTTP_CONTINUE"sv,
        "HTTP_SWITCHING_PROTOCOLS"sv,
        "HTTP_PROCESSING"sv,
        "HTTP_EARLY_HINTS"sv,
        "HTTP_OK"sv,
        "HTTP_CREATED"sv,
        "HTTP_ACCEPTED"sv,
        "HTTP_NON_AUTHORITATIVE_INFORMATION"sv,
        "HTTP_NO_CONTENT"sv,
        "HTTP_RESET_CONTENT"sv,
        "HTTP_PARTIAL_CONTENT"sv,
        "HTTP_MULTI_STATUS"sv,
        "HTTP_ALREADY_REPORTED"sv,
        "HTTP_IM_USED"sv,
        "HTTP_MULTIPLE_CHOICES"sv,
        "HTTP_MOVED_PERMANENTLY"sv,
        "HTTP_FOUND"sv,
        "HTTP_SEE_OTHER"sv,
        "HTTP_NOT_MODIFIED"sv,
        "HTTP_USE_PROXY"sv,
        "HTTP_TEMPORARY_REDIRECT"sv,
        "HTTP_PERMANENT_REDIRECT"sv,
        "HTTP_BAD_REQUEST"sv,
        "HTTP_UNAUTHORIZED"sv,
        "HTTP_PAYMENT_REQUIRED"sv,
        "HTTP_FORBIDDEN"sv,
        "HTTP_NOT_FOUND"sv,
        "HTTP_METHOD_NOT_ALLOWED"sv,
        "HTTP_NOT_ACCEPTABLE"sv,
        "HTTP_PROXY_AUTHENTICATION_REQUIRED"sv,
        "HTTP_REQUEST_TIME_OUT"sv,
        "HTTP_CONFLICT"sv,
        "HTTP_GONE"sv,
        "HTTP_LENGTH_REQUIRED"sv,
        "HTTP_PRECONDITION_FAILED"sv,
        "HTTP_REQUEST_ENTITY_TOO_LARGE"sv,
        "HTTP_REQUEST_URI_TOO_LARGE"sv,
        "HTTP_UNSUPPORTED_MEDIA_TYPE"sv,
        "HTTP_REQUESTED_RANGE_NOT_SATISFIABLE"sv,
        "HTTP_EXPECTATION_FAILED"sv,
        "HTTP_I_AM_A_TEAPOT"sv,
        "HTTP_AUTHENTICATION_TIMEOUT"sv,
        "HTTP_MISDIRECTED_REQUEST"sv,
        "HTTP_UNPROCESSABLE_ENTITY"sv,
        "HTTP_LOCKED"sv,
        "HTTP_FAILED_DEPENDENCY"sv,
        "HTTP_UNORDERED_COLLECTION"sv,
        "HTTP_UPGRADE_REQUIRED"sv,
        "HTTP_PRECONDITION_REQUIRED"sv,
        "HTTP_TOO_MANY_REQUESTS"sv,
        "HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE"sv,
        "HTTP_REQUESTED_HOST_UNAVAILABLE"sv,
        "HTTP_UNAVAILABLE_FOR_LEGAL_REASONS"sv,
        "HTTP_INTERNAL_SERVER_ERROR"sv,
        "HTTP_NOT_IMPLEMENTED"sv,
        "HTTP_BAD_GATEWAY"sv,
        "HTTP_SERVICE_UNAVAILABLE"sv,
        "HTTP_GATEWAY_TIME_OUT"sv,
        "HTTP_HTTP_VERSION_NOT_SUPPORTED"sv,
        "HTTP_VARIANT_ALSO_NEGOTIATES"sv,
        "HTTP_INSUFFICIENT_STORAGE"sv,
        "HTTP_LOOP_DETECTED"sv,
        "HTTP_BANDWIDTH_LIMIT_EXCEEDED"sv,
        "HTTP_NOT_EXTENDED"sv,
        "HTTP_NETWORK_AUTHENTICATION_REQUIRED"sv,
        "HTTP_UNASSIGNED_512"sv,
        "HTTP_CODE_MAX"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer(""sv, "HttpCodes"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer(""sv, "HttpCodes"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<HttpCodes> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<HttpCodes>;

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

const TString& ToString(HttpCodes x) {
    const NHttpCodesPrivate::TNameBufs& names = NHttpCodesPrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
HttpCodes FromStringImpl<HttpCodes>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NHttpCodesPrivate::TNameBufs, HttpCodes>(data, len);
}

template<>
bool TryFromStringImpl<HttpCodes>(const char* data, size_t len, HttpCodes& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NHttpCodesPrivate::TNameBufs, HttpCodes>(data, len, result);
}

bool FromString(const TString& name, HttpCodes& ret) {
    return ::TryFromStringImpl<HttpCodes>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, HttpCodes& ret) {
    return ::TryFromStringImpl<HttpCodes>(name.data(), name.size(), ret);
}

template<>
void Out<HttpCodes>(IOutputStream& os, TTypeTraits<HttpCodes>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NHttpCodesPrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<HttpCodes>(HttpCodes e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NHttpCodesPrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<HttpCodes> GetEnumAllValuesImpl<HttpCodes>() {
        const NHttpCodesPrivate::TNameBufs& names = NHttpCodesPrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<HttpCodes>() {
        const NHttpCodesPrivate::TNameBufs& names = NHttpCodesPrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<HttpCodes, TString> GetEnumNamesImpl<HttpCodes>() {
        const NHttpCodesPrivate::TNameBufs& names = NHttpCodesPrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<HttpCodes>() {
        const NHttpCodesPrivate::TNameBufs& names = NHttpCodesPrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

