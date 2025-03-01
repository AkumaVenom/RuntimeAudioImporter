// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAudioExporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImportedSoundWave;
enum class ERuntimeAudioFormat : uint8;
enum class ERuntimeRAWAudioFormat : uint8;
struct FRuntimeAudioExportOverrideOptions;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioExporter_generated_h
#error "RuntimeAudioExporter.generated.h already included, missing '#pragma once' in RuntimeAudioExporter.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioExporter_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_14_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnAudioExportToBufferResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToBufferResult, bool bSucceeded, TArray<uint8> const& AudioData);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_20_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnAudioExportToFileResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToFileResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportSoundWaveToRAWBuffer); \
	DECLARE_FUNCTION(execExportSoundWaveToRAWFile); \
	DECLARE_FUNCTION(execExportSoundWaveToBuffer); \
	DECLARE_FUNCTION(execExportSoundWaveToFile);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioExporter(); \
	friend struct Z_Construct_UClass_URuntimeAudioExporter_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioExporter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioExporter)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeAudioExporter(URuntimeAudioExporter&&); \
	URuntimeAudioExporter(const URuntimeAudioExporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioExporter) \
	NO_API virtual ~URuntimeAudioExporter();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_27_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeAudioExporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioExporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
