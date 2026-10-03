// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Sound/SoundClass.h"
#include "Sound/SoundMix.h"
#include "AudioSubSystem.generated.h"

class USoundBase;
class UAudioComponent;

/**
 * Subsystem global para la gestión de audio, música con fading y control de volumen por canales.
 */
UCLASS(Abstract, Blueprintable,BlueprintType)
class SUBSYSTEMS_API UAudioSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
    
protected:
    virtual UWorld* GetWorld() const override
    {
        if (IsTemplate() || !GetOuter())
        {
            return nullptr;
        }
        return GetOuter()->GetWorld();
    }

    /** Referencia al SoundMix principal usado para aplicar modificaciones de volumen en caliente. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Audio|Config")
    TObjectPtr<USoundMix> MainSoundMix;

public:
    virtual bool ShouldCreateSubsystem(UObject* Outer) const;
    // Begin USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // End USubsystem

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Initialize"))
    void ReceiveInitialize();

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Deinitialize"))
    void ReceiveDeinitialize();

    // --- Control de Música Global ---

    /** Reproduce una pista de música con transición suave (Crossfade) desde la pista actual. */
    UFUNCTION(BlueprintCallable, Category = "Audio|Music")
    void PlayMusic(USoundBase* NewTrack, float FadeInTime = 1.5f, float FadeOutTime = 1.5f, bool bLoop = true);

    /** Detiene la música actual con un Fade Out. */
    UFUNCTION(BlueprintCallable, Category = "Audio|Music")
    void StopMusic(float FadeOutTime = 1.5f);

    // --- Control de Sonidos 2D / UI ---

    /** Reproduce un efecto de sonido 2D (sin ubicación espacial) para UI o feedback general. */
    UFUNCTION(BlueprintCallable, Category = "Audio|SFX")
    void PlaySound2D(USoundBase* Sound, float VolumeMultiplier = 1.0f, float PitchMultiplier = 1.0f);

    // --- Control de Volumen por Canales ---

    /** Modifica el volumen de un SoundClass específico (0.0 a 1.0). */
    UFUNCTION(BlueprintCallable, Category = "Audio|Volume")
    void SetChannelVolume(USoundClass* TargetClass, float Volume);

private:
    /** Componente que sostiene la pista de música actual en reproducción. */
    UPROPERTY(Transient)
    TObjectPtr<UAudioComponent> CurrentMusicComponent;

    /** Helper interno para limpiar el componente de música cuando termina el FadeOut. */
    void OnMusicFadeOutFinished(UAudioComponent* OldComponent);
};
