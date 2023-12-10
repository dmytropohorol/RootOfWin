#pragma once

#include "CoreMinimal.h"
#include "AdvancedFriendsGameInstance.h"
#include "ROWAdvancedGameInstance.generated.h"

class APlayerController;
/**
 * 
 */
UCLASS()
class ROOTOFWIN_API UROWAdvancedGameInstance : public UAdvancedFriendsGameInstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void TravelClientBP(APlayerController* Player, FString URL);
};
