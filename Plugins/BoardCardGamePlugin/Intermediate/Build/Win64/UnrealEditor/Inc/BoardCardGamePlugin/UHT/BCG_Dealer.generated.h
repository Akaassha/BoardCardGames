// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BCG_Dealer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABCG_Player;
class UBCG_Deck;
#ifdef BOARDCARDGAMEPLUGIN_BCG_Dealer_generated_h
#error "BCG_Dealer.generated.h already included, missing '#pragma once' in BCG_Dealer.h"
#endif
#define BOARDCARDGAMEPLUGIN_BCG_Dealer_generated_h

#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_13_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnCardsDealed_DelegateWrapper(const FMulticastScriptDelegate& OnCardsDealed);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_14_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnCardsLoopDealed_DelegateWrapper(const FMulticastScriptDelegate& OnCardsLoopDealed);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_15_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnBlindBettingEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBlindBettingEnded);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_16_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnBettingEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBettingEnded);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_17_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnCardsDrawn_DelegateWrapper(const FMulticastScriptDelegate& OnCardsDrawn);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_18_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnPotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPotChanged);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_SPARSE_DATA
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDealCardsNextPlayer); \
	DECLARE_FUNCTION(execDealCardsNextLoop); \
	DECLARE_FUNCTION(execTurnNextPlayer); \
	DECLARE_FUNCTION(execFindWinners); \
	DECLARE_FUNCTION(execAddToPot); \
	DECLARE_FUNCTION(execSetBetValue); \
	DECLARE_FUNCTION(execGetBetValue); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execNextSubturn); \
	DECLARE_FUNCTION(execNextPlayer); \
	DECLARE_FUNCTION(execRemoveCards); \
	DECLARE_FUNCTION(execDrawCardOnBoard); \
	DECLARE_FUNCTION(execDealCards); \
	DECLARE_FUNCTION(execEndTurn); \
	DECLARE_FUNCTION(execBeginTurn); \
	DECLARE_FUNCTION(execStartGame);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_CALLBACK_WRAPPERS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABCG_Dealer(); \
	friend struct Z_Construct_UClass_ABCG_Dealer_Statics; \
public: \
	DECLARE_CLASS(ABCG_Dealer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardCardGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(ABCG_Dealer)


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABCG_Dealer(ABCG_Dealer&&); \
	NO_API ABCG_Dealer(const ABCG_Dealer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABCG_Dealer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABCG_Dealer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABCG_Dealer) \
	NO_API virtual ~ABCG_Dealer();


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_20_PROLOG
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_SPARSE_DATA \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_CALLBACK_WRAPPERS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<class ABCG_Dealer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Dealer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
