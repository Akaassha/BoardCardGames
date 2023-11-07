// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG_Action.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Action() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Player_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Action();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Action_NoRegister();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics
	{
		struct _Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms
		{
			bool Successfull;
		};
		static void NewProp_Successfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Successfull;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::NewProp_Successfull_SetBit(void* Obj)
	{
		((_Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms*)Obj)->Successfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::NewProp_Successfull = { "Successfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms), &Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::NewProp_Successfull_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::NewProp_Successfull,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/BCG_Action.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "BCG_FinnishAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::_Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::_Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBCG_FinnishAction_DelegateWrapper(const FMulticastScriptDelegate& BCG_FinnishAction, bool Successfull)
{
	struct _Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms
	{
		bool Successfull;
	};
	_Script_BoardCardGamePlugin_eventBCG_FinnishAction_Parms Parms;
	Parms.Successfull=Successfull ? true : false;
	BCG_FinnishAction.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBCG_Action::execBCG_RemoveAction)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BCG_RemoveAction(Z_Param_success);
		P_NATIVE_END;
	}
	struct BCG_Action_eventExecute_Parms
	{
		ABCG_Player* player;
		ABCG_Dealer* dealer;
	};
	static FName NAME_UBCG_Action_Execute = FName(TEXT("Execute"));
	void UBCG_Action::Execute(ABCG_Player* player, ABCG_Dealer* dealer)
	{
		BCG_Action_eventExecute_Parms Parms;
		Parms.player=player;
		Parms.dealer=dealer;
		ProcessEvent(FindFunctionChecked(NAME_UBCG_Action_Execute),&Parms);
	}
	void UBCG_Action::StaticRegisterNativesUBCG_Action()
	{
		UClass* Class = UBCG_Action::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BCG_RemoveAction", &UBCG_Action::execBCG_RemoveAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics
	{
		struct BCG_Action_eventBCG_RemoveAction_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::NewProp_success_SetBit(void* Obj)
	{
		((BCG_Action_eventBCG_RemoveAction_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BCG_Action_eventBCG_RemoveAction_Parms), &Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Action.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Action, nullptr, "BCG_RemoveAction", nullptr, nullptr, Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::BCG_Action_eventBCG_RemoveAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::BCG_Action_eventBCG_RemoveAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_Action_Execute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dealer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Action_Execute_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Action_eventExecute_Parms, player), Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Action_Execute_Statics::NewProp_dealer = { "dealer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Action_eventExecute_Parms, dealer), Z_Construct_UClass_ABCG_Dealer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Action_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Action_Execute_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Action_Execute_Statics::NewProp_dealer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Action_Execute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Action.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Action_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Action, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UBCG_Action_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Action_Execute_Statics::PropPointers), sizeof(BCG_Action_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Action_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Action_Execute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Action_Execute_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Action_eventExecute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Action_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Action_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBCG_Action);
	UClass* Z_Construct_UClass_UBCG_Action_NoRegister()
	{
		return UBCG_Action::StaticClass();
	}
	struct Z_Construct_UClass_UBCG_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BCG_FinnishAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BCG_FinnishAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCG_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Action_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCG_Action_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCG_Action_BCG_RemoveAction, "BCG_RemoveAction" }, // 1583923172
		{ &Z_Construct_UFunction_UBCG_Action_Execute, "Execute" }, // 3066481526
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Action_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Action_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BCG_Action.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BCG_Action.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Action_Statics::NewProp_BCG_FinnishAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Action.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBCG_Action_Statics::NewProp_BCG_FinnishAction = { "BCG_FinnishAction", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBCG_Action, BCG_FinnishAction), Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Action_Statics::NewProp_BCG_FinnishAction_MetaData), Z_Construct_UClass_UBCG_Action_Statics::NewProp_BCG_FinnishAction_MetaData) }; // 483875015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBCG_Action_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Action_Statics::NewProp_BCG_FinnishAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCG_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCG_Action>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBCG_Action_Statics::ClassParams = {
		&UBCG_Action::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBCG_Action_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Action_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Action_Statics::Class_MetaDataParams), Z_Construct_UClass_UBCG_Action_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Action_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBCG_Action()
	{
		if (!Z_Registration_Info_UClass_UBCG_Action.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBCG_Action.OuterSingleton, Z_Construct_UClass_UBCG_Action_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBCG_Action.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UBCG_Action>()
	{
		return UBCG_Action::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCG_Action);
	UBCG_Action::~UBCG_Action() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Action_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Action_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBCG_Action, UBCG_Action::StaticClass, TEXT("UBCG_Action"), &Z_Registration_Info_UClass_UBCG_Action, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBCG_Action), 657176631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Action_h_4165522537(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Action_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Action_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
