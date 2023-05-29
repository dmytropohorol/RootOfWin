// Fill out your copyright notice in the Description page of Project Settings.


#include "AA_AsyncTimer.h"
#include "Engine/EngineTypes.h"
#include "Editor/EditorEngine.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

UAA_AsyncTimer* UAA_AsyncTimer::AsyncTimer(const UObject* WorldContextObject, const float DelayTime)
{
	UAA_AsyncTimer* Node = NewObject<UAA_AsyncTimer>();
	Node->WorldContextObject = WorldContextObject;
	Node->TimerDuration = DelayTime;
	return Node;
}

void UAA_AsyncTimer::Activate()
{
	if (nullptr == WorldContextObject)
	{
		FFrame::KismetExecutionMessage(TEXT("Invalid WorldContextObject. Cannot execute MiniTimer."), ELogVerbosity::Error);
		return;
	}
	if (Active)
	{
		FFrame::KismetExecutionMessage(TEXT("AsyncTimer is already running."), ELogVerbosity::Warning);
		return;
	}
	if (TimerDuration <= 0.0f)
	{
		FFrame::KismetExecutionMessage(TEXT("AsycnTimer's TimerDuration cannot be less or equal to 0."), ELogVerbosity::Warning);
		return;
	}
	Active = true;
	WorldContextObject->GetWorld()->GetTimerManager().SetTimer(Timer, this, &UAA_AsyncTimer::Finish, TimerDuration, false);
}

void UAA_AsyncTimer::Finish()
{
	WorldContextObject->GetWorld()->GetTimerManager().ClearTimer(Timer);
	TimerDuration = 0;
	Timer.Invalidate();
	Finished.Broadcast();
	Active = false;
}