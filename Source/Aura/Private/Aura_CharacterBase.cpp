// Copyright Fagai Studio


#include "Aura_CharacterBase.h"

// Sets default values
AAura_CharacterBase::AAura_CharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAura_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAura_CharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAura_CharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

