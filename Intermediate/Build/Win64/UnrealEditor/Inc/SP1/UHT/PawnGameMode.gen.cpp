// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/PawnGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
SP1_API UClass* Z_Construct_UClass_APawnGameMode();
SP1_API UClass* Z_Construct_UClass_APawnGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class APawnGameMode
void APawnGameMode::StaticRegisterNativesAPawnGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawnGameMode);
UClass* Z_Construct_UClass_APawnGameMode_NoRegister()
{
	return APawnGameMode::StaticClass();
}
struct Z_Construct_UClass_APawnGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PawnGameMode.h" },
		{ "ModuleRelativePath", "Public/PawnGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APawnGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APawnGameMode_Statics::ClassParams = {
	&APawnGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APawnGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APawnGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APawnGameMode()
{
	if (!Z_Registration_Info_UClass_APawnGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawnGameMode.OuterSingleton, Z_Construct_UClass_APawnGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APawnGameMode.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<APawnGameMode>()
{
	return APawnGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APawnGameMode);
APawnGameMode::~APawnGameMode() {}
// End Class APawnGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PawnGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APawnGameMode, APawnGameMode::StaticClass, TEXT("APawnGameMode"), &Z_Registration_Info_UClass_APawnGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawnGameMode), 2909638596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PawnGameMode_h_1212391962(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PawnGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PawnGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
