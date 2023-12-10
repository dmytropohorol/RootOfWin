#include "ROWAdvancedGameInstance.h"

void UROWAdvancedGameInstance::TravelClientBP(APlayerController* Player, FString URL)
{
	Player->ClientTravel(URL, TRAVEL_Absolute, true);
}
