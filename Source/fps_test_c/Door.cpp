// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorSM"));
	Door->SetupAttachment(RootComponent);

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameSM"));
	DoorFrame->SetupAttachment(RootComponent);

	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTrigger"));
	BoxTrigger->SetBoxExtent(FVector(300.f));
	BoxTrigger->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

