// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAudioImporterTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterTypes_generated_h
#error "RuntimeAudioImporterTypes.generated.h already included, missing '#pragma once' in RuntimeAudioImporterTypes.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterTypes_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_493_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics; \
	RUNTIMEAUDIOIMPORTER_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<struct FCompressedSoundWaveInfo>();

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_523_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics; \
	RUNTIMEAUDIOIMPORTER_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<struct FEditableSubtitleCue>();

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_542_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo_Statics; \
	RUNTIMEAUDIOIMPORTER_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<struct FRuntimeAudioInputDeviceInfo>();

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_589_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeAudioHeaderInfo_Statics; \
	RUNTIMEAUDIOIMPORTER_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<struct FRuntimeAudioHeaderInfo>();

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h_635_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeAudioExportOverrideOptions_Statics; \
	RUNTIMEAUDIOIMPORTER_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<struct FRuntimeAudioExportOverrideOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h


#define FOREACH_ENUM_ERUNTIMEIMPORTSTATUS(op) \
	op(ERuntimeImportStatus::SuccessfulImport) \
	op(ERuntimeImportStatus::FailedToReadAudioDataArray) \
	op(ERuntimeImportStatus::SoundWaveDeclarationError) \
	op(ERuntimeImportStatus::InvalidAudioFormat) \
	op(ERuntimeImportStatus::AudioDoesNotExist) \
	op(ERuntimeImportStatus::LoadFileToArrayError) 

enum class ERuntimeImportStatus : uint8;
template<> struct TIsUEnumClass<ERuntimeImportStatus> { enum { Value = true }; };
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeImportStatus>();

#define FOREACH_ENUM_ERUNTIMEAUDIOFORMAT(op) \
	op(ERuntimeAudioFormat::Auto) \
	op(ERuntimeAudioFormat::Mp3) \
	op(ERuntimeAudioFormat::Wav) \
	op(ERuntimeAudioFormat::Flac) \
	op(ERuntimeAudioFormat::OggVorbis) \
	op(ERuntimeAudioFormat::Bink) \
	op(ERuntimeAudioFormat::Custom) \
	op(ERuntimeAudioFormat::Invalid) 

enum class ERuntimeAudioFormat : uint8;
template<> struct TIsUEnumClass<ERuntimeAudioFormat> { enum { Value = true }; };
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeAudioFormat>();

#define FOREACH_ENUM_ERUNTIMERAWAUDIOFORMAT(op) \
	op(ERuntimeRAWAudioFormat::Int8) \
	op(ERuntimeRAWAudioFormat::UInt8) \
	op(ERuntimeRAWAudioFormat::Int16) \
	op(ERuntimeRAWAudioFormat::UInt16) \
	op(ERuntimeRAWAudioFormat::Int32) \
	op(ERuntimeRAWAudioFormat::UInt32) \
	op(ERuntimeRAWAudioFormat::Float32) 

enum class ERuntimeRAWAudioFormat : uint8;
template<> struct TIsUEnumClass<ERuntimeRAWAudioFormat> { enum { Value = true }; };
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeRAWAudioFormat>();

#define FOREACH_ENUM_ERUNTIMEVADMODE(op) \
	op(ERuntimeVADMode::Quality) \
	op(ERuntimeVADMode::LowBitrate) \
	op(ERuntimeVADMode::Aggressive) \
	op(ERuntimeVADMode::VeryAggressive) 

enum class ERuntimeVADMode : uint8;
template<> struct TIsUEnumClass<ERuntimeVADMode> { enum { Value = true }; };
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERuntimeVADMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
