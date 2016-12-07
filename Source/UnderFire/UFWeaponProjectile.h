// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "UFWeapon.h"
#include "UFWeaponProjectile.generated.h"

UCLASS()
class UNDERFIRE_API AUFWeaponProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUFWeaponProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = UFWeapon)
		AUFWeapon* owningWeapon;
	
};
