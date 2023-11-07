// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG_FunctionLibrary.h"
#include "BoardCardGamePlugin/Public/BCG_Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_FunctionLibrary() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_FunctionLibrary();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_FunctionLibrary_NoRegister();
	BOARDCARDGAMEPLUGIN_API UEnum* Z_Construct_UEnum_BoardCardGamePlugin_rank_category();
	BOARDCARDGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBCG_DataStruct();
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
		{ "ModuleRelativePath", "Public/BCG_FunctionLibrary.h" },
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
	DEFINE_FUNCTION(UBCG_FunctionLibrary::execGetHandValueAsText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UBCG_FunctionLibrary::GetHandValueAsText(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCG_FunctionLibrary::execEvaluateCards)
	{
		P_GET_TARRAY(FBCG_DataStruct,Z_Param_Cards);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBCG_FunctionLibrary::EvaluateCards(Z_Param_Cards);
		P_NATIVE_END;
	}
	void UBCG_FunctionLibrary::StaticRegisterNativesUBCG_FunctionLibrary()
	{
		UClass* Class = UBCG_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateCards", &UBCG_FunctionLibrary::execEvaluateCards },
			{ "GetHandValueAsText", &UBCG_FunctionLibrary::execGetHandValueAsText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics
	{
		struct BCG_FunctionLibrary_eventEvaluateCards_Parms
		{
			TArray<FBCG_DataStruct> Cards;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBCG_DataStruct, METADATA_PARAMS(0, nullptr) }; // 411631528
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_FunctionLibrary_eventEvaluateCards_Parms, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 411631528
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_FunctionLibrary_eventEvaluateCards_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::NewProp_Cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::NewProp_Cards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_FunctionLibrary, nullptr, "EvaluateCards", nullptr, nullptr, Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::BCG_FunctionLibrary_eventEvaluateCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::BCG_FunctionLibrary_eventEvaluateCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics
	{
		struct BCG_FunctionLibrary_eventGetHandValueAsText_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_FunctionLibrary_eventGetHandValueAsText_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_FunctionLibrary_eventGetHandValueAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCG_FunctionLibrary, nullptr, "GetHandValueAsText", nullptr, nullptr, Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::BCG_FunctionLibrary_eventGetHandValueAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::BCG_FunctionLibrary_eventGetHandValueAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBCG_FunctionLibrary);
	UClass* Z_Construct_UClass_UBCG_FunctionLibrary_NoRegister()
	{
		return UBCG_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBCG_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCG_FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_FunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCG_FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCG_FunctionLibrary_EvaluateCards, "EvaluateCards" }, // 3590764591
		{ &Z_Construct_UFunction_UBCG_FunctionLibrary_GetHandValueAsText, "GetHandValueAsText" }, // 3714569486
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_FunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCG_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BCG_FunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCG_FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCG_FunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBCG_FunctionLibrary_Statics::ClassParams = {
		&UBCG_FunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBCG_FunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBCG_FunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBCG_FunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBCG_FunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBCG_FunctionLibrary.OuterSingleton, Z_Construct_UClass_UBCG_FunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBCG_FunctionLibrary.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UBCG_FunctionLibrary>()
	{
		return UBCG_FunctionLibrary::StaticClass();
	}
	UBCG_FunctionLibrary::UBCG_FunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCG_FunctionLibrary);
	UBCG_FunctionLibrary::~UBCG_FunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics::EnumInfo[] = {
		{ rank_category_StaticEnum, TEXT("rank_category"), &Z_Registration_Info_UEnum_rank_category, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 768187835U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBCG_FunctionLibrary, UBCG_FunctionLibrary::StaticClass, TEXT("UBCG_FunctionLibrary"), &Z_Registration_Info_UClass_UBCG_FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBCG_FunctionLibrary), 2369055735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_4250120474(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_FunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
