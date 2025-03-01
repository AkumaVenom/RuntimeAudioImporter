// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAudioTranscoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERuntimeAudioFormat : uint8;
enum class ERuntimeRAWAudioFormat : uint8;
struct FRuntimeAudioExportOverrideOptions;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioTranscoder_generated_h
#error "RuntimeAudioTranscoder.generated.h already included, missing '#pragma once' in RuntimeAudioTranscoder.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioTranscoder_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_17_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnRAWDataTranscodeFromBufferResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromBufferResult, bool bSucceeded, TArray<uint8> const& RAWData);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_24_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnRAWDataTranscodeFromFileResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromFileResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_31_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnEncodedDataTranscodeFromBufferResult_DelegateWrapper(const FScriptDelegate& OnEncodedDataTranscodeFromBufferResult, bool bSucceeded, TArray<uint8> const& EncodedData);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_39_DELEGATE \
RUNTIMEAUDIOIMPORTER_API void FOnEncodedDataTranscodeFromFileResult_DelegateWrapper(const FScriptDelegate& OnEncodedDataTranscodeFromFileResult, bool bSucceeded);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTranscodeEncodedDataFromFile); \
	DECLARE_FUNCTION(execTranscodeEncodedDataFromBuffer); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioTranscoder(); \
	friend struct Z_Construct_UClass_URuntimeAudioTranscoder_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioTranscoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioTranscoder)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioTranscoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeAudioTranscoder(URuntimeAudioTranscoder&&); \
	URuntimeAudioTranscoder(const URuntimeAudioTranscoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioTranscoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioTranscoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioTranscoder) \
	NO_API virtual ~URuntimeAudioTranscoder();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_46_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeAudioTranscoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioTranscoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
