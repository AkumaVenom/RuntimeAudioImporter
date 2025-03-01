// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAudioImporterLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImportedSoundWave;
class UPreImportedSoundAsset;
class URuntimeAudioImporterLibrary;
class USoundWave;
enum class ERuntimeAudioFormat : uint8;
enum class ERuntimeImportStatus : uint8;
enum class ERuntimeRAWAudioFormat : uint8;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterLibrary_generated_h
#error "RuntimeAudioImporterLibrary.generated.h already included, missing '#pragma once' in RuntimeAudioImporterLibrary.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterLibrary_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_16_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnAudioImporterProgress_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterProgress, int32 Percentage);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_22_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnAudioImporterResult_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterResult, URuntimeAudioImporterLibrary* Importer, UImportedSoundWave* ImportedSoundWave, ERuntimeImportStatus Status);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_28_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnRegularToAudioImporterSoundWaveConvertResult_DelegateWrapper(const FScriptDelegate& OnRegularToAudioImporterSoundWaveConvertResult, bool bSucceeded, UImportedSoundWave* ImportedSoundWave);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertRegularToImportedSoundWave); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary) \
	NO_API virtual ~URuntimeAudioImporterLibrary();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_35_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeAudioImporterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
