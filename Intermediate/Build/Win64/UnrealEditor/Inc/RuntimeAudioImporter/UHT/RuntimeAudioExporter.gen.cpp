// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioExporter.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioExporter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioExporter();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioExporter_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnAudioExportToBufferResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms
	{
		bool bSucceeded;
		TArray<uint8> AudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the audio export to buffer */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the audio export to buffer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::NewProp_AudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioExportToBufferResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioExportToBufferResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToBufferResult, bool bSucceeded, TArray<uint8> const& AudioData)
{
	struct _Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms
	{
		bool bSucceeded;
		TArray<uint8> AudioData;
	};
	_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.AudioData=AudioData;
	OnAudioExportToBufferResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioExportToBufferResult

// Begin Delegate FOnAudioExportToFileResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the audio export to file */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the audio export to file" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioExportToFileResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioExportToFileResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToFileResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnAudioExportToFileResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioExportToFileResult

// Begin Class URuntimeAudioExporter Function ExportSoundWaveToBuffer
struct Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics
{
	struct RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms
	{
		UImportedSoundWave* ImportedSoundWave;
		ERuntimeAudioFormat AudioFormat;
		uint8 Quality;
		FRuntimeAudioExportOverrideOptions OverrideOptions;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Exporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Export the imported sound wave into a buffer\n\x09 *\n\x09 * @param ImportedSoundWave Imported sound wave to be exported\n\x09 * @param AudioFormat The desired audio format for the exported file. Note that some formats may not be supported\n\x09 * @param Quality The quality of the encoded audio data, from 0 to 100\n\x09 * @param OverrideOptions Override options for the export\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export the imported sound wave into a buffer\n\n@param ImportedSoundWave Imported sound wave to be exported\n@param AudioFormat The desired audio format for the exported file. Note that some formats may not be supported\n@param Quality The quality of the encoded audio data, from 0 to 100\n@param OverrideOptions Override options for the export\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms, Quality), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms, OverrideOptions), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideOptions_MetaData), NewProp_OverrideOptions_MetaData) }; // 751039397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3374225237
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_ImportedSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_AudioFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_OverrideOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioExporter, nullptr, "ExportSoundWaveToBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::RuntimeAudioExporter_eventExportSoundWaveToBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioExporter::execExportSoundWaveToBuffer)
{
	P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWave);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_AudioFormat);
	P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
	P_GET_STRUCT_REF(FRuntimeAudioExportOverrideOptions,Z_Param_Out_OverrideOptions);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioExporter::ExportSoundWaveToBuffer(Z_Param_ImportedSoundWave,ERuntimeAudioFormat(Z_Param_AudioFormat),Z_Param_Quality,Z_Param_Out_OverrideOptions,FOnAudioExportToBufferResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioExporter Function ExportSoundWaveToBuffer

// Begin Class URuntimeAudioExporter Function ExportSoundWaveToFile
struct Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics
{
	struct RuntimeAudioExporter_eventExportSoundWaveToFile_Parms
	{
		UImportedSoundWave* ImportedSoundWave;
		FString SavePath;
		ERuntimeAudioFormat AudioFormat;
		uint8 Quality;
		FRuntimeAudioExportOverrideOptions OverrideOptions;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Exporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Export the imported sound wave to a file\n\x09 *\n\x09 * @param ImportedSoundWave Imported sound wave to be exported\n\x09 * @param AudioFormat The desired audio format for the exported file. Note that some formats may not be supported\n\x09 * @param SavePath The path where the exported file will be saved\n\x09 * @param Quality The quality of the encoded audio data, from 0 to 100\n\x09 * @param OverrideOptions Override options for the export\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export the imported sound wave to a file\n\n@param ImportedSoundWave Imported sound wave to be exported\n@param AudioFormat The desired audio format for the exported file. Note that some formats may not be supported\n@param SavePath The path where the exported file will be saved\n@param Quality The quality of the encoded audio data, from 0 to 100\n@param OverrideOptions Override options for the export\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToFile_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToFile_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToFile_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToFile_Parms, Quality), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToFile_Parms, OverrideOptions), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideOptions_MetaData), NewProp_OverrideOptions_MetaData) }; // 751039397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1221639410
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_ImportedSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_AudioFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_OverrideOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioExporter, nullptr, "ExportSoundWaveToFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::RuntimeAudioExporter_eventExportSoundWaveToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::RuntimeAudioExporter_eventExportSoundWaveToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioExporter::execExportSoundWaveToFile)
{
	P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWave);
	P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_AudioFormat);
	P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
	P_GET_STRUCT_REF(FRuntimeAudioExportOverrideOptions,Z_Param_Out_OverrideOptions);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioExporter::ExportSoundWaveToFile(Z_Param_ImportedSoundWave,Z_Param_SavePath,ERuntimeAudioFormat(Z_Param_AudioFormat),Z_Param_Quality,Z_Param_Out_OverrideOptions,FOnAudioExportToFileResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioExporter Function ExportSoundWaveToFile

// Begin Class URuntimeAudioExporter Function ExportSoundWaveToRAWBuffer
struct Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics
{
	struct RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms
	{
		UImportedSoundWave* ImportedSoundWave;
		ERuntimeRAWAudioFormat RAWFormat;
		FRuntimeAudioExportOverrideOptions OverrideOptions;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Exporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Export the imported sound wave into a RAW buffer\n\x09 *\n\x09 * @param ImportedSoundWave Imported sound wave to be exported\n\x09 * @param RAWFormat Required RAW format for exporting\n\x09 * @param OverrideOptions Override options for the export\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "DisplayName", "Export Sound Wave To RAW Buffer" },
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export the imported sound wave into a RAW buffer\n\n@param ImportedSoundWave Imported sound wave to be exported\n@param RAWFormat Required RAW format for exporting\n@param OverrideOptions Override options for the export\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormat_MetaData), NewProp_RAWFormat_MetaData) }; // 1579545350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms, OverrideOptions), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideOptions_MetaData), NewProp_OverrideOptions_MetaData) }; // 751039397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToBufferResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3374225237
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_ImportedSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_RAWFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_RAWFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_OverrideOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioExporter, nullptr, "ExportSoundWaveToRAWBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::RuntimeAudioExporter_eventExportSoundWaveToRAWBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioExporter::execExportSoundWaveToRAWBuffer)
{
	P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWave);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormat);
	P_GET_STRUCT_REF(FRuntimeAudioExportOverrideOptions,Z_Param_Out_OverrideOptions);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioExporter::ExportSoundWaveToRAWBuffer(Z_Param_ImportedSoundWave,ERuntimeRAWAudioFormat(Z_Param_RAWFormat),Z_Param_Out_OverrideOptions,FOnAudioExportToBufferResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioExporter Function ExportSoundWaveToRAWBuffer

// Begin Class URuntimeAudioExporter Function ExportSoundWaveToRAWFile
struct Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics
{
	struct RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms
	{
		UImportedSoundWave* ImportedSoundWave;
		FString SavePath;
		ERuntimeRAWAudioFormat RAWFormat;
		FRuntimeAudioExportOverrideOptions OverrideOptions;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Exporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Export the imported sound wave into a RAW file\n\x09 *\n\x09 * @param ImportedSoundWave Imported sound wave to be exported\n\x09 * @param RAWFormat Required RAW format for exporting\n\x09 * @param SavePath Path to save the file\n\x09 * @param OverrideOptions Override options for the export\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "DisplayName", "Export Sound Wave To RAW File" },
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export the imported sound wave into a RAW file\n\n@param ImportedSoundWave Imported sound wave to be exported\n@param RAWFormat Required RAW format for exporting\n@param SavePath Path to save the file\n@param OverrideOptions Override options for the export\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormat_MetaData), NewProp_RAWFormat_MetaData) }; // 1579545350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms, OverrideOptions), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideOptions_MetaData), NewProp_OverrideOptions_MetaData) }; // 751039397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioExportToFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1221639410
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_ImportedSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_RAWFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_RAWFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_OverrideOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioExporter, nullptr, "ExportSoundWaveToRAWFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::RuntimeAudioExporter_eventExportSoundWaveToRAWFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioExporter::execExportSoundWaveToRAWFile)
{
	P_GET_OBJECT(UImportedSoundWave,Z_Param_ImportedSoundWave);
	P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormat);
	P_GET_STRUCT_REF(FRuntimeAudioExportOverrideOptions,Z_Param_Out_OverrideOptions);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioExporter::ExportSoundWaveToRAWFile(Z_Param_ImportedSoundWave,Z_Param_SavePath,ERuntimeRAWAudioFormat(Z_Param_RAWFormat),Z_Param_Out_OverrideOptions,FOnAudioExportToFileResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioExporter Function ExportSoundWaveToRAWFile

// Begin Class URuntimeAudioExporter
void URuntimeAudioExporter::StaticRegisterNativesURuntimeAudioExporter()
{
	UClass* Class = URuntimeAudioExporter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportSoundWaveToBuffer", &URuntimeAudioExporter::execExportSoundWaveToBuffer },
		{ "ExportSoundWaveToFile", &URuntimeAudioExporter::execExportSoundWaveToFile },
		{ "ExportSoundWaveToRAWBuffer", &URuntimeAudioExporter::execExportSoundWaveToRAWBuffer },
		{ "ExportSoundWaveToRAWFile", &URuntimeAudioExporter::execExportSoundWaveToRAWFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAudioExporter);
UClass* Z_Construct_UClass_URuntimeAudioExporter_NoRegister()
{
	return URuntimeAudioExporter::StaticClass();
}
struct Z_Construct_UClass_URuntimeAudioExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Exporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime Audio Exporter\n * Contains functions for exporting audio data to a file or a buffer\n */" },
#endif
		{ "IncludePath", "RuntimeAudioExporter.h" },
		{ "ModuleRelativePath", "Public/RuntimeAudioExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime Audio Exporter\nContains functions for exporting audio data to a file or a buffer" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToBuffer, "ExportSoundWaveToBuffer" }, // 2860223588
		{ &Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToFile, "ExportSoundWaveToFile" }, // 348485894
		{ &Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWBuffer, "ExportSoundWaveToRAWBuffer" }, // 3353743222
		{ &Z_Construct_UFunction_URuntimeAudioExporter_ExportSoundWaveToRAWFile, "ExportSoundWaveToRAWFile" }, // 3923083475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeAudioExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioExporter_Statics::ClassParams = {
	&URuntimeAudioExporter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeAudioExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeAudioExporter()
{
	if (!Z_Registration_Info_UClass_URuntimeAudioExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAudioExporter.OuterSingleton, Z_Construct_UClass_URuntimeAudioExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeAudioExporter.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeAudioExporter>()
{
	return URuntimeAudioExporter::StaticClass();
}
URuntimeAudioExporter::URuntimeAudioExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioExporter);
URuntimeAudioExporter::~URuntimeAudioExporter() {}
// End Class URuntimeAudioExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAudioExporter, URuntimeAudioExporter::StaticClass, TEXT("URuntimeAudioExporter"), &Z_Registration_Info_UClass_URuntimeAudioExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAudioExporter), 456651893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_2891287289(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
