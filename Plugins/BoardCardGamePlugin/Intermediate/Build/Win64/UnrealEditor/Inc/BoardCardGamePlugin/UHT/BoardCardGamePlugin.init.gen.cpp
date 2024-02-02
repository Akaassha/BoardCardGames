// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardCardGamePlugin_init() {}
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature();
	BOARDCARDGAMEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BoardCardGamePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_BoardCardGamePlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_BCG_FinnishAction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnBetEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardDrown__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDealed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsDrawn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnCardsLoopDealed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnFold__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BoardCardGamePlugin_OnPointsChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BoardCardGamePlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x837D3A25,
				0xE6DEA49B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BoardCardGamePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BoardCardGamePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BoardCardGamePlugin(Z_Construct_UPackage__Script_BoardCardGamePlugin, TEXT("/Script/BoardCardGamePlugin"), Z_Registration_Info_UPackage__Script_BoardCardGamePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x837D3A25, 0xE6DEA49B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
