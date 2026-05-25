// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/Attributes/BasicAttributeSet.h"

UBasicAttributeSet::UBasicAttributeSet()
{
}

void UBasicAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}