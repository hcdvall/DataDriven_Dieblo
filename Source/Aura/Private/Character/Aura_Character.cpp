// Copyright Fagai Studio


#include "Character/Aura_Character.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/Aura_PlayerState.h"

AAura_Character::AAura_Character()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void AAura_Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Init ability actor info for the Server
	InitAbilityActorInfo();
	
}

void AAura_Character::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// Init ability actor info for the Client
	InitAbilityActorInfo();
}

void AAura_Character::InitAbilityActorInfo()
{
	/** Init ability actor info for the Server/Client
	 * - Owner Actor is on the player state
	 * - Avatar Actor is on the player character
	*/
	AAura_PlayerState* Aura_PlayerState = GetPlayerState<AAura_PlayerState>();
	check(Aura_PlayerState)
	Aura_PlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(Aura_PlayerState, this);
	AbilitySystemComponent = Aura_PlayerState->GetAbilitySystemComponent();
	AttributeSet = Aura_PlayerState->GetAttributeSet();
}
