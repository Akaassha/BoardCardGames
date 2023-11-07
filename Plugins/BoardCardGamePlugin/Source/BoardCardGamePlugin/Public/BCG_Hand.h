// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BCG_Hand.generated.h"

class UBCG_Deck;
struct FBCG_DataStruct;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCardAdded, UBCG_Deck*, deck, const TArray<FBCG_DataStruct>&, cards);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOARDCARDGAMEPLUGIN_API UBCG_Hand : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBCG_Hand();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DrawCard(UBCG_Deck* Deck);
	void DrawCard_Implementation(UBCG_Deck* Deck);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DrownCard(UBCG_Deck* deck);
	void DrownCard_Implementation(UBCG_Deck* deck);

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCardAdded OnCardAdded;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBCG_DataStruct> Cards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Points = 0;
};
