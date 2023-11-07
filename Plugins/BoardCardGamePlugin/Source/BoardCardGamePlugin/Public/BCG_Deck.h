// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "BCG_Deck.generated.h"

struct FBCG_DataStruct;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOARDCARDGAMEPLUGIN_API UBCG_Deck : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBCG_Deck();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BCG)
	UDataTable* Deck;

	UFUNCTION(BlueprintCallable)
	void ShuffleDeck();

	UFUNCTION(BlueprintCallable)
	struct FBCG_DataStruct DrawCard();

	UFUNCTION(BlueprintCallable)
	void InsertCard(FBCG_DataStruct card, int at = 0);

	UFUNCTION(BlueprintCallable)
	void InsertCards(TArray<FBCG_DataStruct> cards, int at = 0);

	TArray<FBCG_DataStruct> Cards;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int get_deck_size();
};
