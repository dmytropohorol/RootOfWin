// Fill out your copyright notice in the Description page of Project Settings.


#include "ROWGameUserSettings.h"
#include "Kismet/GameplayStatics.h"
#include "AudioDevice.h"
#include "EnhancedActionKeyMapping.h"
#include "Containers/Array.h"
#include "Math/Color.h"

UROWGameUserSettings::UROWGameUserSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	BrightnessAmount = 2.2f;
}
void UROWGameUserSettings::SetBrightnessAmount(float NewValue)
{
	BrightnessAmount = NewValue;
}

float UROWGameUserSettings::GetBrightnessAmount() const
{
	return BrightnessAmount;
}

void UROWGameUserSettings::SetMotionBlur(bool NewValue)
{
	bMotionBlur = NewValue;
}

bool UROWGameUserSettings::GetMotionBlur() const
{
	return bMotionBlur;
}

void UROWGameUserSettings::SetShowFPS(bool NewValue)
{
	bShowFPS = NewValue;
}

bool UROWGameUserSettings::GetShowFPS() const
{
	return bShowFPS;
}

void UROWGameUserSettings::SetMainColor(FLinearColor NewValue)
{
	MainColor = NewValue;
}

FLinearColor UROWGameUserSettings::GetMainColor() const
{
	return MainColor;
}

void UROWGameUserSettings::SetInvertMouse(bool NewValue)
{
	bInvertMouse = NewValue;
}

bool UROWGameUserSettings::GetInvertMouse() const
{
	return bInvertMouse;
}

void UROWGameUserSettings::SetMouseSensetivity(float NewValue)
{
	MouseSensetivity = NewValue;
}

float UROWGameUserSettings::GetMouseSensetivity() const
{
	return MouseSensetivity;
}

void UROWGameUserSettings::SetMasterVolume(float NewValue)
{
	MasterVolume = NewValue;
}

float UROWGameUserSettings::GetMasterVolume() const
{
	return MasterVolume;
}

void UROWGameUserSettings::SetMusicVolume(float NewValue)
{
	MusicVolume = NewValue;
}

float UROWGameUserSettings::GetMusicVolume() const
{
	return MusicVolume;
}

void UROWGameUserSettings::SetEffectsVolume(float NewValue)
{
	EffectsVolume = NewValue;
}

float UROWGameUserSettings::GetEffectsVolume() const
{
	return EffectsVolume;
}

void UROWGameUserSettings::SetMenuVolume(float NewValue)
{
	MenuVolume = NewValue;
}

float UROWGameUserSettings::GetMenuVolume() const
{
	return MenuVolume;
}

void UROWGameUserSettings::SetLanguage(int32 NewValue)
{
	Language = NewValue;
}

int32 UROWGameUserSettings::GetLanguage() const
{
	return Language;
}

void UROWGameUserSettings::SetKeyboardSave(const TArray<FEnhancedActionKeyMapping> NewValue)
{
	KeyboardSave = NewValue;
}

TArray<FEnhancedActionKeyMapping> UROWGameUserSettings::GetKeyboardSave() const
{
	return KeyboardSave;
}

UROWGameUserSettings* UROWGameUserSettings::GetROWGameUserSettings()
{
	return Cast<UROWGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
