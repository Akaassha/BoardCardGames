// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassicCards/Evaluator/CardEvaluatorBFL.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClassicCardStruct;
#ifdef BOARDCARDGAMEPLUGIN_CardEvaluatorBFL_generated_h
#error "CardEvaluatorBFL.generated.h already included, missing '#pragma once' in CardEvaluatorBFL.h"
#endif
#define BOARDCARDGAMEPLUGIN_CardEvaluatorBFL_generated_h

#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_SPARSE_DATA
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandValueAsText); \
	DECLARE_FUNCTION(execEvaluateCards);


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_ACCESSORS
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCardEvaluatorBFL(); \
	friend struct Z_Construct_UClass_UCardEvaluatorBFL_Statics; \
public: \
	DECLARE_CLASS(UCardEvaluatorBFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BoardCardGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCardEvaluatorBFL)


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCardEvaluatorBFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCardEvaluatorBFL(UCardEvaluatorBFL&&); \
	NO_API UCardEvaluatorBFL(const UCardEvaluatorBFL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCardEvaluatorBFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCardEvaluatorBFL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCardEvaluatorBFL) \
	NO_API virtual ~UCardEvaluatorBFL();


#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_40_PROLOG
#define FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_SPARSE_DATA \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_ACCESSORS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_INCLASS_NO_PURE_DECLS \
	FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<class UCardEvaluatorBFL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h


#define FOREACH_ENUM_RANK_CATEGORY(op) \
	op(rank_category::STRAIGHT_FLUSH) \
	op(rank_category::FOUR_OF_A_KIND) \
	op(rank_category::FULL_HOUSE) \
	op(rank_category::FLUSH) \
	op(rank_category::STRAIGHT) \
	op(rank_category::THREE_OF_A_KIND) \
	op(rank_category::TWO_PAIR) \
	op(rank_category::ONE_PAIR) \
	op(rank_category::HIGH_CARD) 

enum class rank_category : uint8;
template<> struct TIsUEnumClass<rank_category> { enum { Value = true }; };
template<> BOARDCARDGAMEPLUGIN_API UEnum* StaticEnum<rank_category>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
