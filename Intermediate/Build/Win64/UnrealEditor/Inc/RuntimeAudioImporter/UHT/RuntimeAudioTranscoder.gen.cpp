// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioTranscoder.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioTranscoder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioTranscoder();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioTranscoder_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnRAWDataTranscodeFromBufferResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms
	{
		bool bSucceeded;
		TArray<uint8> RAWData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the RAW data transcoded from buffer */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the RAW data transcoded from buffer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RAWData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_Inner = { "RAWData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData = { "RAWData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms, RAWData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWData_MetaData), NewProp_RAWData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_RAWData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnRAWDataTranscodeFromBufferResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRAWDataTranscodeFromBufferResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromBufferResult, bool bSucceeded, TArray<uint8> const& RAWData)
{
	struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms
	{
		bool bSucceeded;
		TArray<uint8> RAWData;
	};
	_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.RAWData=RAWData;
	OnRAWDataTranscodeFromBufferResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRAWDataTranscodeFromBufferResult

// Begin Delegate FOnRAWDataTranscodeFromFileResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the RAW data transcoded from file */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the RAW data transcoded from file" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnRAWDataTranscodeFromFileResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRAWDataTranscodeFromFileResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromFileResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnRAWDataTranscodeFromFileResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRAWDataTranscodeFromFileResult

// Begin Delegate FOnEncodedDataTranscodeFromBufferResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms
	{
		bool bSucceeded;
		TArray<uint8> EncodedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the encoded data transcoded from buffer */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the encoded data transcoded from buffer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncodedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_EncodedData_Inner = { "EncodedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_EncodedData = { "EncodedData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms, EncodedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodedData_MetaData), NewProp_EncodedData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_EncodedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::NewProp_EncodedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnEncodedDataTranscodeFromBufferResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEncodedDataTranscodeFromBufferResult_DelegateWrapper(const FScriptDelegate& OnEncodedDataTranscodeFromBufferResult, bool bSucceeded, TArray<uint8> const& EncodedData)
{
	struct _Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms
	{
		bool bSucceeded;
		TArray<uint8> EncodedData;
	};
	_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromBufferResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.EncodedData=EncodedData;
	OnEncodedDataTranscodeFromBufferResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnEncodedDataTranscodeFromBufferResult

// Begin Delegate FOnEncodedDataTranscodeFromFileResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the encoded data transcoded from file */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the encoded data transcoded from file" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnEncodedDataTranscodeFromFileResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEncodedDataTranscodeFromFileResult_DelegateWrapper(const FScriptDelegate& OnEncodedDataTranscodeFromFileResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnEncodedDataTranscodeFromFileResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnEncodedDataTranscodeFromFileResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnEncodedDataTranscodeFromFileResult

// Begin Class URuntimeAudioTranscoder Function TranscodeEncodedDataFromBuffer
struct Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics
{
	struct RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms
	{
		TArray<uint8> EncodedDataFrom;
		ERuntimeAudioFormat EncodedFormatFrom;
		ERuntimeAudioFormat EncodedFormatTo;
		uint8 Quality;
		FRuntimeAudioExportOverrideOptions OverrideOptions;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Transcoder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transcode encoded data from one format into another from buffer\n\x09 * \n\x09 * @param EncodedDataFrom The encoded audio data to transcode\n\x09 * @param EncodedFormatFrom The original format of the encoded audio data\n\x09 * @param EncodedFormatTo The desired format of the transcoded encoded audio data\n\x09 * @param Quality The quality of the transcoded encoded audio data\n\x09 * @param OverrideOptions The override options for the encoded audio data (fill with -1 if you don't want to override)\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transcode encoded data from one format into another from buffer\n\n@param EncodedDataFrom The encoded audio data to transcode\n@param EncodedFormatFrom The original format of the encoded audio data\n@param EncodedFormatTo The desired format of the transcoded encoded audio data\n@param Quality The quality of the transcoded encoded audio data\n@param OverrideOptions The override options for the encoded audio data (fill with -1 if you don't want to override)\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodedDataFrom_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncodedDataFrom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodedFormatFrom_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodedFormatFrom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodedFormatTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodedFormatTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedDataFrom_Inner = { "EncodedDataFrom", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedDataFrom = { "EncodedDataFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms, EncodedDataFrom), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatFrom = { "EncodedFormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms, EncodedFormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatTo = { "EncodedFormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms, EncodedFormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms, Quality), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms, OverrideOptions), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideOptions_MetaData), NewProp_OverrideOptions_MetaData) }; // 751039397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromBufferResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3529768232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedDataFrom_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedDataFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatFrom_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_EncodedFormatTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_OverrideOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioTranscoder, nullptr, "TranscodeEncodedDataFromBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::RuntimeAudioTranscoder_eventTranscodeEncodedDataFromBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioTranscoder::execTranscodeEncodedDataFromBuffer)
{
	P_GET_TARRAY(uint8,Z_Param_EncodedDataFrom);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_EncodedFormatFrom);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_EncodedFormatTo);
	P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
	P_GET_STRUCT_REF(FRuntimeAudioExportOverrideOptions,Z_Param_Out_OverrideOptions);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioTranscoder::TranscodeEncodedDataFromBuffer(Z_Param_EncodedDataFrom,ERuntimeAudioFormat(Z_Param_EncodedFormatFrom),ERuntimeAudioFormat(Z_Param_EncodedFormatTo),Z_Param_Quality,Z_Param_Out_OverrideOptions,FOnEncodedDataTranscodeFromBufferResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioTranscoder Function TranscodeEncodedDataFromBuffer

// Begin Class URuntimeAudioTranscoder Function TranscodeEncodedDataFromFile
struct Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics
{
	struct RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms
	{
		FString FilePathFrom;
		ERuntimeAudioFormat EncodedFormatFrom;
		FString FilePathTo;
		ERuntimeAudioFormat EncodedFormatTo;
		uint8 Quality;
		FRuntimeAudioExportOverrideOptions OverrideOptions;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Transcoder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transcode encoded data from one format into another from file\n\x09 * \n\x09 * @param FilePathFrom The path to file with the encoded audio data to transcode \n\x09 * @param EncodedFormatFrom The original format of the encoded audio data\n\x09 * @param FilePathTo The file path for saving encoded data\n\x09 * @param EncodedFormatTo The desired format of the transcoded encoded audio data\n\x09 * @param Quality The quality of the transcoded encoded audio data\n\x09 * @param OverrideOptions The override options for the encoded audio data (fill with -1 if you don't want to override)\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transcode encoded data from one format into another from file\n\n@param FilePathFrom The path to file with the encoded audio data to transcode\n@param EncodedFormatFrom The original format of the encoded audio data\n@param FilePathTo The file path for saving encoded data\n@param EncodedFormatTo The desired format of the transcoded encoded audio data\n@param Quality The quality of the transcoded encoded audio data\n@param OverrideOptions The override options for the encoded audio data (fill with -1 if you don't want to override)\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePathFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePathTo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePathFrom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodedFormatFrom_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodedFormatFrom;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePathTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodedFormatTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodedFormatTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_FilePathFrom = { "FilePathFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, FilePathFrom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePathFrom_MetaData), NewProp_FilePathFrom_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatFrom = { "EncodedFormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, EncodedFormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_FilePathTo = { "FilePathTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, FilePathTo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePathTo_MetaData), NewProp_FilePathTo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatTo = { "EncodedFormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, EncodedFormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, Quality), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, OverrideOptions), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideOptions_MetaData), NewProp_OverrideOptions_MetaData) }; // 751039397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnEncodedDataTranscodeFromFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 4272019315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_FilePathFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatFrom_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_FilePathTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_EncodedFormatTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_OverrideOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioTranscoder, nullptr, "TranscodeEncodedDataFromFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::RuntimeAudioTranscoder_eventTranscodeEncodedDataFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioTranscoder::execTranscodeEncodedDataFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePathFrom);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_EncodedFormatFrom);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePathTo);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_EncodedFormatTo);
	P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
	P_GET_STRUCT_REF(FRuntimeAudioExportOverrideOptions,Z_Param_Out_OverrideOptions);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioTranscoder::TranscodeEncodedDataFromFile(Z_Param_FilePathFrom,ERuntimeAudioFormat(Z_Param_EncodedFormatFrom),Z_Param_FilePathTo,ERuntimeAudioFormat(Z_Param_EncodedFormatTo),Z_Param_Quality,Z_Param_Out_OverrideOptions,FOnEncodedDataTranscodeFromFileResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioTranscoder Function TranscodeEncodedDataFromFile

// Begin Class URuntimeAudioTranscoder Function TranscodeRAWDataFromBuffer
struct Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics
{
	struct RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms
	{
		TArray<uint8> RAWDataFrom;
		ERuntimeRAWAudioFormat RAWFormatFrom;
		ERuntimeRAWAudioFormat RAWFormatTo;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Transcoder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transcode RAW data from one format into another from buffer\n\x09 *\n\x09 * @param RAWDataFrom The RAW audio data to transcode\n\x09 * @param RAWFormatFrom The original format of the RAW audio data\n\x09 * @param RAWFormatTo The desired format of the transcoded RAW audio data\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "DisplayName", "Transcode RAW Data From Buffer" },
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transcode RAW data from one format into another from buffer\n\n@param RAWDataFrom The RAW audio data to transcode\n@param RAWFormatFrom The original format of the RAW audio data\n@param RAWFormatTo The desired format of the transcoded RAW audio data\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWDataFrom_MetaData[] = {
		{ "DisplayName", "RAW Data From" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormatFrom_MetaData[] = {
		{ "DisplayName", "RAW Format From" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormatTo_MetaData[] = {
		{ "DisplayName", "RAW Format To" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWDataFrom_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RAWDataFrom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormatFrom_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormatFrom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormatTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormatTo;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_Inner = { "RAWDataFrom", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom = { "RAWDataFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms, RAWDataFrom), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWDataFrom_MetaData), NewProp_RAWDataFrom_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom = { "RAWFormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms, RAWFormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormatFrom_MetaData), NewProp_RAWFormatFrom_MetaData) }; // 1579545350
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo = { "RAWFormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms, RAWFormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormatTo_MetaData), NewProp_RAWFormatTo_MetaData) }; // 1579545350
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromBufferResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2648563411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWDataFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWFormatTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioTranscoder, nullptr, "TranscodeRAWDataFromBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::RuntimeAudioTranscoder_eventTranscodeRAWDataFromBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioTranscoder::execTranscodeRAWDataFromBuffer)
{
	P_GET_TARRAY(uint8,Z_Param_RAWDataFrom);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormatFrom);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormatTo);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioTranscoder::TranscodeRAWDataFromBuffer(Z_Param_RAWDataFrom,ERuntimeRAWAudioFormat(Z_Param_RAWFormatFrom),ERuntimeRAWAudioFormat(Z_Param_RAWFormatTo),FOnRAWDataTranscodeFromBufferResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioTranscoder Function TranscodeRAWDataFromBuffer

// Begin Class URuntimeAudioTranscoder Function TranscodeRAWDataFromFile
struct Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics
{
	struct RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms
	{
		FString FilePathFrom;
		ERuntimeRAWAudioFormat RAWFormatFrom;
		FString FilePathTo;
		ERuntimeRAWAudioFormat RAWFormatTo;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Transcoder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transcode RAW data from one format into another from file\n\x09 *\n\x09 * @param FilePathFrom Path to file with the RAW audio data to transcode\n\x09 * @param RAWFormatFrom The original format of the RAW audio data\n\x09 * @param FilePathTo File path for saving RAW data\n\x09 * @param RAWFormatTo The desired format of the transcoded RAW audio data\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "DisplayName", "Transcode RAW Data From File" },
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transcode RAW data from one format into another from file\n\n@param FilePathFrom Path to file with the RAW audio data to transcode\n@param RAWFormatFrom The original format of the RAW audio data\n@param FilePathTo File path for saving RAW data\n@param RAWFormatTo The desired format of the transcoded RAW audio data\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePathFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormatFrom_MetaData[] = {
		{ "DisplayName", "RAW Format From" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePathTo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormatTo_MetaData[] = {
		{ "DisplayName", "RAW Format To" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePathFrom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormatFrom_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormatFrom;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePathTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormatTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormatTo;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom = { "FilePathFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms, FilePathFrom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePathFrom_MetaData), NewProp_FilePathFrom_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom = { "RAWFormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms, RAWFormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormatFrom_MetaData), NewProp_RAWFormatFrom_MetaData) }; // 1579545350
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo = { "FilePathTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms, FilePathTo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePathTo_MetaData), NewProp_FilePathTo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo = { "RAWFormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms, RAWFormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormatTo_MetaData), NewProp_RAWFormatTo_MetaData) }; // 1579545350
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRAWDataTranscodeFromFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2115575652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_RAWFormatTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioTranscoder, nullptr, "TranscodeRAWDataFromFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::RuntimeAudioTranscoder_eventTranscodeRAWDataFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioTranscoder::execTranscodeRAWDataFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePathFrom);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormatFrom);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePathTo);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormatTo);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioTranscoder::TranscodeRAWDataFromFile(Z_Param_FilePathFrom,ERuntimeRAWAudioFormat(Z_Param_RAWFormatFrom),Z_Param_FilePathTo,ERuntimeRAWAudioFormat(Z_Param_RAWFormatTo),FOnRAWDataTranscodeFromFileResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioTranscoder Function TranscodeRAWDataFromFile

// Begin Class URuntimeAudioTranscoder
void URuntimeAudioTranscoder::StaticRegisterNativesURuntimeAudioTranscoder()
{
	UClass* Class = URuntimeAudioTranscoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TranscodeEncodedDataFromBuffer", &URuntimeAudioTranscoder::execTranscodeEncodedDataFromBuffer },
		{ "TranscodeEncodedDataFromFile", &URuntimeAudioTranscoder::execTranscodeEncodedDataFromFile },
		{ "TranscodeRAWDataFromBuffer", &URuntimeAudioTranscoder::execTranscodeRAWDataFromBuffer },
		{ "TranscodeRAWDataFromFile", &URuntimeAudioTranscoder::execTranscodeRAWDataFromFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAudioTranscoder);
UClass* Z_Construct_UClass_URuntimeAudioTranscoder_NoRegister()
{
	return URuntimeAudioTranscoder::StaticClass();
}
struct Z_Construct_UClass_URuntimeAudioTranscoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Transcoder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime Audio Transcoder\n * Contains functions for transcoding audio data from one format to another\n */" },
#endif
		{ "IncludePath", "RuntimeAudioTranscoder.h" },
		{ "ModuleRelativePath", "Public/RuntimeAudioTranscoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime Audio Transcoder\nContains functions for transcoding audio data from one format to another" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromBuffer, "TranscodeEncodedDataFromBuffer" }, // 3082918232
		{ &Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeEncodedDataFromFile, "TranscodeEncodedDataFromFile" }, // 3824714611
		{ &Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromBuffer, "TranscodeRAWDataFromBuffer" }, // 534210783
		{ &Z_Construct_UFunction_URuntimeAudioTranscoder_TranscodeRAWDataFromFile, "TranscodeRAWDataFromFile" }, // 4124619130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioTranscoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeAudioTranscoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioTranscoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioTranscoder_Statics::ClassParams = {
	&URuntimeAudioTranscoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioTranscoder_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeAudioTranscoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeAudioTranscoder()
{
	if (!Z_Registration_Info_UClass_URuntimeAudioTranscoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAudioTranscoder.OuterSingleton, Z_Construct_UClass_URuntimeAudioTranscoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeAudioTranscoder.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeAudioTranscoder>()
{
	return URuntimeAudioTranscoder::StaticClass();
}
URuntimeAudioTranscoder::URuntimeAudioTranscoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioTranscoder);
URuntimeAudioTranscoder::~URuntimeAudioTranscoder() {}
// End Class URuntimeAudioTranscoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAudioTranscoder, URuntimeAudioTranscoder::StaticClass, TEXT("URuntimeAudioTranscoder"), &Z_Registration_Info_UClass_URuntimeAudioTranscoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAudioTranscoder), 987865677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_1951743221(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
