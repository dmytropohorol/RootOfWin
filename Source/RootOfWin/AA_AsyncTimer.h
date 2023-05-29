// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/Engine.h"
#include "AA_AsyncTimer.generated.h"
struct FTimerHandle;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTimer);

/**
 * 
 */
UCLASS()
class ROOTOFWIN_API UAA_AsyncTimer : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FAsyncTimer Finished;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Timer|Mini-Timer")
	static UAA_AsyncTimer* AsyncTimer(const UObject* WorldContextObject, const float DelayTime);

	// UBlueprintAsyncActionBase interface
	virtual void Activate() override;
	//~UBlueprintAsyncActionBase interface

private:
	const UObject* WorldContextObject;
	UFUNCTION()
	void Finish();
	bool Active;
	FTimerHandle Timer;
	float TimerDuration;

};
