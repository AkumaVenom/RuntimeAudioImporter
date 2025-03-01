// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioImporterTypes() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedSoundWaveInfo();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FEditableSubtitleCue();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Enum ERuntimeImportStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeImportStatus;
static UEnum* ERuntimeImportStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeImportStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeImportStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ERuntimeImportStatus"));
	}
	return Z_Registration_Info_UEnum_ERuntimeImportStatus.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeImportStatus>()
{
	return ERuntimeImportStatus_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AudioDoesNotExist.Comment", "/** The audio file does not exist */" },
		{ "AudioDoesNotExist.DisplayName", "Audio does not exist" },
		{ "AudioDoesNotExist.Name", "ERuntimeImportStatus::AudioDoesNotExist" },
		{ "AudioDoesNotExist.ToolTip", "The audio file does not exist" },
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Possible audio importing results */" },
#endif
		{ "FailedToReadAudioDataArray.Comment", "/** Failed to read Audio Data Array */" },
		{ "FailedToReadAudioDataArray.DisplayName", "Failed to read Audio Data Array" },
		{ "FailedToReadAudioDataArray.Name", "ERuntimeImportStatus::FailedToReadAudioDataArray" },
		{ "FailedToReadAudioDataArray.ToolTip", "Failed to read Audio Data Array" },
		{ "InvalidAudioFormat.Comment", "/** Invalid audio format (Can't determine the format of the audio file) */" },
		{ "InvalidAudioFormat.DisplayName", "Invalid audio format" },
		{ "InvalidAudioFormat.Name", "ERuntimeImportStatus::InvalidAudioFormat" },
		{ "InvalidAudioFormat.ToolTip", "Invalid audio format (Can't determine the format of the audio file)" },
		{ "LoadFileToArrayError.Comment", "/** Load file to array error */" },
		{ "LoadFileToArrayError.DisplayName", "Load file to array error" },
		{ "LoadFileToArrayError.Name", "ERuntimeImportStatus::LoadFileToArrayError" },
		{ "LoadFileToArrayError.ToolTip", "Load file to array error" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "SoundWaveDeclarationError.Comment", "/** SoundWave declaration error */" },
		{ "SoundWaveDeclarationError.DisplayName", "SoundWave declaration error" },
		{ "SoundWaveDeclarationError.Name", "ERuntimeImportStatus::SoundWaveDeclarationError" },
		{ "SoundWaveDeclarationError.ToolTip", "SoundWave declaration error" },
		{ "SuccessfulImport.Comment", "/** Successful import */" },
		{ "SuccessfulImport.DisplayName", "Success" },
		{ "SuccessfulImport.Name", "ERuntimeImportStatus::SuccessfulImport" },
		{ "SuccessfulImport.ToolTip", "Successful import" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible audio importing results" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimeImportStatus::SuccessfulImport", (int64)ERuntimeImportStatus::SuccessfulImport },
		{ "ERuntimeImportStatus::FailedToReadAudioDataArray", (int64)ERuntimeImportStatus::FailedToReadAudioDataArray },
		{ "ERuntimeImportStatus::SoundWaveDeclarationError", (int64)ERuntimeImportStatus::SoundWaveDeclarationError },
		{ "ERuntimeImportStatus::InvalidAudioFormat", (int64)ERuntimeImportStatus::InvalidAudioFormat },
		{ "ERuntimeImportStatus::AudioDoesNotExist", (int64)ERuntimeImportStatus::AudioDoesNotExist },
		{ "ERuntimeImportStatus::LoadFileToArrayError", (int64)ERuntimeImportStatus::LoadFileToArrayError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	"ERuntimeImportStatus",
	"ERuntimeImportStatus",
	Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus()
{
	if (!Z_Registration_Info_UEnum_ERuntimeImportStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeImportStatus.InnerSingleton, Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeImportStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeImportStatus.InnerSingleton;
}
// End Enum ERuntimeImportStatus

// Begin Enum ERuntimeAudioFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeAudioFormat;
static UEnum* ERuntimeAudioFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeAudioFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeAudioFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ERuntimeAudioFormat"));
	}
	return Z_Registration_Info_UEnum_ERuntimeAudioFormat.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeAudioFormat>()
{
	return ERuntimeAudioFormat_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Determine format automatically" },
		{ "Auto.Name", "ERuntimeAudioFormat::Auto" },
		{ "Bink.DisplayName", "bink" },
		{ "Bink.Name", "ERuntimeAudioFormat::Bink" },
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Possible audio formats (extensions) */" },
#endif
		{ "Custom.DisplayName", "custom" },
		{ "Custom.Name", "ERuntimeAudioFormat::Custom" },
		{ "Flac.DisplayName", "flac" },
		{ "Flac.Name", "ERuntimeAudioFormat::Flac" },
		{ "Invalid.DisplayName", "invalid" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ERuntimeAudioFormat::Invalid" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "Mp3.DisplayName", "mp3" },
		{ "Mp3.Name", "ERuntimeAudioFormat::Mp3" },
		{ "OggVorbis.DisplayName", "ogg vorbis" },
		{ "OggVorbis.Name", "ERuntimeAudioFormat::OggVorbis" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible audio formats (extensions)" },
#endif
		{ "Wav.DisplayName", "wav" },
		{ "Wav.Name", "ERuntimeAudioFormat::Wav" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimeAudioFormat::Auto", (int64)ERuntimeAudioFormat::Auto },
		{ "ERuntimeAudioFormat::Mp3", (int64)ERuntimeAudioFormat::Mp3 },
		{ "ERuntimeAudioFormat::Wav", (int64)ERuntimeAudioFormat::Wav },
		{ "ERuntimeAudioFormat::Flac", (int64)ERuntimeAudioFormat::Flac },
		{ "ERuntimeAudioFormat::OggVorbis", (int64)ERuntimeAudioFormat::OggVorbis },
		{ "ERuntimeAudioFormat::Bink", (int64)ERuntimeAudioFormat::Bink },
		{ "ERuntimeAudioFormat::Custom", (int64)ERuntimeAudioFormat::Custom },
		{ "ERuntimeAudioFormat::Invalid", (int64)ERuntimeAudioFormat::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	"ERuntimeAudioFormat",
	"ERuntimeAudioFormat",
	Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat()
{
	if (!Z_Registration_Info_UEnum_ERuntimeAudioFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeAudioFormat.InnerSingleton, Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeAudioFormat.InnerSingleton;
}
// End Enum ERuntimeAudioFormat

// Begin Enum ERuntimeRAWAudioFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat;
static UEnum* ERuntimeRAWAudioFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ERuntimeRAWAudioFormat"));
	}
	return Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeRAWAudioFormat>()
{
	return ERuntimeRAWAudioFormat_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Possible RAW (uncompressed, PCM) audio formats */" },
#endif
		{ "Float32.DisplayName", "Floating point 32-bit" },
		{ "Float32.Name", "ERuntimeRAWAudioFormat::Float32" },
		{ "Int16.DisplayName", "Signed 16-bit integer" },
		{ "Int16.Name", "ERuntimeRAWAudioFormat::Int16" },
		{ "Int32.DisplayName", "Signed 32-bit integer" },
		{ "Int32.Name", "ERuntimeRAWAudioFormat::Int32" },
		{ "Int8.DisplayName", "Signed 8-bit integer" },
		{ "Int8.Name", "ERuntimeRAWAudioFormat::Int8" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible RAW (uncompressed, PCM) audio formats" },
#endif
		{ "UInt16.DisplayName", "Unsigned 16-bit integer" },
		{ "UInt16.Name", "ERuntimeRAWAudioFormat::UInt16" },
		{ "UInt32.DisplayName", "Unsigned 32-bit integer" },
		{ "UInt32.Name", "ERuntimeRAWAudioFormat::UInt32" },
		{ "UInt8.DisplayName", "Unsigned 8-bit integer" },
		{ "UInt8.Name", "ERuntimeRAWAudioFormat::UInt8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimeRAWAudioFormat::Int8", (int64)ERuntimeRAWAudioFormat::Int8 },
		{ "ERuntimeRAWAudioFormat::UInt8", (int64)ERuntimeRAWAudioFormat::UInt8 },
		{ "ERuntimeRAWAudioFormat::Int16", (int64)ERuntimeRAWAudioFormat::Int16 },
		{ "ERuntimeRAWAudioFormat::UInt16", (int64)ERuntimeRAWAudioFormat::UInt16 },
		{ "ERuntimeRAWAudioFormat::Int32", (int64)ERuntimeRAWAudioFormat::Int32 },
		{ "ERuntimeRAWAudioFormat::UInt32", (int64)ERuntimeRAWAudioFormat::UInt32 },
		{ "ERuntimeRAWAudioFormat::Float32", (int64)ERuntimeRAWAudioFormat::Float32 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	"ERuntimeRAWAudioFormat",
	"ERuntimeRAWAudioFormat",
	Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat()
{
	if (!Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat.InnerSingleton, Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeRAWAudioFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat.InnerSingleton;
}
// End Enum ERuntimeRAWAudioFormat

// Begin Enum ERuntimeVADMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeVADMode;
static UEnum* ERuntimeVADMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeVADMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeVADMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ERuntimeVADMode"));
	}
	return Z_Registration_Info_UEnum_ERuntimeVADMode.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeVADMode>()
{
	return ERuntimeVADMode_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aggressive.Name", "ERuntimeVADMode::Aggressive" },
		{ "Aggressive.ToolTip", "Aggressive, restrictive in reporting speech" },
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Possible VAD (Voice Activity Detection) modes */" },
#endif
		{ "LowBitrate.Name", "ERuntimeVADMode::LowBitrate" },
		{ "LowBitrate.ToolTip", "Low bitrate, more restrictive in reporting speech" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "Quality.Name", "ERuntimeVADMode::Quality" },
		{ "Quality.ToolTip", "High quality, less restrictive in reporting speech" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible VAD (Voice Activity Detection) modes" },
#endif
		{ "VeryAggressive.Name", "ERuntimeVADMode::VeryAggressive" },
		{ "VeryAggressive.ToolTip", "Very aggressive, extremely restrictive in reporting speech" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimeVADMode::Quality", (int64)ERuntimeVADMode::Quality },
		{ "ERuntimeVADMode::LowBitrate", (int64)ERuntimeVADMode::LowBitrate },
		{ "ERuntimeVADMode::Aggressive", (int64)ERuntimeVADMode::Aggressive },
		{ "ERuntimeVADMode::VeryAggressive", (int64)ERuntimeVADMode::VeryAggressive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	"ERuntimeVADMode",
	"ERuntimeVADMode",
	Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode()
{
	if (!Z_Registration_Info_UEnum_ERuntimeVADMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeVADMode.InnerSingleton, Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeVADMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeVADMode.InnerSingleton;
}
// End Enum ERuntimeVADMode

// Begin ScriptStruct FCompressedSoundWaveInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo;
class UScriptStruct* FCompressedSoundWaveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("CompressedSoundWaveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FCompressedSoundWaveInfo>()
{
	return FCompressedSoundWaveInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compressed sound wave information */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compressed sound wave information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sound group */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound group" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set, when played directly (not through a sound cue) the wave will be played looping */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, when played directly (not through a sound cue) the wave will be played looping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Playback volume of sound 0 to 1 - Default is 1.0 */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.125" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Playback pitch for sound. */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback pitch for sound." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedSoundWaveInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup = { "SoundGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompressedSoundWaveInfo, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundGroup_MetaData), NewProp_SoundGroup_MetaData) }; // 2669277182
void Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FCompressedSoundWaveInfo*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCompressedSoundWaveInfo), &Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompressedSoundWaveInfo, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompressedSoundWaveInfo, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	&NewStructOps,
	"CompressedSoundWaveInfo",
	Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers),
	sizeof(FCompressedSoundWaveInfo),
	alignof(FCompressedSoundWaveInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompressedSoundWaveInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo.InnerSingleton, Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo.InnerSingleton;
}
// End ScriptStruct FCompressedSoundWaveInfo

// Begin ScriptStruct FEditableSubtitleCue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditableSubtitleCue;
class UScriptStruct* FEditableSubtitleCue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditableSubtitleCue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditableSubtitleCue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableSubtitleCue, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("EditableSubtitleCue"));
	}
	return Z_Registration_Info_UScriptStruct_EditableSubtitleCue.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FEditableSubtitleCue>()
{
	return FEditableSubtitleCue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A line of subtitle text and the time at which it should be displayed. This is the same as FSubtitleCue but editable in Blueprints */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A line of subtitle text and the time at which it should be displayed. This is the same as FSubtitleCue but editable in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The text to appear in the subtitle */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text to appear in the subtitle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableSubtitleCue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableSubtitleCue, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditableSubtitleCue, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	&NewStructOps,
	"EditableSubtitleCue",
	Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers),
	sizeof(FEditableSubtitleCue),
	alignof(FEditableSubtitleCue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditableSubtitleCue()
{
	if (!Z_Registration_Info_UScriptStruct_EditableSubtitleCue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditableSubtitleCue.InnerSingleton, Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditableSubtitleCue.InnerSingleton;
}
// End ScriptStruct FEditableSubtitleCue

// Begin ScriptStruct FRuntimeAudioInputDeviceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo;
class UScriptStruct* FRuntimeAudioInputDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("RuntimeAudioInputDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FRuntimeAudioInputDeviceInfo>()
{
	return FRuntimeAudioInputDeviceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Platform audio input device info */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform audio input device info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the audio device */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the audio device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID of the device */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID of the device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputChannels_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of channels supported by the audio device */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of channels supported by the audio device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredSampleRate_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The preferred sample rate of the audio device */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The preferred sample rate of the audio device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsHardwareAEC_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not the device supports Acoustic Echo Canceling */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the device supports Acoustic Echo Canceling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredSampleRate;
	static void NewProp_bSupportsHardwareAEC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsHardwareAEC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeAudioInputDeviceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioInputDeviceInfo, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioInputDeviceInfo, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_InputChannels = { "InputChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioInputDeviceInfo, InputChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputChannels_MetaData), NewProp_InputChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate = { "PreferredSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioInputDeviceInfo, PreferredSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredSampleRate_MetaData), NewProp_PreferredSampleRate_MetaData) };
void Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit(void* Obj)
{
	((FRuntimeAudioInputDeviceInfo*)Obj)->bSupportsHardwareAEC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC = { "bSupportsHardwareAEC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRuntimeAudioInputDeviceInfo), &Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsHardwareAEC_MetaData), NewProp_bSupportsHardwareAEC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_InputChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	&NewStructOps,
	"RuntimeAudioInputDeviceInfo",
	Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::PropPointers),
	sizeof(FRuntimeAudioInputDeviceInfo),
	alignof(FRuntimeAudioInputDeviceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo.InnerSingleton;
}
// End ScriptStruct FRuntimeAudioInputDeviceInfo

// Begin ScriptStruct FRuntimeAudioHeaderInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo;
class UScriptStruct* FRuntimeAudioHeaderInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("RuntimeAudioHeaderInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FRuntimeAudioHeaderInfo>()
{
	return FRuntimeAudioHeaderInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Audio header information */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio header information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Audio duration, sec */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio duration, sec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfChannels_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of channels */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of channels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sample rate (samples per second, sampling frequency) */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample rate (samples per second, sampling frequency)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCMDataSize_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PCM data size in 32-bit float format */" },
#endif
		{ "DisplayName", "PCM Data Size" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PCM data size in 32-bit float format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFormat_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Format of the source audio data (e.g. mp3, flac, etc) */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Format of the source audio data (e.g. mp3, flac, etc)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PCMDataSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeAudioHeaderInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioHeaderInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioHeaderInfo, NumOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfChannels_MetaData), NewProp_NumOfChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioHeaderInfo, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_PCMDataSize = { "PCMDataSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioHeaderInfo, PCMDataSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCMDataSize_MetaData), NewProp_PCMDataSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioHeaderInfo, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFormat_MetaData), NewProp_AudioFormat_MetaData) }; // 3076892167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_NumOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_PCMDataSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewProp_AudioFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	&NewStructOps,
	"RuntimeAudioHeaderInfo",
	Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::PropPointers),
	sizeof(FRuntimeAudioHeaderInfo),
	alignof(FRuntimeAudioHeaderInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo.InnerSingleton;
}
// End ScriptStruct FRuntimeAudioHeaderInfo

// Begin ScriptStruct FRuntimeAudioExportOverrideOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions;
class UScriptStruct* FRuntimeAudioExportOverrideOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions, (UObject*)Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("RuntimeAudioExportOverrideOptions"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FRuntimeAudioExportOverrideOptions>()
{
	return FRuntimeAudioExportOverrideOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Audio export override options */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio export override options" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfChannels_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of channels. Set to -1 to retrieve from source. Mixing if count differs from source */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of channels. Set to -1 to retrieve from source. Mixing if count differs from source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Audio sampling rate (samples per second, sampling frequency). Set to -1 to retrieve from source. Resampling if count differs from source */" },
#endif
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio sampling rate (samples per second, sampling frequency). Set to -1 to retrieve from source. Resampling if count differs from source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeAudioExportOverrideOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioExportOverrideOptions, NumOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfChannels_MetaData), NewProp_NumOfChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeAudioExportOverrideOptions, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::NewProp_NumOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	nullptr,
	&NewStructOps,
	"RuntimeAudioExportOverrideOptions",
	Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::PropPointers),
	sizeof(FRuntimeAudioExportOverrideOptions),
	alignof(FRuntimeAudioExportOverrideOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions.InnerSingleton;
}
// End ScriptStruct FRuntimeAudioExportOverrideOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERuntimeImportStatus_StaticEnum, TEXT("ERuntimeImportStatus"), &Z_Registration_Info_UEnum_ERuntimeImportStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 682036833U) },
		{ ERuntimeAudioFormat_StaticEnum, TEXT("ERuntimeAudioFormat"), &Z_Registration_Info_UEnum_ERuntimeAudioFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3076892167U) },
		{ ERuntimeRAWAudioFormat_StaticEnum, TEXT("ERuntimeRAWAudioFormat"), &Z_Registration_Info_UEnum_ERuntimeRAWAudioFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1579545350U) },
		{ ERuntimeVADMode_StaticEnum, TEXT("ERuntimeVADMode"), &Z_Registration_Info_UEnum_ERuntimeVADMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 757202630U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCompressedSoundWaveInfo::StaticStruct, Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewStructOps, TEXT("CompressedSoundWaveInfo"), &Z_Registration_Info_UScriptStruct_CompressedSoundWaveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompressedSoundWaveInfo), 3773474925U) },
		{ FEditableSubtitleCue::StaticStruct, Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewStructOps, TEXT("EditableSubtitleCue"), &Z_Registration_Info_UScriptStruct_EditableSubtitleCue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditableSubtitleCue), 1285967538U) },
		{ FRuntimeAudioInputDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics::NewStructOps, TEXT("RuntimeAudioInputDeviceInfo"), &Z_Registration_Info_UScriptStruct_RuntimeAudioInputDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeAudioInputDeviceInfo), 3021899566U) },
		{ FRuntimeAudioHeaderInfo::StaticStruct, Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics::NewStructOps, TEXT("RuntimeAudioHeaderInfo"), &Z_Registration_Info_UScriptStruct_RuntimeAudioHeaderInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeAudioHeaderInfo), 3580204948U) },
		{ FRuntimeAudioExportOverrideOptions::StaticStruct, Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics::NewStructOps, TEXT("RuntimeAudioExportOverrideOptions"), &Z_Registration_Info_UScriptStruct_RuntimeAudioExportOverrideOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeAudioExportOverrideOptions), 751039397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_2858533093(TEXT("/Script/RuntimeAudioImporter"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
