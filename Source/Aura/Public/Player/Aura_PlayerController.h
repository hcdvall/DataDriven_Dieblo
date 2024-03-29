// Copyright Fagai Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

#include "Aura_PlayerController.generated.h"


class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IAura_EnemyInterface;

/**
 * 
 */
UCLASS()
class AURA_API AAura_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAura_PlayerController();
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);

	void CursorTrace();
	IAura_EnemyInterface* LastActor;
	IAura_EnemyInterface* ThisActor;
	
};
