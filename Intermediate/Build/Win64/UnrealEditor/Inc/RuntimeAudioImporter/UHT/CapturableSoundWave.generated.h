// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/CapturableSoundWave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapturableSoundWave;
struct FRuntimeAudioInputDeviceInfo;
#ifdef RUNTIMEAUDIOIMPORTER_CapturableSoundWave_generated_h
#error "CapturableSoundWave.generated.h already included, missing '#pragma once' in CapturableSoundWave.h"
#endif
#define RUNTIMEAUDIOIMPORTER_CapturableSoundWave_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_21_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnGetAvailableAudioInputDevicesResult_DelegateWrapper(const FScriptDelegate& OnGetAvailableAudioInputDevicesResult, TArray<FRuntimeAudioInputDeviceInfo> const& AvailableDevices);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execToggleMute); \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execStartCapture); \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execCreateCapturableSoundWave);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCapturableSoundWave(); \
	friend struct Z_Construct_UClass_UCapturableSoundWave_Statics; \
public: \
	DECLARE_CLASS(UCapturableSoundWave, UStreamingSoundWave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UCapturableSoundWave)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCapturableSoundWave(UCapturableSoundWave&&); \
	UCapturableSoundWave(const UCapturableSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCapturableSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapturableSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCapturableSoundWave) \
	NO_API virtual ~UCapturableSoundWave();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_26_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class UCapturableSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
