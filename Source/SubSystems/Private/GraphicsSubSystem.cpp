// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphicsSubSystem.h"
#include "Engine/Engine.h" // <--- Necesario para resolver la variable global GEngine
#include "GameFramework/GameUserSettings.h" // <--- Header de UGameUserSettings
#include "Kismet/KismetSystemLibrary.h"

void UGraphicsSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);


	// Aseguramos que la configuración guardada previamente se cargue e inicialice en memoria
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		Settings->LoadSettings();
		Settings->ApplySettings(false);
	}


	// Llamamos al evento de Blueprint
	ReceiveInitialize();
	// Esto DEBE aparecer en el Output Log al darle a Play
	UE_LOG(LogTemp, Warning, TEXT("Graphical SYSTEM: Inicializado correctamente"));
}

void UGraphicsSubSystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Graphical SYSTEM: Desinicializado"));

	// Llamamos al evento de Blueprint
	ReceiveDeinitialize();

	Super::Deinitialize();
}

UGameUserSettings* UGraphicsSubSystem::GetUserSettings() const
{
	if (GEngine)
	{
		return GEngine->GetGameUserSettings();
	}
	return nullptr;
}

// --- Pantalla y Resolución ---

void UGraphicsSubSystem::SetScreenResolution(FIntPoint Resolution, EWindowMode::Type WindowMode)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		Settings->SetScreenResolution(Resolution);
		Settings->SetFullscreenMode(WindowMode);
	}
}

FIntPoint UGraphicsSubSystem::GetScreenResolution() const
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		return Settings->GetScreenResolution();
	}
	return FIntPoint(1920, 1080);
}

void UGraphicsSubSystem::SetFrameRateLimit(float FrameRate)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		Settings->SetFrameRateLimit(FrameRate);
	}
}

void UGraphicsSubSystem::SetVSyncEnabled(bool bEnable)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		Settings->SetVSyncEnabled(bEnable);
	}
}

// --- Scalability Settings ---

void UGraphicsSubSystem::SetOverallGraphicsQuality(int32 QualityLevel)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		// Clampea entre Low (0) y Cinematic (4)
		const int32 ClampedQuality = FMath::Clamp(QualityLevel, 0, 4);
		Settings->SetOverallScalabilityLevel(ClampedQuality);
	}
}

int32 UGraphicsSubSystem::GetOverallGraphicsQuality() const
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		return Settings->GetOverallScalabilityLevel();
	}
	return -1;
}

void UGraphicsSubSystem::SetShadowQuality(int32 QualityLevel)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		Settings->SetShadowQuality(FMath::Clamp(QualityLevel, 0, 4));
	}
}

void UGraphicsSubSystem::SetTextureQuality(int32 QualityLevel)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		Settings->SetTextureQuality(FMath::Clamp(QualityLevel, 0, 4));
	}
}

void UGraphicsSubSystem::SetResolutionScale(float ScalePercentage)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		const float ClampedScale = FMath::Clamp(ScalePercentage, 10.0f, 100.0f);
		Settings->SetResolutionScaleValueEx(ClampedScale);
	}
}

// --- Aplicación y Persistencia ---

void UGraphicsSubSystem::SaveAndApplySettings(bool bCheckForCommandLineOverrides)
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		// Aplica los cambios en el viewport activo y persiste en GameUserSettings.ini
		Settings->ApplySettings(bCheckForCommandLineOverrides);
		Settings->SaveSettings();
		UE_LOG(LogTemp, Log, TEXT("[GraphicsSubsystem] Cambios de gráficos guardados y aplicados correctamente."));
	}
}

TArray<FSupportedResolution> UGraphicsSubSystem::GetSupportedScreenResolutions() const
{
	TArray<FSupportedResolution> ResultList;
	FScreenResolutionArray RHIResolutions;

	// Consultamos directamente al RHI de la GPU las resoluciones de pantalla disponibles
	if (RHIGetAvailableResolutions(RHIResolutions, false)) // false = ignora duplicados por refresco Hz
	{
		for (const FScreenResolutionRHI& Res : RHIResolutions)
		{
			// Filtro de seguridad: ignoramos resoluciones extremadamente bajas
			if (Res.Width < 1024 || Res.Height < 720)
			{
				continue;
			}

			// Creamos la opción
			FSupportedResolution NewRes;
			NewRes.Width = Res.Width;
			NewRes.Height = Res.Height;
			NewRes.DisplayName = FString::Printf(TEXT("%dx%d"), Res.Width, Res.Height);

			// Evitamos duplicados si el RHI devuelve varias instancias para la misma resolución
			bool bAlreadyExists = ResultList.ContainsByPredicate([&NewRes](const FSupportedResolution& Existing) {
				return Existing.Width == NewRes.Width && Existing.Height == NewRes.Height;
				});

			if (!bAlreadyExists)
			{
				ResultList.Add(NewRes);
			}
		}
	}

	// Ordenamos de mayor a menor resolución (ej: 4K -> 2K -> 1080p)
	ResultList.Sort([](const FSupportedResolution& A, const FSupportedResolution& B) {
		return (A.Width * A.Height) > (B.Width * B.Height);
		});

	return ResultList;
}

void UGraphicsSubSystem::RunHardwareBenchmark()
{
	if (UGameUserSettings* Settings = GetUserSettings())
	{
		// Evalúa GPU/CPU del cliente y asigna automáticamente los valores recomendados
		Settings->RunHardwareBenchmark();
		Settings->ApplyHardwareBenchmarkResults();
		Settings->SaveSettings();
		UE_LOG(LogTemp, Log, TEXT("[GraphicsSubsystem] Benchmark de hardware ejecutado y aplicado."));
	}
}