// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/Sound/ImportedSoundWave.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportedSoundWave() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FEditableSubtitleCue();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnAudioPlaybackFinished
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast to track the end of audio playback */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast to track the end of audio playback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioPlaybackFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioPlaybackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackFinished)
{
	OnAudioPlaybackFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAudioPlaybackFinished

// Begin Delegate FOnGeneratePCMData
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms
	{
		TArray<float> PCMData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast PCM data during a generation request */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast PCM data during a generation request" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCMData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PCMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PCMData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_Inner = { "PCMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData = { "PCMData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms, PCMData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCMData_MetaData), NewProp_PCMData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnGeneratePCMData__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGeneratePCMData_DelegateWrapper(const FMulticastScriptDelegate& OnGeneratePCMData, TArray<float> const& PCMData)
{
	struct _Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms
	{
		TArray<float> PCMData;
	};
	_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms Parms;
	Parms.PCMData=PCMData;
	OnGeneratePCMData.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGeneratePCMData

// Begin Delegate FOnPrepareSoundWaveForMetaSoundsResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of preparing a sound wave for MetaSounds */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of preparing a sound wave for MetaSounds" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPrepareSoundWaveForMetaSoundsResult_DelegateWrapper(const FScriptDelegate& OnPrepareSoundWaveForMetaSoundsResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnPrepareSoundWaveForMetaSoundsResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnPrepareSoundWaveForMetaSoundsResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnPrepareSoundWaveForMetaSoundsResult

// Begin Delegate FOnPlayedAudioDataReleaseResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting the result of releasing the played audio data */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting the result of releasing the played audio data" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnPlayedAudioDataReleaseResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPlayedAudioDataReleaseResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayedAudioDataReleaseResult_DelegateWrapper(const FScriptDelegate& OnPlayedAudioDataReleaseResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnPlayedAudioDataReleaseResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnPlayedAudioDataReleaseResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayedAudioDataReleaseResult

// Begin Delegate FOnPopulateAudioData
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnPopulateAudioData_Parms
	{
		TArray<float> PopulatedAudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast newly populated PCM data */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast newly populated PCM data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PopulatedAudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PopulatedAudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PopulatedAudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::NewProp_PopulatedAudioData_Inner = { "PopulatedAudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::NewProp_PopulatedAudioData = { "PopulatedAudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnPopulateAudioData_Parms, PopulatedAudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PopulatedAudioData_MetaData), NewProp_PopulatedAudioData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::NewProp_PopulatedAudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::NewProp_PopulatedAudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnPopulateAudioData__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPopulateAudioData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnPopulateAudioData_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPopulateAudioData_DelegateWrapper(const FMulticastScriptDelegate& OnPopulateAudioData, TArray<float> const& PopulatedAudioData)
{
	struct _Script_RuntimeAudioImporter_eventOnPopulateAudioData_Parms
	{
		TArray<float> PopulatedAudioData;
	};
	_Script_RuntimeAudioImporter_eventOnPopulateAudioData_Parms Parms;
	Parms.PopulatedAudioData=PopulatedAudioData;
	OnPopulateAudioData.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPopulateAudioData

// Begin Delegate FOnPopulateAudioState
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when the PCM data is populated. Same as FOnPopulateAudioData except it doesn't broadcast the audio data */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when the PCM data is populated. Same as FOnPopulateAudioData except it doesn't broadcast the audio data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnPopulateAudioState__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPopulateAudioState_DelegateWrapper(const FMulticastScriptDelegate& OnPopulateAudioState)
{
	OnPopulateAudioState.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPopulateAudioState

// Begin Delegate FOnDuplicateSoundWave
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms
	{
		bool bSucceeded;
		UImportedSoundWave* DuplicatedSoundWave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when a sound wave is duplicated */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when a sound wave is duplicated" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DuplicatedSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::NewProp_DuplicatedSoundWave = { "DuplicatedSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms, DuplicatedSoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::NewProp_DuplicatedSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnDuplicateSoundWave__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDuplicateSoundWave_DelegateWrapper(const FScriptDelegate& OnDuplicateSoundWave, bool bSucceeded, UImportedSoundWave* DuplicatedSoundWave)
{
	struct _Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms
	{
		bool bSucceeded;
		UImportedSoundWave* DuplicatedSoundWave;
	};
	_Script_RuntimeAudioImporter_eventOnDuplicateSoundWave_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	Parms.DuplicatedSoundWave=DuplicatedSoundWave;
	OnDuplicateSoundWave.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnDuplicateSoundWave

// Begin Delegate FOnStopPlaybackResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast the result of stopping the sound wave playback */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast the result of stopping the sound wave playback" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms), &Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnStopPlaybackResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStopPlaybackResult_DelegateWrapper(const FScriptDelegate& OnStopPlaybackResult, bool bSucceeded)
{
	struct _Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeAudioImporter_eventOnStopPlaybackResult_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnStopPlaybackResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnStopPlaybackResult

// Begin Class UImportedSoundWave Function DuplicateSoundWave
struct Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics
{
	struct ImportedSoundWave_eventDuplicateSoundWave_Parms
	{
		bool bUseSharedAudioBuffer;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Duplicate the sound wave to be able to play it in parallel\n\x09 * \n\x09 * @param bUseSharedAudioBuffer Whether to use the same audio buffer for the duplicated sound wave or not\n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duplicate the sound wave to be able to play it in parallel\n\n@param bUseSharedAudioBuffer Whether to use the same audio buffer for the duplicated sound wave or not\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseSharedAudioBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSharedAudioBuffer;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::NewProp_bUseSharedAudioBuffer_SetBit(void* Obj)
{
	((ImportedSoundWave_eventDuplicateSoundWave_Parms*)Obj)->bUseSharedAudioBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::NewProp_bUseSharedAudioBuffer = { "bUseSharedAudioBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventDuplicateSoundWave_Parms), &Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::NewProp_bUseSharedAudioBuffer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventDuplicateSoundWave_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnDuplicateSoundWave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1189125587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::NewProp_bUseSharedAudioBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "DuplicateSoundWave", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::ImportedSoundWave_eventDuplicateSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::ImportedSoundWave_eventDuplicateSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execDuplicateSoundWave)
{
	P_GET_UBOOL(Z_Param_bUseSharedAudioBuffer);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DuplicateSoundWave(Z_Param_bUseSharedAudioBuffer,FOnDuplicateSoundWave(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function DuplicateSoundWave

// Begin Class UImportedSoundWave Function GetAudioFormat
struct Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics
{
	struct ImportedSoundWave_eventGetAudioFormat_Parms
	{
		ERuntimeAudioFormat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get audio format of the audio imported into the sound wave\n\x09 * @return Audio format\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get audio format of the audio imported into the sound wave\n@return Audio format" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetAudioFormat_Parms, ReturnValue), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(0, nullptr) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetAudioFormat", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::ImportedSoundWave_eventGetAudioFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::ImportedSoundWave_eventGetAudioFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetAudioFormat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERuntimeAudioFormat*)Z_Param__Result=P_THIS->GetAudioFormat();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetAudioFormat

// Begin Class UImportedSoundWave Function GetAudioHeaderInfo
struct Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics
{
	struct ImportedSoundWave_eventGetAudioHeaderInfo_Parms
	{
		FRuntimeAudioHeaderInfo HeaderInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve audio header (metadata) information. Needed primarily for consistency with the RuntimeAudioImporterLibrary\n\x09 *\n\x09 * @param HeaderInfo Header info, valid only if the return is true\n\x09 * @return Whether the retrieval was successful or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve audio header (metadata) information. Needed primarily for consistency with the RuntimeAudioImporterLibrary\n\n@param HeaderInfo Header info, valid only if the return is true\n@return Whether the retrieval was successful or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::NewProp_HeaderInfo = { "HeaderInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetAudioHeaderInfo_Parms, HeaderInfo), Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo, METADATA_PARAMS(0, nullptr) }; // 3580204948
void Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventGetAudioHeaderInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventGetAudioHeaderInfo_Parms), &Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::NewProp_HeaderInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetAudioHeaderInfo", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::ImportedSoundWave_eventGetAudioHeaderInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::ImportedSoundWave_eventGetAudioHeaderInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetAudioHeaderInfo)
{
	P_GET_STRUCT_REF(FRuntimeAudioHeaderInfo,Z_Param_Out_HeaderInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAudioHeaderInfo(Z_Param_Out_HeaderInfo);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetAudioHeaderInfo

// Begin Class UImportedSoundWave Function GetDurationConst
struct Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics
{
	struct ImportedSoundWave_eventGetDurationConst_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Constant alternative for getting the length of the sound wave, in seconds\n\x09 */" },
#endif
		{ "DisplayName", "Get Duration" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constant alternative for getting the length of the sound wave, in seconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetDurationConst_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetDurationConst", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::ImportedSoundWave_eventGetDurationConst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::ImportedSoundWave_eventGetDurationConst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetDurationConst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetDurationConst)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDurationConst();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetDurationConst

// Begin Class UImportedSoundWave Function GetNumberOfChannels
struct Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics
{
	struct ImportedSoundWave_eventGetNumberOfChannels_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get number of channels\n\x09 * Alias for GetNumOfChannels. Needed since the GetNumOfChannels function sometimes isn't exposed to Blueprints for some reason\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get number of channels\nAlias for GetNumOfChannels. Needed since the GetNumOfChannels function sometimes isn't exposed to Blueprints for some reason" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetNumberOfChannels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetNumberOfChannels", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::ImportedSoundWave_eventGetNumberOfChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::ImportedSoundWave_eventGetNumberOfChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetNumberOfChannels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfChannels();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetNumberOfChannels

// Begin Class UImportedSoundWave Function GetNumOfChannels
struct Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics
{
	struct ImportedSoundWave_eventGetNumOfChannels_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get number of channels\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get number of channels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetNumOfChannels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetNumOfChannels", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::ImportedSoundWave_eventGetNumOfChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::ImportedSoundWave_eventGetNumOfChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetNumOfChannels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumOfChannels();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetNumOfChannels

// Begin Class UImportedSoundWave Function GetPCMBufferCopy
struct Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics
{
	struct ImportedSoundWave_eventGetPCMBufferCopy_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieve the PCM buffer, completely thread-safe. Suitable for use in Blueprints\n\x09 *\n\x09 * @return PCM buffer in 32-bit float format\n\x09 */" },
#endif
		{ "DisplayName", "Get PCM Buffer" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the PCM buffer, completely thread-safe. Suitable for use in Blueprints\n\n@return PCM buffer in 32-bit float format" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPCMBufferCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPCMBufferCopy", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::ImportedSoundWave_eventGetPCMBufferCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::ImportedSoundWave_eventGetPCMBufferCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetPCMBufferCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetPCMBufferCopy();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetPCMBufferCopy

// Begin Class UImportedSoundWave Function GetPlaybackPercentage
struct Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics
{
	struct ImportedSoundWave_eventGetPlaybackPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the current sound playback percentage, 0-100%\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current sound playback percentage, 0-100%" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPlaybackPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPlaybackPercentage", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::ImportedSoundWave_eventGetPlaybackPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::ImportedSoundWave_eventGetPlaybackPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetPlaybackPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackPercentage();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetPlaybackPercentage

// Begin Class UImportedSoundWave Function GetPlaybackTime
struct Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics
{
	struct ImportedSoundWave_eventGetPlaybackTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the current sound wave playback time, in seconds\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current sound wave playback time, in seconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPlaybackTime", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::ImportedSoundWave_eventGetPlaybackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::ImportedSoundWave_eventGetPlaybackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetPlaybackTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackTime();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetPlaybackTime

// Begin Class UImportedSoundWave Function GetSampleRate
struct Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics
{
	struct ImportedSoundWave_eventGetSampleRate_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get sample rate\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get sample rate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetSampleRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetSampleRate", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::ImportedSoundWave_eventGetSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::ImportedSoundWave_eventGetSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_GetSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execGetSampleRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSampleRate();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function GetSampleRate

// Begin Class UImportedSoundWave Function IsPlaybackFinished
struct Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics
{
	struct ImportedSoundWave_eventIsPlaybackFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if audio playback has finished or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if audio playback has finished or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventIsPlaybackFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventIsPlaybackFinished_Parms), &Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "IsPlaybackFinished", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::ImportedSoundWave_eventIsPlaybackFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::ImportedSoundWave_eventIsPlaybackFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execIsPlaybackFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaybackFinished();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function IsPlaybackFinished

// Begin Class UImportedSoundWave Function IsPlaying
struct Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics
{
	struct ImportedSoundWave_eventIsPlaying_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the sound wave is currently playing by the audio device or not\n\x09 * @return Whether the sound wave is playing or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the sound wave is currently playing by the audio device or not\n@return Whether the sound wave is playing or not" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventIsPlaying_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventIsPlaying_Parms), &Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::ImportedSoundWave_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::ImportedSoundWave_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execIsPlaying)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function IsPlaying

// Begin Class UImportedSoundWave Function MixSoundWaveChannels
struct Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics
{
	struct ImportedSoundWave_eventMixSoundWaveChannels_Parms
	{
		int32 NewNumOfChannels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Change the number of channels of the sound wave\n\x09 *\n\x09 * @note This is not thread-safe at the moment\n\x09 * @param NewNumOfChannels The new number of channels\n\x09 * @return Whether the sound wave was mixed or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change the number of channels of the sound wave\n\n@note This is not thread-safe at the moment\n@param NewNumOfChannels The new number of channels\n@return Whether the sound wave was mixed or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewNumOfChannels;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::NewProp_NewNumOfChannels = { "NewNumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventMixSoundWaveChannels_Parms, NewNumOfChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventMixSoundWaveChannels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventMixSoundWaveChannels_Parms), &Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::NewProp_NewNumOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "MixSoundWaveChannels", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::ImportedSoundWave_eventMixSoundWaveChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::ImportedSoundWave_eventMixSoundWaveChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execMixSoundWaveChannels)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewNumOfChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MixSoundWaveChannels(Z_Param_NewNumOfChannels);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function MixSoundWaveChannels

// Begin Class UImportedSoundWave Function PrepareSoundWaveForMetaSounds
struct Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics
{
	struct ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms
	{
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|MetaSounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prepare this sound wave to be able to set wave parameter for MetaSounds\n\x09 * \n\x09 * @param Result Delegate broadcasting the result. Set the wave parameter only after it has been broadcast\n\x09 * @warning This works if bEnableMetaSoundSupport is enabled in RuntimeAudioImporter.Build.cs/RuntimeAudioImporterEditor.Build.cs and only on Unreal Engine version >= 5.2\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepare this sound wave to be able to set wave parameter for MetaSounds\n\n@param Result Delegate broadcasting the result. Set the wave parameter only after it has been broadcast\n@warning This works if bEnableMetaSoundSupport is enabled in RuntimeAudioImporter.Build.cs/RuntimeAudioImporterEditor.Build.cs and only on Unreal Engine version >= 5.2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPrepareSoundWaveForMetaSoundsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 950518790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "PrepareSoundWaveForMetaSounds", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::ImportedSoundWave_eventPrepareSoundWaveForMetaSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execPrepareSoundWaveForMetaSounds)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareSoundWaveForMetaSounds(FOnPrepareSoundWaveForMetaSoundsResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function PrepareSoundWaveForMetaSounds

// Begin Class UImportedSoundWave Function ReleaseMemory
struct Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Miscellaneous" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Release sound wave data. Call it manually only if you are sure of it\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release sound wave data. Call it manually only if you are sure of it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "ReleaseMemory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execReleaseMemory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseMemory();
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function ReleaseMemory

// Begin Class UImportedSoundWave Function ResampleSoundWave
struct Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics
{
	struct ImportedSoundWave_eventResampleSoundWave_Parms
	{
		int32 NewSampleRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resample the sound wave to the specified sample rate\n\x09 *\n\x09 * @note This is not thread-safe at the moment\n\x09 * @param NewSampleRate The new sample rate\n\x09 * @return Whether the sound wave was resampled or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resample the sound wave to the specified sample rate\n\n@note This is not thread-safe at the moment\n@param NewSampleRate The new sample rate\n@return Whether the sound wave was resampled or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSampleRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::NewProp_NewSampleRate = { "NewSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventResampleSoundWave_Parms, NewSampleRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventResampleSoundWave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventResampleSoundWave_Parms), &Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::NewProp_NewSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "ResampleSoundWave", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::ImportedSoundWave_eventResampleSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::ImportedSoundWave_eventResampleSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execResampleSoundWave)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResampleSoundWave(Z_Param_NewSampleRate);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function ResampleSoundWave

// Begin Class UImportedSoundWave Function RewindPlaybackTime
struct Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics
{
	struct ImportedSoundWave_eventRewindPlaybackTime_Parms
	{
		float PlaybackTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Rewind the sound for the specified time\n\x09 *\n\x09 * @param PlaybackTime How long to rewind the sound\n\x09 * @return Whether the sound was rewound or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rewind the sound for the specified time\n\n@param PlaybackTime How long to rewind the sound\n@return Whether the sound was rewound or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventRewindPlaybackTime_Parms, PlaybackTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventRewindPlaybackTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventRewindPlaybackTime_Parms), &Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "RewindPlaybackTime", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::ImportedSoundWave_eventRewindPlaybackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::ImportedSoundWave_eventRewindPlaybackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execRewindPlaybackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RewindPlaybackTime(Z_Param_PlaybackTime);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function RewindPlaybackTime

// Begin Class UImportedSoundWave Function SetInitialDesiredNumOfChannels
struct Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics
{
	struct ImportedSoundWave_eventSetInitialDesiredNumOfChannels_Parms
	{
		int32 DesiredNumOfChannels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the initial desired number of channels of the sound wave\n\x09 * The sound wave PCM data will always contain this number of channels after the sound wave is populated with audio data\n\x09 *\n\x09 * @note This should be called before the sound wave is populated with any audio data\n\x09 * @param DesiredNumOfChannels The initial desired number of channels\n\x09 * @return Whether the initial desired number of channels was set or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the initial desired number of channels of the sound wave\nThe sound wave PCM data will always contain this number of channels after the sound wave is populated with audio data\n\n@note This should be called before the sound wave is populated with any audio data\n@param DesiredNumOfChannels The initial desired number of channels\n@return Whether the initial desired number of channels was set or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredNumOfChannels;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::NewProp_DesiredNumOfChannels = { "DesiredNumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetInitialDesiredNumOfChannels_Parms, DesiredNumOfChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventSetInitialDesiredNumOfChannels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventSetInitialDesiredNumOfChannels_Parms), &Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::NewProp_DesiredNumOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetInitialDesiredNumOfChannels", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::ImportedSoundWave_eventSetInitialDesiredNumOfChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::ImportedSoundWave_eventSetInitialDesiredNumOfChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execSetInitialDesiredNumOfChannels)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredNumOfChannels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInitialDesiredNumOfChannels(Z_Param_DesiredNumOfChannels);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function SetInitialDesiredNumOfChannels

// Begin Class UImportedSoundWave Function SetInitialDesiredSampleRate
struct Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics
{
	struct ImportedSoundWave_eventSetInitialDesiredSampleRate_Parms
	{
		int32 DesiredSampleRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the initial desired sample rate of the sound wave\n\x09 * The sound wave PCM data will always contain this sample rate after the sound wave is populated with audio data\n\x09 *\n\x09 * @note This should be called before the sound wave is populated with any audio data\n\x09 * @param DesiredSampleRate The initial desired sample rate\n\x09 * @return Whether the initial desired sample rate was set or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the initial desired sample rate of the sound wave\nThe sound wave PCM data will always contain this sample rate after the sound wave is populated with audio data\n\n@note This should be called before the sound wave is populated with any audio data\n@param DesiredSampleRate The initial desired sample rate\n@return Whether the initial desired sample rate was set or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetInitialDesiredSampleRate_Parms, DesiredSampleRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ImportedSoundWave_eventSetInitialDesiredSampleRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventSetInitialDesiredSampleRate_Parms), &Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::NewProp_DesiredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetInitialDesiredSampleRate", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::ImportedSoundWave_eventSetInitialDesiredSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::ImportedSoundWave_eventSetInitialDesiredSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execSetInitialDesiredSampleRate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInitialDesiredSampleRate(Z_Param_DesiredSampleRate);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function SetInitialDesiredSampleRate

// Begin Class UImportedSoundWave Function SetLooping
struct Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics
{
	struct ImportedSoundWave_eventSetLooping_Parms
	{
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set whether the sound should loop or not\n\x09 *\n\x09 * @param bLoop Whether the sound should loop or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the sound should loop or not\n\n@param bLoop Whether the sound should loop or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((ImportedSoundWave_eventSetLooping_Parms*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ImportedSoundWave_eventSetLooping_Parms), &Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::ImportedSoundWave_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::ImportedSoundWave_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execSetLooping)
{
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_bLoop);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function SetLooping

// Begin Class UImportedSoundWave Function SetPitch
struct Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics
{
	struct ImportedSoundWave_eventSetPitch_Parms
	{
		float InPitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set sound playback pitch\n\x09 *\n\x09 * @param InPitch Pitch\n\x09 */" },
#endif
		{ "CPP_Default_InPitch", "1.000000" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set sound playback pitch\n\n@param InPitch Pitch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPitch_MetaData[] = {
		{ "DisplayName", "Pitch" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch = { "InPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetPitch_Parms, InPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPitch_MetaData), NewProp_InPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::NewProp_InPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetPitch", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::ImportedSoundWave_eventSetPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::ImportedSoundWave_eventSetPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_SetPitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetPitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execSetPitch)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPitch(Z_Param_InPitch);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function SetPitch

// Begin Class UImportedSoundWave Function SetSubtitles
struct Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics
{
	struct ImportedSoundWave_eventSetSubtitles_Parms
	{
		TArray<FEditableSubtitleCue> InSubtitles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set subtitle cues\n\x09 *\n\x09 * @param InSubtitles Subtitles cues\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set subtitle cues\n\n@param InSubtitles Subtitles cues" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSubtitles_MetaData[] = {
		{ "DisplayName", "Subtitles" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSubtitles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSubtitles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_Inner = { "InSubtitles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditableSubtitleCue, METADATA_PARAMS(0, nullptr) }; // 1285967538
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles = { "InSubtitles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetSubtitles_Parms, InSubtitles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSubtitles_MetaData), NewProp_InSubtitles_MetaData) }; // 1285967538
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::NewProp_InSubtitles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetSubtitles", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::ImportedSoundWave_eventSetSubtitles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::ImportedSoundWave_eventSetSubtitles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_SetSubtitles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetSubtitles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execSetSubtitles)
{
	P_GET_TARRAY_REF(FEditableSubtitleCue,Z_Param_Out_InSubtitles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitles(Z_Param_Out_InSubtitles);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function SetSubtitles

// Begin Class UImportedSoundWave Function SetVolume
struct Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics
{
	struct ImportedSoundWave_eventSetVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set sound playback volume\n\x09 *\n\x09 * @param InVolume Volume\n\x09 */" },
#endif
		{ "CPP_Default_InVolume", "1.000000" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set sound playback volume\n\n@param InVolume Volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVolume_MetaData[] = {
		{ "DisplayName", "Volume" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventSetVolume_Parms, InVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVolume_MetaData), NewProp_InVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "SetVolume", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::ImportedSoundWave_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::ImportedSoundWave_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function SetVolume

// Begin Class UImportedSoundWave Function StopPlayback
struct Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics
{
	struct ImportedSoundWave_eventStopPlayback_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the sound wave playback\n\x09 * \n\x09 * @note It is recommended to stop the sound wave playback using external means (e.g., by calling Stop on the audio component) and to use this function only if external means are not available\n\x09 * @warning This function does not work for playback from MetaSounds\n\x09 * @return Whether the sound wave was stopped or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the sound wave playback\n\n@note It is recommended to stop the sound wave playback using external means (e.g., by calling Stop on the audio component) and to use this function only if external means are not available\n@warning This function does not work for playback from MetaSounds\n@return Whether the sound wave was stopped or not" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventStopPlayback_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImportedSoundWave_eventStopPlayback_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnStopPlaybackResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 194520890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "StopPlayback", nullptr, nullptr, Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::ImportedSoundWave_eventStopPlayback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::ImportedSoundWave_eventStopPlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImportedSoundWave_StopPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_StopPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImportedSoundWave::execStopPlayback)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlayback(Z_Param_WorldContextObject,FOnStopPlaybackResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UImportedSoundWave Function StopPlayback

// Begin Class UImportedSoundWave
void UImportedSoundWave::StaticRegisterNativesUImportedSoundWave()
{
	UClass* Class = UImportedSoundWave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DuplicateSoundWave", &UImportedSoundWave::execDuplicateSoundWave },
		{ "GetAudioFormat", &UImportedSoundWave::execGetAudioFormat },
		{ "GetAudioHeaderInfo", &UImportedSoundWave::execGetAudioHeaderInfo },
		{ "GetDurationConst", &UImportedSoundWave::execGetDurationConst },
		{ "GetNumberOfChannels", &UImportedSoundWave::execGetNumberOfChannels },
		{ "GetNumOfChannels", &UImportedSoundWave::execGetNumOfChannels },
		{ "GetPCMBufferCopy", &UImportedSoundWave::execGetPCMBufferCopy },
		{ "GetPlaybackPercentage", &UImportedSoundWave::execGetPlaybackPercentage },
		{ "GetPlaybackTime", &UImportedSoundWave::execGetPlaybackTime },
		{ "GetSampleRate", &UImportedSoundWave::execGetSampleRate },
		{ "IsPlaybackFinished", &UImportedSoundWave::execIsPlaybackFinished },
		{ "IsPlaying", &UImportedSoundWave::execIsPlaying },
		{ "MixSoundWaveChannels", &UImportedSoundWave::execMixSoundWaveChannels },
		{ "PrepareSoundWaveForMetaSounds", &UImportedSoundWave::execPrepareSoundWaveForMetaSounds },
		{ "ReleaseMemory", &UImportedSoundWave::execReleaseMemory },
		{ "ResampleSoundWave", &UImportedSoundWave::execResampleSoundWave },
		{ "RewindPlaybackTime", &UImportedSoundWave::execRewindPlaybackTime },
		{ "SetInitialDesiredNumOfChannels", &UImportedSoundWave::execSetInitialDesiredNumOfChannels },
		{ "SetInitialDesiredSampleRate", &UImportedSoundWave::execSetInitialDesiredSampleRate },
		{ "SetLooping", &UImportedSoundWave::execSetLooping },
		{ "SetPitch", &UImportedSoundWave::execSetPitch },
		{ "SetSubtitles", &UImportedSoundWave::execSetSubtitles },
		{ "SetVolume", &UImportedSoundWave::execSetVolume },
		{ "StopPlayback", &UImportedSoundWave::execStopPlayback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportedSoundWave);
UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister()
{
	return UImportedSoundWave::StaticClass();
}
struct Z_Construct_UClass_UImportedSoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Imported Sound Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Imported sound wave. Assumed to be dynamically populated once from the decoded audio data.\n * Accumulates audio data in 32-bit interleaved floating-point format.\n * Only a single playback is supported at a time (see DuplicateSoundWave for parallel playback)\n * Audio data preparation takes place in the Runtime Audio Importer library\n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/ImportedSoundWave.h" },
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Imported sound wave. Assumed to be dynamically populated once from the decoded audio data.\nAccumulates audio data in 32-bit interleaved floating-point format.\nOnly a single playback is supported at a time (see DuplicateSoundWave for parallel playback)\nAudio data preparation takes place in the Runtime Audio Importer library" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackFinished_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind to this delegate to know when the audio playback is finished */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind to this delegate to know when the audio playback is finished" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGeneratePCMData_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data) */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPopulateAudioData_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind to this delegate to obtain audio data every time it is populated */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind to this delegate to obtain audio data every time it is populated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPopulateAudioState_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind to this delegate to know when the audio data is populated. Same as OnPopulateAudioData except it doesn't broadcast the audio data */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/ImportedSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind to this delegate to know when the audio data is populated. Same as OnPopulateAudioData except it doesn't broadcast the audio data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGeneratePCMData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPopulateAudioData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPopulateAudioState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImportedSoundWave_DuplicateSoundWave, "DuplicateSoundWave" }, // 2027767127
		{ &Z_Construct_UFunction_UImportedSoundWave_GetAudioFormat, "GetAudioFormat" }, // 484795613
		{ &Z_Construct_UFunction_UImportedSoundWave_GetAudioHeaderInfo, "GetAudioHeaderInfo" }, // 3267426620
		{ &Z_Construct_UFunction_UImportedSoundWave_GetDurationConst, "GetDurationConst" }, // 1548157161
		{ &Z_Construct_UFunction_UImportedSoundWave_GetNumberOfChannels, "GetNumberOfChannels" }, // 936056970
		{ &Z_Construct_UFunction_UImportedSoundWave_GetNumOfChannels, "GetNumOfChannels" }, // 2602095536
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPCMBufferCopy, "GetPCMBufferCopy" }, // 1321249719
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage, "GetPlaybackPercentage" }, // 1921377477
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime, "GetPlaybackTime" }, // 979290152
		{ &Z_Construct_UFunction_UImportedSoundWave_GetSampleRate, "GetSampleRate" }, // 1864492580
		{ &Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished, "IsPlaybackFinished" }, // 627863519
		{ &Z_Construct_UFunction_UImportedSoundWave_IsPlaying, "IsPlaying" }, // 270569219
		{ &Z_Construct_UFunction_UImportedSoundWave_MixSoundWaveChannels, "MixSoundWaveChannels" }, // 3363678527
		{ &Z_Construct_UFunction_UImportedSoundWave_PrepareSoundWaveForMetaSounds, "PrepareSoundWaveForMetaSounds" }, // 3639112975
		{ &Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory, "ReleaseMemory" }, // 638376962
		{ &Z_Construct_UFunction_UImportedSoundWave_ResampleSoundWave, "ResampleSoundWave" }, // 246909526
		{ &Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime, "RewindPlaybackTime" }, // 1554075138
		{ &Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredNumOfChannels, "SetInitialDesiredNumOfChannels" }, // 4058994640
		{ &Z_Construct_UFunction_UImportedSoundWave_SetInitialDesiredSampleRate, "SetInitialDesiredSampleRate" }, // 365839422
		{ &Z_Construct_UFunction_UImportedSoundWave_SetLooping, "SetLooping" }, // 2948302912
		{ &Z_Construct_UFunction_UImportedSoundWave_SetPitch, "SetPitch" }, // 1378751581
		{ &Z_Construct_UFunction_UImportedSoundWave_SetSubtitles, "SetSubtitles" }, // 3504834603
		{ &Z_Construct_UFunction_UImportedSoundWave_SetVolume, "SetVolume" }, // 1441702410
		{ &Z_Construct_UFunction_UImportedSoundWave_StopPlayback, "StopPlayback" }, // 780338131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportedSoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished = { "OnAudioPlaybackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImportedSoundWave, OnAudioPlaybackFinished), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioPlaybackFinished_MetaData), NewProp_OnAudioPlaybackFinished_MetaData) }; // 140355513
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData = { "OnGeneratePCMData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImportedSoundWave, OnGeneratePCMData), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGeneratePCMData_MetaData), NewProp_OnGeneratePCMData_MetaData) }; // 1732267260
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnPopulateAudioData = { "OnPopulateAudioData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImportedSoundWave, OnPopulateAudioData), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPopulateAudioData_MetaData), NewProp_OnPopulateAudioData_MetaData) }; // 2266679349
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnPopulateAudioState = { "OnPopulateAudioState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImportedSoundWave, OnPopulateAudioState), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnPopulateAudioState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPopulateAudioState_MetaData), NewProp_OnPopulateAudioState_MetaData) }; // 2782242963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnPopulateAudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnPopulateAudioState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImportedSoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportedSoundWave_Statics::ClassParams = {
	&UImportedSoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers),
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImportedSoundWave()
{
	if (!Z_Registration_Info_UClass_UImportedSoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportedSoundWave.OuterSingleton, Z_Construct_UClass_UImportedSoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImportedSoundWave.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UImportedSoundWave>()
{
	return UImportedSoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImportedSoundWave);
UImportedSoundWave::~UImportedSoundWave() {}
// End Class UImportedSoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImportedSoundWave, UImportedSoundWave::StaticClass, TEXT("UImportedSoundWave"), &Z_Registration_Info_UClass_UImportedSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportedSoundWave), 2218834292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_769429072(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
