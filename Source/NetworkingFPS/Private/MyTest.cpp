// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTest.h"

// Sets default values
AMyTest::AMyTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTest::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

