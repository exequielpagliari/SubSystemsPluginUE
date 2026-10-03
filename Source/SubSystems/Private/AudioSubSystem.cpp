// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioSubSystem.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

void UAudioSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);


	CurrentMusicComponent = nullptr;

	// Llamamos al evento de Blueprint
	ReceiveInitialize();
	// Esto DEBE aparecer en el Output Log al darle a Play
	UE_LOG(LogTemp, Warning, TEXT("AUDIO SYSTEM: Inicializado correctamente"));
}

bool UAudioSubSystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UAudioSubSystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("AUDIO SYSTEM: Desinicializado"));
	if (CurrentMusicComponent && CurrentMusicComponent->IsPlaying())
	{
		CurrentMusicComponent->Stop();
	}
	// Llamamos al evento de Blueprint
	ReceiveDeinitialize();

	Super::Deinitialize();
}

void UAudioSubSystem::PlayMusic(USoundBase* NewTrack, float FadeInTime, float FadeOutTime, bool bLoop)
{
	if (!NewTrack)
	{
		UE_LOG(LogTemp, Warning, TEXT("[AudioSubsystem] PlayMusic llamado con pista NULA."));
		return;
	}

	// Si la pista solicitada ya está sonando, no hacemos nada
	if (CurrentMusicComponent && CurrentMusicComponent->IsPlaying() && CurrentMusicComponent->Sound == NewTrack)
	{
		return;
	}

	// Fade Out de la música actual
	if (CurrentMusicComponent && CurrentMusicComponent->IsPlaying())
	{
		UAudioComponent* OldComponent = CurrentMusicComponent;
		OldComponent->FadeOut(FadeOutTime, 0.0f);
	}

	// Crear e iniciar la nueva pista con Fade In
	CurrentMusicComponent = UGameplayStatics::CreateSound2D(this, NewTrack, 1.0f, 1.0f, 0.0f, nullptr, false, false);
	if (CurrentMusicComponent)
	{
		CurrentMusicComponent->bAutoDestroy = true;
		CurrentMusicComponent->FadeIn(FadeInTime, 1.0f);
	}
}

void UAudioSubSystem::StopMusic(float FadeOutTime)
{
	if (CurrentMusicComponent && CurrentMusicComponent->IsPlaying())
	{
		CurrentMusicComponent->FadeOut(FadeOutTime, 0.0f);
		CurrentMusicComponent = nullptr;
	}
}

void UAudioSubSystem::PlaySound2D(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier)
{
	if (!Sound)
	{
		return;
	}

	UGameplayStatics::PlaySound2D(this, Sound, VolumeMultiplier, PitchMultiplier);
}

void UAudioSubSystem::SetChannelVolume(USoundClass* TargetClass, float Volume)
{
	if (!TargetClass || !MainSoundMix)
	{
		UE_LOG(LogTemp, Warning, TEXT("[AudioSubsystem] SetChannelVolume falló: TargetClass o MainSoundMix faltante."));
		return;
	}

	const float ClampedVolume = FMath::Clamp(Volume, 0.0f, 1.0f);

	// Setea el volumen para la SoundClass especificada dentro del SoundMix actual
	UGameplayStatics::SetSoundMixClassOverride(
		this,
		MainSoundMix,
		TargetClass,
		ClampedVolume,
		1.0f,  // Pitch
		0.0f,  // FadeIn Time
		true   // Apply To Children
	);
}

void UAudioSubSystem::OnMusicFadeOutFinished(UAudioComponent* OldComponent)
{
	UE_LOG(LogTemp, Log, TEXT("[AudioSubsystem] Transición de música (FadeOut) completada."));

	// Aquí podés disparar eventos adicionales, como avisar al UI Subsystem 
	// o limpiar referencias si el componente destruido coincide con el actual.
}

