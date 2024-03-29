// Copyright Fagai Studio

#pragma once

#include "CoreMinimal.h"
#include "Character/Aura_CharacterBase.h"
#include "Interaction/Aura_EnemyInterface.h"
#include "Aura_Enemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAura_Enemy : public AAura_CharacterBase, public IAura_EnemyInterface
{
	GENERATED_BODY()

	AAura_Enemy();
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	
};
