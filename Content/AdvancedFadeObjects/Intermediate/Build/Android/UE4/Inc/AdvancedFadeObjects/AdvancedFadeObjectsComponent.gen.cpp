// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedFadeObjects/Public/AdvancedFadeObjectsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFadeObjectsComponent() {}
// Cross Module References
	ADVANCEDFADEOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FFadeObjStruct();
	UPackage* Z_Construct_UPackage__Script_AdvancedFadeObjects();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ADVANCEDFADEOBJECTS_API UClass* Z_Construct_UClass_UAdvancedFadeObjectsComponent_NoRegister();
	ADVANCEDFADEOBJECTS_API UClass* Z_Construct_UClass_UAdvancedFadeObjectsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
class UScriptStruct* FFadeObjStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDFADEOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FFadeObjStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFadeObjStruct, Z_Construct_UPackage__Script_AdvancedFadeObjects(), TEXT("FadeObjStruct"), sizeof(FFadeObjStruct), Get_Z_Construct_UScriptStruct_FFadeObjStruct_Hash());
	}
	return Singleton;
}
template<> ADVANCEDFADEOBJECTS_API UScriptStruct* StaticStruct<FFadeObjStruct>()
{
	return FFadeObjStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFadeObjStruct(FFadeObjStruct::StaticStruct, TEXT("/Script/AdvancedFadeObjects"), TEXT("FadeObjStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedFadeObjects_StaticRegisterNativesFFadeObjStruct
{
	FScriptStruct_AdvancedFadeObjects_StaticRegisterNativesFFadeObjStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FadeObjStruct")),new UScriptStruct::TCppStructOps<FFadeObjStruct>);
	}
} ScriptStruct_AdvancedFadeObjects_StaticRegisterNativesFFadeObjStruct;
	struct Z_Construct_UScriptStruct_FFadeObjStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitiveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitiveComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseMatInterface_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseMatInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_baseMatInterface;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fadeMID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_fadeMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToHide_MetaData[];
#endif
		static void NewProp_bToHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeObjStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFadeObjStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_primitiveComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_primitiveComp = { "primitiveComp", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeObjStruct, primitiveComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_primitiveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_primitiveComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface_Inner = { "baseMatInterface", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface = { "baseMatInterface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeObjStruct, baseMatInterface), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID_Inner = { "fadeMID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID = { "fadeMID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeObjStruct, fadeMID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeCurrent_MetaData[] = {
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeCurrent = { "fadeCurrent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeObjStruct, fadeCurrent), METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide_MetaData[] = {
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide_SetBit(void* Obj)
	{
		((FFadeObjStruct*)Obj)->bToHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide = { "bToHide", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFadeObjStruct), &Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFadeObjStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_primitiveComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_baseMatInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_fadeCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeObjStruct_Statics::NewProp_bToHide,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFadeObjStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedFadeObjects,
		nullptr,
		&NewStructOps,
		"FadeObjStruct",
		sizeof(FFadeObjStruct),
		alignof(FFadeObjStruct),
		Z_Construct_UScriptStruct_FFadeObjStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeObjStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFadeObjStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFadeObjStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedFadeObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FadeObjStruct"), sizeof(FFadeObjStruct), Get_Z_Construct_UScriptStruct_FFadeObjStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFadeObjStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFadeObjStruct_Hash() { return 3360314888U; }
	DEFINE_FUNCTION(UAdvancedFadeObjectsComponent::execSetActivate)
	{
		P_GET_UBOOL(Z_Param_setActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActivate(Z_Param_setActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedFadeObjectsComponent::execSetEnable)
	{
		P_GET_UBOOL(Z_Param_setEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnable(Z_Param_setEnable);
		P_NATIVE_END;
	}
	void UAdvancedFadeObjectsComponent::StaticRegisterNativesUAdvancedFadeObjectsComponent()
	{
		UClass* Class = UAdvancedFadeObjectsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetActivate", &UAdvancedFadeObjectsComponent::execSetActivate },
			{ "SetEnable", &UAdvancedFadeObjectsComponent::execSetEnable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics
	{
		struct AdvancedFadeObjectsComponent_eventSetActivate_Parms
		{
			bool setActivate;
		};
		static void NewProp_setActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_setActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::NewProp_setActivate_SetBit(void* Obj)
	{
		((AdvancedFadeObjectsComponent_eventSetActivate_Parms*)Obj)->setActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::NewProp_setActivate = { "setActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedFadeObjectsComponent_eventSetActivate_Parms), &Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::NewProp_setActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::NewProp_setActivate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Pause or unpause fade object worker\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Pause or unpause fade object worker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFadeObjectsComponent, nullptr, "SetActivate", nullptr, nullptr, sizeof(AdvancedFadeObjectsComponent_eventSetActivate_Parms), Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics
	{
		struct AdvancedFadeObjectsComponent_eventSetEnable_Parms
		{
			bool setEnable;
		};
		static void NewProp_setEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_setEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::NewProp_setEnable_SetBit(void* Obj)
	{
		((AdvancedFadeObjectsComponent_eventSetEnable_Parms*)Obj)->setEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::NewProp_setEnable = { "setEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedFadeObjectsComponent_eventSetEnable_Parms), &Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::NewProp_setEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::NewProp_setEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Enable or disable fade object worker\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Enable or disable fade object worker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFadeObjectsComponent, nullptr, "SetEnable", nullptr, nullptr, sizeof(AdvancedFadeObjectsComponent_eventSetEnable_Parms), Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFadeObjectsComponent_NoRegister()
	{
		return UAdvancedFadeObjectsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorsIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorsIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actorsIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fadeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActivate_MetaData[];
#endif
		static void NewProp_bIsActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTraceComplex_MetaData[];
#endif
		static void NewProp_bIsTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addObjectInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_addObjectInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_calcFadeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_calcFadeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_workDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_workDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nearCameraRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_nearCameraRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_objectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_objectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_capsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_capsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nearObjectFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_nearObjectFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_farObjectFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_farObjectFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_immediatelyFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_immediatelyFade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedFadeObjects,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetActivate, "SetActivate" }, // 685530008
		{ &Z_Construct_UFunction_UAdvancedFadeObjectsComponent_SetEnable, "SetEnable" }, // 419975746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdvancedFadeObjectsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore_Inner = { "actorsIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore = { "actorsIgnore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, actorsIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeMaterial_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Translucent material for fade object\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Translucent material for fade object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeMaterial = { "fadeMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, fadeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Enable or disable fade object worker\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Enable or disable fade object worker" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UAdvancedFadeObjectsComponent*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFadeObjectsComponent), &Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Pause or unpause fade object worker\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Pause or unpause fade object worker" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate_SetBit(void* Obj)
	{
		((UAdvancedFadeObjectsComponent*)Obj)->bIsActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate = { "bIsActivate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFadeObjectsComponent), &Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// This can reduce performance.\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "This can reduce performance." },
	};
#endif
	void Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex_SetBit(void* Obj)
	{
		((UAdvancedFadeObjectsComponent*)Obj)->bIsTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex = { "bIsTraceComplex", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFadeObjectsComponent), &Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_addObjectInterval_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Timer interval\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Timer interval" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_addObjectInterval = { "addObjectInterval", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, addObjectInterval), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_addObjectInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_addObjectInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_calcFadeInterval_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_calcFadeInterval = { "calcFadeInterval", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, calcFadeInterval), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_calcFadeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_calcFadeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_workDistance_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_workDistance = { "workDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, workDistance), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_workDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_workDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearCameraRadius_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearCameraRadius = { "nearCameraRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, nearCameraRadius), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearCameraRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearCameraRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_playerClass_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_playerClass = { "playerClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, playerClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_playerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_playerClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes_Inner = { "objectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Check trace block by this\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Check trace block by this" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes = { "objectTypes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, objectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeRate_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Rate fade increment\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Rate fade increment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeRate = { "fadeRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, fadeRate), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleHalfHeight_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Trace object size\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Trace object size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleHalfHeight = { "capsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, capsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleRadius_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Trace object size\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Trace object size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleRadius = { "capsuleRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, capsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearObjectFade_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Fade near and close parameters\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Fade near and close parameters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearObjectFade = { "nearObjectFade", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, nearObjectFade), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearObjectFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearObjectFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_farObjectFade_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Fade near and close parameters\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Fade near and close parameters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_farObjectFade = { "farObjectFade", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, farObjectFade), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_farObjectFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_farObjectFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_immediatelyFade_MetaData[] = {
		{ "Category", "Fade Objects" },
		{ "Comment", "// Instance fade\n" },
		{ "ModuleRelativePath", "Public/AdvancedFadeObjectsComponent.h" },
		{ "ToolTip", "Instance fade" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_immediatelyFade = { "immediatelyFade", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAdvancedFadeObjectsComponent, immediatelyFade), METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_immediatelyFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_immediatelyFade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_actorsIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_bIsTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_addObjectInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_calcFadeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_workDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearCameraRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_playerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_objectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_fadeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_capsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_nearObjectFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_farObjectFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::NewProp_immediatelyFade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedFadeObjectsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::ClassParams = {
		&UAdvancedFadeObjectsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedFadeObjectsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFadeObjectsComponent, 2284742787);
	template<> ADVANCEDFADEOBJECTS_API UClass* StaticClass<UAdvancedFadeObjectsComponent>()
	{
		return UAdvancedFadeObjectsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFadeObjectsComponent(Z_Construct_UClass_UAdvancedFadeObjectsComponent, &UAdvancedFadeObjectsComponent::StaticClass, TEXT("/Script/AdvancedFadeObjects"), TEXT("UAdvancedFadeObjectsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFadeObjectsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
