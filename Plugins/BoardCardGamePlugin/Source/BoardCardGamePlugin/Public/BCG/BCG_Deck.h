// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "BCG_Deck.generated.h"

struct FClassicCardStruct;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BOARDCARDGAMEPLUGIN_API UBCG_Deck : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBCG_Deck();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BCG)
	UDataTable* CardsTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ABCG_Card> CardsClass;

	UFUNCTION(BlueprintCallable)
	void ShuffleDeck();

	UFUNCTION(BlueprintCallable)
	class ABCG_Card* DrawCard();

	UFUNCTION(BlueprintCallable)
	void InsertCard(ABCG_Card* card, int at = 0);

	UFUNCTION(BlueprintCallable)
	void InsertCards(TArray<ABCG_Card* > cards, int at = 0);


private:
	TArray<ABCG_Card* > Cards;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE int Size() { return Cards.Num(); };
};
