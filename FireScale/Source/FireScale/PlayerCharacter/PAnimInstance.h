#pragma once

#include "Animation/AnimInstance.h"
#include "PAnimInstance.generated.h"

class APCharacter;
class UCharacterMovementComponent;

UCLASS()
class FIRESCALE_API UPAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	// PROPERTIES & VARIABLES
	// -----------------------------

	UPROPERTY(BlueprintReadOnly)
	APCharacter* PlayerCharacter;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	UCharacterMovementComponent* PlayerCharacterMovement;
	
};
