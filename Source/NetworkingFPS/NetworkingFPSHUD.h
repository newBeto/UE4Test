// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NetworkingFPSHUD.generated.h"

UCLASS()
class ANetworkingFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANetworkingFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

