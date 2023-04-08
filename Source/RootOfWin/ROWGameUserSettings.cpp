// Fill out your copyright notice in the Description page of Project Settings.


#include "ROWGameUserSettings.h"

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

UROWGameUserSettings* UROWGameUserSettings::GetROWGameUserSettings()
{
	return Cast<UROWGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}
