// Copyright Fagai Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Aura_EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAura_EnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IAura_EnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HighlightActor() = 0; // Pure virtual - Nor providing a definition in this class (considered abstract)
	virtual void UnHighlightActor() = 0;
};
