// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/MainCharacter.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float x = GetInputAxisValue("MoveForward")*speed * DeltaTime;
	float y = GetInputAxisValue("MoveRight")*speed * DeltaTime;

	SetActorLocation(GetActorLocation() + FVector(x, y, 0), true);
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward");
	PlayerInputComponent->BindAxis("MoveRight");
}

