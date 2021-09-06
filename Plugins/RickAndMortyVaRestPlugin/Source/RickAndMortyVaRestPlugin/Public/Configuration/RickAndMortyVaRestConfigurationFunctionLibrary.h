#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyVaRestConfiguration.h"
#include "RickAndMortyVaRestConfigurationFunctionLibrary.generated.h"

/**
 * RickAndMorty VaRest - Configuration - Blueprint Function Library 
 */
UCLASS(Category = "Rick And Morty")
class RICKANDMORTYVARESTPLUGIN_API URickAndMortyVaRestConfigurationFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Get plugin configuration
     */
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"),
        Category = "Rick And Morty | Configuration | VaRest")
    static URickAndMortyVaRestConfiguration* GetConfiguration(UObject* WorldContextObject);
};
