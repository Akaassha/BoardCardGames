// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG_Hand.h"
#include "BoardCardGamePlugin/Public/BCG_Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Hand() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Hand();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Hand_NoRegister();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBCG_DataStruct();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics
	{
		struct _Script_BoardCardGamePlugin_eventOnCardAdded_Parms
		{
			UBCG_Deck* deck;
			TArray<FBCG_DataStruct> cards;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deck;
		static const UECodeGen_Private::FStructPropertyParams NewProp_cards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BoardCardGamePlugin_eventOnCardAdded_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_deck_MetaData), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards_Inner = { "cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBCG_DataStruct, METADATA_PARAMS(0, nullptr) }; // 411631528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards = { "cards", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BoardCardGamePlugin_eventOnCardAdded_Parms, cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards_MetaData), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards_MetaData) }; // 411631528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::NewProp_cards,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin, nullptr, "OnCardAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::_Script_BoardCardGamePlugin_eventOnCardAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::_Script_BoardCardGamePlugin_eventOnCardAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCardAdded_DelegateWrapper(const FMulticastScriptDelegate& OnCardAdded, UBCG_Deck* deck, TArray<FBCG_DataStruct> const& cards)
{
	struct _Script_BoardCardGamePlugin_eventOnCardAdded_Parms
	{
		UBCG_Deck* deck;
		TArray<FBCG_DataStruct> cards;
	};
	_Script_BoardCardGamePlugin_eventOnCardAdded_Parms Parms;
	Parms.deck=deck;
	Parms.cards=cards;
	OnCardAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBCG_Hand::execDrownCard)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_deck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrownCard_Implementation(Z_Param_deck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCG_Hand::execDrawCard)
	{
		P_GET_OBJECT(UBCG_Deck,Z_Param_Deck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawCard_Implementation(Z_Param_Deck);
		P_NATIVE_END;
	}
	struct BCG_Hand_eventDrawCard_Parms
	{
		UBCG_Deck* Deck;
	};
	struct BCG_Hand_eventDrownCard_Parms
	{
		UBCG_Deck* deck;
	};
	static FName NAME_UBCG_Hand_DrawCard = FName(TEXT("DrawCard"));
	void UBCG_Hand::DrawCard(UBCG_Deck* Deck)
	{
		BCG_Hand_eventDrawCard_Parms Parms;
		Parms.Deck=Deck;
		ProcessEvent(FindFunctionChecked(NAME_UBCG_Hand_DrawCard),&Parms);
	}
	static FName NAME_UBCG_Hand_DrownCard = FName(TEXT("DrownCard"));
	void UBCG_Hand::DrownCard(UBCG_Deck* deck)
	{
		BCG_Hand_eventDrownCard_Parms Parms;
		Parms.deck=deck;
		ProcessEvent(FindFunctionChecked(NAME_UBCG_Hand_DrownCard),&Parms);
	}
	void UBCG_Hand::StaticRegisterNativesUBCG_Hand()
	{
		UClass* Class = UBCG_Hand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawCard", &UBCG_Hand::execDrawCard },
			{ "DrownCard", &UBCG_Hand::execDrownCard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Deck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::NewProp_Deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Hand_eventDrawCard_Parms, Deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::NewProp_Deck_MetaData), Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::NewProp_Deck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::NewProp_Deck,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Hand, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::PropPointers), sizeof(BCG_Hand_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Hand_eventDrawCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Hand_DrawCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Hand_DrawCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::NewProp_deck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::NewProp_deck = { "deck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Hand_eventDrownCard_Parms, deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::NewProp_deck_MetaData), Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::NewProp_deck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::NewProp_deck,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_Hand, nullptr, "DrownCard", nullptr, nullptr, Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::PropPointers), sizeof(BCG_Hand_eventDrownCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(BCG_Hand_eventDrownCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_Hand_DrownCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_Hand_DrownCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBCG_Hand);
	UClass* Z_Construct_UClass_UBCG_Hand_NoRegister()
	{
		return UBCG_Hand::StaticClass();
	}
	struct Z_Construct_UClass_UBCG_Hand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCardAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardAdded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCG_Hand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCG_Hand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCG_Hand_DrawCard, "DrawCard" }, // 67122445
		{ &Z_Construct_UFunction_UBCG_Hand_DrownCard, "DrownCard" }, // 592980812
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Hand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BCG_Hand.h" },
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Hand_Statics::NewProp_OnCardAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBCG_Hand_Statics::NewProp_OnCardAdded = { "OnCardAdded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBCG_Hand, OnCardAdded), Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::NewProp_OnCardAdded_MetaData), Z_Construct_UClass_UBCG_Hand_Statics::NewProp_OnCardAdded_MetaData) }; // 1876968738
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBCG_DataStruct, METADATA_PARAMS(0, nullptr) }; // 411631528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards_MetaData[] = {
		{ "Category", "BCG_Hand" },
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBCG_Hand, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards_MetaData), Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards_MetaData) }; // 411631528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "BCG_Hand" },
		{ "ModuleRelativePath", "Public/BCG_Hand.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBCG_Hand, Points), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Points_MetaData), Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBCG_Hand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Hand_Statics::NewProp_OnCardAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Cards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBCG_Hand_Statics::NewProp_Points,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCG_Hand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCG_Hand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBCG_Hand_Statics::ClassParams = {
		&UBCG_Hand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBCG_Hand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::Class_MetaDataParams), Z_Construct_UClass_UBCG_Hand_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_Hand_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBCG_Hand()
	{
		if (!Z_Registration_Info_UClass_UBCG_Hand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBCG_Hand.OuterSingleton, Z_Construct_UClass_UBCG_Hand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBCG_Hand.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UBCG_Hand>()
	{
		return UBCG_Hand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCG_Hand);
	UBCG_Hand::~UBCG_Hand() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Hand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Hand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBCG_Hand, UBCG_Hand::StaticClass, TEXT("UBCG_Hand"), &Z_Registration_Info_UClass_UBCG_Hand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBCG_Hand), 131415665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Hand_h_813630452(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Hand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Hand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
