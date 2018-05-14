// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraManager.h"
#include "AGI_FightingGameCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UCameraManager::UCameraManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCameraManager::BeginPlay()
{
	Super::BeginPlay();

	APawn* p1 = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	APawn* p2 = UGameplayStatics::GetPlayerPawn(GetWorld(), 1);

	UE_LOG(LogTemp, Warning, TEXT("YEAST"));

	// ...
	
}


// Called every frame
void UCameraManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

