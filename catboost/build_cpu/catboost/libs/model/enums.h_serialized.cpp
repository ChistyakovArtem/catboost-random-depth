// This file was auto-generated. Do not edit!!!
#include <catboost/libs/model/enums.h>
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

// I/O for NCB::NModelEvaluation::EPredictionType
namespace { namespace NNCBNModelEvaluationEPredictionTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::NModelEvaluation::EPredictionType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 6> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 6>{{
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::RawFormulaVal, "RawFormulaVal"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::Exponent, "Exponent"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::RMSEWithUncertainty, "RMSEWithUncertainty"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::Probability, "Probability"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::Class, "Class"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::MultiProbability, "MultiProbability"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[6]{
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::Class, "Class"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::Exponent, "Exponent"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::MultiProbability, "MultiProbability"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::Probability, "Probability"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::RMSEWithUncertainty, "RMSEWithUncertainty"sv),
        TNameBufsBase::EnumStringPair(NCB::NModelEvaluation::EPredictionType::RawFormulaVal, "RawFormulaVal"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[6]{
        "RawFormulaVal"sv,
        "Exponent"sv,
        "RMSEWithUncertainty"sv,
        "Probability"sv,
        "Class"sv,
        "MultiProbability"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::NModelEvaluation::EPredictionType::"sv, "NCB::NModelEvaluation::EPredictionType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("NCB::NModelEvaluation::EPredictionType::"sv, "NCB::NModelEvaluation::EPredictionType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<NCB::NModelEvaluation::EPredictionType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<NCB::NModelEvaluation::EPredictionType>;

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

const TString& ToString(NCB::NModelEvaluation::EPredictionType x) {
    const NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs& names = NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
NCB::NModelEvaluation::EPredictionType FromStringImpl<NCB::NModelEvaluation::EPredictionType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs, NCB::NModelEvaluation::EPredictionType>(data, len);
}

template<>
bool TryFromStringImpl<NCB::NModelEvaluation::EPredictionType>(const char* data, size_t len, NCB::NModelEvaluation::EPredictionType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs, NCB::NModelEvaluation::EPredictionType>(data, len, result);
}

bool FromString(const TString& name, NCB::NModelEvaluation::EPredictionType& ret) {
    return ::TryFromStringImpl<NCB::NModelEvaluation::EPredictionType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, NCB::NModelEvaluation::EPredictionType& ret) {
    return ::TryFromStringImpl<NCB::NModelEvaluation::EPredictionType>(name.data(), name.size(), ret);
}

template<>
void Out<NCB::NModelEvaluation::EPredictionType>(IOutputStream& os, TTypeTraits<NCB::NModelEvaluation::EPredictionType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<NCB::NModelEvaluation::EPredictionType>(NCB::NModelEvaluation::EPredictionType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<NCB::NModelEvaluation::EPredictionType> GetEnumAllValuesImpl<NCB::NModelEvaluation::EPredictionType>() {
        const NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs& names = NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<NCB::NModelEvaluation::EPredictionType>() {
        const NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs& names = NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<NCB::NModelEvaluation::EPredictionType, TString> GetEnumNamesImpl<NCB::NModelEvaluation::EPredictionType>() {
        const NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs& names = NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<NCB::NModelEvaluation::EPredictionType>() {
        const NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs& names = NNCBNModelEvaluationEPredictionTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

// I/O for EFormulaEvaluatorType
namespace { namespace NEFormulaEvaluatorTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<EFormulaEvaluatorType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 2> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 2>{{
        TNameBufsBase::EnumStringPair(EFormulaEvaluatorType::CPU, "CPU"sv),
        TNameBufsBase::EnumStringPair(EFormulaEvaluatorType::GPU, "GPU"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[2]{
        TNameBufsBase::EnumStringPair(EFormulaEvaluatorType::CPU, "CPU"sv),
        TNameBufsBase::EnumStringPair(EFormulaEvaluatorType::GPU, "GPU"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[2]{
        "CPU"sv,
        "GPU"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("EFormulaEvaluatorType::"sv, "EFormulaEvaluatorType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("EFormulaEvaluatorType::"sv, "EFormulaEvaluatorType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<EFormulaEvaluatorType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<EFormulaEvaluatorType>;

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

const TString& ToString(EFormulaEvaluatorType x) {
    const NEFormulaEvaluatorTypePrivate::TNameBufs& names = NEFormulaEvaluatorTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
EFormulaEvaluatorType FromStringImpl<EFormulaEvaluatorType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NEFormulaEvaluatorTypePrivate::TNameBufs, EFormulaEvaluatorType>(data, len);
}

template<>
bool TryFromStringImpl<EFormulaEvaluatorType>(const char* data, size_t len, EFormulaEvaluatorType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NEFormulaEvaluatorTypePrivate::TNameBufs, EFormulaEvaluatorType>(data, len, result);
}

bool FromString(const TString& name, EFormulaEvaluatorType& ret) {
    return ::TryFromStringImpl<EFormulaEvaluatorType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, EFormulaEvaluatorType& ret) {
    return ::TryFromStringImpl<EFormulaEvaluatorType>(name.data(), name.size(), ret);
}

template<>
void Out<EFormulaEvaluatorType>(IOutputStream& os, TTypeTraits<EFormulaEvaluatorType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NEFormulaEvaluatorTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<EFormulaEvaluatorType>(EFormulaEvaluatorType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NEFormulaEvaluatorTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<EFormulaEvaluatorType> GetEnumAllValuesImpl<EFormulaEvaluatorType>() {
        const NEFormulaEvaluatorTypePrivate::TNameBufs& names = NEFormulaEvaluatorTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<EFormulaEvaluatorType>() {
        const NEFormulaEvaluatorTypePrivate::TNameBufs& names = NEFormulaEvaluatorTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<EFormulaEvaluatorType, TString> GetEnumNamesImpl<EFormulaEvaluatorType>() {
        const NEFormulaEvaluatorTypePrivate::TNameBufs& names = NEFormulaEvaluatorTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<EFormulaEvaluatorType>() {
        const NEFormulaEvaluatorTypePrivate::TNameBufs& names = NEFormulaEvaluatorTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

// I/O for EModelType
namespace { namespace NEModelTypePrivate {
    using TNameBufsBase = ::NEnumSerializationRuntime::TEnumDescription<EModelType>;

    static constexpr const std::array<TNameBufsBase::TEnumStringPair, 8> NAMES_INITIALIZATION_PAIRS_PAYLOAD = ::NEnumSerializationRuntime::TryStableSortKeys(std::array<TNameBufsBase::TEnumStringPair, 8>{{
        TNameBufsBase::EnumStringPair(EModelType::CatboostBinary, "CatboostBinary"sv),
        TNameBufsBase::EnumStringPair(EModelType::AppleCoreML, "AppleCoreML"sv),
        TNameBufsBase::EnumStringPair(EModelType::Cpp, "Cpp"sv),
        TNameBufsBase::EnumStringPair(EModelType::Python, "Python"sv),
        TNameBufsBase::EnumStringPair(EModelType::Json, "Json"sv),
        TNameBufsBase::EnumStringPair(EModelType::Onnx, "Onnx"sv),
        TNameBufsBase::EnumStringPair(EModelType::Pmml, "PMML"sv),
        TNameBufsBase::EnumStringPair(EModelType::CPUSnapshot, "CpuSnapshot"sv),
    }});
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> NAMES_INITIALIZATION_PAIRS{NAMES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TNameBufsBase::TEnumStringPair VALUES_INITIALIZATION_PAIRS_PAYLOAD[17]{
        TNameBufsBase::EnumStringPair(EModelType::AppleCoreML, "AppleCoreML"sv),
        TNameBufsBase::EnumStringPair(EModelType::Cpp, "CPP"sv),
        TNameBufsBase::EnumStringPair(EModelType::CatboostBinary, "CatboostBinary"sv),
        TNameBufsBase::EnumStringPair(EModelType::Cpp, "Cpp"sv),
        TNameBufsBase::EnumStringPair(EModelType::CPUSnapshot, "CpuSnapshot"sv),
        TNameBufsBase::EnumStringPair(EModelType::Json, "Json"sv),
        TNameBufsBase::EnumStringPair(EModelType::Onnx, "Onnx"sv),
        TNameBufsBase::EnumStringPair(EModelType::Pmml, "PMML"sv),
        TNameBufsBase::EnumStringPair(EModelType::Python, "Python"sv),
        TNameBufsBase::EnumStringPair(EModelType::CatboostBinary, "catboost"sv),
        TNameBufsBase::EnumStringPair(EModelType::CatboostBinary, "cbm"sv),
        TNameBufsBase::EnumStringPair(EModelType::AppleCoreML, "coreml"sv),
        TNameBufsBase::EnumStringPair(EModelType::Cpp, "cpp"sv),
        TNameBufsBase::EnumStringPair(EModelType::Json, "json"sv),
        TNameBufsBase::EnumStringPair(EModelType::Onnx, "onnx"sv),
        TNameBufsBase::EnumStringPair(EModelType::Pmml, "pmml"sv),
        TNameBufsBase::EnumStringPair(EModelType::Python, "python"sv),
    };
    static constexpr const TArrayRef<const TNameBufsBase::TEnumStringPair> VALUES_INITIALIZATION_PAIRS{VALUES_INITIALIZATION_PAIRS_PAYLOAD};

    static constexpr const TStringBuf CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD[8]{
        "CatboostBinary"sv,
        "AppleCoreML"sv,
        "Cpp"sv,
        "Python"sv,
        "Json"sv,
        "Onnx"sv,
        "Pmml"sv,
        "CPUSnapshot"sv,
    };
    static constexpr const TArrayRef<const TStringBuf> CPP_NAMES_INITIALIZATION_ARRAY{CPP_NAMES_INITIALIZATION_ARRAY_PAYLOAD};

    static constexpr const TNameBufsBase::TInitializationData ENUM_INITIALIZATION_DATA{
        NAMES_INITIALIZATION_PAIRS,
        VALUES_INITIALIZATION_PAIRS,
        CPP_NAMES_INITIALIZATION_ARRAY,
        ::NEnumSerializationRuntime::CommonStringBuffer("EModelType::"sv, "EModelType"sv).first,
        ::NEnumSerializationRuntime::CommonStringBuffer("EModelType::"sv, "EModelType"sv).second,
    };

    static constexpr ::NEnumSerializationRuntime::ESortOrder NAMES_ORDER = ::NEnumSerializationRuntime::GetKeyFieldSortOrder(NAMES_INITIALIZATION_PAIRS);
    static constexpr ::NEnumSerializationRuntime::ESortOrder VALUES_ORDER = ::NEnumSerializationRuntime::GetNameFieldSortOrder(VALUES_INITIALIZATION_PAIRS);

    class TNameBufs : public ::NEnumSerializationRuntime::TEnumDescription<EModelType> {
    public:
        using TBase = ::NEnumSerializationRuntime::TEnumDescription<EModelType>;

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

const TString& ToString(EModelType x) {
    const NEModelTypePrivate::TNameBufs& names = NEModelTypePrivate::TNameBufs::Instance();
    return names.ToString(x);
}

template<>
EModelType FromStringImpl<EModelType>(const char* data, size_t len) {
    return ::NEnumSerializationRuntime::DispatchFromStringImplFn<NEModelTypePrivate::TNameBufs, EModelType>(data, len);
}

template<>
bool TryFromStringImpl<EModelType>(const char* data, size_t len, EModelType& result) {
    return ::NEnumSerializationRuntime::DispatchTryFromStringImplFn<NEModelTypePrivate::TNameBufs, EModelType>(data, len, result);
}

bool FromString(const TString& name, EModelType& ret) {
    return ::TryFromStringImpl<EModelType>(name.data(), name.size(), ret);
}

bool FromString(const TStringBuf& name, EModelType& ret) {
    return ::TryFromStringImpl<EModelType>(name.data(), name.size(), ret);
}

template<>
void Out<EModelType>(IOutputStream& os, TTypeTraits<EModelType>::TFuncParam n) {
    return ::NEnumSerializationRuntime::DispatchOutFn<NEModelTypePrivate::TNameBufs>(os, n);
}

namespace NEnumSerializationRuntime {
    template<>
    TStringBuf ToStringBuf<EModelType>(EModelType e) {
        return ::NEnumSerializationRuntime::DispatchToStringBufFn<NEModelTypePrivate::TNameBufs>(e);
    }

    template<>
    TMappedArrayView<EModelType> GetEnumAllValuesImpl<EModelType>() {
        const NEModelTypePrivate::TNameBufs& names = NEModelTypePrivate::TNameBufs::Instance();
        return names.AllEnumValues();
    }

    template<>
    const TString& GetEnumAllNamesImpl<EModelType>() {
        const NEModelTypePrivate::TNameBufs& names = NEModelTypePrivate::TNameBufs::Instance();
        return names.AllEnumNames();
    }

    template<>
    TMappedDictView<EModelType, TString> GetEnumNamesImpl<EModelType>() {
        const NEModelTypePrivate::TNameBufs& names = NEModelTypePrivate::TNameBufs::Instance();
        return names.EnumNames();
    }

    template<>
    const TVector<TString>& GetEnumAllCppNamesImpl<EModelType>() {
        const NEModelTypePrivate::TNameBufs& names = NEModelTypePrivate::TNameBufs::Instance();
        return names.AllEnumCppNames();
    }
}

