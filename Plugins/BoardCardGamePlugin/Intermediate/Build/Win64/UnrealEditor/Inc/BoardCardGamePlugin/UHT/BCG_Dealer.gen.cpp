// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG/BCG_Dealer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Dealer() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Player_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABoardCardGame_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck_NoRegister();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature();
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
	DEFINE_FUNCTION(ABCG_Dealer::execTurnNextPlayer)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnNextPlayer(Z_Param_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Dealer::execTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn_Implementation();
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
	static FName NAME_ABCG_Dealer_BeginTurn = FName(TEXT("BeginTurn"));
	void ABCG_Dealer::BeginTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_BeginTurn),NULL);
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
	static FName NAME_ABCG_Dealer_RemoveCards = FName(TEXT("RemoveCards"));
	void ABCG_Dealer::RemoveCards(UBCG_Deck* deck, int32 amount)
	{
		BCG_Dealer_eventRemoveCards_Parms Parms;
		Parms.deck=deck;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_RemoveCards),&Parms);
	}
	static FName NAME_ABCG_Dealer_Turn = FName(TEXT("Turn"));
	void ABCG_Dealer::Turn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABCG_Dealer_Turn),NULL);
	}
	void ABCG_Dealer::StaticRegisterNativesABCG_Dealer()
	{
		UClass* Class = ABCG_Dealer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTurn", &ABCG_Dealer::execBeginTurn },
			{ "DealCards", &ABCG_Dealer::execDealCards },
			{ "DealCardsNextLoop", &ABCG_Dealer::execDealCardsNextLoop },
			{ "DealCardsNextPlayer", &ABCG_Dealer::execDealCardsNextPlayer },
			{ "DrawCardOnBoard", &ABCG_Dealer::execDrawCardOnBoard },
			{ "EndTurn", &ABCG_Dealer::execEndTurn },
			{ "NextPlayer", &ABCG_Dealer::execNextPlayer },
			{ "RemoveCards", &ABCG_Dealer::execRemoveCards },
			{ "Turn", &ABCG_Dealer::execTurn },
			{ "TurnNextPlayer", &ABCG_Dealer::execTurnNextPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
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
	struct Z_Construct_UFunction_ABCG_Dealer_Turn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "Turn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_Turn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABCG_Dealer_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics
	{
		struct BCG_Dealer_eventTurnNextPlayer_Parms
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
	void Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::NewProp_success_SetBit(void* Obj)
	{
		((BCG_Dealer_eventTurnNextPlayer_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BCG_Dealer_eventTurnNextPlayer_Parms), &Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Dealer, nullptr, "TurnNextPlayer", nullptr, nullptr, Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::BCG_Dealer_eventTurnNextPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::BCG_Dealer_eventTurnNextPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer_Statics::FuncParams);
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoardCards;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovedCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedCards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCardsDealed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardsDealed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCardsDrown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardsDrown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Game;
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
		{ &Z_Construct_UFunction_ABCG_Dealer_BeginTurn, "BeginTurn" }, // 2427972481
		{ &Z_Construct_UFunction_ABCG_Dealer_DealCards, "DealCards" }, // 2473667377
		{ &Z_Construct_UFunction_ABCG_Dealer_DealCardsNextLoop, "DealCardsNextLoop" }, // 2246067829
		{ &Z_Construct_UFunction_ABCG_Dealer_DealCardsNextPlayer, "DealCardsNextPlayer" }, // 3402202654
		{ &Z_Construct_UFunction_ABCG_Dealer_DrawCardOnBoard, "DrawCardOnBoard" }, // 4070054266
		{ &Z_Construct_UFunction_ABCG_Dealer_EndTurn, "EndTurn" }, // 3796445157
		{ &Z_Construct_UFunction_ABCG_Dealer_NextPlayer, "NextPlayer" }, // 3549594249
		{ &Z_Construct_UFunction_ABCG_Dealer_RemoveCards, "RemoveCards" }, // 698693138
		{ &Z_Construct_UFunction_ABCG_Dealer_Turn, "Turn" }, // 1991991063
		{ &Z_Construct_UFunction_ABCG_Dealer_TurnNextPlayer, "TurnNextPlayer" }, // 2242692652
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BCG/BCG_Dealer.h" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, Deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_Inner = { "BoardCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards = { "BoardCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, BoardCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_Inner = { "RemovedCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_MetaData[] = {
		{ "Category", "BCG_Dealer" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards = { "RemovedCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, RemovedCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed = { "OnCardsDealed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnCardsDealed), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed_MetaData) }; // 2830100486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown = { "OnCardsDrown", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, OnCardsDrown), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown_MetaData) }; // 3104873643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Game_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BCG_Dealer" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Dealer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0041000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Dealer, Game), Z_Construct_UClass_ABoardCardGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Game_MetaData), Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Game_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABCG_Dealer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_BoardCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_RemovedCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDealed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_OnCardsDrown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Dealer_Statics::NewProp_Game,
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
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Dealer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Dealer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABCG_Dealer, ABCG_Dealer::StaticClass, TEXT("ABCG_Dealer"), &Z_Registration_Info_UClass_ABCG_Dealer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABCG_Dealer), 1205710989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Dealer_h_3399867399(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Dealer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Dealer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
