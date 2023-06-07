// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/SkeletalMeshComponent.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "StylizeAnimtionBlueprintLib.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API UStylizeAnimtionBlueprintLib : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable , Category=StylizeAnimLib)
	static void SetComponentTickEnabled(USkeletalMeshComponent* SkeletalMeshComponent ,  bool bEnableTick);

};
