// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/DebuffItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebuffItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SP1_API UClass* Z_Construct_UClass_ABaseItem();
SP1_API UClass* Z_Construct_UClass_ADebuffItem();
SP1_API UClass* Z_Construct_UClass_ADebuffItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class ADebuffItem
void ADebuffItem::StaticRegisterNativesADebuffItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADebuffItem);
UClass* Z_Construct_UClass_ADebuffItem_NoRegister()
{
	return ADebuffItem::StaticClass();
}
struct Z_Construct_UClass_ADebuffItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DebuffItem.h" },
		{ "ModuleRelativePath", "Public/DebuffItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffIcon_MetaData[] = {
		{ "Category", "Item|Effect" },
		{ "ModuleRelativePath", "Public/DebuffItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffDuration_MetaData[] = {
		{ "Category", "Item|Effect" },
		{ "ModuleRelativePath", "Public/DebuffItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebuffAmount_MetaData[] = {
		{ "Category", "Item|Effect" },
		{ "ModuleRelativePath", "Public/DebuffItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebuffIcon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebuffAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebuffItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebuffItem_Statics::NewProp_DebuffIcon = { "DebuffIcon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADebuffItem, DebuffIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffIcon_MetaData), NewProp_DebuffIcon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebuffItem_Statics::NewProp_DebuffDuration = { "DebuffDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADebuffItem, DebuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffDuration_MetaData), NewProp_DebuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebuffItem_Statics::NewProp_DebuffAmount = { "DebuffAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADebuffItem, DebuffAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebuffAmount_MetaData), NewProp_DebuffAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebuffItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebuffItem_Statics::NewProp_DebuffIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebuffItem_Statics::NewProp_DebuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebuffItem_Statics::NewProp_DebuffAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADebuffItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADebuffItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADebuffItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADebuffItem_Statics::ClassParams = {
	&ADebuffItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADebuffItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADebuffItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADebuffItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADebuffItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADebuffItem()
{
	if (!Z_Registration_Info_UClass_ADebuffItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADebuffItem.OuterSingleton, Z_Construct_UClass_ADebuffItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADebuffItem.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<ADebuffItem>()
{
	return ADebuffItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADebuffItem);
ADebuffItem::~ADebuffItem() {}
// End Class ADebuffItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DebuffItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADebuffItem, ADebuffItem::StaticClass, TEXT("ADebuffItem"), &Z_Registration_Info_UClass_ADebuffItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADebuffItem), 1234744390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DebuffItem_h_2130066733(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DebuffItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_DebuffItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
