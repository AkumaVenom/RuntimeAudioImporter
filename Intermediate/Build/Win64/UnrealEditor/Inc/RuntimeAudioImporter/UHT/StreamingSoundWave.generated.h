// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/StreamingSoundWave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStreamingSoundWave;
enum class ERuntimeAudioFormat : uint8;
enum class ERuntimeRAWAudioFormat : uint8;
enum class ERuntimeVADMode : uint8;
#ifdef RUNTIMEAUDIOIMPORTER_StreamingSoundWave_generated_h
#error "StreamingSoundWave.generated.h already included, missing '#pragma once' in StreamingSoundWave.h"
#endif
#define RUNTIMEAUDIOIMPORTER_StreamingSoundWave_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnPreAllocateAudioDataResult_DelegateWrapper(const FScriptDelegate& OnPreAllocateAudioDataResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVADMode); \
	DECLARE_FUNCTION(execResetVAD); \
	DECLARE_FUNCTION(execToggleVAD); \
	DECLARE_FUNCTION(execSetStopSoundOnPlaybackFinish); \
	DECLARE_FUNCTION(execAppendAudioDataFromRAW); \
	DECLARE_FUNCTION(execAppendAudioDataFromEncoded); \
	DECLARE_FUNCTION(execPreAllocateAudioData); \
	DECLARE_FUNCTION(execCreateStreamingSoundWave);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamingSoundWave(); \
	friend struct Z_Construct_UClass_UStreamingSoundWave_Statics; \
public: \
	DECLARE_CLASS(UStreamingSoundWave, UImportedSoundWave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UStreamingSoundWave)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamingSoundWave(UStreamingSoundWave&&); \
	UStreamingSoundWave(const UStreamingSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamingSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamingSoundWave) \
	NO_API virtual ~UStreamingSoundWave();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_24_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class UStreamingSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
