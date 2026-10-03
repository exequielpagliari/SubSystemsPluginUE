// Fill out your copyright notice in the Description page of Project Settings.
#include "Kismet/GameplayStatics.h"

#include "SaveSubSystem.h"

void USaveSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);





	// Llamamos al evento de Blueprint
	ReceiveInitialize();
	// Esto DEBE aparecer en el Output Log al darle a Play
	UE_LOG(LogTemp, Warning, TEXT("SAVE SYSTEM: Inicializado correctamente"));
}

void USaveSubSystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("SAVE SYSTEM: Desinicializado"));

	// Llamamos al evento de Blueprint
	ReceiveDeinitialize();

	Super::Deinitialize();
}

USaveGame* USaveSubSystem::GetOrCreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass)
{
	if (CurrentSaveGame && CurrentSaveGame->IsA(SaveGameClass))
	{
		return CurrentSaveGame;
	}

	if (SaveGameClass)
	{
		CurrentSaveGame = UGameplayStatics::CreateSaveGameObject(SaveGameClass);
	}

	return CurrentSaveGame;
}

// --- Operaciones Síncronas ---

bool USaveSubSystem::SaveGameToSlotSync(USaveGame* SaveGameObject, const FString& SlotName, int32 UserIndex)
{
	if (!SaveGameObject || SlotName.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("[SaveSubsystem] Intentando guardar con objeto nulo o SlotName vacío."));
		return false;
	}

	const bool bSuccess = UGameplayStatics::SaveGameToSlot(SaveGameObject, SlotName, UserIndex);
	if (bSuccess)
	{
		CurrentSaveGame = SaveGameObject;
		UE_LOG(LogTemp, Log, TEXT("[SaveSubsystem] Guardado síncrono exitoso en slot: %s"), *SlotName);
	}

	return bSuccess;
}

USaveGame* USaveSubSystem::LoadGameFromSlotSync(const FString& SlotName, int32 UserIndex)
{
	if (SlotName.IsEmpty() || !DoesSaveGameExist(SlotName, UserIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("[SaveSubsystem] No existe el slot de guardado: %s"), *SlotName);
		return nullptr;
	}

	USaveGame* LoadedGame = UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex);
	if (LoadedGame)
	{
		CurrentSaveGame = LoadedGame;
		UE_LOG(LogTemp, Log, TEXT("[SaveSubsystem] Carga síncrona exitosa desde slot: %s"), *SlotName);
	}

	return CurrentSaveGame;
}

// --- Operaciones Asíncronas ---

void USaveSubSystem::SaveGameToSlotAsync(USaveGame* SaveGameObject, const FString& SlotName, int32 UserIndex)
{
	if (!SaveGameObject || SlotName.IsEmpty())
	{
		OnSaveCompleted.Broadcast(false, SlotName);
		return;
	}

	FAsyncSaveGameToSlotDelegate SavedDelegate;
	SavedDelegate.BindUObject(this, &USaveSubSystem::OnAsyncSaveFinished);

	UGameplayStatics::AsyncSaveGameToSlot(SaveGameObject, SlotName, UserIndex, SavedDelegate);
}

void USaveSubSystem::LoadGameFromSlotAsync(const FString& SlotName, int32 UserIndex)
{
	if (SlotName.IsEmpty() || !DoesSaveGameExist(SlotName, UserIndex))
	{
		OnLoadCompleted.Broadcast(nullptr, SlotName);
		return;
	}

	FAsyncLoadGameFromSlotDelegate LoadedDelegate;
	LoadedDelegate.BindUObject(this, &USaveSubSystem::OnAsyncLoadFinished);

	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, UserIndex, LoadedDelegate);
}

// --- Callbacks Asíncronos ---

void USaveSubSystem::OnAsyncSaveFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess)
{
	if (bSuccess)
	{
		UE_LOG(LogTemp, Log, TEXT("[SaveSubsystem] Guardado asíncrono completado en slot: %s"), *SlotName);
	}

	OnSaveCompleted.Broadcast(bSuccess, SlotName);
}

void USaveSubSystem::OnAsyncLoadFinished(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedSaveGame)
{
	if (LoadedSaveGame)
	{
		CurrentSaveGame = LoadedSaveGame;
		UE_LOG(LogTemp, Log, TEXT("[SaveSubsystem] Carga asíncrona completada desde slot: %s"), *SlotName);
	}

	OnLoadCompleted.Broadcast(LoadedSaveGame, SlotName);
}

// --- Utilidades ---

bool USaveSubSystem::DoesSaveGameExist(const FString& SlotName, int32 UserIndex) const
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex);
}

bool USaveSubSystem::DeleteSaveGameSlot(const FString& SlotName, int32 UserIndex)
{
	if (DoesSaveGameExist(SlotName, UserIndex))
	{
		const bool bDeleted = UGameplayStatics::DeleteGameInSlot(SlotName, UserIndex);
		if (bDeleted && CurrentSaveGame)
		{
			// Si el slot activo eliminado estaba en caché, lo limpiamos
			CurrentSaveGame = nullptr;
		}
		return bDeleted;
	}
	return false;
}