// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG/BCG_Dealer.h"
#include "BCG/BCG_FunctionLibrary.h"
#include "BCG/BCG_Player.h"
#include "BCG/BCG_Deck.h"
#include "BCG/BCG_Card.h"

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

void ABCG_Dealer::StartGame_Implementation(UBCG_Deck* deck,const TArray<ABCG_Player*>& players)
{
	Deck = deck;
	Players = players;
	Deck->ShuffleDeck();
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
	auto winners = FindWinners();

	auto temp = Pot / (winners.Num());
	for (auto winner : winners)
	{
		winner->WinTurn(temp);
	}
	Pot -= temp * winners.Num();

}

TArray<ABCG_Player*> ABCG_Dealer::FindWinners()
{
	//TO DO: move to .h file
	TArray<ABCG_Player*> Winners;
	Winners.AddUnique(Players[0]);

	for (auto player : Players)
	{
		if (player->GetHandValue() == Winners[0]->GetHandValue())
		{
			Winners.AddUnique(player);
		}

		if (player->GetHandValue() > Winners[0]->GetHandValue())
		{
			Winners.Empty(false);
			Winners.AddUnique(player);
		}
	}

	return Winners;
}

int ABCG_Dealer::NextPlayer_Implementation()
{
	return (current_player_id >= Players.Num() - 1) ? current_player_id = 0 : ++current_player_id;
}

void ABCG_Dealer::DealCards_Implementation(int32 amount)
{
	if (Players.Num() <= 0 || amount <= 0) return;

	cards_loops = amount;
	OnCardsLoopDealed.AddDynamic(this, &ABCG_Dealer::DealCardsNextLoop);

	Players[current_player_id]->OnCardDrown.AddDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
	players_played++;
	Players[current_player_id]->DrawCard(Deck);
	
}

void ABCG_Dealer::DealCardsNextPlayer()
{
	if (players_played < Players.Num())
	{
		Players[current_player_id]->OnCardDrown.RemoveDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
		NextPlayer();
		Players[current_player_id]->OnCardDrown.AddDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
		players_played++;
		Players[current_player_id]->DrawCard(Deck);
	}
	else
	{
		Players[current_player_id]->OnCardDrown.RemoveDynamic(this, &ABCG_Dealer::DealCardsNextPlayer);
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
	Players[current_player_id]->BeginTurn(Players[current_player_id], this);

	//Players[current_player_id]->OnBetEnded.AddDynamic(this, &ABCG_Dealer::TurnNextPlayer);
	//players_played++;
	//Players[current_player_id]->BeginTurn();
}

void ABCG_Dealer::TurnNextPlayer(bool success)
{
	if (players_played < Players.Num())
	{
		NextPlayer();
		players_played++;
		Players[current_player_id]->BeginTurn(Players[current_player_id], this);
	}
	else
	{
		players_played = 0;
		OnBettingEnded.Broadcast();
	}
	//if (players_played < Players.Num())
	//{
	//	Players[current_player_id]->OnBetEnded.RemoveDynamic(this, &ABCG_Dealer::TurnNextPlayer);
	//	NextPlayer();
	//	Players[current_player_id]->OnBetEnded.AddDynamic(this, &ABCG_Dealer::TurnNextPlayer);
	//	players_played++;
	//	Players[current_player_id]->BeginTurn();
	//}
	//else
	//{
	//	Players[current_player_id]->OnBetEnded.RemoveDynamic(this, &ABCG_Dealer::TurnNextPlayer);
	//	players_played = 0;
	//	OnBettingEnded.Broadcast();
	//}
}

void ABCG_Dealer::DrawCardOnBoard_Implementation(class UBCG_Deck* deck, int32 amount)
{
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

void ABCG_Dealer::NextSubturn_Implementation()
{

}

void ABCG_Dealer::AddToPot(float value)
{
	Pot += value; 
	OnPotChanged.Broadcast();
}
