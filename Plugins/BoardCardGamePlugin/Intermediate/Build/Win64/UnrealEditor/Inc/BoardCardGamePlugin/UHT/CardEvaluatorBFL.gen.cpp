// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/ClassicCards/Evaluator/CardEvaluatorBFL.h"
#include "BoardCardGamePlugin/Public/ClassicCards/ClassicCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardEvaluatorBFL() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UCardEvaluatorBFL();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UCardEvaluatorBFL_NoRegister();
	BOARDCARDGAMEPLUGIN_API UEnum* Z_Construct_UEnum_BoardCardGamePlugin_rank_category();
	BOARDCARDGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FClassicCardStruct();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_rank_category;
	static UEnum* rank_category_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_rank_category.OuterSingleton)
		{
			Z_Registration_Info_UEnum_rank_category.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardCardGamePlugin_rank_category, (UObject*)Z_Construct_UPackage__Script_BoardCardGamePlugin(), TEXT("rank_category"));
		}
		return Z_Registration_Info_UEnum_rank_category.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UEnum* StaticEnum<rank_category>()
	{
		return rank_category_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::Enumerators[] = {
		{ "rank_category::STRAIGHT_FLUSH", (int64)rank_category::STRAIGHT_FLUSH },
		{ "rank_category::FOUR_OF_A_KIND", (int64)rank_category::FOUR_OF_A_KIND },
		{ "rank_category::FULL_HOUSE", (int64)rank_category::FULL_HOUSE },
		{ "rank_category::FLUSH", (int64)rank_category::FLUSH },
		{ "rank_category::STRAIGHT", (int64)rank_category::STRAIGHT },
		{ "rank_category::THREE_OF_A_KIND", (int64)rank_category::THREE_OF_A_KIND },
		{ "rank_category::TWO_PAIR", (int64)rank_category::TWO_PAIR },
		{ "rank_category::ONE_PAIR", (int64)rank_category::ONE_PAIR },
		{ "rank_category::HIGH_CARD", (int64)rank_category::HIGH_CARD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "FLUSH.DisplayName", "Flush" },
		{ "FLUSH.Name", "rank_category::FLUSH" },
		{ "FOUR_OF_A_KIND.DisplayName", "Four of a Kind" },
		{ "FOUR_OF_A_KIND.Name", "rank_category::FOUR_OF_A_KIND" },
		{ "FULL_HOUSE.DisplayName", "Full House" },
		{ "FULL_HOUSE.Name", "rank_category::FULL_HOUSE" },
		{ "HIGH_CARD.DisplayName", "High Card" },
		{ "HIGH_CARD.Name", "rank_category::HIGH_CARD" },
		{ "ModuleRelativePath", "Public/ClassicCards/Evaluator/CardEvaluatorBFL.h" },
		{ "ONE_PAIR.DisplayName", "One Pair" },
		{ "ONE_PAIR.Name", "rank_category::ONE_PAIR" },
		{ "STRAIGHT.DisplayName", "Straight" },
		{ "STRAIGHT.Name", "rank_category::STRAIGHT" },
		{ "STRAIGHT_FLUSH.Comment", "/**\n * \n */// FIVE_OF_A_KIND = 0, // Reserved\n" },
		{ "STRAIGHT_FLUSH.DisplayName", "Straight Flush" },
		{ "STRAIGHT_FLUSH.Name", "rank_category::STRAIGHT_FLUSH" },
		{ "STRAIGHT_FLUSH.ToolTip", "// FIVE_OF_A_KIND = 0, // Reserved" },
		{ "THREE_OF_A_KIND.DisplayName", "Three of a Kind" },
		{ "THREE_OF_A_KIND.Name", "rank_category::THREE_OF_A_KIND" },
		{ "TWO_PAIR.DisplayName", "Two Pair" },
		{ "TWO_PAIR.Name", "rank_category::TWO_PAIR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
		nullptr,
		"rank_category",
		"rank_category",
		Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BoardCardGamePlugin_rank_category()
	{
		if (!Z_Registration_Info_UEnum_rank_category.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_rank_category.InnerSingleton, Z_Construct_UEnum_BoardCardGamePlugin_rank_category_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_rank_category.InnerSingleton;
	}
	DEFINE_FUNCTION(UCardEvaluatorBFL::execGetHandValueAsText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UCardEvaluatorBFL::GetHandValueAsText(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCardEvaluatorBFL::execEvaluateCards)
	{
		P_GET_TARRAY(FClassicCardStruct,Z_Param_Cards);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCardEvaluatorBFL::EvaluateCards(Z_Param_Cards);
		P_NATIVE_END;
	}
	void UCardEvaluatorBFL::StaticRegisterNativesUCardEvaluatorBFL()
	{
		UClass* Class = UCardEvaluatorBFL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateCards", &UCardEvaluatorBFL::execEvaluateCards },
			{ "GetHandValueAsText", &UCardEvaluatorBFL::execGetHandValueAsText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics
	{
		struct CardEvaluatorBFL_eventEvaluateCards_Parms
		{
			TArray<FClassicCardStruct> Cards;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cards_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClassicCardStruct, METADATA_PARAMS(0, nullptr) }; // 3431422768
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardEvaluatorBFL_eventEvaluateCards_Parms, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3431422768
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardEvaluatorBFL_eventEvaluateCards_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::NewProp_Cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::NewProp_Cards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicCards/Evaluator/CardEvaluatorBFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardEvaluatorBFL, nullptr, "EvaluateCards", nullptr, nullptr, Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::CardEvaluatorBFL_eventEvaluateCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::CardEvaluatorBFL_eventEvaluateCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics
	{
		struct CardEvaluatorBFL_eventGetHandValueAsText_Parms
		{
			int32 value;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardEvaluatorBFL_eventGetHandValueAsText_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardEvaluatorBFL_eventGetHandValueAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicCards/Evaluator/CardEvaluatorBFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCardEvaluatorBFL, nullptr, "GetHandValueAsText", nullptr, nullptr, Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::CardEvaluatorBFL_eventGetHandValueAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::CardEvaluatorBFL_eventGetHandValueAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardEvaluatorBFL);
	UClass* Z_Construct_UClass_UCardEvaluatorBFL_NoRegister()
	{
		return UCardEvaluatorBFL::StaticClass();
	}
	struct Z_Construct_UClass_UCardEvaluatorBFL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardEvaluatorBFL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardEvaluatorBFL_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCardEvaluatorBFL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCardEvaluatorBFL_EvaluateCards, "EvaluateCards" }, // 2121566463
		{ &Z_Construct_UFunction_UCardEvaluatorBFL_GetHandValueAsText, "GetHandValueAsText" }, // 3298938543
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardEvaluatorBFL_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardEvaluatorBFL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClassicCards/Evaluator/CardEvaluatorBFL.h" },
		{ "ModuleRelativePath", "Public/ClassicCards/Evaluator/CardEvaluatorBFL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardEvaluatorBFL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardEvaluatorBFL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardEvaluatorBFL_Statics::ClassParams = {
		&UCardEvaluatorBFL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardEvaluatorBFL_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardEvaluatorBFL_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCardEvaluatorBFL()
	{
		if (!Z_Registration_Info_UClass_UCardEvaluatorBFL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardEvaluatorBFL.OuterSingleton, Z_Construct_UClass_UCardEvaluatorBFL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardEvaluatorBFL.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UCardEvaluatorBFL>()
	{
		return UCardEvaluatorBFL::StaticClass();
	}
	UCardEvaluatorBFL::UCardEvaluatorBFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardEvaluatorBFL);
	UCardEvaluatorBFL::~UCardEvaluatorBFL() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics::EnumInfo[] = {
		{ rank_category_StaticEnum, TEXT("rank_category"), &Z_Registration_Info_UEnum_rank_category, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3143974782U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCardEvaluatorBFL, UCardEvaluatorBFL::StaticClass, TEXT("UCardEvaluatorBFL"), &Z_Registration_Info_UClass_UCardEvaluatorBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardEvaluatorBFL), 1635318003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_2777138544(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_CardEvaluatorBFL_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
