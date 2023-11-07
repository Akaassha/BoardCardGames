// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/PHCardEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePHCardEvaluator() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UPHCardEvaluator();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UPHCardEvaluator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	void UPHCardEvaluator::StaticRegisterNativesUPHCardEvaluator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPHCardEvaluator);
	UClass* Z_Construct_UClass_UPHCardEvaluator_NoRegister()
	{
		return UPHCardEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UPHCardEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPHCardEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPHCardEvaluator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPHCardEvaluator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PHCardEvaluator.h" },
		{ "ModuleRelativePath", "Public/PHCardEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPHCardEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPHCardEvaluator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPHCardEvaluator_Statics::ClassParams = {
		&UPHCardEvaluator::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPHCardEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UPHCardEvaluator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPHCardEvaluator()
	{
		if (!Z_Registration_Info_UClass_UPHCardEvaluator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPHCardEvaluator.OuterSingleton, Z_Construct_UClass_UPHCardEvaluator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPHCardEvaluator.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<UPHCardEvaluator>()
	{
		return UPHCardEvaluator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPHCardEvaluator);
	UPHCardEvaluator::~UPHCardEvaluator() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_PHCardEvaluator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_PHCardEvaluator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPHCardEvaluator, UPHCardEvaluator::StaticClass, TEXT("UPHCardEvaluator"), &Z_Registration_Info_UClass_UPHCardEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPHCardEvaluator), 4080785087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_PHCardEvaluator_h_3456214959(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_PHCardEvaluator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_PHCardEvaluator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
