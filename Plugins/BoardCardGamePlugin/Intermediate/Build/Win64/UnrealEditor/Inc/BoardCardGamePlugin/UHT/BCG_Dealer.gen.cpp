// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG_Dealer.h"
#include "BoardCardGamePlugin/Public/BCG_Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Dealer() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Player_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck_NoRegister();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBCG_DataStruct();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnCardsDealed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCardsDealed_DelegateWrapper(const FMulticastScriptDelegate& OnCardsDealed)
{
	OnCardsDealed.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnCardsLoopDealed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCardsLoopDealed_DelegateWrapper(const FMulticastScriptDelegate& OnCardsLoopDealed)
{
	OnCardsLoopDealed.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnBlindBettingEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBlindBettingEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBlindBettingEnded)
{
	OnBlindBettingEnded.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnBettingEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBettingEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBettingEnded)
{
	OnBettingEnded.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnCardsDrawn__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCardsDrawn_DelegateWrapper(const FMulticastScriptDelegate& OnCardsDrawn)
{
	OnCardsDrawn.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnPotChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPotChanged)
{
	OnPotChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ABCG_Dealer::execBetNextPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BetNextPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execDealCardsNextPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealCardsNextPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execDealCardsNextLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealCardsNextLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execFindWinners)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ABCG_Player*>*)Z_Param__Result=P_THIS->FindWinners();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execAddToPot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToPot(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execSetBetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBetValue(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execGetBetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execBet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bet_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execNextSubturn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextSubturn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execNextPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NextPlayer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execRemoveCards)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_deck);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCards_Implementation(Z_Param_deck,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execDrawCardOnBoard)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_deck);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawCardOnBoard_Implementation(Z_Param_deck,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execDealCards)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealCards_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execEndTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTurn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execBeginTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTurn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execStartGame)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_deck);
		P_GET_TARRAY_REF(ABCG_Player*,Z_Param_Out_players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame_Implementation(Z_Param_deck,Z_Param_Out_players);
		P_NATIVE_END;
	}
	struct BCG_Dealer_eventDealCards_Parms
	{
		int32 amount;
	};
	struct BCG_Dealer_eventDrawCardOnBoard_Parms
	{
		UBCG_Deck* deck;
		int32 amount;
	};
	struct BCG_Dealer_eventNextPlayer_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		BCG_Dealer_eventNextPlayer_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct BCG_Dealer_eventRemoveCards_Parms
	{
		UBCG_Deck* deck;
		int32 amount;
	};
	struct BCG_Dealer_eventStartGame_Parms
	{
		UBCG_Deck* deck;
		TArray<ABCG_Player*> players;
	};
	static FName NAME_ABCG_Dealer_BeginTurn = FName(TEXT("BeginTurn"));
	void ABCG_Dealer::BeginTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_BeginTurn),NULL);
	}
	static FName NAME_ABCG_Dealer_Bet = FName(TEXT("Bet"));
	void ABCG_Dealer::Bet()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_Bet),NULL);
	}
	static FName NAME_ABCG_Dealer_DealCards = FName(TEXT("DealCards"));
	void ABCG_Dealer::DealCards(int32 amount)
	{
		BCG_Dealer_eventDealCards_Parms Parms;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_DealCards),&Parms);
	}
	static FName NAME_ABCG_Dealer_DrawCardOnBoard = FName(TEXT("DrawCardOnBoard"));
	void ABCG_Dealer::DrawCardOnBoard(UBCG_Deck* deck, int32 amount)
	{
		BCG_Dealer_eventDrawCardOnBoard_Parms Parms;
		Parms.deck=deck;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_DrawCardOnBoard),&Parms);
	}
	static FName NAME_ABCG_Dealer_EndTurn = FName(TEXT("EndTurn"));
	void ABCG_Dealer::EndTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_EndTurn),NULL);
	}
	static FName NAME_ABCG_Dealer_NextPlayer = FName(TEXT("NextPlayer"));
	int32 ABCG_Dealer::NextPlayer()
	{
		BCG_Dealer_eventNextPlayer_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_NextPlayer),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABCG_Dealer_NextSubturn = FName(TEXT("NextSubturn"));
	void ABCG_Dealer::NextSubturn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_NextSubturn),NULL);
	}
	static FName NAME_ABCG_Dealer_RemoveCards = FName(TEXT("RemoveCards"));
	void ABCG_Dealer::RemoveCards(UBCG_Deck* deck, int32 amount)
	{
		BCG_Dealer_eventRemoveCards_Parms Parms;
		Parms.deck=deck;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_RemoveCards),&Parms);
	}
	static FName NAME_ABCG_Dealer_StartGame = FName(TEXT("StartGame"));
	void ABCG_Dealer::StartGame(UBCG_Deck* deck, TArray<ABCG_Player*> const& players)
	{
		BCG_Dealer_eventStartGame_Parms Parms;
		Parms.deck=deck;
		Parms.players=players;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_StartGame),&Parms);
	}
	void ABCG_Dealer::StaticRegisterNativesABCG_Dealer()
	{
		UClass* Class = ABCG_Dealer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToPot", &ABCG_Dealer::execAddToPot },
			{ "BeginTurn", &ABCG_Dealer::execBeginTurn },
			{ "Bet", &ABCG_Dealer::execBet },
			{ "BetNextPlayer", &ABCG_Dealer::execBetNextPlayer },
			{ "DealCards", &ABCG_Dealer::execDealCards },
			{ "DealCardsNextLoop", &ABCG_Dealer::execDealCardsNextLoop },
			{ "DealCardsNextPlayer", &ABCG_Dealer::execDealCardsNextPlayer },
			{ "DrawCardOnBoard", &ABCG_Dealer::execDrawCardOnBoard },
			{ "EndTurn", &ABCG_Dealer::execEndTurn },
			{ "FindWinners", &ABCG_Dealer::execFindWinners },
			{ "GetBetValue", &ABCG_Dealer::execGetBetValue },
			{ "NextPlayer", &ABCG_Dealer::execNextPlayer },
			{ "NextSubturn", &ABCG_Dealer::execNextSubturn },
			{ "RemoveCards", &ABCG_Dealer::execRemoveCards },
			{ "SetBetValue", &ABCG_Dealer::execSetBetValue },
			{ "StartGame", &ABCG_Dealer::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics
	{
		struct BCG_Dealer_eventAddToPot_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventAddToPot_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "AddToPot", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::BCG_Dealer_eventAddToPot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::BCG_Dealer_eventAddToPot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_AddToPot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_AddToPot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_BeginTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_BeginTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_BeginTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "BeginTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_BeginTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_BeginTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_BeginTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_BeginTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_Bet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_Bet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_Bet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "Bet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_Bet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_Bet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_Bet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_Bet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "BetNextPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventDealCards_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "DealCards", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::PropPointers), sizeof(BCG_Dealer_eventDealCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Dealer_eventDealCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_DealCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_DealCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "DealCardsNextLoop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "DealCardsNextPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deck;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventDrawCardOnBoard_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_deck_MetaData), Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventDrawCardOnBoard_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "DrawCardOnBoard", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::PropPointers), sizeof(BCG_Dealer_eventDrawCardOnBoard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Dealer_eventDrawCardOnBoard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_EndTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_EndTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "EndTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_EndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_EndTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_EndTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_EndTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics
	{
		struct BCG_Dealer_eventFindWinners_Parms
		{
			TArray<ABCG_Player*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventFindWinners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "FindWinners", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::BCG_Dealer_eventFindWinners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::BCG_Dealer_eventFindWinners_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_FindWinners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_FindWinners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics
	{
		struct BCG_Dealer_eventGetBetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventGetBetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "GetBetValue", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::BCG_Dealer_eventGetBetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::BCG_Dealer_eventGetBetValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_GetBetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_GetBetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventNextPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "NextPlayer", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::PropPointers), sizeof(BCG_Dealer_eventNextPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Dealer_eventNextPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_NextPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_NextPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_NextSubturn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_NextSubturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_NextSubturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "NextSubturn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_NextSubturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_NextSubturn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_NextSubturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_NextSubturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deck;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventRemoveCards_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_deck_MetaData), Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventRemoveCards_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "RemoveCards", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::PropPointers), sizeof(BCG_Dealer_eventRemoveCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Dealer_eventRemoveCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_RemoveCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_RemoveCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics
	{
		struct BCG_Dealer_eventSetBetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventSetBetValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "SetBetValue", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::BCG_Dealer_eventSetBetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::BCG_Dealer_eventSetBetValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_SetBetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_SetBetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deck;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventStartGame_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_deck_MetaData), Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Dealer_eventStartGame_Parms, players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players_MetaData), Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::NewProp_players,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "StartGame", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::PropPointers), sizeof(BCG_Dealer_eventStartGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Dealer_eventStartGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABCG_Dealer);
	UClass* Z_Construct_UClass_ABCG_Dealer_NoRegister()
	{
		return ABCG_Dealer::StaticClass();
	}
	struct Z_Construct_UClass_ABCG_Dealer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Deck;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoardCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoardCards;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedCards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCardsDealed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardsDealed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlindBettingEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlindBettingEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBettingEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBettingEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCardsDrown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardsDrown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPotChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPotChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_current_player_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_current_player_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABCG_Dealer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABCG_Dealer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABCG_Dealer_AddToPot, "AddToPot" }, // 2057775345
		{ &Z_Construct_UFunction_ABCG_Dealer_BeginTurn, "BeginTurn" }, // 3375616619
		{ &Z_Construct_UFunction_ABCG_Dealer_Bet, "Bet" }, // 3381934805
		{ &Z_Construct_UFunction_ABCG_Dealer_BetNextPlayer, "BetNextPlayer" }, // 252949511
		{ &Z_Construct_UFunction_ABCG_Dealer_DealCards, "DealCards" }, // 1221357592
		{ &Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop, "DealCardsNextLoop" }, // 4225119328
		{ &Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer, "DealCardsNextPlayer" }, // 1683790548
		{ &Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard, "DrawCardOnBoard" }, // 3532949581
		{ &Z_Construct_UFunction_ABCG_Dealer_EndTurn, "EndTurn" }, // 2057666911
		{ &Z_Construct_UFunction_ABCG_Dealer_FindWinners, "FindWinners" }, // 2552469882
		{ &Z_Construct_UFunction_ABCG_Dealer_GetBetValue, "GetBetValue" }, // 1233852061
		{ &Z_Construct_UFunction_ABCG_Dealer_NextPlayer, "NextPlayer" }, // 69746153
		{ &Z_Construct_UFunction_ABCG_Dealer_NextSubturn, "NextSubturn" }, // 3715169093
		{ &Z_Construct_UFunction_ABCG_Dealer_RemoveCards, "RemoveCards" }, // 1516790594
		{ &Z_Construct_UFunction_ABCG_Dealer_SetBetValue, "SetBetValue" }, // 2903596625
		{ &Z_Construct_UFunction_ABCG_Dealer_StartGame, "StartGame" }, // 2206573836
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BCG_Dealer.h" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, Deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_Inner = { "BoardCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBCG_DataStruct, METADATA_PARAMS(0, nullptr) }; // 411631528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards = { "BoardCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, BoardCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_MetaData) }; // 411631528
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_Inner = { "RemovedCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBCG_DataStruct, METADATA_PARAMS(0, nullptr) }; // 411631528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards = { "RemovedCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, RemovedCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_MetaData) }; // 411631528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Pot_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Pot = { "Pot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, Pot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Pot_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Pot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed = { "OnCardsDealed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnCardsDealed), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed_MetaData) }; // 2969190649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBlindBettingEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBlindBettingEnded = { "OnBlindBettingEnded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnBlindBettingEnded), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBlindBettingEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBlindBettingEnded_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBlindBettingEnded_MetaData) }; // 731864947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBettingEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBettingEnded = { "OnBettingEnded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnBettingEnded), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBettingEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBettingEnded_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBettingEnded_MetaData) }; // 1354276773
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown = { "OnCardsDrown", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnCardsDrown), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown_MetaData) }; // 2811551362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnPotChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnPotChanged = { "OnPotChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnPotChanged), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPotChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnPotChanged_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnPotChanged_MetaData) }; // 3209802912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_current_player_id_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_current_player_id = { "current_player_id", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, current_player_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_current_player_id_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_current_player_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABCG_Dealer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Pot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBlindBettingEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnBettingEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnPotChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_current_player_id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABCG_Dealer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABCG_Dealer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABCG_Dealer_Statics::ClassParams = {
		&ABCG_Dealer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABCG_Dealer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::Class_MetaDataParams), Z_Construct_UClass_ABCG_Dealer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABCG_Dealer()
	{
		if (!Z_Registration_Info_UClass_ABCG_Dealer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABCG_Dealer.OuterSingleton, Z_Construct_UClass_ABCG_Dealer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABCG_Dealer.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<ABCG_Dealer>()
	{
		return ABCG_Dealer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABCG_Dealer);
	ABCG_Dealer::~ABCG_Dealer() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABCG_Dealer, ABCG_Dealer::StaticClass, TEXT("ABCG_Dealer"), &Z_Registration_Info_UClass_ABCG_Dealer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABCG_Dealer), 3755471621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_3622053110(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
