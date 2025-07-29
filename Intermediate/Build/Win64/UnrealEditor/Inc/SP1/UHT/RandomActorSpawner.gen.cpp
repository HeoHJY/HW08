// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/RandomActorSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomActorSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
SP1_API UClass* Z_Construct_UClass_ARandomActorSpawner();
SP1_API UClass* Z_Construct_UClass_ARandomActorSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class ARandomActorSpawner
void ARandomActorSpawner::StaticRegisterNativesARandomActorSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomActorSpawner);
UClass* Z_Construct_UClass_ARandomActorSpawner_NoRegister()
{
	return ARandomActorSpawner::StaticClass();
}
struct Z_Construct_UClass_ARandomActorSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomActorSpawner.h" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRepeatSpawn_MetaData[] = {
		{ "Category", "SpawnSetting" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "SpawnSetting" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVector_MetaData[] = {
		{ "Category", "SpawnSetting" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVector_MetaData[] = {
		{ "Category", "SpawnSetting" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "SpawnSetting" },
		{ "ModuleRelativePath", "Public/RandomActorSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static void NewProp_bIsRepeatSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRepeatSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVector;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinVector;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomActorSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
void Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_bIsRepeatSpawn_SetBit(void* Obj)
{
	((ARandomActorSpawner*)Obj)->bIsRepeatSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_bIsRepeatSpawn = { "bIsRepeatSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARandomActorSpawner), &Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_bIsRepeatSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRepeatSpawn_MetaData), NewProp_bIsRepeatSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxVector = { "MaxVector", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MaxVector), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVector_MetaData), NewProp_MaxVector_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinVector = { "MinVector", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, MinVector), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVector_MetaData), NewProp_MinVector_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomActorSpawner, Actor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_bIsRepeatSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MaxVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_MinVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomActorSpawner_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomActorSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomActorSpawner_Statics::ClassParams = {
	&ARandomActorSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomActorSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomActorSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomActorSpawner()
{
	if (!Z_Registration_Info_UClass_ARandomActorSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomActorSpawner.OuterSingleton, Z_Construct_UClass_ARandomActorSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomActorSpawner.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<ARandomActorSpawner>()
{
	return ARandomActorSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomActorSpawner);
ARandomActorSpawner::~ARandomActorSpawner() {}
// End Class ARandomActorSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RandomActorSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomActorSpawner, ARandomActorSpawner::StaticClass, TEXT("ARandomActorSpawner"), &Z_Registration_Info_UClass_ARandomActorSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomActorSpawner), 1667030415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RandomActorSpawner_h_3222699825(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RandomActorSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RandomActorSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
