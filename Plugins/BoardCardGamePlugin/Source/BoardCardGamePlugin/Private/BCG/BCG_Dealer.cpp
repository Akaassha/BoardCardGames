// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG/BCG_Dealer.h"
#include "BCG/BCG_FunctionLibrary.h"
#include "BCG/BCG_Player.h"
#include "BCG/BCG_Deck.h"
#include "BCG/BCG_Card.h"
#include "BCG/BoardCardGame.h"

// Sets default values
ABCG_Dealer::ABCG_Dealer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABCG_Dealer::BeginPlay()
{
	Super::BeginPlay();
	
	if (!isInitialized)
	{
		Players = Game->Players;
		CurrentPlayer = &Game->CurrentPlayer;
		Deck = Game->Deck;
		isInitialized = true;
	}
}

// Called every frame
void ABCG_Dealer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABCG_Dealer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABCG_Dealer::BeginTurn_Implementation()
{
	for (int i=0; i > Players.Num(); ++i)
	{
		Players[i]->InsertCards(Deck);
	}

	NextPlayer();
}

void ABCG_Dealer::EndTurn_Implementation()
{

}


int ABCG_Dealer::NextPlayer_Implementation()
{
	return Game->NextPlayer();
}

void ABCG_Dealer::DealCards_Implementation(int32 amount)
{
	if (Players.Num() <= 0 || amount <= 0) return;

	cards_loops = amount;
	OnCardsLoopDealed.AddDynamic(this, &ABCG_Dealer::DealCardsNextLoop);

	(*CurrentPlayer)->OnCardDrown.AddDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
	players_played++;
	(*CurrentPlayer)->DrawCard(Deck);
	
}

void ABCG_Dealer::DealCardsNextPlayer()
{
	if (players_played < Players.Num())
	{
		(*CurrentPlayer)->OnCardDrown.RemoveDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
		NextPlayer();
		(*CurrentPlayer)->OnCardDrown.AddDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
		players_played++;
		(*CurrentPlayer)->DrawCard(Deck);
	}
	else
	{
		(*CurrentPlayer)->OnCardDrown.RemoveDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
		players_played = 0; 
		current_loop++;
		NextPlayer();
		OnCardsLoopDealed.Broadcast();
	}
}

void ABCG_Dealer::DealCardsNextLoop()
{
	OnCardsLoopDealed.RemoveDynamic(this, &ABCG_Dealer::DealCardsNextLoop);

	if (current_loop < cards_loops)
	{
		DealCards(cards_loops);
	}
	else
	{
		current_loop = cards_loops = 0;
		OnCardsDealed.Broadcast();
	}

}

void ABCG_Dealer::Turn_Implementation()
{
	if (Players.Num() <= 0) return;

	players_played++;
	(*CurrentPlayer)->BeginTurn((*CurrentPlayer), this);
}

void ABCG_Dealer::TurnNextPlayer(bool success)
{
	if (players_played < Players.Num())
	{
		NextPlayer();
		players_played++;
		(*CurrentPlayer)->BeginTurn((*CurrentPlayer), this);
	}
	else
	{
		players_played = 0;
		//TO DO: implement better named delegate 
		//OnBettingEnded.Broadcast();
	}
}

void ABCG_Dealer::DrawCardOnBoard_Implementation(class UBCG_Deck* deck, int32 amount)
{
	if (!deck)
		return;

	for (int i = 0; i != amount; i++)
	{
		BoardCards.Add(deck->DrawCard());
	}
	OnCardsDrown.Broadcast();
}

void ABCG_Dealer::RemoveCards_Implementation(class UBCG_Deck* deck, int32 amount)
{
	if (amount <= 0) return;

	for(int i=0; i!= amount; i++)
		RemovedCards.Add(deck->DrawCard());
}
