// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDFADEOBJECTS_AdvancedFadeObjectsComponent_generated_h
#error "AdvancedFadeObjectsComponent.generated.h already included, missing '#pragma once' in AdvancedFadeObjectsComponent.h"
#endif
#define ADVANCEDFADEOBJECTS_AdvancedFadeObjectsComponent_generated_h

#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFadeObjStruct_Statics; \
	ADVANCEDFADEOBJECTS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDFADEOBJECTS_API UScriptStruct* StaticStruct<struct FFadeObjStruct>();

#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_SPARSE_DATA
#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActivate); \
	DECLARE_FUNCTION(execSetEnable);


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActivate); \
	DECLARE_FUNCTION(execSetEnable);


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFadeObjectsComponent(); \
	friend struct Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFadeObjectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedFadeObjects"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFadeObjectsComponent)


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedFadeObjectsComponent(); \
	friend struct Z_Construct_UClass_UAdvancedFadeObjectsComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFadeObjectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedFadeObjects"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFadeObjectsComponent)


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFadeObjectsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFadeObjectsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFadeObjectsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFadeObjectsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFadeObjectsComponent(UAdvancedFadeObjectsComponent&&); \
	NO_API UAdvancedFadeObjectsComponent(const UAdvancedFadeObjectsComponent&); \
public:


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFadeObjectsComponent(UAdvancedFadeObjectsComponent&&); \
	NO_API UAdvancedFadeObjectsComponent(const UAdvancedFadeObjectsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFadeObjectsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFadeObjectsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedFadeObjectsComponent)


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__actorsIgnore() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, actorsIgnore); } \
	FORCEINLINE static uint32 __PPO__fadeMaterial() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, fadeMaterial); } \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, bIsEnabled); } \
	FORCEINLINE static uint32 __PPO__bIsActivate() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, bIsActivate); } \
	FORCEINLINE static uint32 __PPO__bIsTraceComplex() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, bIsTraceComplex); } \
	FORCEINLINE static uint32 __PPO__addObjectInterval() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, addObjectInterval); } \
	FORCEINLINE static uint32 __PPO__calcFadeInterval() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, calcFadeInterval); } \
	FORCEINLINE static uint32 __PPO__workDistance() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, workDistance); } \
	FORCEINLINE static uint32 __PPO__nearCameraRadius() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, nearCameraRadius); } \
	FORCEINLINE static uint32 __PPO__playerClass() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, playerClass); } \
	FORCEINLINE static uint32 __PPO__objectTypes() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, objectTypes); } \
	FORCEINLINE static uint32 __PPO__fadeRate() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, fadeRate); } \
	FORCEINLINE static uint32 __PPO__capsuleHalfHeight() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, capsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__capsuleRadius() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, capsuleRadius); } \
	FORCEINLINE static uint32 __PPO__nearObjectFade() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, nearObjectFade); } \
	FORCEINLINE static uint32 __PPO__farObjectFade() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, farObjectFade); } \
	FORCEINLINE static uint32 __PPO__immediatelyFade() { return STRUCT_OFFSET(UAdvancedFadeObjectsComponent, immediatelyFade); }


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_69_PROLOG
#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_SPARSE_DATA \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_RPC_WRAPPERS \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_INCLASS \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_SPARSE_DATA \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDFADEOBJECTS_API UClass* StaticClass<class UAdvancedFadeObjectsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedFadeObjects_Source_AdvancedFadeObjects_Public_AdvancedFadeObjectsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
