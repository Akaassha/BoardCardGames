// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG_Hand.h"
#include "BCG_Deck.h"
#include "BCG_Card.h"
#include "BCG_Player.h"

// Sets default values for this component's properties
UBCG_Hand::UBCG_Hand()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UBCG_Hand::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UBCG_Hand::DrawCard_Implementation(UBCG_Deck* deck)
{
	Cards.Add(deck->DrawCard());
	DrownCard(deck);
}

void UBCG_Hand::DrownCard_Implementation(UBCG_Deck* deck)
{
	OnCardAdded.Broadcast(deck, Cards);
}