// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ACard::ACard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ACard::ACard(FString suit, FString rank)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Suit = suit;
	Rank = rank;
}

ACard::ACard(FString suit, FString rank, UMaterial* faceMat, UMaterial* backMat, StaticMeshComponent* facePlane, StaticMeshComponent* backPlane)
{
	Suit = suit;
	Rank = rank;
	
}

ACard::ACard(FString suit, FString rank)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Suit = suit;
	Rank = rank;
}

// Called when the game starts or when spawned
void ACard::BeginPlay()
{
	Super::BeginPlay();

	TableLocation = GetTransform();
}

// Called every frame
void ACard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

