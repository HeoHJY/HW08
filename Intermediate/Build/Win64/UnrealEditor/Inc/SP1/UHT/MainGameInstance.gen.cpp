// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/MainGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
SP1_API UClass* Z_Construct_UClass_UMainGameInstance();
SP1_API UClass* Z_Construct_UClass_UMainGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class UMainGameInstance Function AddToScore
struct Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics
{
	struct MainGameInstance_eventAddToScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MainGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameInstance_eventAddToScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameInstance, nullptr, "AddToScore", nullptr, nullptr, Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::MainGameInstance_eventAddToScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::MainGameInstance_eventAddToScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainGameInstance_AddToScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainGameInstance_AddToScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainGameInstance::execAddToScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UMainGameInstance Function AddToScore

// Begin Class UMainGameInstance
void UMainGameInstance::StaticRegisterNativesUMainGameInstance()
{
	UClass* Class = UMainGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToScore", &UMainGameInstance::execAddToScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainGameInstance);
UClass* Z_Construct_UClass_UMainGameInstance_NoRegister()
{
	return UMainGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMainGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MainGameInstance.h" },
		{ "ModuleRelativePath", "Public/MainGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MainGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/MainGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainGameInstance_AddToScore, "AddToScore" }, // 4100455174
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMainGameInstance_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainGameInstance, TotalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalScore_MetaData), NewProp_TotalScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMainGameInstance_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainGameInstance, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainGameInstance_Statics::NewProp_TotalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainGameInstance_Statics::NewProp_CurrentLevelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainGameInstance_Statics::ClassParams = {
	&UMainGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainGameInstance()
{
	if (!Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton, Z_Construct_UClass_UMainGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<UMainGameInstance>()
{
	return UMainGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGameInstance);
UMainGameInstance::~UMainGameInstance() {}
// End Class UMainGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainGameInstance, UMainGameInstance::StaticClass, TEXT("UMainGameInstance"), &Z_Registration_Info_UClass_UMainGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainGameInstance), 777250699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameInstance_h_1192824198(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
