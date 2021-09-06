#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyMockConfiguration.h"
#include "RickAndMortyMockConfigurationFunctionLibrary.generated.h"

/**
 * RickAndMorty Mock - Configuration - Blueprint Function Library 
 */
UCLASS(Category = "Rick And Morty")
class RICKANDMORTYMOCKPLUGIN_API URickAndMortyMockConfigurationFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Get plugin configuration
     */
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"),
        Category = "Rick And Morty | Configuration | Mock")
    static URickAndMortyMockConfiguration* GetConfiguration(UObject* WorldContextObject);
};
