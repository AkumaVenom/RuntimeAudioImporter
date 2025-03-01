// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VAD/RuntimeVoiceActivityDetector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERuntimeVADMode : uint8;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeVoiceActivityDetector_generated_h
#error "RuntimeVoiceActivityDetector.generated.h already included, missing '#pragma once' in RuntimeVoiceActivityDetector.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeVoiceActivityDetector_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessVAD); \
	DECLARE_FUNCTION(execSetVADMode); \
	DECLARE_FUNCTION(execResetVAD);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeVoiceActivityDetector(); \
	friend struct Z_Construct_UClass_URuntimeVoiceActivityDetector_Statics; \
public: \
	DECLARE_CLASS(URuntimeVoiceActivityDetector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVoiceActivityDetector)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeVoiceActivityDetector(URuntimeVoiceActivityDetector&&); \
	URuntimeVoiceActivityDetector(const URuntimeVoiceActivityDetector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVoiceActivityDetector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVoiceActivityDetector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeVoiceActivityDetector) \
	NO_API virtual ~URuntimeVoiceActivityDetector();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_20_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeVoiceActivityDetector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_VAD_RuntimeVoiceActivityDetector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
