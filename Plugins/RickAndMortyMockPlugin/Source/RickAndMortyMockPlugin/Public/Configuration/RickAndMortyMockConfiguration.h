#pragma once

#include "CoreMinimal.h"
#include "Configuration/RickAndMortyMockConfigurationDefault.h"
#include "RickAndMortyMockConfiguration.generated.h"

/**
 * RickAndMorty Mock - Configuration
 */
UCLASS(Blueprintable, BlueprintType, Category = "Rick And Morty")
class RICKANDMORTYMOCKPLUGIN_API URickAndMortyMockConfiguration : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyMockConfiguration(): Super() {}

    URickAndMortyMockConfiguration(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Name = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_NAME;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Status = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_STATUS;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Species = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_SPECIES;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Type = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_TYPE;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Gender = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_GENDER;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Origin = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_ORIGIN;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Location = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_LOCATION;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Mock")
    FString Image = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_IMAGE;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Count | Mock")
    int32 Count = RICKANDMORTYMOCKPLUGIN_CONFIGURATION_DEFAULT_COUNT;
};
