// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/SlowDebuffItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlowDebuffItem() {}

// Begin Cross Module References
SP1_API UClass* Z_Construct_UClass_ADebuffItem();
SP1_API UClass* Z_Construct_UClass_ASlowDebuffItem();
SP1_API UClass* Z_Construct_UClass_ASlowDebuffItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class ASlowDebuffItem
void ASlowDebuffItem::StaticRegisterNativesASlowDebuffItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlowDebuffItem);
UClass* Z_Construct_UClass_ASlowDebuffItem_NoRegister()
{
	return ASlowDebuffItem::StaticClass();
}
struct Z_Construct_UClass_ASlowDebuffItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SlowDebuffItem.h" },
		{ "ModuleRelativePath", "Public/SlowDebuffItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowDebuffItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASlowDebuffItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADebuffItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowDebuffItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlowDebuffItem_Statics::ClassParams = {
	&ASlowDebuffItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowDebuffItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlowDebuffItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlowDebuffItem()
{
	if (!Z_Registration_Info_UClass_ASlowDebuffItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlowDebuffItem.OuterSingleton, Z_Construct_UClass_ASlowDebuffItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlowDebuffItem.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<ASlowDebuffItem>()
{
	return ASlowDebuffItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowDebuffItem);
ASlowDebuffItem::~ASlowDebuffItem() {}
// End Class ASlowDebuffItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_SlowDebuffItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlowDebuffItem, ASlowDebuffItem::StaticClass, TEXT("ASlowDebuffItem"), &Z_Registration_Info_UClass_ASlowDebuffItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlowDebuffItem), 3574824143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_SlowDebuffItem_h_239764611(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_SlowDebuffItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_SlowDebuffItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
