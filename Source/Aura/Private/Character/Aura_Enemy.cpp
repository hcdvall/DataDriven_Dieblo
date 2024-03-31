// Copyright Fagai Studio


#include "Character/Aura_Enemy.h"

#include "AbilitySystem/Aura_AbilitySystemComponent.h"
#include "AbilitySystem/Aura_AttributeSet.h"
#include "Aura/Aura.h"

AAura_Enemy::AAura_Enemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UAura_AbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<UAura_AttributeSet>("AttributeSet");

}

void AAura_Enemy::BeginPlay()
{
	Super::BeginPlay();

	/** Init ability actor info for the Server
	 * - Owner Actor is on the enemy character
	 * - Avatar Actor is also on the enemy character
	*/
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	
}

void AAura_Enemy::HighlightActor()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("Highlight Enemy"));
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	
}

void AAura_Enemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
	
}
