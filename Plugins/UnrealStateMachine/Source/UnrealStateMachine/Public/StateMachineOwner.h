﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine.h"
#include "UObject/Interface.h"
#include "StateMachineOwner.generated.h"

// This class does not need to be modified.
UINTERFACE(NotBlueprintable)
class UStateMachineOwner : public UInterface
{
	GENERATED_BODY()
};

class UNREALSTATEMACHINE_API IStateMachineOwner
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, Category = "StateMachine")
	virtual UStateMachine* GetStateMachine() const = 0;
};
