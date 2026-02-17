// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"


// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetOwner()->GetActorLocation();

	UE_LOG(LogTemp, Warning, TEXT("%s has started at location: %s"),*GetOwner()->GetActorNameOrLabel() ,* StartLocation.ToString());
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//UE_LOG(LogTemp, Warning, TEXT("Mover ticked"));
	// ...

	FVector CurrentLocation = GetOwner()->GetActorLocation();
	CurrentLocation.Z += 100 * DeltaTime; 
	GetOwner()->SetActorLocation(CurrentLocation);
}

