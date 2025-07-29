// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/DarknessDebuffItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarknessDebuffItem() {}

// Begin Cross Module References
SP1_API UClass* Z_Construct_UClass_ADarknessDebuffItem();
SP1_API UClass* Z_Construct_UClass_ADarknessDebuffItem_NoRegister();
SP1_API UClass* Z_Construct_UClass_ADebuffItem();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class ADarknessDebuffItem
void ADarknessDebuffItem::StaticRegisterNativesADarknessDebuffItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADarknessDebuffItem);
UClass* Z_Construct_UClass_ADarknessDebuffItem_NoRegister()
{
	return ADarknessDebuffItem::StaticClass();
}
struct Z_Construct_UClass_ADarknessDebuffItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DarknessDebuffItem.h" },
		{ "ModuleRelativePath", "Public/DarknessDebuffItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarknessDebuffItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADarknessDebuffItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADebuffItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADarknessDebuffItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADarknessDebuffItem_Statics::ClassParams = {
	&ADarknessDebuffItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADarknessDebuffItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADarknessDebuffItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADarknessDebuffItem()
{
	if (!Z_Registration_Info_UClass_ADarknessDebuffItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADarknessDebuffItem.OuterSingleton, Z_Construct_UClass_ADarknessDebuffItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADarknessDebuffItem.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<ADarknessDebuffItem>()
{
	return ADarknessDebuffItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADarknessDebuffItem);
ADarknessDebuffItem::~ADarknessDebuffItem() {}
// End Class ADarknessDebuffItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DarknessDebuffItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADarknessDebuffItem, ADarknessDebuffItem::StaticClass, TEXT("ADarknessDebuffItem"), &Z_Registration_Info_UClass_ADarknessDebuffItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADarknessDebuffItem), 3705023960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DarknessDebuffItem_h_3763936438(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DarknessDebuffItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DarknessDebuffItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
