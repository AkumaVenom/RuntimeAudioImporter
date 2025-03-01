// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/Sound/CapturableSoundWave.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapturableSoundWave() {}

// Begin Cross Module References
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UCapturableSoundWave();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UCapturableSoundWave_NoRegister();
RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UStreamingSoundWave();
RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature();
RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo();
UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
// End Cross Module References

// Begin Delegate FOnGetAvailableAudioInputDevicesResult
struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics
{
	struct _Script_RuntimeAudioImporter_eventOnGetAvailableAudioInputDevicesResult_Parms
	{
		TArray<FRuntimeAudioInputDeviceInfo> AvailableDevices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcasting available audio input devices */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcasting available audio input devices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDevices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDevices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::NewProp_AvailableDevices_Inner = { "AvailableDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3021899566
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::NewProp_AvailableDevices = { "AvailableDevices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnGetAvailableAudioInputDevicesResult_Parms, AvailableDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDevices_MetaData), NewProp_AvailableDevices_MetaData) }; // 3021899566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::NewProp_AvailableDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::NewProp_AvailableDevices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnGetAvailableAudioInputDevicesResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnGetAvailableAudioInputDevicesResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::_Script_RuntimeAudioImporter_eventOnGetAvailableAudioInputDevicesResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetAvailableAudioInputDevicesResult_DelegateWrapper(const FScriptDelegate& OnGetAvailableAudioInputDevicesResult, TArray<FRuntimeAudioInputDeviceInfo> const& AvailableDevices)
{
	struct _Script_RuntimeAudioImporter_eventOnGetAvailableAudioInputDevicesResult_Parms
	{
		TArray<FRuntimeAudioInputDeviceInfo> AvailableDevices;
	};
	_Script_RuntimeAudioImporter_eventOnGetAvailableAudioInputDevicesResult_Parms Parms;
	Parms.AvailableDevices=AvailableDevices;
	OnGetAvailableAudioInputDevicesResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnGetAvailableAudioInputDevicesResult

// Begin Class UCapturableSoundWave Function CreateCapturableSoundWave
struct Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics
{
	struct CapturableSoundWave_eventCreateCapturableSoundWave_Parms
	{
		UCapturableSoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capturable Sound Wave|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new instance of the capturable sound wave\n\x09 *\n\x09 * @return Created capturable sound wave\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new instance of the capturable sound wave\n\n@return Created capturable sound wave" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapturableSoundWave_eventCreateCapturableSoundWave_Parms, ReturnValue), Z_Construct_UClass_UCapturableSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapturableSoundWave, nullptr, "CreateCapturableSoundWave", nullptr, nullptr, Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::CapturableSoundWave_eventCreateCapturableSoundWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::CapturableSoundWave_eventCreateCapturableSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapturableSoundWave::execCreateCapturableSoundWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCapturableSoundWave**)Z_Param__Result=UCapturableSoundWave::CreateCapturableSoundWave();
	P_NATIVE_END;
}
// End Class UCapturableSoundWave Function CreateCapturableSoundWave

// Begin Class UCapturableSoundWave Function GetAvailableAudioInputDevices
struct Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics
{
	struct CapturableSoundWave_eventGetAvailableAudioInputDevices_Parms
	{
		FScriptDelegate Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capturable Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get information about all available audio input devices\n\x09 * \n\x09 * @param Result Delegate broadcasting the result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get information about all available audio input devices\n\n@param Result Delegate broadcasting the result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapturableSoundWave_eventGetAvailableAudioInputDevices_Parms, Result), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGetAvailableAudioInputDevicesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1634742100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapturableSoundWave, nullptr, "GetAvailableAudioInputDevices", nullptr, nullptr, Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::CapturableSoundWave_eventGetAvailableAudioInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::CapturableSoundWave_eventGetAvailableAudioInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapturableSoundWave::execGetAvailableAudioInputDevices)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCapturableSoundWave::GetAvailableAudioInputDevices(FOnGetAvailableAudioInputDevicesResult(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UCapturableSoundWave Function GetAvailableAudioInputDevices

// Begin Class UCapturableSoundWave Function IsCapturing
struct Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics
{
	struct CapturableSoundWave_eventIsCapturing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capturable Sound Wave|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get whether the capture is processing or not\n\x09 *\n\x09 * @return Whether the capture is processing or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get whether the capture is processing or not\n\n@return Whether the capture is processing or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CapturableSoundWave_eventIsCapturing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapturableSoundWave_eventIsCapturing_Parms), &Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapturableSoundWave, nullptr, "IsCapturing", nullptr, nullptr, Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::CapturableSoundWave_eventIsCapturing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::CapturableSoundWave_eventIsCapturing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapturableSoundWave_IsCapturing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapturableSoundWave_IsCapturing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapturableSoundWave::execIsCapturing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCapturing();
	P_NATIVE_END;
}
// End Class UCapturableSoundWave Function IsCapturing

// Begin Class UCapturableSoundWave Function StartCapture
struct Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics
{
	struct CapturableSoundWave_eventStartCapture_Parms
	{
		int32 DeviceId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capturable Sound Wave|Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start the capture process\n\x09 *\n\x09 * @param DeviceId Required device index (order as from GetAvailableAudioInputDevices)\n\x09 * @return Whether the capture was started or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the capture process\n\n@param DeviceId Required device index (order as from GetAvailableAudioInputDevices)\n@return Whether the capture was started or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapturableSoundWave_eventStartCapture_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CapturableSoundWave_eventStartCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapturableSoundWave_eventStartCapture_Parms), &Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapturableSoundWave, nullptr, "StartCapture", nullptr, nullptr, Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::CapturableSoundWave_eventStartCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::CapturableSoundWave_eventStartCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapturableSoundWave_StartCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapturableSoundWave_StartCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapturableSoundWave::execStartCapture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartCapture(Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class UCapturableSoundWave Function StartCapture

// Begin Class UCapturableSoundWave Function StopCapture
struct Z_Construct_UFunction_UCapturableSoundWave_StopCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capturable Sound Wave|Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the capture process\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the capture process" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapturableSoundWave_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapturableSoundWave, nullptr, "StopCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_StopCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapturableSoundWave_StopCapture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCapturableSoundWave_StopCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapturableSoundWave_StopCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapturableSoundWave::execStopCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCapture();
	P_NATIVE_END;
}
// End Class UCapturableSoundWave Function StopCapture

// Begin Class UCapturableSoundWave Function ToggleMute
struct Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics
{
	struct CapturableSoundWave_eventToggleMute_Parms
	{
		bool bMute;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capturable Sound Wave|Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Toggles the mute state of audio capture, pausing the accumulation of audio data without closing the stream\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles the mute state of audio capture, pausing the accumulation of audio data without closing the stream" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((CapturableSoundWave_eventToggleMute_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapturableSoundWave_eventToggleMute_Parms), &Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CapturableSoundWave_eventToggleMute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapturableSoundWave_eventToggleMute_Parms), &Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapturableSoundWave, nullptr, "ToggleMute", nullptr, nullptr, Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::CapturableSoundWave_eventToggleMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::CapturableSoundWave_eventToggleMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapturableSoundWave_ToggleMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapturableSoundWave_ToggleMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapturableSoundWave::execToggleMute)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToggleMute(Z_Param_bMute);
	P_NATIVE_END;
}
// End Class UCapturableSoundWave Function ToggleMute

// Begin Class UCapturableSoundWave
void UCapturableSoundWave::StaticRegisterNativesUCapturableSoundWave()
{
	UClass* Class = UCapturableSoundWave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateCapturableSoundWave", &UCapturableSoundWave::execCreateCapturableSoundWave },
		{ "GetAvailableAudioInputDevices", &UCapturableSoundWave::execGetAvailableAudioInputDevices },
		{ "IsCapturing", &UCapturableSoundWave::execIsCapturing },
		{ "StartCapture", &UCapturableSoundWave::execStartCapture },
		{ "StopCapture", &UCapturableSoundWave::execStopCapture },
		{ "ToggleMute", &UCapturableSoundWave::execToggleMute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCapturableSoundWave);
UClass* Z_Construct_UClass_UCapturableSoundWave_NoRegister()
{
	return UCapturableSoundWave::StaticClass();
}
struct Z_Construct_UClass_UCapturableSoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Capturable Sound Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Sound wave that can capture audio data from input devices (eg. microphone)\n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/CapturableSoundWave.h" },
		{ "ModuleRelativePath", "Public/Sound/CapturableSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound wave that can capture audio data from input devices (eg. microphone)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCapturableSoundWave_CreateCapturableSoundWave, "CreateCapturableSoundWave" }, // 1898595646
		{ &Z_Construct_UFunction_UCapturableSoundWave_GetAvailableAudioInputDevices, "GetAvailableAudioInputDevices" }, // 26303595
		{ &Z_Construct_UFunction_UCapturableSoundWave_IsCapturing, "IsCapturing" }, // 812041924
		{ &Z_Construct_UFunction_UCapturableSoundWave_StartCapture, "StartCapture" }, // 2661364537
		{ &Z_Construct_UFunction_UCapturableSoundWave_StopCapture, "StopCapture" }, // 3527974391
		{ &Z_Construct_UFunction_UCapturableSoundWave_ToggleMute, "ToggleMute" }, // 1882655995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapturableSoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCapturableSoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamingSoundWave,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapturableSoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCapturableSoundWave_Statics::ClassParams = {
	&UCapturableSoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapturableSoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UCapturableSoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCapturableSoundWave()
{
	if (!Z_Registration_Info_UClass_UCapturableSoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCapturableSoundWave.OuterSingleton, Z_Construct_UClass_UCapturableSoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCapturableSoundWave.OuterSingleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UCapturableSoundWave>()
{
	return UCapturableSoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCapturableSoundWave);
UCapturableSoundWave::~UCapturableSoundWave() {}
// End Class UCapturableSoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCapturableSoundWave, UCapturableSoundWave::StaticClass, TEXT("UCapturableSoundWave"), &Z_Registration_Info_UClass_UCapturableSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCapturableSoundWave), 4020090886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_3932358553(TEXT("/Script/RuntimeAudioImporter"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_CapturableSoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
