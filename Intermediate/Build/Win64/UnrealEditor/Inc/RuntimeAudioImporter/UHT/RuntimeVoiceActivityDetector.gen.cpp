// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/VAD/RuntimeVoiceActivityDetector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVoiceActivityDetector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeVoiceActivityDetector();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeVoiceActivityDetector_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Class URuntimeVoiceActivityDetector Function ProcessVAD
struct Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics
{
	struct RuntimeVoiceActivityDetector_eventProcessVAD_Parms
	{
		TArray<float> PCMData;
		int32 InSampleRate;
		int32 NumOfChannels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voice Activity Detector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculates a VAD (Voice Activity Detection) decision for an audio frame\n\x09 * \n\x09 * @param PCMData PCM audio data in 32-bit floating point interleaved format\n\x09 * @param InSampleRate The sample rate of the provided PCM data\n\x09 * @param NumOfChannels The number of channels in the provided PCM data\n\x09 * @return True if the VAD decision was successfully calculated\n\x09 */" },
#endif
		{ "Keywords", "Voice Activity Detector Process" },
		{ "ModuleRelativePath", "Public/VAD/RuntimeVoiceActivityDetector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates a VAD (Voice Activity Detection) decision for an audio frame\n\n@param PCMData PCM audio data in 32-bit floating point interleaved format\n@param InSampleRate The sample rate of the provided PCM data\n@param NumOfChannels The number of channels in the provided PCM data\n@return True if the VAD decision was successfully calculated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSampleRate_MetaData[] = {
		{ "DisplayName", "Sample Rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PCMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PCMData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_PCMData_Inner = { "PCMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_PCMData = { "PCMData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeVoiceActivityDetector_eventProcessVAD_Parms, PCMData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_InSampleRate = { "InSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeVoiceActivityDetector_eventProcessVAD_Parms, InSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSampleRate_MetaData), NewProp_InSampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeVoiceActivityDetector_eventProcessVAD_Parms, NumOfChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RuntimeVoiceActivityDetector_eventProcessVAD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeVoiceActivityDetector_eventProcessVAD_Parms), &Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_PCMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_PCMData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_InSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_NumOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVoiceActivityDetector, nullptr, "ProcessVAD", nullptr, nullptr, Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::RuntimeVoiceActivityDetector_eventProcessVAD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::RuntimeVoiceActivityDetector_eventProcessVAD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeVoiceActivityDetector::execProcessVAD)
{
	P_GET_TARRAY(float,Z_Param_PCMData);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessVAD(Z_Param_PCMData,Z_Param_InSampleRate,Z_Param_NumOfChannels);
	P_NATIVE_END;
}
// End Class URuntimeVoiceActivityDetector Function ProcessVAD

// Begin Class URuntimeVoiceActivityDetector Function ResetVAD
struct Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics
{
	struct RuntimeVoiceActivityDetector_eventResetVAD_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voice Activity Detector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reinitializes a VAD (Voice Activity Detector) instance, clearing all state and resetting mode and sample rate to defaults\n\x09 * \n\x09 * @return True if the VAD instance was successfully reset\n\x09 */" },
#endif
		{ "Keywords", "Voice Activity Detector Reset" },
		{ "ModuleRelativePath", "Public/VAD/RuntimeVoiceActivityDetector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reinitializes a VAD (Voice Activity Detector) instance, clearing all state and resetting mode and sample rate to defaults\n\n@return True if the VAD instance was successfully reset" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RuntimeVoiceActivityDetector_eventResetVAD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeVoiceActivityDetector_eventResetVAD_Parms), &Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVoiceActivityDetector, nullptr, "ResetVAD", nullptr, nullptr, Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::RuntimeVoiceActivityDetector_eventResetVAD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::RuntimeVoiceActivityDetector_eventResetVAD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeVoiceActivityDetector::execResetVAD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResetVAD();
	P_NATIVE_END;
}
// End Class URuntimeVoiceActivityDetector Function ResetVAD

// Begin Class URuntimeVoiceActivityDetector Function SetVADMode
struct Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics
{
	struct RuntimeVoiceActivityDetector_eventSetVADMode_Parms
	{
		ERuntimeVADMode Mode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voice Activity Detector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes the operating (\"aggressiveness\") mode of a VAD (Voice Activity Detector) instance\n\x09 * A more aggressive (higher mode) VAD is more restrictive in reporting speech\n\x09 * In other words, the probability of detecting voice activity increases with a higher mode\n\x09 * However, this also increases the rate of missed detections\n\x09 * VeryAggressive is used by default\n\x09 *\n\x09 * @param Mode The VAD mode to set\n\x09 * @return True if the VAD mode was successfully set\n\x09 */" },
#endif
		{ "Keywords", "Voice Activity Detector Mode" },
		{ "ModuleRelativePath", "Public/VAD/RuntimeVoiceActivityDetector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the operating (\"aggressiveness\") mode of a VAD (Voice Activity Detector) instance\nA more aggressive (higher mode) VAD is more restrictive in reporting speech\nIn other words, the probability of detecting voice activity increases with a higher mode\nHowever, this also increases the rate of missed detections\nVeryAggressive is used by default\n\n@param Mode The VAD mode to set\n@return True if the VAD mode was successfully set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeVoiceActivityDetector_eventSetVADMode_Parms, Mode), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode, METADATA_PARAMS(0, nullptr) }; // 757202630
void Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RuntimeVoiceActivityDetector_eventSetVADMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeVoiceActivityDetector_eventSetVADMode_Parms), &Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVoiceActivityDetector, nullptr, "SetVADMode", nullptr, nullptr, Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::RuntimeVoiceActivityDetector_eventSetVADMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::RuntimeVoiceActivityDetector_eventSetVADMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeVoiceActivityDetector::execSetVADMode)
{
	P_GET_ENUM(ERuntimeVADMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVADMode(ERuntimeVADMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class URuntimeVoiceActivityDetector Function SetVADMode

// Begin Class URuntimeVoiceActivityDetector
void URuntimeVoiceActivityDetector::StaticRegisterNativesURuntimeVoiceActivityDetector()
{
	UClass* Class = URuntimeVoiceActivityDetector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessVAD", &URuntimeVoiceActivityDetector::execProcessVAD },
		{ "ResetVAD", &URuntimeVoiceActivityDetector::execResetVAD },
		{ "SetVADMode", &URuntimeVoiceActivityDetector::execSetVADMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVoiceActivityDetector);
UClass* Z_Construct_UClass_URuntimeVoiceActivityDetector_NoRegister()
{
	return URuntimeVoiceActivityDetector::StaticClass();
}
struct Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voice Activity Detector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime Voice Activity Detector\n * Detects voice activity in audio data\n */" },
#endif
		{ "IncludePath", "VAD/RuntimeVoiceActivityDetector.h" },
		{ "ModuleRelativePath", "Public/VAD/RuntimeVoiceActivityDetector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime Voice Activity Detector\nDetects voice activity in audio data" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeVoiceActivityDetector_ProcessVAD, "ProcessVAD" }, // 4170225601
		{ &Z_Construct_UFunction_URuntimeVoiceActivityDetector_ResetVAD, "ResetVAD" }, // 3309718250
		{ &Z_Construct_UFunction_URuntimeVoiceActivityDetector_SetVADMode, "SetVADMode" }, // 1043849888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVoiceActivityDetector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics::ClassParams = {
	&URuntimeVoiceActivityDetector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeVoiceActivityDetector()
{
	if (!Z_Registration_Info_UClass_URuntimeVoiceActivityDetector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVoiceActivityDetector.OuterSingleton, Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeVoiceActivityDetector.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeVoiceActivityDetector>()
{
	return URuntimeVoiceActivityDetector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVoiceActivityDetector);
URuntimeVoiceActivityDetector::~URuntimeVoiceActivityDetector() {}
// End Class URuntimeVoiceActivityDetector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeVoiceActivityDetector, URuntimeVoiceActivityDetector::StaticClass, TEXT("URuntimeVoiceActivityDetector"), &Z_Registration_Info_UClass_URuntimeVoiceActivityDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVoiceActivityDetector), 4037384631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_1197044648(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
