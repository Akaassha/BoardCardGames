// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BCG_Dealer.generated.h"

class UBCG_Deck;
class ABCG_Player;
struct FClassicCardStruct;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardsDealed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardsLoopDealed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCardsDrawn);

UCLASS()
class BOARDCARDGAMEPLUGIN_API ABCG_Dealer : public APawn
{
	GENERATED_BODY()

	friend class ABoardCardGame;

public:
	// Sets default values for this pawn's properties
	ABCG_Dealer();

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
	void Turn();
	void Turn_Implementation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Player*> Players;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBCG_Deck* Deck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Card*> BoardCards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ABCG_Card*> RemovedCards;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCardsDealed OnCardsDealed;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCardsDrawn OnCardsDrown;

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
	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
	class ABoardCardGame* Game;

	FOnCardsLoopDealed OnCardsLoopDealed;

	UFUNCTION()
	void DealCardsNextLoop();

	UFUNCTION()
	void DealCardsNextPlayer();

	ABCG_Player** CurrentPlayer;

	//loops property
	int32 players_played = 0;
	int32 cards_loops = 0;
	int32 current_loop = 0;

	bool isInitialized = false;
};
