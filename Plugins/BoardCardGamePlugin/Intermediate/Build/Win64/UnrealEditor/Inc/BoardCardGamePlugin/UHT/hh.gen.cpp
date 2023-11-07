// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/hh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehh() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_Uhh();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_Uhh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	void Uhh::StaticRegisterNativesUhh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Uhh);
	UClass* Z_Construct_UClass_Uhh_NoRegister()
	{
		return Uhh::StaticClass();
	}
	struct Z_Construct_UClass_Uhh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uhh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Uhh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uhh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "hh.h" },
		{ "ModuleRelativePath", "Public/hh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uhh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uhh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Uhh_Statics::ClassParams = {
		&Uhh::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Uhh_Statics::Class_MetaDataParams), Z_Construct_UClass_Uhh_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Uhh()
	{
		if (!Z_Registration_Info_UClass_Uhh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Uhh.OuterSingleton, Z_Construct_UClass_Uhh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Uhh.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<Uhh>()
	{
		return Uhh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uhh);
	Uhh::~Uhh() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_hh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_hh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Uhh, Uhh::StaticClass, TEXT("Uhh"), &Z_Registration_Info_UClass_Uhh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Uhh), 2118991693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_hh_h_3169757484(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_hh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_hh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
