// Fill out your copyright notice in the Description page of Project Settings.

#include "BCG/BCG_Deck.h"
#include "BCG/BCG_Card.h"

// Sets default values for this component's properties
UBCG_Deck::UBCG_Deck()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBCG_Deck::BeginPlay()
{
	Super::BeginPlay();

	if (auto world = GetWorld())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		FTransform SpawnTransform;

		if (CardsClass)
		{
			TArray<FName> RowNames = CardsTable->GetRowNames();
			for (auto row : RowNames)
			{
				auto card = world->SpawnActor<ABCG_Card>(CardsClass, SpawnTransform, SpawnParams);
				card->SetPropertis(CardsTable, row);
				Cards.Add(card);
			}
		}

	}

}


// Called every frame
void UBCG_Deck::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBCG_Deck::ShuffleDeck()
{
	if (Cards.Num() <= 0)
		return;

	for (int i = 0; i != Cards.Num(); i++)
	{
		Cards.Swap(i, FMath::RandRange(i, Cards.Num() - 1));
	}
}

ABCG_Card* UBCG_Deck::DrawCard()
{
	if (Cards.Num() <= 0)
		return nullptr;

	auto card = Cards[Cards.Num()-1];
	Cards.Pop();
	return card;
}

void UBCG_Deck::InsertCard(ABCG_Card* card, int at)
{
	if (card)
	{
		if (at != 0)
		{
			Cards.Insert(card, at);
		}
		else
		{
			Cards.Add(card);
		}
	}
}

void UBCG_Deck::InsertCards(TArray<ABCG_Card*> cards, int at)
{
	for(auto card : cards)
		InsertCard(card, at);
}
