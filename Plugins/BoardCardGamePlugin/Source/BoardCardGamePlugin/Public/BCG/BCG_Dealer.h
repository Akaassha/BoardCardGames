// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BCG_Dealer.generated.h"

class UBCG_Deck;
class ABCG_Player;
struct FBCG_DataStruct;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardsDealed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardsLoopDealed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBlindBettingEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBettingEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardsDrawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPotChanged);

UCLASS()
class BOARDCARDGAMEPLUGIN_API ABCG_Dealer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABCG_Dealer();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StartGame(UBCG_Deck* deck, const TArray<ABCG_Player*>& players);
	virtual void StartGame_Implementation(UBCG_Deck* deck, const TArray<ABCG_Player*>& players);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginTurn();
	void BeginTurn_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EndTurn();
	void EndTurn_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DealCards(int32 amount);
	void DealCards_Implementation(int32 amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DrawCardOnBoard(UBCG_Deck* deck, int32 amount);
	void DrawCardOnBoard_Implementation(UBCG_Deck* deck, int32 amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void RemoveCards(UBCG_Deck* deck, int32 amount);
	void RemoveCards_Implementation(UBCG_Deck* deck, int32 amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	int NextPlayer();
	int NextPlayer_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void NextSubturn();
	void NextSubturn_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Turn();
	void Turn_Implementation();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetBetValue() const { return bet_value; };

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetBetValue(float value) { bet_value = value; };

	UFUNCTION(BlueprintCallable)
	void AddToPot(float value);

	UFUNCTION(BlueprintCallable)
	TArray<ABCG_Player*> FindWinners();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Player*> Players;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBCG_Deck* Deck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Card* > BoardCards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Card* > RemovedCards;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Pot;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCardsDealed OnCardsDealed;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnBlindBettingEnded OnBlindBettingEnded;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnBettingEnded OnBettingEnded;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCardsDrawn OnCardsDrown;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnPotChanged OnPotChanged;

	UFUNCTION()
	void TurnNextPlayer(bool success);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	FOnCardsLoopDealed OnCardsLoopDealed;

	UFUNCTION()
	void DealCardsNextLoop();

	UFUNCTION()
	void DealCardsNextPlayer();

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int current_player_id = 0;

	//bet property
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bet_value = 0.0f;

	//loops property
	int32 players_played = 0;
	int32 cards_loops = 0;
	int32 current_loop = 0;
};
