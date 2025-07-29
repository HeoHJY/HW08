// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/MainGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SP1_API UClass* Z_Construct_UClass_AMainGameState();
SP1_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class AMainGameState Function AddScore
struct Z_Construct_UFunction_AMainGameState_AddScore_Statics
{
	struct MainGameState_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainGameState_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_AddScore_Statics::MainGameState_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_AddScore_Statics::MainGameState_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AMainGameState Function AddScore

// Begin Class AMainGameState Function GetScore
struct Z_Construct_UFunction_AMainGameState_GetScore_Statics
{
	struct MainGameState_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainGameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameState_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameState_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AMainGameState_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameState_GetScore_Statics::MainGameState_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameState_GetScore_Statics::MainGameState_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameState_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AMainGameState Function GetScore

// Begin Class AMainGameState Function OnGameOver
struct Z_Construct_UFunction_AMainGameState_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameState_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameState, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameState_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameState_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainGameState_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameState_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameState::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class AMainGameState Function OnGameOver

// Begin Class AMainGameState
void AMainGameState::StaticRegisterNativesAMainGameState()
{
	UClass* Class = AMainGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &AMainGameState::execAddScore },
		{ "GetScore", &AMainGameState::execGetScore },
		{ "OnGameOver", &AMainGameState::execOnGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameState);
UClass* Z_Construct_UClass_AMainGameState_NoRegister()
{
	return AMainGameState::StaticClass();
}
struct Z_Construct_UClass_AMainGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainGameState.h" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveDuration_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaveIndex_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaves_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MainGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedCoinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoinCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWaveIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGameState_AddScore, "AddScore" }, // 2579451738
		{ &Z_Construct_UFunction_AMainGameState_GetScore, "GetScore" }, // 3788091597
		{ &Z_Construct_UFunction_AMainGameState_OnGameOver, "OnGameOver" }, // 69785496
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_SpawnedCoinCount = { "SpawnedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, SpawnedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCoinCount_MetaData), NewProp_SpawnedCoinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_CollectedCoinCount = { "CollectedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, CollectedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoinCount_MetaData), NewProp_CollectedCoinCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_WaveDuration = { "WaveDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, WaveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveDuration_MetaData), NewProp_WaveDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_CurrentWaveIndex = { "CurrentWaveIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, CurrentWaveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWaveIndex_MetaData), NewProp_CurrentWaveIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameState_Statics::NewProp_MaxWaves = { "MaxWaves", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameState, MaxWaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWaves_MetaData), NewProp_MaxWaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_SpawnedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_CollectedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_WaveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_LevelMapNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_CurrentWaveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameState_Statics::NewProp_MaxWaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameState_Statics::ClassParams = {
	&AMainGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameState()
{
	if (!Z_Registration_Info_UClass_AMainGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameState.OuterSingleton, Z_Construct_UClass_AMainGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameState.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<AMainGameState>()
{
	return AMainGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameState);
AMainGameState::~AMainGameState() {}
// End Class AMainGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameState, AMainGameState::StaticClass, TEXT("AMainGameState"), &Z_Registration_Info_UClass_AMainGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameState), 3582851635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameState_h_2712460494(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
