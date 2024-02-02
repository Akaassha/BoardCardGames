// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardCardGame.generated.h"

UCLASS()
class BOARDCARDGAMEPLUGIN_API ABoardCardGame : public AActor
{
	GENERATED_BODY()
	
	friend class ABCG_Dealer;

public:	
	// Sets default values for this actor's properties
	ABoardCardGame();

	UPROPERTY(BlueprintREadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	TSubclassOf<class ABCG_Dealer> DealerClass;

	UPROPERTY(BlueprintREadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	TSubclassOf<class ABCG_Player> PlayerClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	int32 PlayersAmount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBCG_Deck* Deck;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ABCG_Dealer* Dealer;

	UFUNCTION(BlueprintCallable)
	int32 NextPlayer();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE int32 GetCurrentPlayerID() { return CurrentPlayerID; };

private:
	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
	UDataTable* CardsTable;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true", AllowPrivateAccess = "true"))
	TSubclassOf<ABCG_Card> CardsClass;

	int32 CurrentPlayerID;

	ABCG_Player* CurrentPlayer;

	TArray<class ABCG_Player*> Players;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
