#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyCharacter.h"
#include "RickAndMortyDataSourceLatentAction.h"

#include "RickAndMortyDataSource.generated.h"

/*
 * Rick And Morty Data Source
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class RICKANDMORTYPLUGIN_API URickAndMortyDataSource: public UObject
{
    GENERATED_BODY()
    
public:
    URickAndMortyDataSource(): Super() {}
    URickAndMortyDataSource(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}
    
    /**
     * Find character by ID
     */
    UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "Rick And Morty | Character")
    virtual void Find(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo);

    FRickAndMortyDataSourceLatentAction<URickAndMortyCharacter*>* FindLatentAction;
    virtual void FindLatentAction_Create(UObject* WorldContextObject, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo);
    virtual void FindLatentAction_Complete(URickAndMortyCharacter* Result);
    virtual void FindLatentAction_Cancel();
    
    /**
     * Get characters count
     */
    UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "Rick And Morty | Character")
    virtual void Count(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo);

    FRickAndMortyDataSourceLatentAction<int32>* CountLatentAction;
    virtual void CountLatentAction_Create(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo);
    virtual void CountLatentAction_Complete(int32 Result);
    virtual void CountLatentAction_Cancel();    
};