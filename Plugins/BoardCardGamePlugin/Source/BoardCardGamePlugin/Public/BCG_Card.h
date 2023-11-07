// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <unordered_map>
#include <string>
#include <array>
#include <functional>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCG_Card.generated.h"

const static std::unordered_map<char, int> rankMap = {
  {'2', 0}, {'3', 1}, {'4', 2}, {'5', 3},
  {'6', 4}, {'7', 5}, {'8', 6}, {'9', 7},
  {'T', 8}, {'J', 9}, {'Q', 10}, {'K', 11}, {'A', 12},
};
const static std::unordered_map<char, int> suitMap = {
  {'C', 0}, {'D', 1}, {'H', 2}, {'S', 3},
  {'c', 0}, {'d', 1}, {'h', 2}, {'s', 3},
};
const static std::array<char, 13> rankReverseArray = {
  '2', '3', '4', '5',
  '6', '7', '8', '9',
  'T', 'J', 'Q', 'K', 'A',
};
const static std::array<char, 4> suitReverseArray = { 'c', 'd', 'h', 's' };

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
struct FBCG_DataStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	BCG_CardColor color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	BCG_CardKind kind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* avers;

	UPROPERTY()
	int id;
};

UCLASS()
class BOARDCARDGAMEPLUGIN_API ABCG_Card : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABCG_Card();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	class UStaticMeshComponent* CardMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* CardMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	class UTexture2D* revers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	FBCG_DataStruct CardData;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetCardNameAsString();

	UFUNCTION(BlueprintCallable)
	void Print(float time = 10.f);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	operator int() const { return CardData.id; }

	static int card_id(BCG_CardKind kind, BCG_CardColor color);
	FString PHEvaluatorCode;
	/*int id;*/
};

//UCLASS()
//class UBCGFunctionLibrary : public UBlueprintFunctionLibrary
//{
//	GENERATED_BODY()
//
//public:
//	//UFUNCTION(BlueprintPure, meta = (DisplayName = "Convert To String", CompactNodeTitle = "->", BlueprintAutoCast), Category = BoardCardGame)
//	//static FString CardToString(ABCG_Card* card);
//};

