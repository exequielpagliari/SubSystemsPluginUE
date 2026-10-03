// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GraphicsSubSystem.generated.h"

/** Estructura auxiliar para representar resoluciones viables en UI */
USTRUCT(BlueprintType)
struct FSupportedResolution
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Graphics")
	int32 Width = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Graphics")
	int32 Height = 0;

	/** Texto preformateado para la UI, ej: "1920x1080" */
	UPROPERTY(BlueprintReadOnly, Category = "Graphics")
	FString DisplayName;
};

/**
 *
 */
    UCLASS(Blueprintable)
    class SUBSYSTEMS_API UGraphicsSubSystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
    
    UWorld* GetWorld() const override
    {
        if (IsTemplate() || !GetOuter())
        {
            return nullptr;
        }
        return GetOuter()->GetWorld();
    }
public:
    // Begin USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // End USubsystem

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Initialize"))
    void ReceiveInitialize();

    UFUNCTION(BlueprintImplementableEvent, Category = "Events", meta = (DisplayName = "On Deinitialize"))
    void ReceiveDeinitialize();
	// --- Pantalla y Resolución ---

		/** Aplica una nueva resolución de pantalla y el modo de ventana especificado. */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Display")
	void SetScreenResolution(FIntPoint Resolution, EWindowMode::Type WindowMode);

	/** Obtiene la resolución actual configurada en GameUserSettings. */
	UFUNCTION(BlueprintPure, Category = "Graphics|Display")
	FIntPoint GetScreenResolution() const;

	/** Configura el límite de FPS del juego (0 = Ilimitado). */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Display")
	void SetFrameRateLimit(float FrameRate);

	/** Configura la sincronización vertical (VSync). */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Display")
	void SetVSyncEnabled(bool bEnable);

	// --- Scalability Settings ---

	/**
	 * Modifica el nivel de calidad global de Scalability (0 = Low, 1 = Medium, 2 = High, 3 = Epic, 4 = Cinematic).
	 * Aplica a Sombras, Texturas, Anti-Aliasing, Post-Procesado, FX, Iluminación, etc.
	 */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Scalability")
	void SetOverallGraphicsQuality(int32 QualityLevel);

	/** Obtiene el nivel de calidad global actual (-1 si la calidad es personalizada por componente). */
	UFUNCTION(BlueprintPure, Category = "Graphics|Scalability")
	int32 GetOverallGraphicsQuality() const;

	/** Configura la calidad de sombras de forma individual. */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Scalability")
	void SetShadowQuality(int32 QualityLevel);

	/** Configura la calidad de texturas de forma individual. */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Scalability")
	void SetTextureQuality(int32 QualityLevel);

	/** Configura la escala de renderizado (View Distance / Rendering Scale) de 10% a 100%. */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Scalability")
	void SetResolutionScale(float ScalePercentage);

	/**
	 * Consulta al driver/hardware (RHI) y devuelve únicamente las resoluciones soportadas por la pantalla.
	 * Filtra duplicados con distintas tasas de refresco para dejar solo resoluciones únicas.
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|Display")
	TArray<FSupportedResolution> GetSupportedScreenResolutions() const;

	// --- Aplicación y Persistencia ---

	/** Guarda las configuraciones actuales en el archivo de configuración (.ini) y las aplica en pantalla. */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Settings")
	void SaveAndApplySettings(bool bCheckForCommandLineOverrides = false);

	/** Restablece los ajustes a los valores recomendados por el motor según el hardware detectado. */
	UFUNCTION(BlueprintCallable, Category = "Graphics|Settings")
	void RunHardwareBenchmark();

private:
	/** Helper de acceso seguro a UGameUserSettings. */
	UGameUserSettings* GetUserSettings() const;
	};
