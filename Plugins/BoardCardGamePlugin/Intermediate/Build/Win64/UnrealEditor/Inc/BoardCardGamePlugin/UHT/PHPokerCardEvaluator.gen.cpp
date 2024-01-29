// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/ClassicCards/Evaluator/PHPokerCardEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePHPokerCardEvaluator() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UPHCardEvaluator();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UPHPokerCardEvaluator();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UPHPokerCardEvaluator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	void UPHPokerCardEvaluator::StaticRegisterNativesUPHPokerCardEvaluator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPHPokerCardEvaluator);
	UClass* Z_Construct_UClass_UPHPokerCardEvaluator_NoRegister()
	{
		return UPHPokerCardEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UPHPokerCardEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPHPokerCardEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPHCardEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPHPokerCardEvaluator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPHPokerCardEvaluator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///*\n// * Given a rank from 1 to 7462\n// * Returns whether the rank is a flush\n// */\n//bool is_flush(int rank);\n" },
#endif
		{ "IncludePath", "ClassicCards/Evaluator/PHPokerCardEvaluator.h" },
		{ "ModuleRelativePath", "Public/ClassicCards/Evaluator/PHPokerCardEvaluator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Given a rank from 1 to 7462\n* Returns whether the rank is a flush\n\nbool is_flush(int rank);" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPHPokerCardEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPHPokerCardEvaluator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPHPokerCardEvaluator_Statics::ClassParams = {
		&UPHPokerCardEvaluator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPHPokerCardEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UPHPokerCardEvaluator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPHPokerCardEvaluator()
	{
		if (!Z_Registration_Info_UClass_UPHPokerCardEvaluator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPHPokerCardEvaluator.OuterSingleton, Z_Construct_UClass_UPHPokerCardEvaluator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPHPokerCardEvaluator.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UPHPokerCardEvaluator>()
	{
		return UPHPokerCardEvaluator::StaticClass();
	}
	UPHPokerCardEvaluator::UPHPokerCardEvaluator() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPHPokerCardEvaluator);
	UPHPokerCardEvaluator::~UPHPokerCardEvaluator() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_PHPokerCardEvaluator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_PHPokerCardEvaluator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPHPokerCardEvaluator, UPHPokerCardEvaluator::StaticClass, TEXT("UPHPokerCardEvaluator"), &Z_Registration_Info_UClass_UPHPokerCardEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPHPokerCardEvaluator), 458709169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_PHPokerCardEvaluator_h_4244326249(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_PHPokerCardEvaluator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_ClassicCards_Evaluator_PHPokerCardEvaluator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
