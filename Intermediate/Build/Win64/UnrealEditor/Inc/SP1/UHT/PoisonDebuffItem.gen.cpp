// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/PoisonDebuffItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoisonDebuffItem() {}

// Begin Cross Module References
SP1_API UClass* Z_Construct_UClass_ADebuffItem();
SP1_API UClass* Z_Construct_UClass_APoisonDebuffItem();
SP1_API UClass* Z_Construct_UClass_APoisonDebuffItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class APoisonDebuffItem
void APoisonDebuffItem::StaticRegisterNativesAPoisonDebuffItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoisonDebuffItem);
UClass* Z_Construct_UClass_APoisonDebuffItem_NoRegister()
{
	return APoisonDebuffItem::StaticClass();
}
struct Z_Construct_UClass_APoisonDebuffItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PoisonDebuffItem.h" },
		{ "ModuleRelativePath", "Public/PoisonDebuffItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoisonDebuffItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APoisonDebuffItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADebuffItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoisonDebuffItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APoisonDebuffItem_Statics::ClassParams = {
	&APoisonDebuffItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoisonDebuffItem_Statics::Class_MetaDataParams), Z_Construct_UClass_APoisonDebuffItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APoisonDebuffItem()
{
	if (!Z_Registration_Info_UClass_APoisonDebuffItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoisonDebuffItem.OuterSingleton, Z_Construct_UClass_APoisonDebuffItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APoisonDebuffItem.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<APoisonDebuffItem>()
{
	return APoisonDebuffItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APoisonDebuffItem);
APoisonDebuffItem::~APoisonDebuffItem() {}
// End Class APoisonDebuffItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PoisonDebuffItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APoisonDebuffItem, APoisonDebuffItem::StaticClass, TEXT("APoisonDebuffItem"), &Z_Registration_Info_UClass_APoisonDebuffItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoisonDebuffItem), 704909035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PoisonDebuffItem_h_2825463134(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PoisonDebuffItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_PoisonDebuffItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
