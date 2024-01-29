// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BCG/BCG_Deck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBCG_DataStruct;
#ifdef BOARDCARDGAMEPLUGIN_BCG_Deck_generated_h
#error "BCG_Deck.generated.h already included, missing '#pragma once' in BCG_Deck.h"
#endif
#define BOARDCARDGAMEPLUGIN_BCG_Deck_generated_h

#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_SPARSE_DATA
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInsertCards); \
	DECLARE_FUNCTION(execInsertCard); \
	DECLARE_FUNCTION(execDrawCard); \
	DECLARE_FUNCTION(execShuffleDeck);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBCG_Deck(); \
	friend struct Z_Construct_UClass_UBCG_Deck_Statics; \
public: \
	DECLARE_CLASS(UBCG_Deck, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardCardGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(UBCG_Deck)


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBCG_Deck(UBCG_Deck&&); \
	NO_API UBCG_Deck(const UBCG_Deck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBCG_Deck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBCG_Deck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBCG_Deck) \
	NO_API virtual ~UBCG_Deck();


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_12_PROLOG
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_SPARSE_DATA \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<class UBCG_Deck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Deck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
