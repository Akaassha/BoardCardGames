// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BCG/BCG_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABCG_Dealer;
class ABCG_Player;
class UBCG_Action;
class UBCG_Deck;
struct FBCG_DataStruct;
#ifdef BOARDCARDGAMEPLUGIN_BCG_Player_generated_h
#error "BCG_Player.generated.h already included, missing '#pragma once' in BCG_Player.h"
#endif
#define BOARDCARDGAMEPLUGIN_BCG_Player_generated_h

#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_15_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnCardDrown_DelegateWrapper(const FMulticastScriptDelegate& OnCardDrown);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_16_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnBetEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBetEnded);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_17_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPointsChanged);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_18_DELEGATE \
BOARDCARDGAMEPLUGIN_API void FOnFold_DelegateWrapper(const FMulticastScriptDelegate& OnFold);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_SPARSE_DATA
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execGetHandValue); \
	DECLARE_FUNCTION(execInsertCards); \
	DECLARE_FUNCTION(execGetCards); \
	DECLARE_FUNCTION(execWinTurn); \
	DECLARE_FUNCTION(execMakeAction); \
	DECLARE_FUNCTION(execDrawCard); \
	DECLARE_FUNCTION(execBeginTurn);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_CALLBACK_WRAPPERS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABCG_Player(); \
	friend struct Z_Construct_UClass_ABCG_Player_Statics; \
public: \
	DECLARE_CLASS(ABCG_Player, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardCardGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(ABCG_Player)


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABCG_Player(ABCG_Player&&); \
	NO_API ABCG_Player(const ABCG_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABCG_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABCG_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABCG_Player) \
	NO_API virtual ~ABCG_Player();


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_20_PROLOG
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_SPARSE_DATA \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_CALLBACK_WRAPPERS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<class ABCG_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
