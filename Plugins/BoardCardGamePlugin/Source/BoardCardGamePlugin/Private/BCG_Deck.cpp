// Fill out your copyright notice in the Description page of Project Settings.

#include "BCG_Deck.h"
#include "BCG_Card.h"

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

	// ...
	TArray<FName> RowNames = Deck->GetRowNames();
	for (auto row : RowNames)
	{
		FBCG_DataStruct card;
		card.color = (Deck->FindRow<FBCG_DataStruct>(row, ""))->color;
		card.kind = (Deck->FindRow<FBCG_DataStruct>(row, ""))->kind;
		card.avers = (Deck->FindRow<FBCG_DataStruct>(row, ""))->avers;
		//card.id = (Deck->FindRow<FBCG_DataStruct>(row, ""))->id;
		card.id = ABCG_Card::card_id(card.kind, card.color);
		Cards.Add(card);
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

struct FBCG_DataStruct UBCG_Deck::DrawCard()
{
	if (Cards.Num() <= 0)
		return FBCG_DataStruct{};

	FBCG_DataStruct card = Cards[Cards.Num()-1];
	Cards.Pop();
	return card;
}

void UBCG_Deck::InsertCard(struct FBCG_DataStruct card, int at)
{
	Cards.Add(card);
}

void UBCG_Deck::InsertCards(TArray<FBCG_DataStruct> cards, int at)
{
	for(auto card : cards)
		InsertCard(card, at);
}

int UBCG_Deck::get_deck_size()
{
	return Cards.Num();
}