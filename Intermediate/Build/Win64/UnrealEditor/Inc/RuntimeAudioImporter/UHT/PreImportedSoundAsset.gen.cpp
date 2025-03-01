// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/PreImportedSoundAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreImportedSoundAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UPreImportedSoundAsset();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister();
RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Class UPreImportedSoundAsset
void UPreImportedSoundAsset::StaticRegisterNativesUPreImportedSoundAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreImportedSoundAsset);
UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister()
{
	return UPreImportedSoundAsset::StaticClass();
}
struct Z_Construct_UClass_UPreImportedSoundAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Pre Imported Sound Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Pre-imported asset which collects MP3 audio data. Used if you want to load the MP3 file into the editor in advance\n */" },
#endif
		{ "IncludePath", "PreImportedSoundAsset.h" },
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pre-imported asset which collects MP3 audio data. Used if you want to load the MP3 file into the editor in advance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDataArray_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Audio data array */" },
#endif
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio data array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFormat_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Audio data format */" },
#endif
		{ "DisplayName", "Audio format" },
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio data format" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "File Path" },
		{ "DisplayName", "Source file path" },
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundDuration_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Sound duration" },
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Number of channels" },
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Sample rate" },
		{ "ModuleRelativePath", "Public/PreImportedSoundAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioDataArray;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioFormat;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SoundDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreImportedSoundAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_Inner = { "AudioDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray = { "AudioDataArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreImportedSoundAsset, AudioDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDataArray_MetaData), NewProp_AudioDataArray_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat = { "AudioFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreImportedSoundAsset, AudioFormat), Z_Construct_UEnum_RuntimeAudioImporter_ERuntimeAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFormat_MetaData), NewProp_AudioFormat_MetaData) }; // 3076892167
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreImportedSoundAsset, SourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration = { "SoundDuration", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreImportedSoundAsset, SoundDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundDuration_MetaData), NewProp_SoundDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreImportedSoundAsset, NumberOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfChannels_MetaData), NewProp_NumberOfChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreImportedSoundAsset, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_AudioFormat,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SoundDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_NumberOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreImportedSoundAsset_Statics::NewProp_SampleRate,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPreImportedSoundAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreImportedSoundAsset_Statics::ClassParams = {
	&UPreImportedSoundAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreImportedSoundAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPreImportedSoundAsset()
{
	if (!Z_Registration_Info_UClass_UPreImportedSoundAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreImportedSoundAsset.OuterSingleton, Z_Construct_UClass_UPreImportedSoundAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPreImportedSoundAsset.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UPreImportedSoundAsset>()
{
	return UPreImportedSoundAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPreImportedSoundAsset);
UPreImportedSoundAsset::~UPreImportedSoundAsset() {}
// End Class UPreImportedSoundAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_PreImportedSoundAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPreImportedSoundAsset, UPreImportedSoundAsset::StaticClass, TEXT("UPreImportedSoundAsset"), &Z_Registration_Info_UClass_UPreImportedSoundAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreImportedSoundAsset), 1797108697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_PreImportedSoundAsset_h_3408171177(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_PreImportedSoundAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_PreImportedSoundAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
