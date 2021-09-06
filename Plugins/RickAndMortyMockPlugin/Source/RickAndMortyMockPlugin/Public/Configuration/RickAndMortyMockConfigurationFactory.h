#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyMockConfiguration.h"
#include "Configuration/RickAndMortyMockConfigurationDeveloperSettings.h"
#include "RickAndMortyMockConfigurationFactory.generated.h"

/**
 * RickAndMorty Mock - Configuration - Data Struct Factory
 */
UCLASS(Blueprintable, BlueprintType, Category = "Rick And Morty")
class RICKANDMORTYMOCKPLUGIN_API URickAndMortyMockConfigurationFactory : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyMockConfigurationFactory(): Super() {}

    URickAndMortyMockConfigurationFactory(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

    /**
     * Create configuration data struct with default values
     */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration | Mock")
    static URickAndMortyMockConfiguration* Create(UObject* Outer);

    /**
     * Create configuration data struct with configured values from settings object
     */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration | Mock")
    static URickAndMortyMockConfiguration* CreateFromSettings(
        UObject* Outer,
        URickAndMortyMockConfigurationDeveloperSettings* Settings);

    /**
    * Create configuration data struct with configured values from current project settings
    */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration | Mock")
    static URickAndMortyMockConfiguration* CreateFromCurrentSettings(UObject* Outer);
};
