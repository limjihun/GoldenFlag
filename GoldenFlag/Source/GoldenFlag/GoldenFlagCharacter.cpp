// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GoldenFlagCharacter.h"
#include "GoldenFlagProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerController.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AGoldenFlagCharacter

AGoldenFlagCharacter::AGoldenFlagCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a character mesh component
	Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh3P"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Mesh3P_SK(TEXT("SkeletalMesh'/Game/Character/Swat.Swat'"));
	if (Mesh3P_SK.Succeeded())
	{
		Mesh3P->SetSkeletalMesh(Mesh3P_SK.Object);
	}
	Mesh3P->SetupAttachment(GetCapsuleComponent());
	Mesh3P->RelativeRotation = FRotator(0.0f, 270.0f, 0.0f);
	Mesh3P->RelativeLocation = FVector(0.0f, 0.0f, -90.0f);

	// Create a weapon mesh component on right hand
	WeaponRight = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponRight"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> WeaponRight_SK(TEXT("SkeletalMesh'/Game/Weapons/AK47/AK.AK'"));
	if (WeaponRight_SK.Succeeded())
	{
		WeaponRight->SetSkeletalMesh(WeaponRight_SK.Object);
	}
	WeaponRight->AttachToComponent(Mesh3P, FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("WeaponRight"));

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(Mesh3P);
	FirstPersonCameraComponent->RelativeLocation = FVector(0.0f, 28.0f, 150.0f); // Position the camera
	FirstPersonCameraComponent->RelativeRotation = FRotator(0.0f, 90.0f, 0.0f);
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Set projectile offset from camera
	ProjectileOffset = FVector(50.0f, 0.0f, 0.0f);
}

void AGoldenFlagCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AGoldenFlagCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AGoldenFlagCharacter::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AGoldenFlagCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGoldenFlagCharacter::MoveRight);

	// "turn" handles devices that provide an absolute delta, such as a mouse.
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}

float AGoldenFlagCharacter::GetSpeed() const
{
	return GetVelocity().Size();
}

// Get angle between forward vector and velocity(move) vector in degree
float AGoldenFlagCharacter::GetDirectionInDegree() const
{
	// Look direction (Reference vector)
	FVector ForwardDirection = GetActorForwardVector();
	ForwardDirection.Normalize();
	// Move direction
	FVector MoveDirection = GetVelocity();
	MoveDirection.Normalize();

	// Get angle (0~180 degree)
	float Angle = FMath::RadiansToDegrees(FMath::Acos(Dot3(ForwardDirection, MoveDirection)));
	// Get sign (clockwise = positive)
	FVector CrossProduct = FVector::CrossProduct(ForwardDirection, MoveDirection);
	if (CrossProduct.Z > 0) // counter clockwise
	{
		Angle *= -1.0f;
	}
	return 0.0f;

	// Atan2를 이용한 방법. -180~180도로 바로 구해짐 이해안감.....
	//FVector v = MoveDirection - ForwardDirection;
	//return FMath::RadiansToDegrees(FMath::Atan2(v.Y, v.X));
}

void AGoldenFlagCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{	
			// set spawn location and rotation as player view
			FVector SpawnLocation;
			FRotator SpawnRotation;
			GetController()->GetPlayerViewPoint(SpawnLocation, SpawnRotation);
			SpawnLocation += SpawnRotation.RotateVector(ProjectileOffset);
			
			// set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// spawn the projectile at the muzzle
			World->SpawnActor<AGoldenFlagProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
}

void AGoldenFlagCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AGoldenFlagCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}
