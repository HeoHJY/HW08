// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/RotationActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotationActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SP1_API UClass* Z_Construct_UClass_ARotationActor();
SP1_API UClass* Z_Construct_UClass_ARotationActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class ARotationActor
void ARotationActor::StaticRegisterNativesARotationActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotationActor);
UClass* Z_Construct_UClass_ARotationActor_NoRegister()
{
	return ARotationActor::StaticClass();
}
struct Z_Construct_UClass_ARotationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotationActor.h" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedX_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedY_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedZ_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeedX = { "RotationSpeedX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, RotationSpeedX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeedX_MetaData), NewProp_RotationSpeedX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeedY = { "RotationSpeedY", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, RotationSpeedY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeedY_MetaData), NewProp_RotationSpeedY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeedZ = { "RotationSpeedZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, RotationSpeedZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeedZ_MetaData), NewProp_RotationSpeedZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComp_MetaData), NewProp_SceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeedX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeedY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeedZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_SceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotationActor_Statics::ClassParams = {
	&ARotationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotationActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotationActor()
{
	if (!Z_Registration_Info_UClass_ARotationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotationActor.OuterSingleton, Z_Construct_UClass_ARotationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotationActor.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<ARotationActor>()
{
	return ARotationActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotationActor);
ARotationActor::~ARotationActor() {}
// End Class ARotationActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RotationActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotationActor, ARotationActor::StaticClass, TEXT("ARotationActor"), &Z_Registration_Info_UClass_ARotationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotationActor), 3317614263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RotationActor_h_1554535357(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RotationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_RotationActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
