// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <unordered_map>
#include <string>
#include <array>
#include <functional>
#include "CoreMinimal.h"
#include "BCG/BCG_Card.h"
#include "ClassicCard.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class BCG_CardColor : uint8
{
	spade = 4 UMETA(DisplayName = "Spade"),
	heart = 3 UMETA(DisplayName = "Heart"),
	diamond = 2 UMETA(DisplayName = "Diamond"),
	club = 1 UMETA(DisplayName = "Club"),
	none = 0 UMETA(DisplayName = "none")
};

UENUM(BlueprintType)
enum class BCG_CardKind : uint8
{
	two = 2 UMETA(DisplayName = "2"),
	three = 3 UMETA(DisplayName = "3"),
	four = 4 UMETA(DisplayName = "4"),
	five = 5 UMETA(DisplayName = "5"),
	six = 6 UMETA(DisplayName = "6"),
	seven = 7 UMETA(DisplayName = "7"),
	eight = 8 UMETA(DisplayName = "8"),
	nine = 9 UMETA(DisplayName = "9"),
	ten = 10 UMETA(DisplayName = "10"),
	jack = 11 UMETA(DisplayName = "Jack"),
	queen = 12 UMETA(DisplayName = "Queen"),
	king = 13 UMETA(DisplayName = "King"),
	ace = 14 UMETA(DisplayName = "Ace"),
	non = 0 UMETA(DisplayName = "none")
};

USTRUCT(BlueprintType)
struct FClassicCardStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	BCG_CardColor color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	BCG_CardKind kind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* avers;

	UPROPERTY()
	int id;

};

UCLASS()
class BOARDCARDGAMEPLUGIN_API AClassicCard : public ABCG_Card
{
	GENERATED_BODY()
	
public:

	AClassicCard();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	FClassicCardStruct CardData;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetCardNameAsString();

	UFUNCTION(BlueprintCallable)
	void SetPropertis(UDataTable* CardTable, FName RowName) override;

	UFUNCTION(BlueprintCallable)
	void Print(float time = 10.f);

	operator int() const { return CardData.id; }

	FString PHEvaluatorCode;

};
