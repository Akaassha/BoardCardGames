// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG/BoardCardGame.h"
#include "BCG/BCG_Deck.h"
#include "BCG/BCG_Dealer.h"

// Sets default values
ABoardCardGame::ABoardCardGame()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Deck = CreateDefaultSubobject<UBCG_Deck>("Deck");
	
}

// Called when the game starts or when spawned
void ABoardCardGame::BeginPlay()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	FTransform SpawnTransform{};

	if (auto world = GetWorld())
	{

		if (PlayerClass)
		{
			for (auto i = 0; i < PlayersAmount; ++i)
			{
				auto player = world->SpawnActor<ABCG_Player>(PlayerClass, SpawnTransform, SpawnParams);
				Players.Add(player);
			}

			CurrentPlayerID = FMath::Rand() % PlayersAmount;
			CurrentPlayer = Players[CurrentPlayerID];
			
		}

		if (CardsTable)
		{
			Deck->CardsTable = CardsTable;
		}
		else
		{
			if(Deck->CardsTable)
				CardsTable = Deck->CardsTable;
		}

		if (DealerClass)
		{
			Dealer = world->SpawnActorDeferred<ABCG_Dealer>(DealerClass, SpawnTransform);
			Dealer->Game = this;
			Dealer->Players = Players;
			Dealer->CurrentPlayer = &CurrentPlayer;
			Dealer->Deck = Deck;
			if (CardsClass)
			{
				Dealer->Deck->CardsClass = CardsClass;
			}
			Dealer->isInitialized = true;
			Dealer->FinishSpawning(SpawnTransform);
		}
	}

	Super::BeginPlay();

}

// Called every frame
void ABoardCardGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ABoardCardGame::NextPlayer()
{
	if (CurrentPlayerID >= Players.Num() - 1)
	{
		CurrentPlayerID = 0;
	}
	else
	{
		++CurrentPlayerID;
	}
	//CurrentPlayerID = (CurrentPlayerID >= Players.Num() - 1) ? CurrentPlayerID = 0 : ++CurrentPlayerID;
	CurrentPlayer = Players[CurrentPlayerID];
	return CurrentPlayerID;
}
