// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/MainPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SP1_API UClass* Z_Construct_UClass_AMainPlayerController();
SP1_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class AMainPlayerController Function GetHUDWidget
struct Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics
{
	struct MainPlayerController_eventGetHUDWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainPlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::MainPlayerController_eventGetHUDWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::MainPlayerController_eventGetHUDWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainPlayerController_GetHUDWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_GetHUDWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execGetHUDWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function GetHUDWidget

// Begin Class AMainPlayerController Function QuitGame
struct Z_Construct_UFunction_AMainPlayerController_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function QuitGame

// Begin Class AMainPlayerController Function ResumeGame
struct Z_Construct_UFunction_AMainPlayerController_ResumeGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ResumeGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ResumeGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ResumeGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_ResumeGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_ResumeGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ResumeGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execResumeGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeGame();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function ResumeGame

// Begin Class AMainPlayerController Function ReturnMenu
struct Z_Construct_UFunction_AMainPlayerController_ReturnMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ReturnMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ReturnMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ReturnMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_ReturnMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_ReturnMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ReturnMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execReturnMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnMenu();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function ReturnMenu

// Begin Class AMainPlayerController Function ShowGameHUD
struct Z_Construct_UFunction_AMainPlayerController_ShowGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ShowGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ShowGameHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ShowGameHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_ShowGameHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_ShowGameHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ShowGameHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execShowGameHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameHUD();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function ShowGameHUD

// Begin Class AMainPlayerController Function ShowMainMenu
struct Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics
{
	struct MainPlayerController_eventShowMainMenu_Parms
	{
		bool bIsRestart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRestart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRestart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart_SetBit(void* Obj)
{
	((MainPlayerController_eventShowMainMenu_Parms*)Obj)->bIsRestart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart = { "bIsRestart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainPlayerController_eventShowMainMenu_Parms), &Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::NewProp_bIsRestart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ShowMainMenu", nullptr, nullptr, Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::MainPlayerController_eventShowMainMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::MainPlayerController_eventShowMainMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainPlayerController_ShowMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ShowMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execShowMainMenu)
{
	P_GET_UBOOL(Z_Param_bIsRestart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainMenu(Z_Param_bIsRestart);
	P_NATIVE_END;
}
// End Class AMainPlayerController Function ShowMainMenu

// Begin Class AMainPlayerController Function ShowPauseMenu
struct Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ShowPauseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execShowPauseMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPauseMenu();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function ShowPauseMenu

// Begin Class AMainPlayerController Function StartGame
struct Z_Construct_UFunction_AMainPlayerController_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function StartGame

// Begin Class AMainPlayerController
void AMainPlayerController::StaticRegisterNativesAMainPlayerController()
{
	UClass* Class = AMainPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHUDWidget", &AMainPlayerController::execGetHUDWidget },
		{ "QuitGame", &AMainPlayerController::execQuitGame },
		{ "ResumeGame", &AMainPlayerController::execResumeGame },
		{ "ReturnMenu", &AMainPlayerController::execReturnMenu },
		{ "ShowGameHUD", &AMainPlayerController::execShowGameHUD },
		{ "ShowMainMenu", &AMainPlayerController::execShowMainMenu },
		{ "ShowPauseMenu", &AMainPlayerController::execShowPauseMenu },
		{ "StartGame", &AMainPlayerController::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayerController);
UClass* Z_Construct_UClass_AMainPlayerController_NoRegister()
{
	return AMainPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMainPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainPlayerController.h" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetInstance_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetInstance_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayerController_GetHUDWidget, "GetHUDWidget" }, // 818126687
		{ &Z_Construct_UFunction_AMainPlayerController_QuitGame, "QuitGame" }, // 1204174628
		{ &Z_Construct_UFunction_AMainPlayerController_ResumeGame, "ResumeGame" }, // 57233757
		{ &Z_Construct_UFunction_AMainPlayerController_ReturnMenu, "ReturnMenu" }, // 2210000158
		{ &Z_Construct_UFunction_AMainPlayerController_ShowGameHUD, "ShowGameHUD" }, // 3870352726
		{ &Z_Construct_UFunction_AMainPlayerController_ShowMainMenu, "ShowMainMenu" }, // 2001762068
		{ &Z_Construct_UFunction_AMainPlayerController_ShowPauseMenu, "ShowPauseMenu" }, // 2827518177
		{ &Z_Construct_UFunction_AMainPlayerController_StartGame, "StartGame" }, // 3468679959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseAction_MetaData), NewProp_PauseAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenuWidgetInstance = { "MainMenuWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, MainMenuWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetInstance_MetaData), NewProp_MainMenuWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, PauseMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetClass_MetaData), NewProp_PauseMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenuWidgetInstance = { "PauseMenuWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, PauseMenuWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuWidgetInstance_MetaData), NewProp_PauseMenuWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenuWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenuWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerController_Statics::ClassParams = {
	&AMainPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainPlayerController()
{
	if (!Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton, Z_Construct_UClass_AMainPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<AMainPlayerController>()
{
	return AMainPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerController);
AMainPlayerController::~AMainPlayerController() {}
// End Class AMainPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayerController, AMainPlayerController::StaticClass, TEXT("AMainPlayerController"), &Z_Registration_Info_UClass_AMainPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayerController), 3109895261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainPlayerController_h_248396961(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_MainPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
