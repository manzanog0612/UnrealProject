// Fill out your copyright notice in the Description page of Project Settings.


#include "Live.h"

#include "UObject/UnrealTypePrivate.h"

void ALive::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent,
                                  AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)

{
	ACollectable::OnTriggerBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	Collect();
}

void ALive::Collect()
{
	 //UIntProperty* LivesProp = FindField(GetWorld()->GetFirstPlayerController()->GetClass(), "Lives");
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Purple, FString("Added live"));
	ACollectable::Collect();	
}