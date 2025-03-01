// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioUtilities.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioUtilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioUtilities();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioUtilities_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnGetAudioHeaderInfoResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms
	{
		bool bSucceeded;
		FRuntimeAudioHeaderInfo HeaderInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of retrieving audio header info */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of retrieving audio header info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::NewProp_HeaderInfo = { "HeaderInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms, HeaderInfo), Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderInfo_MetaData), NewProp_HeaderInfo_MetaData) }; // 3580204948
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::NewProp_HeaderInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnGetAudioHeaderInfoResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetAudioHeaderInfoResult_DelegateWrapper(const FScriptDelegate& OnGetAudioHeaderInfoResult, bool bSucceeded, FRuntimeAudioHeaderInfo const& HeaderInfo)
{
	struct _Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms
	{
		bool bSucceeded;
		FRuntimeAudioHeaderInfo HeaderInfo;
	};
	_Script_RuntimeAudioImporter_eventOnGetAudioHeaderInfoResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.HeaderInfo=HeaderInfo;
	OnGetAudioHeaderInfoResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnGetAudioHeaderInfoResult

// Begin Delegate FOnScanDirectoryForAudioFilesResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms
	{
		bool bSucceeded;
		TArray<FString> AudioFilePaths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of scanning directory for audio files */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of scanning directory for audio files" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioFilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioFilePaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_AudioFilePaths_Inner = { "AudioFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_AudioFilePaths = { "AudioFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms, AudioFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFilePaths_MetaData), NewProp_AudioFilePaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_AudioFilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::NewProp_AudioFilePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnScanDirectoryForAudioFilesResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScanDirectoryForAudioFilesResult_DelegateWrapper(const FScriptDelegate& OnScanDirectoryForAudioFilesResult, bool bSucceeded, TArray<FString> const& AudioFilePaths)
{
	struct _Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms
	{
		bool bSucceeded;
		TArray<FString> AudioFilePaths;
	};
	_Script_RuntimeAudioImporter_eventOnScanDirectoryForAudioFilesResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.AudioFilePaths=AudioFilePaths;
	OnScanDirectoryForAudioFilesResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnScanDirectoryForAudioFilesResult

// Begin Class URuntimeAudioUtilities Function ConvertSecondsToString
struct Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics
{
	struct RuntimeAudioUtilities_eventConvertSecondsToString_Parms
	{
		int64 Seconds;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert seconds to string (hh:mm:ss or mm:ss depending on the number of seconds)\n\x09 *\n\x09 * @return hh:mm:ss or mm:ss string representation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert seconds to string (hh:mm:ss or mm:ss depending on the number of seconds)\n\n@return hh:mm:ss or mm:ss string representation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventConvertSecondsToString_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventConvertSecondsToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioUtilities, nullptr, "ConvertSecondsToString", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::RuntimeAudioUtilities_eventConvertSecondsToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::RuntimeAudioUtilities_eventConvertSecondsToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioUtilities::execConvertSecondsToString)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Seconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URuntimeAudioUtilities::ConvertSecondsToString(Z_Param_Seconds);
	P_NATIVE_END;
}
// End Class URuntimeAudioUtilities Function ConvertSecondsToString

// Begin Class URuntimeAudioUtilities Function GetAudioFormats
struct Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics
{
	struct RuntimeAudioUtilities_eventGetAudioFormats_Parms
	{
		FString FilePath;
		TArray<ERuntimeAudioFormat> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Utilities|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the audio format based on file extension\n\x09 *\n\x09 * @param FilePath File path where to find the format (by extension)\n\x09 * @return The found audio formats (e.g. mp3. flac, etc)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the audio format based on file extension\n\n@param FilePath File path where to find the format (by extension)\n@return The found audio formats (e.g. mp3. flac, etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioFormats_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioFormats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioUtilities, nullptr, "GetAudioFormats", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::RuntimeAudioUtilities_eventGetAudioFormats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::RuntimeAudioUtilities_eventGetAudioFormats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioUtilities::execGetAudioFormats)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ERuntimeAudioFormat>*)Z_Param__Result=URuntimeAudioUtilities::GetAudioFormats(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class URuntimeAudioUtilities Function GetAudioFormats

// Begin Class URuntimeAudioUtilities Function GetAudioFormatsAdvanced
struct Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics
{
	struct RuntimeAudioUtilities_eventGetAudioFormatsAdvanced_Parms
	{
		TArray<uint8> AudioData;
		TArray<ERuntimeAudioFormat> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Utilities|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine the audio format based on audio data. A more advanced way to get the format\n\x09 *\n\x09 * @param AudioData Audio data array\n\x09 * @return The found audio formats (e.g. mp3. flac, etc)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine the audio format based on audio data. A more advanced way to get the format\n\n@param AudioData Audio data array\n@return The found audio formats (e.g. mp3. flac, etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioFormatsAdvanced_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioFormatsAdvanced_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioUtilities, nullptr, "GetAudioFormatsAdvanced", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::RuntimeAudioUtilities_eventGetAudioFormatsAdvanced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::RuntimeAudioUtilities_eventGetAudioFormatsAdvanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioUtilities::execGetAudioFormatsAdvanced)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ERuntimeAudioFormat>*)Z_Param__Result=URuntimeAudioUtilities::GetAudioFormatsAdvanced(Z_Param_Out_AudioData);
	P_NATIVE_END;
}
// End Class URuntimeAudioUtilities Function GetAudioFormatsAdvanced

// Begin Class URuntimeAudioUtilities Function GetAudioHeaderInfoFromBuffer
struct Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics
{
	struct RuntimeAudioUtilities_eventGetAudioHeaderInfoFromBuffer_Parms
	{
		TArray<uint8> AudioData;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Utilities|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve audio header (metadata) information from a buffer\n\x09 *\n\x09 * @param AudioData The audio data from which the header information will be retrieved\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve audio header (metadata) information from a buffer\n\n@param AudioData The audio data from which the header information will be retrieved\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioHeaderInfoFromBuffer_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioHeaderInfoFromBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 904632043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioUtilities, nullptr, "GetAudioHeaderInfoFromBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::RuntimeAudioUtilities_eventGetAudioHeaderInfoFromBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::RuntimeAudioUtilities_eventGetAudioHeaderInfoFromBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioUtilities::execGetAudioHeaderInfoFromBuffer)
{
	P_GET_TARRAY(uint8,Z_Param_AudioData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioUtilities::GetAudioHeaderInfoFromBuffer(Z_Param_AudioData,FOnGetAudioHeaderInfoResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioUtilities Function GetAudioHeaderInfoFromBuffer

// Begin Class URuntimeAudioUtilities Function GetAudioHeaderInfoFromFile
struct Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics
{
	struct RuntimeAudioUtilities_eventGetAudioHeaderInfoFromFile_Parms
	{
		FString FilePath;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Utilities|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve audio header (metadata) information from a file\n\x09 *\n\x09 * @param FilePath The path to the audio file from which header information will be retrieved\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve audio header (metadata) information from a file\n\n@param FilePath The path to the audio file from which header information will be retrieved\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioHeaderInfoFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventGetAudioHeaderInfoFromFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAudioHeaderInfoResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 904632043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioUtilities, nullptr, "GetAudioHeaderInfoFromFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::RuntimeAudioUtilities_eventGetAudioHeaderInfoFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::RuntimeAudioUtilities_eventGetAudioHeaderInfoFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioUtilities::execGetAudioHeaderInfoFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioUtilities::GetAudioHeaderInfoFromFile(Z_Param_FilePath,FOnGetAudioHeaderInfoResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioUtilities Function GetAudioHeaderInfoFromFile

// Begin Class URuntimeAudioUtilities Function ScanDirectoryForAudioFiles
struct Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics
{
	struct RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms
	{
		FString Directory;
		bool bRecursive;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Scan the specified directory for audio files\n\x09 *\n\x09 * @param Directory The directory path to scan for audio files\n\x09 * @param bRecursive Whether to search for files recursively in subdirectories\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "Keywords", "Folder" },
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scan the specified directory for audio files\n\n@param Directory The directory path to scan for audio files\n@param bRecursive Whether to search for files recursively in subdirectories\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
	static void NewProp_bRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
void Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_bRecursive_SetBit(void* Obj)
{
	((RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms*)Obj)->bRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms), &Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnScanDirectoryForAudioFilesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3905069069
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_bRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioUtilities, nullptr, "ScanDirectoryForAudioFiles", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::RuntimeAudioUtilities_eventScanDirectoryForAudioFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioUtilities::execScanDirectoryForAudioFiles)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
	P_GET_UBOOL(Z_Param_bRecursive);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioUtilities::ScanDirectoryForAudioFiles(Z_Param_Directory,Z_Param_bRecursive,FOnScanDirectoryForAudioFilesResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioUtilities Function ScanDirectoryForAudioFiles

// Begin Class URuntimeAudioUtilities
void URuntimeAudioUtilities::StaticRegisterNativesURuntimeAudioUtilities()
{
	UClass* Class = URuntimeAudioUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertSecondsToString", &URuntimeAudioUtilities::execConvertSecondsToString },
		{ "GetAudioFormats", &URuntimeAudioUtilities::execGetAudioFormats },
		{ "GetAudioFormatsAdvanced", &URuntimeAudioUtilities::execGetAudioFormatsAdvanced },
		{ "GetAudioHeaderInfoFromBuffer", &URuntimeAudioUtilities::execGetAudioHeaderInfoFromBuffer },
		{ "GetAudioHeaderInfoFromFile", &URuntimeAudioUtilities::execGetAudioHeaderInfoFromFile },
		{ "ScanDirectoryForAudioFiles", &URuntimeAudioUtilities::execScanDirectoryForAudioFiles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAudioUtilities);
UClass* Z_Construct_UClass_URuntimeAudioUtilities_NoRegister()
{
	return URuntimeAudioUtilities::StaticClass();
}
struct Z_Construct_UClass_URuntimeAudioUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime Audio Utilities\n * Contains various functions for working with audio data, including retrieving audio header info, scanning directories for audio files, and more\n */" },
#endif
		{ "IncludePath", "RuntimeAudioUtilities.h" },
		{ "ModuleRelativePath", "Public/RuntimeAudioUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime Audio Utilities\nContains various functions for working with audio data, including retrieving audio header info, scanning directories for audio files, and more" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioUtilities_ConvertSecondsToString, "ConvertSecondsToString" }, // 1386496029
		{ &Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormats, "GetAudioFormats" }, // 2400772057
		{ &Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioFormatsAdvanced, "GetAudioFormatsAdvanced" }, // 161432131
		{ &Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromBuffer, "GetAudioHeaderInfoFromBuffer" }, // 1333303539
		{ &Z_Construct_UFunction_URuntimeAudioUtilities_GetAudioHeaderInfoFromFile, "GetAudioHeaderInfoFromFile" }, // 1678144192
		{ &Z_Construct_UFunction_URuntimeAudioUtilities_ScanDirectoryForAudioFiles, "ScanDirectoryForAudioFiles" }, // 728924817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeAudioUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioUtilities_Statics::ClassParams = {
	&URuntimeAudioUtilities::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeAudioUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeAudioUtilities()
{
	if (!Z_Registration_Info_UClass_URuntimeAudioUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAudioUtilities.OuterSingleton, Z_Construct_UClass_URuntimeAudioUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeAudioUtilities.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeAudioUtilities>()
{
	return URuntimeAudioUtilities::StaticClass();
}
URuntimeAudioUtilities::URuntimeAudioUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioUtilities);
URuntimeAudioUtilities::~URuntimeAudioUtilities() {}
// End Class URuntimeAudioUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAudioUtilities, URuntimeAudioUtilities::StaticClass, TEXT("URuntimeAudioUtilities"), &Z_Registration_Info_UClass_URuntimeAudioUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAudioUtilities), 1233043000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_3718195518(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
