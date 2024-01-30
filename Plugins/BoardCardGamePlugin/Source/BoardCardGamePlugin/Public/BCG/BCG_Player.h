// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BCG_Player.generated.h"

class UBCG_Deck;
class ABCG_Dealer;
class UBCG_Hand;
class UBCG_Action;
struct FBCG_DataStruct;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardDrown);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBetEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPointsChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFold);

UCLASS()
class BOARDCARDGAMEPLUGIN_API ABCG_Player : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABCG_Player();

	//TO DO: try to make it implementable Event
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginTurn(ABCG_Player* player, ABCG_Dealer* dealer);
	void BeginTurn_Implementation(ABCG_Player* player, ABCG_Dealer* dealer);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DrawCard(UBCG_Deck* deck);
	void DrawCard_Implementation(UBCG_Deck* deck);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void MakeAction(TSubclassOf<UBCG_Action> action, ABCG_Player* player, ABCG_Dealer* dealer);
	void MakeAction_Implementation(TSubclassOf<UBCG_Action> action, ABCG_Player* player, ABCG_Dealer* dealer);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WinTurn(float points);
	void WinTurn_Implementation(float points);

	UFUNCTION(BlueprintCallable)
	TArray<ABCG_Card* > GetCards();

	UFUNCTION(BlueprintCallable)
	void InsertCards(UBCG_Deck* deck);

	UFUNCTION(BlueprintCallable)
	virtual int32 GetHandValue();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetPoints() { return Points; };

	UFUNCTION(BlueprintCallable)
	void SetPoints(float value);

	UFUNCTION(BlueprintCallable)
	void AddPoints(float value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Card*> Cards;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCardDrown OnCardDrown;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnBetEnded OnBetEnded;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnPointsChanged OnPointsChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnFold OnFold;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float Points = 1000;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float CurrentBet = 0.0f;

	float bet_value = 0.0f;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool IsFold = false;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool IsCurrentPlayer = false;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool IsfirstPlayerInTurn = false;

	int32 cardsDrown = 0;
	int32 cardsToDraw = 0;
};
