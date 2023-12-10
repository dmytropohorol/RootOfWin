// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ROWGameUserSettings.generated.h"
struct FLinearColor;
struct FKey;
struct FEnhancedActionKeyMapping;
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
	void SetInvertMouse(bool NewValue);
	UFUNCTION(BlueprintPure)
	bool GetInvertMouse() const;

	UFUNCTION(BlueprintCallable)
	void SetMouseSensetivity(float NewValue);
	UFUNCTION(BlueprintPure)
	float GetMouseSensetivity() const;

	UFUNCTION(BlueprintCallable)
	void SetMasterVolume(float NewValue);
	UFUNCTION(BlueprintPure)
	float GetMasterVolume() const;

	UFUNCTION(BlueprintCallable)
	void SetMusicVolume(float NewValue);
	UFUNCTION(BlueprintPure)
	float GetMusicVolume() const;

	UFUNCTION(BlueprintCallable)
	void SetEffectsVolume(float NewValue);
	UFUNCTION(BlueprintPure)
	float GetEffectsVolume() const;

	UFUNCTION(BlueprintCallable)
	void SetMenuVolume(float NewValue);
	UFUNCTION(BlueprintPure)
	float GetMenuVolume() const;

	UFUNCTION(BlueprintCallable)
	void SetLanguage(int32 NewValue);
	UFUNCTION(BlueprintPure)
	int32 GetLanguage() const;

	UFUNCTION(BlueprintCallable)
	void SetKeyboardSave(const TArray<FEnhancedActionKeyMapping> NewValue);
	UFUNCTION(BlueprintPure)
	TArray<FEnhancedActionKeyMapping> GetKeyboardSave() const;

	UFUNCTION(BlueprintCallable)
	static UROWGameUserSettings* GetROWGameUserSettings();

protected:
	//Graphics settings
	UPROPERTY(Config)
	float BrightnessAmount;
	UPROPERTY(Config)
	bool bMotionBlur;
	UPROPERTY(Config)
	bool bShowFPS;

	//Gameplay settings
	UPROPERTY(Config)
	FLinearColor MainColor;
	UPROPERTY(Config)
	int32 Language;


	//Keyboard/Mouse settings
	UPROPERTY(Config)
	bool bInvertMouse;
	UPROPERTY(Config)
	float MouseSensetivity;
	UPROPERTY(Config, BlueprintReadWrite, EditAnywhere)
	TArray<FEnhancedActionKeyMapping> KeyboardSave;


	//Audio settings
	UPROPERTY(Config)
	float MasterVolume;
	UPROPERTY(Config)
	float MusicVolume;
	UPROPERTY(Config)
	float EffectsVolume;
	UPROPERTY(Config)
	float MenuVolume;
};
