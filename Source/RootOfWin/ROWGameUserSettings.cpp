// Fill out your copyright notice in the Description page of Project Settings.


#include "ROWGameUserSettings.h"
#include "Kismet/GameplayStatics.h"
#include "AudioDevice.h"
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

UROWGameUserSettings* UROWGameUserSettings::GetROWGameUserSettings()
{
	return Cast<UROWGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
