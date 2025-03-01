// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/Sound/StreamingSoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamingSoundWave() {}

// Begin Cross Module References
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeVoiceActivityDetector_NoRegister();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UStreamingSoundWave();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UStreamingSoundWave_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnPreAllocateAudioDataResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast the result of audio data pre-allocation */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast the result of audio data pre-allocation" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnPreAllocateAudioDataResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPreAllocateAudioDataResult_DelegateWrapper(const FScriptDelegate& OnPreAllocateAudioDataResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnPreAllocateAudioDataResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnPreAllocateAudioDataResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnPreAllocateAudioDataResult

// Begin Class UStreamingSoundWave Function AppendAudioDataFromEncoded
struct Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics
{
	struct StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms
	{
		TArray<uint8> AudioData;
		ERuntimeAudioFormat AudioFormat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Append" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Append audio data to the end of existing data from encoded audio data\n\x09 *\n\x09 * @param AudioData Audio data array\n\x09 * @param AudioFormat Audio format\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Append audio data to the end of existing data from encoded audio data\n\n@param AudioData Audio data array\n@param AudioFormat Audio format" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::NewProp_AudioFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "AppendAudioDataFromEncoded", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::StreamingSoundWave_eventAppendAudioDataFromEncoded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execAppendAudioDataFromEncoded)
{
	P_GET_TARRAY(uint8,Z_Param_AudioData);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_AudioFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AppendAudioDataFromEncoded(Z_Param_AudioData,ERuntimeAudioFormat(Z_Param_AudioFormat));
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function AppendAudioDataFromEncoded

// Begin Class UStreamingSoundWave Function AppendAudioDataFromRAW
struct Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics
{
	struct StreamingSoundWave_eventAppendAudioDataFromRAW_Parms
	{
		TArray<uint8> RAWData;
		ERuntimeRAWAudioFormat RAWFormat;
		int32 InSampleRate;
		int32 NumOfChannels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Append" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Append audio data to the end of existing data from RAW audio data\n\x09 *\n\x09 * @param RAWData RAW audio buffer\n\x09 * @param RAWFormat RAW audio format\n\x09 * @param InSampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
#endif
		{ "CPP_Default_InSampleRate", "44100" },
		{ "CPP_Default_NumOfChannels", "1" },
		{ "DisplayName", "Append Audio Data From RAW" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Append audio data to the end of existing data from RAW audio data\n\n@param RAWData RAW audio buffer\n@param RAWFormat RAW audio format\n@param InSampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWData_MetaData[] = {
		{ "DisplayName", "RAW Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSampleRate_MetaData[] = {
		{ "DisplayName", "Sample Rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RAWData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_Inner = { "RAWData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData = { "RAWData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, RAWData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWData_MetaData), NewProp_RAWData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormat_MetaData), NewProp_RAWFormat_MetaData) }; // 1579545350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate = { "InSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, InSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSampleRate_MetaData), NewProp_InSampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventAppendAudioDataFromRAW_Parms, NumOfChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_RAWFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_InSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::NewProp_NumOfChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "AppendAudioDataFromRAW", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::StreamingSoundWave_eventAppendAudioDataFromRAW_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::StreamingSoundWave_eventAppendAudioDataFromRAW_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execAppendAudioDataFromRAW)
{
	P_GET_TARRAY(uint8,Z_Param_RAWData);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormat);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AppendAudioDataFromRAW(Z_Param_RAWData,ERuntimeRAWAudioFormat(Z_Param_RAWFormat),Z_Param_InSampleRate,Z_Param_NumOfChannels);
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function AppendAudioDataFromRAW

// Begin Class UStreamingSoundWave Function CreateStreamingSoundWave
struct Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics
{
	struct StreamingSoundWave_eventCreateStreamingSoundWave_Parms
	{
		UStreamingSoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new instance of the streaming sound wave\n\x09 *\n\x09 * @return Created streaming sound wave\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new instance of the streaming sound wave\n\n@return Created streaming sound wave" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventCreateStreamingSoundWave_Parms, ReturnValue), Z_Construct_UClass_UStreamingSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "CreateStreamingSoundWave", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::StreamingSoundWave_eventCreateStreamingSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::StreamingSoundWave_eventCreateStreamingSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execCreateStreamingSoundWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStreamingSoundWave**)Z_Param__Result=UStreamingSoundWave::CreateStreamingSoundWave();
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function CreateStreamingSoundWave

// Begin Class UStreamingSoundWave Function PreAllocateAudioData
struct Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics
{
	struct StreamingSoundWave_eventPreAllocateAudioData_Parms
	{
		int64 NumOfBytesToPreAllocate;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Allocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pre-allocate PCM data, to avoid reallocating memory each time audio data is appended\n\x09 *\n\x09 * @param NumOfBytesToPreAllocate Number of bytes to pre-allocate\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pre-allocate PCM data, to avoid reallocating memory each time audio data is appended\n\n@param NumOfBytesToPreAllocate Number of bytes to pre-allocate\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_NumOfBytesToPreAllocate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::NewProp_NumOfBytesToPreAllocate = { "NumOfBytesToPreAllocate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventPreAllocateAudioData_Parms, NumOfBytesToPreAllocate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventPreAllocateAudioData_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPreAllocateAudioDataResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2477130135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::NewProp_NumOfBytesToPreAllocate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "PreAllocateAudioData", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::StreamingSoundWave_eventPreAllocateAudioData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::StreamingSoundWave_eventPreAllocateAudioData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execPreAllocateAudioData)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_NumOfBytesToPreAllocate);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreAllocateAudioData(Z_Param_NumOfBytesToPreAllocate,FOnPreAllocateAudioDataResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function PreAllocateAudioData

// Begin Class UStreamingSoundWave Function ResetVAD
struct Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics
{
	struct StreamingSoundWave_eventResetVAD_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|VAD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reinitializes a VAD (Voice Activity Detector) instance, clearing all state and resetting mode and sample rate to defaults\n\x09 *\n\x09 * @note This function can be called only if VAD is enabled (see ToggleVAD)\n\x09 * @return Whether VAD is enabled or not\n\x09 */" },
#endif
		{ "Keywords", "Voice Activity Detector Reset" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reinitializes a VAD (Voice Activity Detector) instance, clearing all state and resetting mode and sample rate to defaults\n\n@note This function can be called only if VAD is enabled (see ToggleVAD)\n@return Whether VAD is enabled or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StreamingSoundWave_eventResetVAD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamingSoundWave_eventResetVAD_Parms), &Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "ResetVAD", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::StreamingSoundWave_eventResetVAD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::StreamingSoundWave_eventResetVAD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_ResetVAD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_ResetVAD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execResetVAD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResetVAD();
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function ResetVAD

// Begin Class UStreamingSoundWave Function SetStopSoundOnPlaybackFinish
struct Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics
{
	struct StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms
	{
		bool bStop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set whether the sound should stop after playback is complete or not (play \"blank sound\"). False by default\n\x09 * Setting it to True also makes the sound wave eligible for garbage collection after it has finished playing\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the sound should stop after playback is complete or not (play \"blank sound\"). False by default\nSetting it to True also makes the sound wave eligible for garbage collection after it has finished playing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop_SetBit(void* Obj)
{
	((StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms*)Obj)->bStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop = { "bStop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms), &Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::NewProp_bStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "SetStopSoundOnPlaybackFinish", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::StreamingSoundWave_eventSetStopSoundOnPlaybackFinish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execSetStopSoundOnPlaybackFinish)
{
	P_GET_UBOOL(Z_Param_bStop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStopSoundOnPlaybackFinish(Z_Param_bStop);
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function SetStopSoundOnPlaybackFinish

// Begin Class UStreamingSoundWave Function SetVADMode
struct Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics
{
	struct StreamingSoundWave_eventSetVADMode_Parms
	{
		ERuntimeVADMode Mode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|VAD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Changes the operating (\"aggressiveness\") mode of a VAD (Voice Activity Detector) instance\n\x09 * A more aggressive (higher mode) VAD is more restrictive in reporting speech\n\x09 * In other words, the probability of detecting voice activity increases with a higher mode\n\x09 * However, this also increases the rate of missed detections\n\x09 * VeryAggressive is used by default\n\x09 *\n\x09 * @note This function can be called only if VAD is enabled (see ToggleVAD)\n\x09 * @param Mode The VAD mode to set\n\x09 * @return Whether the VAD mode was successfully set\n\x09 */" },
#endif
		{ "DisplayName", "Set VAD Mode" },
		{ "Keywords", "Voice Activity Detector Mode" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the operating (\"aggressiveness\") mode of a VAD (Voice Activity Detector) instance\nA more aggressive (higher mode) VAD is more restrictive in reporting speech\nIn other words, the probability of detecting voice activity increases with a higher mode\nHowever, this also increases the rate of missed detections\nVeryAggressive is used by default\n\n@note This function can be called only if VAD is enabled (see ToggleVAD)\n@param Mode The VAD mode to set\n@return Whether the VAD mode was successfully set" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StreamingSoundWave_eventSetVADMode_Parms, Mode), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode, METADATA_PARAMS(0, nullptr) }; // 757202630
void Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StreamingSoundWave_eventSetVADMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamingSoundWave_eventSetVADMode_Parms), &Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "SetVADMode", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::StreamingSoundWave_eventSetVADMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::StreamingSoundWave_eventSetVADMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_SetVADMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_SetVADMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execSetVADMode)
{
	P_GET_ENUM(ERuntimeVADMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVADMode(ERuntimeVADMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function SetVADMode

// Begin Class UStreamingSoundWave Function ToggleVAD
struct Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics
{
	struct StreamingSoundWave_eventToggleVAD_Parms
	{
		bool bVAD;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming Sound Wave|VAD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Toggles whether the audio capture should be filtered by VAD (Voice Activity Detection)\n\x09 * If VAD is enabled, only audio data with voice activity will be captured\n\x09 */" },
#endif
		{ "Keywords", "Voice Activity Detector Enable Toggle" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles whether the audio capture should be filtered by VAD (Voice Activity Detection)\nIf VAD is enabled, only audio data with voice activity will be captured" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bVAD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVAD;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_bVAD_SetBit(void* Obj)
{
	((StreamingSoundWave_eventToggleVAD_Parms*)Obj)->bVAD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_bVAD = { "bVAD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamingSoundWave_eventToggleVAD_Parms), &Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_bVAD_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StreamingSoundWave_eventToggleVAD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StreamingSoundWave_eventToggleVAD_Parms), &Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_bVAD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamingSoundWave, nullptr, "ToggleVAD", nullptr, nullptr, Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::StreamingSoundWave_eventToggleVAD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::StreamingSoundWave_eventToggleVAD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStreamingSoundWave::execToggleVAD)
{
	P_GET_UBOOL(Z_Param_bVAD);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToggleVAD(Z_Param_bVAD);
	P_NATIVE_END;
}
// End Class UStreamingSoundWave Function ToggleVAD

// Begin Class UStreamingSoundWave
void UStreamingSoundWave::StaticRegisterNativesUStreamingSoundWave()
{
	UClass* Class = UStreamingSoundWave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AppendAudioDataFromEncoded", &UStreamingSoundWave::execAppendAudioDataFromEncoded },
		{ "AppendAudioDataFromRAW", &UStreamingSoundWave::execAppendAudioDataFromRAW },
		{ "CreateStreamingSoundWave", &UStreamingSoundWave::execCreateStreamingSoundWave },
		{ "PreAllocateAudioData", &UStreamingSoundWave::execPreAllocateAudioData },
		{ "ResetVAD", &UStreamingSoundWave::execResetVAD },
		{ "SetStopSoundOnPlaybackFinish", &UStreamingSoundWave::execSetStopSoundOnPlaybackFinish },
		{ "SetVADMode", &UStreamingSoundWave::execSetVADMode },
		{ "ToggleVAD", &UStreamingSoundWave::execToggleVAD },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamingSoundWave);
UClass* Z_Construct_UClass_UStreamingSoundWave_NoRegister()
{
	return UStreamingSoundWave::StaticClass();
}
struct Z_Construct_UClass_UStreamingSoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Streaming Sound Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Streaming sound wave. Can append audio data dynamically, including during playback\n * It will live indefinitely, even if the sound wave has finished playing, until SetStopSoundOnPlaybackFinish is called.\n * Audio data is always accumulated, clear memory manually via ReleaseMemory or ReleasePlayedAudioData if necessary.\n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/StreamingSoundWave.h" },
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Streaming sound wave. Can append audio data dynamically, including during playback\nIt will live indefinitely, even if the sound wave has finished playing, until SetStopSoundOnPlaybackFinish is called.\nAudio data is always accumulated, clear memory manually via ReleaseMemory or ReleasePlayedAudioData if necessary." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VADInstance_MetaData[] = {
		{ "Category", "Streaming Sound Wave|VAD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The VAD (Voice Activity Detector) instance. Is valid only if VAD is enabled (see ToggleVAD) */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/StreamingSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The VAD (Voice Activity Detector) instance. Is valid only if VAD is enabled (see ToggleVAD)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VADInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromEncoded, "AppendAudioDataFromEncoded" }, // 4124456985
		{ &Z_Construct_UFunction_UStreamingSoundWave_AppendAudioDataFromRAW, "AppendAudioDataFromRAW" }, // 2267536386
		{ &Z_Construct_UFunction_UStreamingSoundWave_CreateStreamingSoundWave, "CreateStreamingSoundWave" }, // 2837602344
		{ &Z_Construct_UFunction_UStreamingSoundWave_PreAllocateAudioData, "PreAllocateAudioData" }, // 4168552241
		{ &Z_Construct_UFunction_UStreamingSoundWave_ResetVAD, "ResetVAD" }, // 3494945721
		{ &Z_Construct_UFunction_UStreamingSoundWave_SetStopSoundOnPlaybackFinish, "SetStopSoundOnPlaybackFinish" }, // 2087007468
		{ &Z_Construct_UFunction_UStreamingSoundWave_SetVADMode, "SetVADMode" }, // 681821135
		{ &Z_Construct_UFunction_UStreamingSoundWave_ToggleVAD, "ToggleVAD" }, // 3052110806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingSoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreamingSoundWave_Statics::NewProp_VADInstance = { "VADInstance", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSoundWave, VADInstance), Z_Construct_UClass_URuntimeVoiceActivityDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VADInstance_MetaData), NewProp_VADInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamingSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSoundWave_Statics::NewProp_VADInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSoundWave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStreamingSoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImportedSoundWave,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamingSoundWave_Statics::ClassParams = {
	&UStreamingSoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStreamingSoundWave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSoundWave_Statics::PropPointers),
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamingSoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamingSoundWave()
{
	if (!Z_Registration_Info_UClass_UStreamingSoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamingSoundWave.OuterSingleton, Z_Construct_UClass_UStreamingSoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamingSoundWave.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UStreamingSoundWave>()
{
	return UStreamingSoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingSoundWave);
UStreamingSoundWave::~UStreamingSoundWave() {}
// End Class UStreamingSoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreamingSoundWave, UStreamingSoundWave::StaticClass, TEXT("UStreamingSoundWave"), &Z_Registration_Info_UClass_UStreamingSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamingSoundWave), 4052176211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_90264347(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
