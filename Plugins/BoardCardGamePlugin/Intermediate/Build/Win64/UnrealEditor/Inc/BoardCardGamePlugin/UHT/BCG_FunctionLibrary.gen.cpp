// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG/BCG_FunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_FunctionLibrary() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_FunctionLibrary();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_UBCG_FunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	void UBCG_FunctionLibrary::StaticRegisterNativesUBCG_FunctionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBCG_FunctionLibrary);
	UClass* Z_Construct_UClass_UBCG_FunctionLibrary_NoRegister()
	{
		return UBCG_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBCG_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCG_FunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BCG/BCG_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BCG/BCG_FunctionLibrary.h" },
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_FunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_FunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBCG_FunctionLibrary, UBCG_FunctionLibrary::StaticClass, TEXT("UBCG_FunctionLibrary"), &Z_Registration_Info_UClass_UBCG_FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBCG_FunctionLibrary), 1334078690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_FunctionLibrary_h_1284733753(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_FunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
