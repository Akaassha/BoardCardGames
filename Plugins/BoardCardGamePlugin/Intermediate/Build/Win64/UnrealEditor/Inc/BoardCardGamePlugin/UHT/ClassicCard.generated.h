// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassicCards/ClassicCard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOARDCARDGAMEPLUGIN_ClassicCard_generated_h
#error "ClassicCard.generated.h already included, missing '#pragma once' in ClassicCard.h"
#endif
#define BOARDCARDGAMEPLUGIN_ClassicCard_generated_h

#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBCG_DataStruct_Statics; \
	BOARDCARDGAMEPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BOARDCARDGAMEPLUGIN_API UScriptStruct* StaticStruct<struct FBCG_DataStruct>();

#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_SPARSE_DATA
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrint); \
	DECLARE_FUNCTION(execGetCardNameAsString);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClassicCard(); \
	friend struct Z_Construct_UClass_AClassicCard_Statics; \
public: \
	DECLARE_CLASS(AClassicCard, ABCG_Card, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoardCardGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(AClassicCard)


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClassicCard(AClassicCard&&); \
	NO_API AClassicCard(const AClassicCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClassicCard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClassicCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClassicCard) \
	NO_API virtual ~AClassicCard();


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_81_PROLOG
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_SPARSE_DATA \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_INCLASS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<class AClassicCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_ClassicCard_h


#define FOREACH_ENUM_BCG_CARDCOLOR(op) \
	op(BCG_CardColor::spade) \
	op(BCG_CardColor::heart) \
	op(BCG_CardColor::diamond) \
	op(BCG_CardColor::club) \
	op(BCG_CardColor::none) 

enum class BCG_CardColor : uint8;
template<> struct TIsUEnumClass<BCG_CardColor> { enum { Value = true }; };
template<> BOARDCARDGAMEPLUGIN_API UEnum* StaticEnum<BCG_CardColor>();

#define FOREACH_ENUM_BCG_CARDKIND(op) \
	op(BCG_CardKind::two) \
	op(BCG_CardKind::three) \
	op(BCG_CardKind::four) \
	op(BCG_CardKind::five) \
	op(BCG_CardKind::six) \
	op(BCG_CardKind::seven) \
	op(BCG_CardKind::eight) \
	op(BCG_CardKind::nine) \
	op(BCG_CardKind::ten) \
	op(BCG_CardKind::jack) \
	op(BCG_CardKind::queen) \
	op(BCG_CardKind::king) \
	op(BCG_CardKind::ace) \
	op(BCG_CardKind::non) 

enum class BCG_CardKind : uint8;
template<> struct TIsUEnumClass<BCG_CardKind> { enum { Value = true }; };
template<> BOARDCARDGAMEPLUGIN_API UEnum* StaticEnum<BCG_CardKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
