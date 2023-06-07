// Fill out your copyright notice in the Description page of Project Settings.


#include "StylizeAnimtionBlueprintLib.h"

#include "Components/SkeletalMeshComponent.h"


void UStylizeAnimtionBlueprintLib::SetComponentTickEnabled(USkeletalMeshComponent* SkeletalMeshComponent , bool bEnableTick)
{
	SkeletalMeshComponent->SetComponentTickEnabled(bEnableTick);
}

