#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyDataSource.h"
#include "RickAndMortyMockDataSource.generated.h"

/**
 * RickAndMorty Mock - DataSource implementation
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class RICKANDMORTYMOCKPLUGIN_API URickAndMortyMockDataSource : public URickAndMortyDataSource
{
    GENERATED_BODY()
    
public:
    URickAndMortyMockDataSource(): Super() {}
    URickAndMortyMockDataSource(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

    /**
    * Find character by ID
    */
    virtual void Find(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo) override;

    /**
    * Get characters count
    */
    virtual void Count(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo) override;
};
