#include "Configuration/RickAndMortyMockConfigurationFactory.h"

URickAndMortyMockConfiguration* URickAndMortyMockConfigurationFactory::Create(UObject* Outer)
{
    return NewObject<URickAndMortyMockConfiguration>(Outer);
}

URickAndMortyMockConfiguration* URickAndMortyMockConfigurationFactory::CreateFromSettings(
    UObject* Outer,
    URickAndMortyMockConfigurationDeveloperSettings* Settings)
{
    URickAndMortyMockConfiguration* Configuration = Create(Outer);

    Configuration->Name = Settings->Name;
    Configuration->Status = Settings->Status;
    Configuration->Species = Settings->Species;
    Configuration->Type = Settings->Type;
    Configuration->Gender = Settings->Gender;
    Configuration->Origin = Settings->Origin;
    Configuration->Location = Settings->Location;
    Configuration->Image = Settings->Image;
    Configuration->Count = Settings->Count;

    return Configuration;
}

URickAndMortyMockConfiguration* URickAndMortyMockConfigurationFactory::CreateFromCurrentSettings(UObject* Outer)
{
    return CreateFromSettings(
        Outer,
        GetMutableDefault<URickAndMortyMockConfigurationDeveloperSettings>()
    );
}
