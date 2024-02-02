// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG/BCG_Deck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Deck() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UBCG_Deck::execSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Size();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCG_Deck::execInsertCards)
	{
		P_GET_TARRAY(ABCG_Card*,Z_Param_cards);
		P_GET_PROPERTY(FIntProperty,Z_Param_at);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertCards(Z_Param_cards,Z_Param_at);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCG_Deck::execInsertCard)
	{
		P_GET_OBJECT(ABCG_Card,Z_Param_card);
		P_GET_PROPERTY(FIntProperty,Z_Param_at);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertCard(Z_Param_card,Z_Param_at);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCG_Deck::execDrawCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABCG_Card**)Z_Param__Result=P_THIS->DrawCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCG_Deck::execShuffleDeck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShuffleDeck();
		P_NATIVE_END;
	}
	void UBCG_Deck::StaticRegisterNativesUBCG_Deck()
	{
		UClass* Class = UBCG_Deck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawCard", &UBCG_Deck::execDrawCard },
			{ "InsertCard", &UBCG_Deck::execInsertCard },
			{ "InsertCards", &UBCG_Deck::execInsertCards },
			{ "ShuffleDeck", &UBCG_Deck::execShuffleDeck },
			{ "Size", &UBCG_Deck::execSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics
	{
		struct BCG_Deck_eventDrawCard_Parms
		{
			ABCG_Card* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Deck_eventDrawCard_Parms, ReturnValue), Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Deck, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::BCG_Deck_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::BCG_Deck_eventDrawCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Deck_DrawCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Deck_DrawCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics
	{
		struct BCG_Deck_eventInsertCard_Parms
		{
			ABCG_Card* card;
			int32 at;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_card;
		static const UECodeGen_Private::FIntPropertyParams NewProp_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::NewProp_card = { "card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Deck_eventInsertCard_Parms, card), Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::NewProp_at = { "at", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Deck_eventInsertCard_Parms, at), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::NewProp_card,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::NewProp_at,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_at", "0" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Deck, nullptr, "InsertCard", nullptr, nullptr, Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::BCG_Deck_eventInsertCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::BCG_Deck_eventInsertCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Deck_InsertCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Deck_InsertCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics
	{
		struct BCG_Deck_eventInsertCards_Parms
		{
			TArray<ABCG_Card*> cards;
			int32 at;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cards_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cards;
		static const UECodeGen_Private::FIntPropertyParams NewProp_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::NewProp_cards_Inner = { "cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::NewProp_cards = { "cards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Deck_eventInsertCards_Parms, cards), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::NewProp_at = { "at", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Deck_eventInsertCards_Parms, at), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::NewProp_cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::NewProp_cards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::NewProp_at,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_at", "0" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Deck, nullptr, "InsertCards", nullptr, nullptr, Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::BCG_Deck_eventInsertCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::BCG_Deck_eventInsertCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Deck_InsertCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Deck_InsertCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_Deck_ShuffleDeck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Deck_ShuffleDeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Deck_ShuffleDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Deck, nullptr, "ShuffleDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_ShuffleDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Deck_ShuffleDeck_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBCG_Deck_ShuffleDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Deck_ShuffleDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_Deck_Size_Statics
	{
		struct BCG_Deck_eventSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCG_Deck_Size_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Deck_eventSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Deck_Size_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Deck_Size_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Deck_Size_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Deck_Size_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Deck, nullptr, "Size", nullptr, nullptr, Z_Construct_UFunction_UBCG_Deck_Size_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_Size_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_Deck_Size_Statics::BCG_Deck_eventSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_Size_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Deck_Size_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Deck_Size_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_Deck_Size_Statics::BCG_Deck_eventSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Deck_Size()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Deck_Size_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBCG_Deck);
	UClass* Z_Construct_UClass_UBCG_Deck_NoRegister()
	{
		return UBCG_Deck::StaticClass();
	}
	struct Z_Construct_UClass_UBCG_Deck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardsTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardsTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardsClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCG_Deck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCG_Deck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCG_Deck_DrawCard, "DrawCard" }, // 2222171502
		{ &Z_Construct_UFunction_UBCG_Deck_InsertCard, "InsertCard" }, // 1709519296
		{ &Z_Construct_UFunction_UBCG_Deck_InsertCards, "InsertCards" }, // 584313480
		{ &Z_Construct_UFunction_UBCG_Deck_ShuffleDeck, "ShuffleDeck" }, // 3048234832
		{ &Z_Construct_UFunction_UBCG_Deck_Size, "Size" }, // 1234044091
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Deck_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BCG/BCG_Deck.h" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsTable_MetaData[] = {
		{ "Category", "BCG" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsTable = { "CardsTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBCG_Deck, CardsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsTable_MetaData), Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsClass_MetaData[] = {
		{ "Category", "BCG_Deck" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Deck.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsClass = { "CardsClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBCG_Deck, CardsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsClass_MetaData), Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBCG_Deck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Deck_Statics::NewProp_CardsClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCG_Deck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCG_Deck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBCG_Deck_Statics::ClassParams = {
		&UBCG_Deck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBCG_Deck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::Class_MetaDataParams), Z_Construct_UClass_UBCG_Deck_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Deck_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBCG_Deck()
	{
		if (!Z_Registration_Info_UClass_UBCG_Deck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBCG_Deck.OuterSingleton, Z_Construct_UClass_UBCG_Deck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBCG_Deck.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UBCG_Deck>()
	{
		return UBCG_Deck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCG_Deck);
	UBCG_Deck::~UBCG_Deck() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBCG_Deck, UBCG_Deck::StaticClass, TEXT("UBCG_Deck"), &Z_Registration_Info_UClass_UBCG_Deck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBCG_Deck), 3769113689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_2505374069(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
