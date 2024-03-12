// Copyright Fagai Studio


#include "Character/Aura_CharacterBase.h"

AAura_CharacterBase::AAura_CharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AAura_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


