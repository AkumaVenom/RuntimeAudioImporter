// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAudioUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERuntimeAudioFormat : uint8;
struct FRuntimeAudioHeaderInfo;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioUtilities_generated_h
#error "RuntimeAudioUtilities.generated.h already included, missing '#pragma once' in RuntimeAudioUtilities.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioUtilities_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_14_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnGetAudioHeaderInfoResult_DelegateWrapper(const FScriptDelegate& OnGetAudioHeaderInfoResult, bool bSucceeded, FRuntimeAudioHeaderInfo const& HeaderInfo);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_18_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnScanDirectoryForAudioFilesResult_DelegateWrapper(const FScriptDelegate& OnScanDirectoryForAudioFilesResult, bool bSucceeded, TArray<FString> const& AudioFilePaths);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScanDirectoryForAudioFiles); \
	DECLARE_FUNCTION(execConvertSecondsToString); \
	DECLARE_FUNCTION(execGetAudioHeaderInfoFromBuffer); \
	DECLARE_FUNCTION(execGetAudioHeaderInfoFromFile); \
	DECLARE_FUNCTION(execGetAudioFormatsAdvanced); \
	DECLARE_FUNCTION(execGetAudioFormats);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioUtilities(); \
	friend struct Z_Construct_UClass_URuntimeAudioUtilities_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioUtilities)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeAudioUtilities(URuntimeAudioUtilities&&); \
	URuntimeAudioUtilities(const URuntimeAudioUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioUtilities) \
	NO_API virtual ~URuntimeAudioUtilities();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_28_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeAudioUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
