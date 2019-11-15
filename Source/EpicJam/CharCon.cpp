// Fill out your copyright notice in the Description page of Project Settings.


#include "CharCon.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACharCon::ACharCon()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

}

// Called when the game starts or when spawned
void ACharCon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharCon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharCon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

