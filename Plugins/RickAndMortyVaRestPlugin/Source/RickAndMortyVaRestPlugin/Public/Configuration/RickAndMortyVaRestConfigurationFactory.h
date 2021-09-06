#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyVaRestConfiguration.h"
#include "Configuration/RickAndMortyVaRestConfigurationDeveloperSettings.h"
#include "RickAndMortyVaRestConfigurationFactory.generated.h"

/**
 * RickAndMorty VaRest - Configuration - Factory
 */
UCLASS(Blueprintable, BlueprintType, Category = "Rick And Morty")
class RICKANDMORTYVARESTPLUGIN_API URickAndMortyVaRestConfigurationFactory : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyVaRestConfigurationFactory(): Super() {}
    URickAndMortyVaRestConfigurationFactory(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}
    
    /**
     * Create configuration data struct with default values
     */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration | VaRest")
    static URickAndMortyVaRestConfiguration* Create(UObject* Outer);

    /**
     * Create configuration data struct with configured values from settings object
     */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration | VaRest")
    static URickAndMortyVaRestConfiguration* CreateFromSettings(
        UObject* Outer,
        URickAndMortyVaRestConfigurationDeveloperSettings* Settings);

    /**
    * Create configuration data struct with configured values from current project settings
    */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Configuration | VaRest")
    static URickAndMortyVaRestConfiguration* CreateFromCurrentSettings(UObject* Outer);
};
