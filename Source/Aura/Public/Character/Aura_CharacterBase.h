// Copyright Fagai Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Aura_CharacterBase.generated.h"

UCLASS()
class AURA_API AAura_CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAura_CharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
