// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoardCardGamePlugin/Public/BCG_Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCG_Card() {}
// Cross Module References
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card();
	BOARDCARDGAMEPLUGIN_API UClass* Z_Construct_UClass_ABCG_Card_NoRegister();
	BOARDCARDGAMEPLUGIN_API UEnum* Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor();
	BOARDCARDGAMEPLUGIN_API UEnum* Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind();
	BOARDCARDGAMEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBCG_DataStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_BoardCardGamePlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BCG_CardColor;
	static UEnum* BCG_CardColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BCG_CardColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BCG_CardColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor, (UObject*)Z_Construct_UPackage__Script_BoardCardGamePlugin(), TEXT("BCG_CardColor"));
		}
		return Z_Registration_Info_UEnum_BCG_CardColor.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UEnum* StaticEnum<BCG_CardColor>()
	{
		return BCG_CardColor_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::Enumerators[] = {
		{ "BCG_CardColor::spade", (int64)BCG_CardColor::spade },
		{ "BCG_CardColor::heart", (int64)BCG_CardColor::heart },
		{ "BCG_CardColor::diamond", (int64)BCG_CardColor::diamond },
		{ "BCG_CardColor::club", (int64)BCG_CardColor::club },
		{ "BCG_CardColor::none", (int64)BCG_CardColor::none },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "club.DisplayName", "Club" },
		{ "club.Name", "BCG_CardColor::club" },
		{ "diamond.DisplayName", "Diamond" },
		{ "diamond.Name", "BCG_CardColor::diamond" },
		{ "heart.DisplayName", "Heart" },
		{ "heart.Name", "BCG_CardColor::heart" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
		{ "none.DisplayName", "none" },
		{ "none.Name", "BCG_CardColor::none" },
		{ "spade.DisplayName", "Spade" },
		{ "spade.Name", "BCG_CardColor::spade" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
		nullptr,
		"BCG_CardColor",
		"BCG_CardColor",
		Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor()
	{
		if (!Z_Registration_Info_UEnum_BCG_CardColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BCG_CardColor.InnerSingleton, Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BCG_CardColor.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BCG_CardKind;
	static UEnum* BCG_CardKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BCG_CardKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BCG_CardKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind, (UObject*)Z_Construct_UPackage__Script_BoardCardGamePlugin(), TEXT("BCG_CardKind"));
		}
		return Z_Registration_Info_UEnum_BCG_CardKind.OuterSingleton;
	}
	template<> BOARDCARDGAMEPLUGIN_API UEnum* StaticEnum<BCG_CardKind>()
	{
		return BCG_CardKind_StaticEnum();
	}
	struct Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::Enumerators[] = {
		{ "BCG_CardKind::two", (int64)BCG_CardKind::two },
		{ "BCG_CardKind::three", (int64)BCG_CardKind::three },
		{ "BCG_CardKind::four", (int64)BCG_CardKind::four },
		{ "BCG_CardKind::five", (int64)BCG_CardKind::five },
		{ "BCG_CardKind::six", (int64)BCG_CardKind::six },
		{ "BCG_CardKind::seven", (int64)BCG_CardKind::seven },
		{ "BCG_CardKind::eight", (int64)BCG_CardKind::eight },
		{ "BCG_CardKind::nine", (int64)BCG_CardKind::nine },
		{ "BCG_CardKind::ten", (int64)BCG_CardKind::ten },
		{ "BCG_CardKind::jack", (int64)BCG_CardKind::jack },
		{ "BCG_CardKind::queen", (int64)BCG_CardKind::queen },
		{ "BCG_CardKind::king", (int64)BCG_CardKind::king },
		{ "BCG_CardKind::ace", (int64)BCG_CardKind::ace },
		{ "BCG_CardKind::non", (int64)BCG_CardKind::non },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::Enum_MetaDataParams[] = {
		{ "ace.DisplayName", "Ace" },
		{ "ace.Name", "BCG_CardKind::ace" },
		{ "BlueprintType", "true" },
		{ "eight.DisplayName", "8" },
		{ "eight.Name", "BCG_CardKind::eight" },
		{ "five.DisplayName", "5" },
		{ "five.Name", "BCG_CardKind::five" },
		{ "four.DisplayName", "4" },
		{ "four.Name", "BCG_CardKind::four" },
		{ "jack.DisplayName", "Jack" },
		{ "jack.Name", "BCG_CardKind::jack" },
		{ "king.DisplayName", "King" },
		{ "king.Name", "BCG_CardKind::king" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
		{ "nine.DisplayName", "9" },
		{ "nine.Name", "BCG_CardKind::nine" },
		{ "non.DisplayName", "none" },
		{ "non.Name", "BCG_CardKind::non" },
		{ "queen.DisplayName", "Queen" },
		{ "queen.Name", "BCG_CardKind::queen" },
		{ "seven.DisplayName", "7" },
		{ "seven.Name", "BCG_CardKind::seven" },
		{ "six.DisplayName", "6" },
		{ "six.Name", "BCG_CardKind::six" },
		{ "ten.DisplayName", "10" },
		{ "ten.Name", "BCG_CardKind::ten" },
		{ "three.DisplayName", "3" },
		{ "three.Name", "BCG_CardKind::three" },
		{ "two.DisplayName", "2" },
		{ "two.Name", "BCG_CardKind::two" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
		nullptr,
		"BCG_CardKind",
		"BCG_CardKind",
		Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind()
	{
		if (!Z_Registration_Info_UEnum_BCG_CardKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BCG_CardKind.InnerSingleton, Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BCG_CardKind.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBCG_DataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBCG_DataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BCG_DataStruct;
class UScriptStruct* FBCG_DataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BCG_DataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BCG_DataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBCG_DataStruct, (UObject*)Z_Construct_UPackage__Script_BoardCardGamePlugin(), TEXT("BCG_DataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BCG_DataStruct.OuterSingleton;
}
template<> BOARDCARDGAMEPLUGIN_API UScriptStruct* StaticStruct<FBCG_DataStruct>()
{
	return FBCG_DataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBCG_DataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_color_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_color;
		static const UECodeGen_Private::FBytePropertyParams NewProp_kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_avers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBCG_DataStruct>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color_MetaData[] = {
		{ "Category", "BCG_DataStruct" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBCG_DataStruct, color), Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color_MetaData), Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color_MetaData) }; // 2489273740
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind_MetaData[] = {
		{ "Category", "BCG_DataStruct" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind = { "kind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBCG_DataStruct, kind), Z_Construct_UEnum_BoardCardGamePlugin_BCG_CardKind, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind_MetaData), Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind_MetaData) }; // 1114070354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_avers_MetaData[] = {
		{ "Category", "BCG_DataStruct" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_avers = { "avers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBCG_DataStruct, avers), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_avers_MetaData), Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_avers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_id_MetaData[] = {
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBCG_DataStruct, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_avers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BCG_DataStruct",
		Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::PropPointers),
		sizeof(FBCG_DataStruct),
		alignof(FBCG_DataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBCG_DataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BCG_DataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BCG_DataStruct.InnerSingleton, Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BCG_DataStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(ABCG_Card::execPrint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Print(Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABCG_Card::execGetCardNameAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCardNameAsString();
		P_NATIVE_END;
	}
	void ABCG_Card::StaticRegisterNativesABCG_Card()
	{
		UClass* Class = ABCG_Card::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCardNameAsString", &ABCG_Card::execGetCardNameAsString },
			{ "Print", &ABCG_Card::execPrint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics
	{
		struct BCG_Card_eventGetCardNameAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Card_eventGetCardNameAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Card, nullptr, "GetCardNameAsString", nullptr, nullptr, Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::BCG_Card_eventGetCardNameAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::BCG_Card_eventGetCardNameAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Card_GetCardNameAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Card_GetCardNameAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABCG_Card_Print_Statics
	{
		struct BCG_Card_eventPrint_Parms
		{
			float time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABCG_Card_Print_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BCG_Card_eventPrint_Parms, time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABCG_Card_Print_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABCG_Card_Print_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABCG_Card_Print_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_time", "10.000000" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABCG_Card_Print_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABCG_Card, nullptr, "Print", nullptr, nullptr, Z_Construct_UFunction_ABCG_Card_Print_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Card_Print_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABCG_Card_Print_Statics::BCG_Card_eventPrint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Card_Print_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABCG_Card_Print_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABCG_Card_Print_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABCG_Card_Print_Statics::BCG_Card_eventPrint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABCG_Card_Print()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABCG_Card_Print_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABCG_Card);
	UClass* Z_Construct_UClass_ABCG_Card_NoRegister()
	{
		return ABCG_Card::StaticClass();
	}
	struct Z_Construct_UClass_ABCG_Card_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_revers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_revers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABCG_Card_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoardCardGamePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABCG_Card_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABCG_Card_GetCardNameAsString, "GetCardNameAsString" }, // 739420979
		{ &Z_Construct_UFunction_ABCG_Card_Print, "Print" }, // 2779010644
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BCG_Card.h" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent_MetaData[] = {
		{ "Category", "Apperance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent = { "CardMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, CardMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh_MetaData[] = {
		{ "Category", "BCG_Card" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh = { "CardMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, CardMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers_MetaData[] = {
		{ "Category", "BCG_Card" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers = { "revers", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, revers), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardData_MetaData[] = {
		{ "Category", "BCG_Card" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BCG_Card.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCG_Card, CardData), Z_Construct_UScriptStruct_FBCG_DataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardData_MetaData), Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardData_MetaData) }; // 411631528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABCG_Card_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_revers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABCG_Card_Statics::NewProp_CardData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABCG_Card_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABCG_Card>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABCG_Card_Statics::ClassParams = {
		&ABCG_Card::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABCG_Card_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::EnumInfo[] = {
		{ BCG_CardColor_StaticEnum, TEXT("BCG_CardColor"), &Z_Registration_Info_UEnum_BCG_CardColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2489273740U) },
		{ BCG_CardKind_StaticEnum, TEXT("BCG_CardKind"), &Z_Registration_Info_UEnum_BCG_CardKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1114070354U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::ScriptStructInfo[] = {
		{ FBCG_DataStruct::StaticStruct, Z_Construct_UScriptStruct_FBCG_DataStruct_Statics::NewStructOps, TEXT("BCG_DataStruct"), &Z_Registration_Info_UScriptStruct_BCG_DataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBCG_DataStruct), 411631528U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABCG_Card, ABCG_Card::StaticClass, TEXT("ABCG_Card"), &Z_Registration_Info_UClass_ABCG_Card, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABCG_Card), 1868864179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_2988865427(TEXT("/Script/BoardCardGamePlugin"),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Vacui_Assets_BoardCardGames_Plugins_BoardCardGamePlugin_Source_BoardCardGamePlugin_Public_BCG_Card_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
