// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG/BCG_Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Card() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	void ABCG_Card::StaticRegisterNativesABCG_Card()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABCG_Card);
	UClass* Z_Construct_UClass_ABCG_Card_NoRegister()
	{
		return ABCG_Card::StaticClass();
	}
	struct Z_Construct_UClass_ABCG_Card_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_avers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_revers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_revers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABCG_Card_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCG/BCG_Card.h" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Card.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent_MetaData[] = {
		{ "Category", "Apperance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent = { "CardMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, CardMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh_MetaData[] = {
		{ "Category", "BCG_Card" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh = { "CardMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, CardMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_avers_MetaData[] = {
		{ "Category", "BCG_Card" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_avers = { "avers", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, avers), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_avers_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_avers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers_MetaData[] = {
		{ "Category", "BCG_Card" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers = { "revers", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, revers), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABCG_Card_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_avers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABCG_Card_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABCG_Card>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABCG_Card_Statics::ClassParams = {
		&ABCG_Card::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABCG_Card_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::Class_MetaDataParams), Z_Construct_UClass_ABCG_Card_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABCG_Card()
	{
		if (!Z_Registration_Info_UClass_ABCG_Card.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABCG_Card.OuterSingleton, Z_Construct_UClass_ABCG_Card_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABCG_Card.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UClass* StaticClass<ABCG_Card>()
	{
		return ABCG_Card::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABCG_Card);
	ABCG_Card::~ABCG_Card() {}
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Card_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Card_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABCG_Card, ABCG_Card::StaticClass, TEXT("ABCG_Card"), &Z_Registration_Info_UClass_ABCG_Card, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABCG_Card), 464322241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Card_h_2392238348(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_BCG_Card_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
