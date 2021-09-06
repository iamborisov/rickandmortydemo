#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Configuration/RickAndMortyMockConfigurationDefault.h"
#include "RickAndMortyMockConfigurationDeveloperSettings.generated.h"

/**
 * RickAndMorty Mock - Configuration - Developer Settings
 */
UCLASS(config = Plugins, defaultconfig, Category = "Rick And Morty", meta = (DisplayName = "Rick And Morty Mock"))
class RICKANDMORTYMOCKPLUGIN_API URickAndMortyMockConfigurationDeveloperSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    URickAndMortyMockConfigurationDeveloperSettings(): Super() {}

    URickAndMortyMockConfigurationDeveloperSettings(const FObjectInitializer& ObjectInitializer): Super(
        ObjectInitializer) {}

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Name = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_NAME;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Status = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_STATUS;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Species = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_SPECIES;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Type = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_TYPE;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Gender = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_GENDER;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Origin = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_ORIGIN;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Location = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_LOCATION;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Image = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_IMAGE;

    UPROPERTY(Config, BlueprintReadOnly, EditAnywhere, Category = "Rick And Morty | Get Count | Mock")
    int32 Count = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_COUNT;
};
