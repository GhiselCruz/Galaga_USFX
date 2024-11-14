// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Movimiento.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->SpawnActor<AMovimiento>(AMovimiento::StaticClass(), FVector(1160.0f, 300.0f, 150.0f), FRotator::ZeroRotator);

}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
