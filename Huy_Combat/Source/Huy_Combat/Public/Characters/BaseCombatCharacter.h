// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "BaseCombatCharacter.generated.h"

class UBasicAttributeSet;

UCLASS()
class HUY_COMBAT_API ABaseCombatCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY();ơ

public:
	// Sets default values for this character's properties
	ABaseCombatCharacter();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitiesSystem")
	UAbilitySystemComponent* AbilitySystemComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitiesSystem")
	UBasicAttributeSet* BasicAttributeSet;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void PossessedBy(AController* NewController) override;
	
	virtual void OnRep_PlayerState() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
