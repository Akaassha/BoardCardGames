// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG/BoardCardGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardCardGame() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Dealer_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Player_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABoardCardGame();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABoardCardGame_NoRegister();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_Deck_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	DEFINE_FUNCTION(ABoardCardGame::execGetCurrentPlayerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPlayerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardCardGame::execNextPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NextPlayer();
		P_NATIVE_END;
	}
	void ABoardCardGame::StaticRegisterNativesABoardCardGame()
	{
		UClass* Class = ABoardCardGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPlayerID", &ABoardCardGame::execGetCurrentPlayerID },
			{ "NextPlayer", &ABoardCardGame::execNextPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics
	{
		struct BoardCardGame_eventGetCurrentPlayerID_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardCardGame_eventGetCurrentPlayerID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardCardGame, nullptr, "GetCurrentPlayerID", nullptr, nullptr, Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::BoardCardGame_eventGetCurrentPlayerID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::BoardCardGame_eventGetCurrentPlayerID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics
	{
		struct BoardCardGame_eventNextPlayer_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoardCardGame_eventNextPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardCardGame, nullptr, "NextPlayer", nullptr, nullptr, Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::BoardCardGame_eventNextPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::BoardCardGame_eventNextPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoardCardGame_NextPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardCardGame_NextPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoardCardGame);
	UClass* Z_Construct_UClass_ABoardCardGame_NoRegister()
	{
		return ABoardCardGame::StaticClass();
	}
	struct Z_Construct_UClass_ABoardCardGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DealerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DealerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Deck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dealer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dealer;
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
	UObject* (*const Z_Construct_UClass_ABoardCardGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoardCardGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoardCardGame_GetCurrentPlayerID, "GetCurrentPlayerID" }, // 1636295862
		{ &Z_Construct_UFunction_ABoardCardGame_NextPlayer, "NextPlayer" }, // 2542265055
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCG/BoardCardGame.h" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_DealerClass_MetaData[] = {
		{ "Category", "BoardCardGame" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_DealerClass = { "DealerClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, DealerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABCG_Dealer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_DealerClass_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_DealerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayerClass_MetaData[] = {
		{ "Category", "BoardCardGame" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, PlayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABCG_Player_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayerClass_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayersAmount_MetaData[] = {
		{ "Category", "BoardCardGame" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayersAmount = { "PlayersAmount", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, PlayersAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayersAmount_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayersAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Deck_MetaData[] = {
		{ "Category", "BoardCardGame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, Deck), Z_Construct_UClass_UBCG_Deck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Deck_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Deck_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Dealer_MetaData[] = {
		{ "Category", "BoardCardGame" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Dealer = { "Dealer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, Dealer), Z_Construct_UClass_ABCG_Dealer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Dealer_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Dealer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoardCardGame" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsTable = { "CardsTable", nullptr, (EPropertyFlags)0x0041000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, CardsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsTable_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoardCardGame" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BoardCardGame.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsClass = { "CardsClass", nullptr, (EPropertyFlags)0x0045000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardCardGame, CardsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABCG_Card_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsClass_MetaData), Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoardCardGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_DealerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_PlayersAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Deck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_Dealer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardCardGame_Statics::NewProp_CardsClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoardCardGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardCardGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardCardGame_Statics::ClassParams = {
		&ABoardCardGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoardCardGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoardCardGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardCardGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoardCardGame()
	{
		if (!Z_Registration_Info_UClass_ABoardCardGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardCardGame.OuterSingleton, Z_Construct_UClass_ABoardCardGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoardCardGame.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<ABoardCardGame>()
	{
		return ABoardCardGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardCardGame);
	ABoardCardGame::~ABoardCardGame() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BoardCardGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BoardCardGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoardCardGame, ABoardCardGame::StaticClass, TEXT("ABoardCardGame"), &Z_Registration_Info_UClass_ABoardCardGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardCardGame), 566167640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BoardCardGame_h_129486080(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BoardCardGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BoardCardGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
