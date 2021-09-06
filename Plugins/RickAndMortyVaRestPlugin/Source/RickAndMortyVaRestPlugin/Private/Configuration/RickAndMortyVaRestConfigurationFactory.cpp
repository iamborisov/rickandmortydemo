#include "Configuration/RickAndMortyVaRestConfigurationFactory.h"

URickAndMortyVaRestConfiguration* URickAndMortyVaRestConfigurationFactory::Create(UObject* Outer)
{
    return NewObject<URickAndMortyVaRestConfiguration>(Outer);
}

URickAndMortyVaRestConfiguration* URickAndMortyVaRestConfigurationFactory::CreateFromSettings(
    UObject* Outer,
    URickAndMortyVaRestConfigurationDeveloperSettings* Settings)
{
    URickAndMortyVaRestConfiguration* Configuration = Create(Outer);

    Configuration->GetCharacter_Endpoint_URL = Settings->GetCharacter_Endpoint_URL;
    Configuration->GetCharacter_Endpoint_Verb = Settings->GetCharacter_Endpoint_Verb;
    Configuration->GetCharacter_Endpoint_ContentType = Settings->GetCharacter_Endpoint_ContentType;
    Configuration->GetCharacter_DataMapping_Name = Settings->GetCharacter_DataMapping_Name;
    Configuration->GetCharacter_DataMapping_Status = Settings->GetCharacter_DataMapping_Status;
    Configuration->GetCharacter_DataMapping_Species = Settings->GetCharacter_DataMapping_Species;
    Configuration->GetCharacter_DataMapping_Type = Settings->GetCharacter_DataMapping_Type;
    Configuration->GetCharacter_DataMapping_Gender = Settings->GetCharacter_DataMapping_Gender;
    Configuration->GetCharacter_DataMapping_Origin = Settings->GetCharacter_DataMapping_Origin;
    Configuration->GetCharacter_DataMapping_Location = Settings->GetCharacter_DataMapping_Location;
    Configuration->GetCharacter_DataMapping_Image = Settings->GetCharacter_DataMapping_Image;
    Configuration->GetCount_Endpoint_URL = Settings->GetCount_Endpoint_URL;
    Configuration->GetCount_Endpoint_Verb = Settings->GetCount_Endpoint_Verb;
    Configuration->GetCount_Endpoint_ContentType = Settings->GetCount_Endpoint_ContentType;
    Configuration->GetCount_DataMapping_Count = Settings->GetCount_DataMapping_Count;

    return Configuration;
}

URickAndMortyVaRestConfiguration* URickAndMortyVaRestConfigurationFactory::CreateFromCurrentSettings(UObject* Outer)
{
    return CreateFromSettings(
        Outer,
        GetMutableDefault<URickAndMortyVaRestConfigurationDeveloperSettings>()
    );
}
