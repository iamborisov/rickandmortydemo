#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyConfiguration.h"
#include "RickAndMortyConfigurationFunctionLibrary.generated.h"

/**
 * RickAndMorty VaRest - Configuration - Blueprint Function Library 
 */
UCLASS(Category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyConfigurationFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Get plugin configuration
     */
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Rick And Morty | Configuration")
    static URickAndMortyConfiguration* GetConfiguration(UObject* WorldContextObject);
};
