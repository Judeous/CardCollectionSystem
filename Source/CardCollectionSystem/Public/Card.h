// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"

class StaticMeshComponent;

UCLASS()
class CARDCOLLECTIONSYSTEM_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();
	ACard(FString suit, FString rank);
	ACard(FString suit, FString rank, UMaterial* faceMat, UMaterial* backMat, StaticMeshComponent* facePlane, StaticMeshComponent* backPlane);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//The Suits and the Ranks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
		FString Suit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
		FString Rank;

	//Cards need a material to be put onto Planes, which is why there are two of each for the front and the back
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CardFace")
		UMaterial* CardFace;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CardFace")
		class StaticMeshComponent* CardFacePlane;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CardBack")
		UMaterial* CardBack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CardBack")
		StaticMeshComponent* CardBackPlane;
	
	//The location the card was at before being pulled into the hand
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
		FTransform TableLocation;
};
