#pragma once

#include "CoreMinimal.h"

#include "RickAndMortyDataSource.h"
#include "Engine/DeveloperSettings.h"
#include "RickAndMortyConfigurationDeveloperSettings.generated.h"

/**
 * RickAndMorty Mock - Configuration - Developer Settings
 */
UCLASS(config = Plugins, defaultconfig, meta = (DisplayName = "Rick And Morty"), Category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyConfigurationDeveloperSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    URickAndMortyConfigurationDeveloperSettings(): Super() {}
    URickAndMortyConfigurationDeveloperSettings(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}
    
    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty")
    TSubclassOf<URickAndMortyDataSource> DataSourceClass;
};
