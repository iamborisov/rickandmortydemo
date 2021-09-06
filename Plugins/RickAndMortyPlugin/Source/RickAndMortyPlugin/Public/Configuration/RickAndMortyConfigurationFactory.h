#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyConfiguration.h"
#include "Configuration/RickAndMortyConfigurationDeveloperSettings.h"
#include "RickAndMortyConfigurationFactory.generated.h"

/**
 * RickAndMorty Mock - Configuration - Data Struct Factory
 */
UCLASS(Blueprintable, BlueprintType, Category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyConfigurationFactory : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyConfigurationFactory(): Super() {}
    URickAndMortyConfigurationFactory(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}
    
    /**
     * Create configuration data struct with default values
     */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration")
    static URickAndMortyConfiguration* Create(UObject* Outer);

    /**
     * Create configuration data struct with configured values from settings object
     */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration")
    static URickAndMortyConfiguration* CreateFromSettings(
        UObject* Outer,
        URickAndMortyConfigurationDeveloperSettings* Settings);

    /**
    * Create configuration data struct with configured values from current project settings
    */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration")
    static URickAndMortyConfiguration* CreateFromCurrentSettings(UObject* Outer);
};
