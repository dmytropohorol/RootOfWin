// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ROWGameUserSettings.generated.h"
struct FLinearColor;

/**
 * 
 */
UCLASS()
class ROOTOFWIN_API UROWGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetBrightnessAmount(float NewValue);
	UFUNCTION(BlueprintPure)
	float GetBrightnessAmount() const;

	UFUNCTION(BlueprintCallable)
	void SetMotionBlur(bool NewValue);
	UFUNCTION(BlueprintPure)
	bool GetMotionBlur() const;

	UFUNCTION(BlueprintCallable)
	void SetShowFPS(bool NewValue);
	UFUNCTION(BlueprintPure)
	bool GetShowFPS() const;

	UFUNCTION(BlueprintCallable)
	void SetMainColor(FLinearColor NewValue);
	UFUNCTION(BlueprintPure)
	FLinearColor GetMainColor() const;

	UFUNCTION(BlueprintCallable)
	static UROWGameUserSettings* GetROWGameUserSettings();

protected:
	UPROPERTY(Config)
	float BrightnessAmount;

	UPROPERTY(Config)
	bool bMotionBlur;

	UPROPERTY(Config)
	bool bShowFPS;

	UPROPERTY(Config)
	FLinearColor MainColor;

	UPROPERTY(Config)
	bool InvertMouse;
};
