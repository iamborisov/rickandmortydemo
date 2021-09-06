#pragma once

#include "CoreMinimal.h"
#include "VaRestTypes.h"
#include "Configuration/RickAndMortyVaRestConfigurationDefault.h"
#include "RickAndMortyVaRestConfiguration.generated.h"

/**
 * RickAndMorty VaRest - Configuration
 */
UCLASS(Blueprintable, BlueprintType, Category = "Rick And Morty")
class RICKANDMORTYVARESTPLUGIN_API URickAndMortyVaRestConfiguration : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyVaRestConfiguration(): Super() {}

    URickAndMortyVaRestConfiguration(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

    /*
     * Endpoint "Get Character" settings
     */
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Endpoint")
    FString GetCharacter_Endpoint_URL = RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_ENDPOINT_URL;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Endpoint")
    EVaRestRequestVerb GetCharacter_Endpoint_Verb =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_ENDPOINT_VERB;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Endpoint")
    EVaRestRequestContentType GetCharacter_Endpoint_ContentType =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_ENDPOINT_CONTENTTYPE;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Name =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_NAME;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Status =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_STATUS;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Species =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_SPECIES;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Type =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_TYPE;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Gender =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_GENDER;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Origin =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_ORIGIN;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Location =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_LOCATION;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Character | Data Mapping")
    FString GetCharacter_DataMapping_Image =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_IMAGE;

    /*
    * Endpoint "Count" settings
    */
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Count | Endpoint")
    FString GetCount_Endpoint_URL = RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_ENDPOINT_URL;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Count | Endpoint")
    EVaRestRequestVerb GetCount_Endpoint_Verb = RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_ENDPOINT_VERB;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Count | Endpoint")
    EVaRestRequestContentType GetCount_Endpoint_ContentType =
        RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_ENDPOINT_CONTENTTYPE;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Get Count | Data Mapping")
    FString GetCount_DataMapping_Count = RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_DATAMAPPING_COUNT;
};
