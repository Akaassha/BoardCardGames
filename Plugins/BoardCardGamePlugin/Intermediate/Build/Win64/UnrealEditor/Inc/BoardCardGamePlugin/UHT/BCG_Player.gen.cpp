// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG/BCG_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Player() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Player();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Player_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Action_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck_NoRegister();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnCardDrown__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCardDrown_DelegateWrapper(const FMulticastScriptDelegate& OnCardDrown)
{
	OnCardDrown.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnBetEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBetEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBetEnded)
{
	OnBetEnded.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnPointsChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPointsChanged)
{
	OnPointsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnFold__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFold_DelegateWrapper(const FMulticastScriptDelegate& OnFold)
{
	OnFold.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ABCG_Player::execAddPoints)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execSetPoints)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoints(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execGetPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execGetHandValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHandValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execInsertCards)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_deck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertCards(Z_Param_deck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execGetCards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ABCG_Card*>*)Z_Param__Result=P_THIS->GetCards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execWinTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WinTurn_Implementation(Z_Param_points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execMakeAction)
	{
		P_GET_OBJECT(UClass,Z_Param_action);
		P_GET_OBJECT(ABCG_Player,Z_Param_player);
		P_GET_OBJECT(ABCG_Dealer,Z_Param_dealer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeAction_Implementation(Z_Param_action,Z_Param_player,Z_Param_dealer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execDrawCard)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_deck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawCard_Implementation(Z_Param_deck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Player::execBeginTurn)
	{
		P_GET_OBJECT(ABCG_Player,Z_Param_player);
		P_GET_OBJECT(ABCG_Dealer,Z_Param_dealer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTurn_Implementation(Z_Param_player,Z_Param_dealer);
		P_NATIVE_END;
	}
	struct BCG_Player_eventBeginTurn_Parms
	{
		ABCG_Player* player;
		ABCG_Dealer* dealer;
	};
	struct BCG_Player_eventDrawCard_Parms
	{
		UBCG_Deck* deck;
	};
	struct BCG_Player_eventMakeAction_Parms
	{
		TSubclassOf<UBCG_Action>  action;
		ABCG_Player* player;
		ABCG_Dealer* dealer;
	};
	struct BCG_Player_eventWinTurn_Parms
	{
		float points;
	};
	static FName NAME_ABCG_Player_BeginTurn = FName(TEXT("BeginTurn"));
	void ABCG_Player::BeginTurn(ABCG_Player* player, ABCG_Dealer* dealer)
	{
		BCG_Player_eventBeginTurn_Parms Parms;
		Parms.player=player;
		Parms.dealer=dealer;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Player_BeginTurn),&Parms);
	}
	static FName NAME_ABCG_Player_DrawCard = FName(TEXT("DrawCard"));
	void ABCG_Player::DrawCard(UBCG_Deck* deck)
	{
		BCG_Player_eventDrawCard_Parms Parms;
		Parms.deck=deck;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Player_DrawCard),&Parms);
	}
	static FName NAME_ABCG_Player_MakeAction = FName(TEXT("MakeAction"));
	void ABCG_Player::MakeAction(TSubclassOf<UBCG_Action>  action, ABCG_Player* player, ABCG_Dealer* dealer)
	{
		BCG_Player_eventMakeAction_Parms Parms;
		Parms.action=action;
		Parms.player=player;
		Parms.dealer=dealer;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Player_MakeAction),&Parms);
	}
	static FName NAME_ABCG_Player_WinTurn = FName(TEXT("WinTurn"));
	void ABCG_Player::WinTurn(float points)
	{
		BCG_Player_eventWinTurn_Parms Parms;
		Parms.points=points;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Player_WinTurn),&Parms);
	}
	void ABCG_Player::StaticRegisterNativesABCG_Player()
	{
		UClass* Class = ABCG_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoints", &ABCG_Player::execAddPoints },
			{ "BeginTurn", &ABCG_Player::execBeginTurn },
			{ "DrawCard", &ABCG_Player::execDrawCard },
			{ "GetCards", &ABCG_Player::execGetCards },
			{ "GetHandValue", &ABCG_Player::execGetHandValue },
			{ "GetPoints", &ABCG_Player::execGetPoints },
			{ "InsertCards", &ABCG_Player::execInsertCards },
			{ "MakeAction", &ABCG_Player::execMakeAction },
			{ "SetPoints", &ABCG_Player::execSetPoints },
			{ "WinTurn", &ABCG_Player::execWinTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABCG_Player_AddPoints_Statics
	{
		struct BCG_Player_eventAddPoints_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventAddPoints_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "AddPoints", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::BCG_Player_eventAddPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::BCG_Player_eventAddPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dealer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventBeginTurn_Parms, player), Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::NewProp_dealer = { "dealer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventBeginTurn_Parms, dealer), Z_Construct_UClass_ABCG_Dealer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::NewProp_dealer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TO DO: try to make it implementable Event\n" },
#endif
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TO DO: try to make it implementable Event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "BeginTurn", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::PropPointers), sizeof(BCG_Player_eventBeginTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Player_eventBeginTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_BeginTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_BeginTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_DrawCard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventDrawCard_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::NewProp_deck_MetaData), Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::NewProp_deck,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::PropPointers), sizeof(BCG_Player_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Player_eventDrawCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_DrawCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_DrawCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_GetCards_Statics
	{
		struct BCG_Player_eventGetCards_Parms
		{
			TArray<ABCG_Card*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_GetCards_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABCG_Player_GetCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventGetCards_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_GetCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_GetCards_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_GetCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_GetCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_GetCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "GetCards", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_GetCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Player_GetCards_Statics::BCG_Player_eventGetCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_GetCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Player_GetCards_Statics::BCG_Player_eventGetCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_GetCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_GetCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics
	{
		struct BCG_Player_eventGetHandValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventGetHandValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "GetHandValue", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::BCG_Player_eventGetHandValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::BCG_Player_eventGetHandValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_GetHandValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_GetHandValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_GetPoints_Statics
	{
		struct BCG_Player_eventGetPoints_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventGetPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "GetPoints", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::BCG_Player_eventGetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::BCG_Player_eventGetPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_InsertCards_Statics
	{
		struct BCG_Player_eventInsertCards_Parms
		{
			UBCG_Deck* deck;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventInsertCards_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::NewProp_deck_MetaData), Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::NewProp_deck,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "InsertCards", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::BCG_Player_eventInsertCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::BCG_Player_eventInsertCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_InsertCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_InsertCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_MakeAction_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_action;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dealer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventMakeAction_Parms, action), Z_Construct_UClass_UClass, Z_Construct_UClass_UBCG_Action_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventMakeAction_Parms, player), Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::NewProp_dealer = { "dealer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventMakeAction_Parms, dealer), Z_Construct_UClass_ABCG_Dealer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::NewProp_dealer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "MakeAction", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::PropPointers), sizeof(BCG_Player_eventMakeAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Player_eventMakeAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_MakeAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_MakeAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_SetPoints_Statics
	{
		struct BCG_Player_eventSetPoints_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventSetPoints_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "SetPoints", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::BCG_Player_eventSetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::BCG_Player_eventSetPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_SetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_SetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Player_WinTurn_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Player_eventWinTurn_Parms, points), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Player, nullptr, "WinTurn", nullptr, nullptr, Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::PropPointers), sizeof(BCG_Player_eventWinTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Player_eventWinTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Player_WinTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Player_WinTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABCG_Player);
	UClass* Z_Construct_UClass_ABCG_Player_NoRegister()
	{
		return ABCG_Player::StaticClass();
	}
	struct Z_Construct_UClass_ABCG_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCardDrown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardDrown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBetEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBetEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPointsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFold_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFold_MetaData[];
#endif
		static void NewProp_IsFold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCurrentPlayer_MetaData[];
#endif
		static void NewProp_IsCurrentPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCurrentPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsfirstPlayerInTurn_MetaData[];
#endif
		static void NewProp_IsfirstPlayerInTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsfirstPlayerInTurn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABCG_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABCG_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABCG_Player_AddPoints, "AddPoints" }, // 1500322264
		{ &Z_Construct_UFunction_ABCG_Player_BeginTurn, "BeginTurn" }, // 917338092
		{ &Z_Construct_UFunction_ABCG_Player_DrawCard, "DrawCard" }, // 3925372422
		{ &Z_Construct_UFunction_ABCG_Player_GetCards, "GetCards" }, // 2976203949
		{ &Z_Construct_UFunction_ABCG_Player_GetHandValue, "GetHandValue" }, // 3151049213
		{ &Z_Construct_UFunction_ABCG_Player_GetPoints, "GetPoints" }, // 1042967403
		{ &Z_Construct_UFunction_ABCG_Player_InsertCards, "InsertCards" }, // 27729626
		{ &Z_Construct_UFunction_ABCG_Player_MakeAction, "MakeAction" }, // 4207401285
		{ &Z_Construct_UFunction_ABCG_Player_SetPoints, "SetPoints" }, // 3782619264
		{ &Z_Construct_UFunction_ABCG_Player_WinTurn, "WinTurn" }, // 1914150309
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BCG/BCG_Player.h" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards_MetaData[] = {
		{ "Category", "BCG_Player" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnCardDrown_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnCardDrown = { "OnCardDrown", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, OnCardDrown), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnCardDrown_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnCardDrown_MetaData) }; // 2495125241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnBetEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnBetEnded = { "OnBetEnded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, OnBetEnded), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnBetEnded_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnBetEnded_MetaData) }; // 1211680661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnPointsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnPointsChanged = { "OnPointsChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, OnPointsChanged), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnPointsChanged_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnPointsChanged_MetaData) }; // 3516996397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnFold_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnFold = { "OnFold", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, OnFold), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnFold_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnFold_MetaData) }; // 4091862104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Player" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, Points), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_Points_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_Points_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_CurrentBet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Player" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Player, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_CurrentBet_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_CurrentBet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Player" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	void Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold_SetBit(void* Obj)
	{
		((ABCG_Player*)Obj)->IsFold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold = { "IsFold", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCG_Player), &Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Player" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	void Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer_SetBit(void* Obj)
	{
		((ABCG_Player*)Obj)->IsCurrentPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer = { "IsCurrentPlayer", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCG_Player), &Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Player" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Player.h" },
	};
#endif
	void Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn_SetBit(void* Obj)
	{
		((ABCG_Player*)Obj)->IsfirstPlayerInTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn = { "IsfirstPlayerInTurn", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCG_Player), &Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn_MetaData), Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABCG_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_Cards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnCardDrown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnBetEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnPointsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_OnFold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_CurrentBet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsFold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsCurrentPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Player_Statics::NewProp_IsfirstPlayerInTurn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABCG_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABCG_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABCG_Player_Statics::ClassParams = {
		&ABCG_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABCG_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_ABCG_Player_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Player_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABCG_Player()
	{
		if (!Z_Registration_Info_UClass_ABCG_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABCG_Player.OuterSingleton, Z_Construct_UClass_ABCG_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABCG_Player.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<ABCG_Player>()
	{
		return ABCG_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABCG_Player);
	ABCG_Player::~ABCG_Player() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABCG_Player, ABCG_Player::StaticClass, TEXT("ABCG_Player"), &Z_Registration_Info_UClass_ABCG_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABCG_Player), 633863103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_3794249270(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
