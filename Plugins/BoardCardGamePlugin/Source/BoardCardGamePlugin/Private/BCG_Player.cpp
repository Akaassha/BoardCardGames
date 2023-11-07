// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG_Player.h"
#include "BCG_FunctionLibrary.h"
#include "BCG_Hand.h"
#include "BCG_Dealer.h"
#include "BCG_Deck.h"

// Sets default values
ABCG_Player::ABCG_Player()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Hand = CreateDefaultSubobject<UBCG_Hand>(TEXT("Hand"));
}

// Called when the game starts or when spawned
void ABCG_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABCG_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABCG_Player::BeginTurn_Implementation(bool first)
{
	IsfirstPlayerInTurn = first;
}

// Called to bind functionality to input
void ABCG_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABCG_Player::DrawCard_Implementation(UBCG_Deck* deck)
{
	Cards.Add(deck->DrawCard());
	OnCardDrown.Broadcast();
}

void ABCG_Player::Bet_Implementation(float pot, float minimum, bool forced)
{

}

void ABCG_Player::Raise_Implementation()
{

}

void ABCG_Player::Call_Implementation(ABCG_Dealer* Dealer)
{
	if (Dealer)
	{
		if (CurrentBet >= Dealer->GetBetValue())
		{
			return;
		}
		else
		{
			float temp = Dealer->GetBetValue() - CurrentBet;
			Dealer->AddToPot(temp);
			Points -= temp;
			CurrentBet += temp;
		}
	}


}

void ABCG_Player::Fold_Implementation()
{
	IsFold = true;
	OnFold.Broadcast();
}

int32 ABCG_Player::GetHandValue()
{
	return UBCG_FunctionLibrary::EvaluateCards(Cards);
}

void ABCG_Player::SetPoints(float value)
{ 
	Points = value;
	OnPointsChanged.Broadcast();
}

void ABCG_Player::AddPoints(float value)
{
	Points += value;
	OnPointsChanged.Broadcast();
}

void ABCG_Player::WinTurn_Implementation(float points)
{
	Points += points;

}

TArray<FBCG_DataStruct> ABCG_Player::GetCards()
{ 
	return Cards; 
};

void ABCG_Player::InsertCards(UBCG_Deck* deck)
{
	deck->InsertCards(Cards);
	Cards.Empty();
}