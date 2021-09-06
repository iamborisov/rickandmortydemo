#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyDataSource.h"
#include "RickAndMortyConfiguration.generated.h"

/**
 * RickAndMorty Mock - Configuration
 */
UCLASS(Blueprintable, BlueprintType, Category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyConfiguration : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyConfiguration(): Super() {}

    URickAndMortyConfiguration(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty")
    URickAndMortyDataSource* DataSource;
};
