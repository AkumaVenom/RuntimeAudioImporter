// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/ImportedSoundWave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImportedSoundWave;
class UObject;
enum class ERuntimeAudioFormat : uint8;
struct FEditableSubtitleCue;
struct FRuntimeAudioHeaderInfo;
#ifdef RUNTIMEAUDIOIMPORTER_ImportedSoundWave_generated_h
#error "ImportedSoundWave.generated.h already included, missing '#pragma once' in ImportedSoundWave.h"
#endif
#define RUNTIMEAUDIOIMPORTER_ImportedSoundWave_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_16_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnAudioPlaybackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackFinished);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_23_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnGeneratePCMData_DelegateWrapper(const FMulticastScriptDelegate& OnGeneratePCMData, TArray<float> const& PCMData);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_30_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnPrepareSoundWaveForMetaSoundsResult_DelegateWrapper(const FScriptDelegate& OnPrepareSoundWaveForMetaSoundsResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnPlayedAudioDataReleaseResult_DelegateWrapper(const FScriptDelegate& OnPlayedAudioDataReleaseResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_44_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnPopulateAudioData_DelegateWrapper(const FMulticastScriptDelegate& OnPopulateAudioData, TArray<float> const& PopulatedAudioData);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_50_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnPopulateAudioState_DelegateWrapper(const FMulticastScriptDelegate& OnPopulateAudioState);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_56_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnDuplicateSoundWave_DelegateWrapper(const FScriptDelegate& OnDuplicateSoundWave, bool bSucceeded, UImportedSoundWave* DuplicatedSoundWave);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_62_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnStopPlaybackResult_DelegateWrapper(const FScriptDelegate& OnStopPlaybackResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execGetPCMBufferCopy); \
	DECLARE_FUNCTION(execGetAudioHeaderInfo); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPlaybackFinished); \
	DECLARE_FUNCTION(execGetPlaybackPercentage); \
	DECLARE_FUNCTION(execGetNumberOfChannels); \
	DECLARE_FUNCTION(execGetNumOfChannels); \
	DECLARE_FUNCTION(execGetSampleRate); \
	DECLARE_FUNCTION(execGetDurationConst); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execStopPlayback); \
	DECLARE_FUNCTION(execMixSoundWaveChannels); \
	DECLARE_FUNCTION(execResampleSoundWave); \
	DECLARE_FUNCTION(execSetInitialDesiredNumOfChannels); \
	DECLARE_FUNCTION(execSetInitialDesiredSampleRate); \
	DECLARE_FUNCTION(execRewindPlaybackTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execReleaseMemory); \
	DECLARE_FUNCTION(execPrepareSoundWaveForMetaSounds); \
	DECLARE_FUNCTION(execDuplicateSoundWave);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportedSoundWave(); \
	friend struct Z_Construct_UClass_UImportedSoundWave_Statics; \
public: \
	DECLARE_CLASS(UImportedSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UImportedSoundWave)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UImportedSoundWave(UImportedSoundWave&&); \
	UImportedSoundWave(const UImportedSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportedSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportedSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportedSoundWave) \
	NO_API virtual ~UImportedSoundWave();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_71_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class UImportedSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
