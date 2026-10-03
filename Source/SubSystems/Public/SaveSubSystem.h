// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/SaveGame.h"
#include "SaveSubSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveGameCompleted, bool, bSuccess, const FString&, SlotName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadGameCompleted, USaveGame*, SaveGameLoaded, const FString&, SlotName);

/**
 * 
 */
UCLASS(Blueprintable)
class SUBSYSTEMS_API USaveSubSystem : public UGameInstanceSubsystem
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
	// --- Delegates de Notificación Asíncrona ---
	UPROPERTY(BlueprintAssignable, Category = "SaveSystem|Delegates")
	FOnSaveGameCompleted OnSaveCompleted;

	UPROPERTY(BlueprintAssignable, Category = "SaveSystem|Delegates")
	FOnLoadGameCompleted OnLoadCompleted;

	// --- Gestión de Instancia / Caché ---

	/** Obtiene o crea un objeto USaveGame en memoria para modificar antes de guardar en disco. */
	UFUNCTION(BlueprintCallable, Category = "SaveSystem", meta = (DeterminesOutputType = "SaveGameClass"))
	USaveGame* GetOrCreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass);

	/** Devuelve la instancia activa en caché de la partida cargada actualmente. */
	UFUNCTION(BlueprintPure, Category = "SaveSystem")
	USaveGame* GetCurrentSaveGameObject() const { return CurrentSaveGame; }

	// --- Operaciones de Guardado / Carga Síncronas ---

	/** Guarda síncronamente el objeto SaveGame en el slot especificado. */
	UFUNCTION(BlueprintCallable, Category = "SaveSystem")
	bool SaveGameToSlotSync(USaveGame* SaveGameObject, const FString& SlotName, int32 UserIndex = 0);

	/** Carga síncronamente un SaveGame desde disco. */
	UFUNCTION(BlueprintCallable, Category = "SaveSystem")
	USaveGame* LoadGameFromSlotSync(const FString& SlotName, int32 UserIndex = 0);

	// --- Operaciones de Guardado / Carga Asíncronas ---

	/** Guarda asíncronamente en segundo plano sin congelar el hilo de render. */
	UFUNCTION(BlueprintCallable, Category = "SaveSystem")
	void SaveGameToSlotAsync(USaveGame* SaveGameObject, const FString& SlotName, int32 UserIndex = 0);

	/** Carga asíncronamente desde disco en segundo plano. */
	UFUNCTION(BlueprintCallable, Category = "SaveSystem")
	void LoadGameFromSlotAsync(const FString& SlotName, int32 UserIndex = 0);

	// --- Utilidades de Disco ---

	/** Comprueba si existe un archivo de guardado en el slot indicado. */
	UFUNCTION(BlueprintPure, Category = "SaveSystem")
	bool DoesSaveGameExist(const FString& SlotName, int32 UserIndex = 0) const;

	/** Elimina de disco el slot de guardado especificado. */
	UFUNCTION(BlueprintCallable, Category = "SaveSystem")
	bool DeleteSaveGameSlot(const FString& SlotName, int32 UserIndex = 0);

private:
	/** Instancia en memoria de la partida cargada/creada actualmente. */
	UPROPERTY(Transient)
	TObjectPtr<USaveGame> CurrentSaveGame;

	// Callbacks internos para las tareas asíncronas
	void OnAsyncSaveFinished(const FString& SlotName, const int32 UserIndex, bool bSuccess);
	void OnAsyncLoadFinished(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedSaveGame);
};
