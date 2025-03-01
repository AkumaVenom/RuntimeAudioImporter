// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioImporterLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnAudioImporterProgress
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms
	{
		int32 Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the audio importer progress */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the audio importer progress" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioImporterProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioImporterProgress_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterProgress, int32 Percentage)
{
	struct _Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms
	{
		int32 Percentage;
	};
	_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms Parms;
	Parms.Percentage=Percentage;
	OnAudioImporterProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioImporterProgress

// Begin Delegate FOnAudioImporterResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms
	{
		URuntimeAudioImporterLibrary* Importer;
		UImportedSoundWave* ImportedSoundWave;
		ERuntimeImportStatus Status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the audio importer result */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the audio importer result" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Importer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Importer = { "Importer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, Importer), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, Status), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus, METADATA_PARAMS(0, nullptr) }; // 682036833
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Importer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_ImportedSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioImporterResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioImporterResult_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterResult, URuntimeAudioImporterLibrary* Importer, UImportedSoundWave* ImportedSoundWave, ERuntimeImportStatus Status)
{
	struct _Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms
	{
		URuntimeAudioImporterLibrary* Importer;
		UImportedSoundWave* ImportedSoundWave;
		ERuntimeImportStatus Status;
	};
	_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms Parms;
	Parms.Importer=Importer;
	Parms.ImportedSoundWave=ImportedSoundWave;
	Parms.Status=Status;
	OnAudioImporterResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioImporterResult

// Begin Delegate FOnRegularToAudioImporterSoundWaveConvertResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms
	{
		bool bSucceeded;
		UImportedSoundWave* ImportedSoundWave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of the conversion from SoundWave to ImportedSoundWave */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of the conversion from SoundWave to ImportedSoundWave" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::NewProp_ImportedSoundWave = { "ImportedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms, ImportedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::NewProp_ImportedSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRegularToAudioImporterSoundWaveConvertResult_DelegateWrapper(const FScriptDelegate& OnRegularToAudioImporterSoundWaveConvertResult, bool bSucceeded, UImportedSoundWave* ImportedSoundWave)
{
	struct _Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms
	{
		bool bSucceeded;
		UImportedSoundWave* ImportedSoundWave;
	};
	_Script_RuntimeAudioImporter_eventOnRegularToAudioImporterSoundWaveConvertResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.ImportedSoundWave=ImportedSoundWave;
	OnRegularToAudioImporterSoundWaveConvertResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRegularToAudioImporterSoundWaveConvertResult

// Begin Class URuntimeAudioImporterLibrary Function ConvertRegularToImportedSoundWave
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics
{
	struct RuntimeAudioImporterLibrary_eventConvertRegularToImportedSoundWave_Parms
	{
		USoundWave* SoundWave;
		TSubclassOf<UImportedSoundWave> ImportedSoundWaveClass;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Convert" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts a regular SoundWave to an inherited sound wave of type ImportedSoundWave used in RuntimeAudioImporter\n\x09 * Experimental feature, use with caution\n\x09 *\n\x09 * @param SoundWave The regular USoundWave to convert\n\x09 * @param ImportedSoundWaveClass The subclass of UImportedSoundWave to create and convert to\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a regular SoundWave to an inherited sound wave of type ImportedSoundWave used in RuntimeAudioImporter\nExperimental feature, use with caution\n\n@param SoundWave The regular USoundWave to convert\n@param ImportedSoundWaveClass The subclass of UImportedSoundWave to create and convert to\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImportedSoundWaveClass;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventConvertRegularToImportedSoundWave_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::NewProp_ImportedSoundWaveClass = { "ImportedSoundWaveClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventConvertRegularToImportedSoundWave_Parms, ImportedSoundWaveClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventConvertRegularToImportedSoundWave_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnRegularToAudioImporterSoundWaveConvertResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3843911968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::NewProp_SoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::NewProp_ImportedSoundWaveClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ConvertRegularToImportedSoundWave", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::RuntimeAudioImporterLibrary_eventConvertRegularToImportedSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::RuntimeAudioImporterLibrary_eventConvertRegularToImportedSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execConvertRegularToImportedSoundWave)
{
	P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
	P_GET_OBJECT(UClass,Z_Param_ImportedSoundWaveClass);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	URuntimeAudioImporterLibrary::ConvertRegularToImportedSoundWave(Z_Param_SoundWave,Z_Param_ImportedSoundWaveClass,FOnRegularToAudioImporterSoundWaveConvertResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function ConvertRegularToImportedSoundWave

// Begin Class URuntimeAudioImporterLibrary Function CreateRuntimeAudioImporter
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics
{
	struct RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms
	{
		URuntimeAudioImporterLibrary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Instantiate a RuntimeAudioImporter object\n\x09 *\n\x09 * @return The RuntimeAudioImporter object. Bind to it's OnProgress and OnResult delegates\n\x09 */" },
#endif
		{ "Keywords", "Create, Audio, Runtime, MP3, FLAC, WAV, OGG, Vorbis" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiate a RuntimeAudioImporter object\n\n@return The RuntimeAudioImporter object. Bind to it's OnProgress and OnResult delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms, ReturnValue), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "CreateRuntimeAudioImporter", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execCreateRuntimeAudioImporter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URuntimeAudioImporterLibrary**)Z_Param__Result=URuntimeAudioImporterLibrary::CreateRuntimeAudioImporter();
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function CreateRuntimeAudioImporter

// Begin Class URuntimeAudioImporterLibrary Function ImportAudioFromBuffer
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics
{
	struct RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms
	{
		TArray<uint8> AudioData;
		ERuntimeAudioFormat AudioFormat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Import audio from a buffer\n\x09 *\n\x09 * @param AudioData Audio data array\n\x09 * @param AudioFormat Audio format\n\x09 */" },
#endif
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis, BINK" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import audio from a buffer\n\n@param AudioData Audio data array\n@param AudioFormat Audio format" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::NewProp_AudioFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromBuffer)
{
	P_GET_TARRAY(uint8,Z_Param_AudioData);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_AudioFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportAudioFromBuffer(Z_Param_AudioData,ERuntimeAudioFormat(Z_Param_AudioFormat));
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function ImportAudioFromBuffer

// Begin Class URuntimeAudioImporterLibrary Function ImportAudioFromFile
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics
{
	struct RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms
	{
		FString FilePath;
		ERuntimeAudioFormat AudioFormat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Import audio from a file\n\x09 *\n\x09 * @param FilePath Path to the audio file to import\n\x09 * @param AudioFormat Audio format\n\x09 */" },
#endif
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import audio from a file\n\n@param FilePath Path to the audio file to import\n@param AudioFormat Audio format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_AudioFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_ENUM(ERuntimeAudioFormat,Z_Param_AudioFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportAudioFromFile(Z_Param_FilePath,ERuntimeAudioFormat(Z_Param_AudioFormat));
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function ImportAudioFromFile

// Begin Class URuntimeAudioImporterLibrary Function ImportAudioFromPreImportedSound
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics
{
	struct RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms
	{
		UPreImportedSoundAsset* PreImportedSoundAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Import audio from a pre-imported sound asset\n\x09 *\n\x09 * @param PreImportedSoundAsset PreImportedSoundAsset object reference\n\x09 */" },
#endif
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV, OGG, Vorbis, BINK" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import audio from a pre-imported sound asset\n\n@param PreImportedSoundAsset PreImportedSoundAsset object reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreImportedSoundAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::NewProp_PreImportedSoundAsset = { "PreImportedSoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms, PreImportedSoundAsset), Z_Construct_UClass_UPreImportedSoundAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::NewProp_PreImportedSoundAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromPreImportedSound", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromPreImportedSound)
{
	P_GET_OBJECT(UPreImportedSoundAsset,Z_Param_PreImportedSoundAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportAudioFromPreImportedSound(Z_Param_PreImportedSoundAsset);
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function ImportAudioFromPreImportedSound

// Begin Class URuntimeAudioImporterLibrary Function ImportAudioFromRAWBuffer
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics
{
	struct RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms
	{
		TArray<uint8> RAWBuffer;
		ERuntimeRAWAudioFormat RAWFormat;
		int32 SampleRate;
		int32 NumOfChannels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Import audio from a RAW buffer. The audio data must not have headers and must be uncompressed\n\x09 *\n\x09 * @param RAWBuffer RAW audio buffer\n\x09 * @param RAWFormat RAW audio format\n\x09 * @param SampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
#endif
		{ "CPP_Default_NumOfChannels", "1" },
		{ "CPP_Default_SampleRate", "44100" },
		{ "DisplayName", "Import Audio From RAW Buffer" },
		{ "Keywords", "PCM, RAW" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import audio from a RAW buffer. The audio data must not have headers and must be uncompressed\n\n@param RAWBuffer RAW audio buffer\n@param RAWFormat RAW audio format\n@param SampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWBuffer_MetaData[] = {
		{ "DisplayName", "RAW Buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RAWBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_Inner = { "RAWBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer = { "RAWBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, RAWBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWBuffer_MetaData), NewProp_RAWBuffer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormat_MetaData), NewProp_RAWFormat_MetaData) }; // 1579545350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, NumOfChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromRAWBuffer", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromRAWBuffer)
{
	P_GET_TARRAY(uint8,Z_Param_RAWBuffer);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormat);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportAudioFromRAWBuffer(Z_Param_RAWBuffer,ERuntimeRAWAudioFormat(Z_Param_RAWFormat),Z_Param_SampleRate,Z_Param_NumOfChannels);
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function ImportAudioFromRAWBuffer

// Begin Class URuntimeAudioImporterLibrary Function ImportAudioFromRAWFile
struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics
{
	struct RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms
	{
		FString FilePath;
		ERuntimeRAWAudioFormat RAWFormat;
		int32 SampleRate;
		int32 NumOfChannels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Import audio from a RAW file. The audio data must not have headers and must be uncompressed\n\x09 *\n\x09 * @param FilePath Path to the audio file to import\n\x09 * @param RAWFormat RAW audio format\n\x09 * @param SampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
#endif
		{ "CPP_Default_NumOfChannels", "1" },
		{ "CPP_Default_SampleRate", "44100" },
		{ "DisplayName", "Import Audio From RAW File" },
		{ "Keywords", "PCM, RAW" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import audio from a RAW file. The audio data must not have headers and must be uncompressed\n\n@param FilePath Path to the audio file to import\n@param RAWFormat RAW audio format\n@param SampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAWFormat_MetaData[] = {
		{ "DisplayName", "RAW Format" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RAWFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RAWFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat = { "RAWFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, RAWFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAWFormat_MetaData), NewProp_RAWFormat_MetaData) }; // 1579545350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, NumOfChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_RAWFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromRAWFile", nullptr, nullptr, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromRAWFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_ENUM(ERuntimeRAWAudioFormat,Z_Param_RAWFormat);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportAudioFromRAWFile(Z_Param_FilePath,ERuntimeRAWAudioFormat(Z_Param_RAWFormat),Z_Param_SampleRate,Z_Param_NumOfChannels);
	P_NATIVE_END;
}
// End Class URuntimeAudioImporterLibrary Function ImportAudioFromRAWFile

// Begin Class URuntimeAudioImporterLibrary
void URuntimeAudioImporterLibrary::StaticRegisterNativesURuntimeAudioImporterLibrary()
{
	UClass* Class = URuntimeAudioImporterLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertRegularToImportedSoundWave", &URuntimeAudioImporterLibrary::execConvertRegularToImportedSoundWave },
		{ "CreateRuntimeAudioImporter", &URuntimeAudioImporterLibrary::execCreateRuntimeAudioImporter },
		{ "ImportAudioFromBuffer", &URuntimeAudioImporterLibrary::execImportAudioFromBuffer },
		{ "ImportAudioFromFile", &URuntimeAudioImporterLibrary::execImportAudioFromFile },
		{ "ImportAudioFromPreImportedSound", &URuntimeAudioImporterLibrary::execImportAudioFromPreImportedSound },
		{ "ImportAudioFromRAWBuffer", &URuntimeAudioImporterLibrary::execImportAudioFromRAWBuffer },
		{ "ImportAudioFromRAWFile", &URuntimeAudioImporterLibrary::execImportAudioFromRAWFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAudioImporterLibrary);
UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister()
{
	return URuntimeAudioImporterLibrary::StaticClass();
}
struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime Audio Importer library\n * Various functions related to working with audio data, including importing audio files, manually encoding and decoding audio data, and more\n */" },
#endif
		{ "IncludePath", "RuntimeAudioImporterLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime Audio Importer library\nVarious functions related to working with audio data, including importing audio files, manually encoding and decoding audio data, and more" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "Category", "Runtime Audio Importer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind to know when audio import is on progress */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind to know when audio import is on progress" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[] = {
		{ "Category", "Runtime Audio Importer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind to know when audio import is complete (even if it fails) */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind to know when audio import is complete (even if it fails)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ConvertRegularToImportedSoundWave, "ConvertRegularToImportedSoundWave" }, // 3055456718
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter, "CreateRuntimeAudioImporter" }, // 3803676670
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer, "ImportAudioFromBuffer" }, // 1175426002
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile, "ImportAudioFromFile" }, // 127645473
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound, "ImportAudioFromPreImportedSound" }, // 4254947571
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer, "ImportAudioFromRAWBuffer" }, // 4034466038
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile, "ImportAudioFromRAWFile" }, // 1336193684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioImporterLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeAudioImporterLibrary, OnProgress), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 1083234362
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeAudioImporterLibrary, OnResult), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResult_MetaData), NewProp_OnResult_MetaData) }; // 579143853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::ClassParams = {
	&URuntimeAudioImporterLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary()
{
	if (!Z_Registration_Info_UClass_URuntimeAudioImporterLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAudioImporterLibrary.OuterSingleton, Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeAudioImporterLibrary.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeAudioImporterLibrary>()
{
	return URuntimeAudioImporterLibrary::StaticClass();
}
URuntimeAudioImporterLibrary::URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioImporterLibrary);
URuntimeAudioImporterLibrary::~URuntimeAudioImporterLibrary() {}
// End Class URuntimeAudioImporterLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAudioImporterLibrary, URuntimeAudioImporterLibrary::StaticClass, TEXT("URuntimeAudioImporterLibrary"), &Z_Registration_Info_UClass_URuntimeAudioImporterLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAudioImporterLibrary), 375129688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_2785159369(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
