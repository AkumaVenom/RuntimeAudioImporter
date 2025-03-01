// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporterEditor/Public/PreImportedSoundFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreImportedSoundFactory() {}

// Begin Cross Module References
RUNTIMEAUDIOIMPORTEREDITOR_API UClass* Z_Construct_UClass_UPreImportedSoundFactory();
RUNTIMEAUDIOIMPORTEREDITOR_API UClass* Z_Construct_UClass_UPreImportedSoundFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporterEditor();
// End Cross Module References

// Begin Class UPreImportedSoundFactory
void UPreImportedSoundFactory::StaticRegisterNativesUPreImportedSoundFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreImportedSoundFactory);
UClass* Z_Construct_UClass_UPreImportedSoundFactory_NoRegister()
{
	return UPreImportedSoundFactory::StaticClass();
}
struct Z_Construct_UClass_UPreImportedSoundFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory for pre-importing audio files. Supports all formats from ERuntimeAudioFormat, but OGG Vorbis is recommended due to its size and quality balance\n */" },
#endif
		{ "IncludePath", "PreImportedSoundFactory.h" },
		{ "ModuleRelativePath", "Public/PreImportedSoundFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for pre-importing audio files. Supports all formats from ERuntimeAudioFormat, but OGG Vorbis is recommended due to its size and quality balance" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreImportedSoundFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPreImportedSoundFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreImportedSoundFactory_Statics::ClassParams = {
	&UPreImportedSoundFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreImportedSoundFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPreImportedSoundFactory()
{
	if (!Z_Registration_Info_UClass_UPreImportedSoundFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreImportedSoundFactory.OuterSingleton, Z_Construct_UClass_UPreImportedSoundFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPreImportedSoundFactory.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTEREDITOR_API UClass* StaticClass<UPreImportedSoundFactory>()
{
	return UPreImportedSoundFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPreImportedSoundFactory);
UPreImportedSoundFactory::~UPreImportedSoundFactory() {}
// End Class UPreImportedSoundFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporterEditor_Public_PreImportedSoundFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPreImportedSoundFactory, UPreImportedSoundFactory::StaticClass, TEXT("UPreImportedSoundFactory"), &Z_Registration_Info_UClass_UPreImportedSoundFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreImportedSoundFactory), 269029937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporterEditor_Public_PreImportedSoundFactory_h_2637073388(TEXT("/Script/RuntimeAudioImporterEditor"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporterEditor_Public_PreImportedSoundFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporterEditor_Public_PreImportedSoundFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
