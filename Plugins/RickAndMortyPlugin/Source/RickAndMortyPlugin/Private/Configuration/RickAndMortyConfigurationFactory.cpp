#include "Configuration/RickAndMortyConfigurationFactory.h"

URickAndMortyConfiguration* URickAndMortyConfigurationFactory::Create(UObject* Outer)
{
    return NewObject<URickAndMortyConfiguration>(Outer);
}

URickAndMortyConfiguration* URickAndMortyConfigurationFactory::CreateFromSettings(
    UObject* Outer,
    URickAndMortyConfigurationDeveloperSettings* Settings)
{
    URickAndMortyConfiguration* Configuration = Create(Outer);

    if (Settings->DataSourceClass->IsValidLowLevelFast())
    {
        Configuration->DataSource = NewObject<URickAndMortyDataSource>(
            Outer,
            Settings->DataSourceClass
        );
    }

    return Configuration;
}

URickAndMortyConfiguration* URickAndMortyConfigurationFactory::CreateFromCurrentSettings(UObject* Outer)
{
    return CreateFromSettings(
        Outer,
        GetMutableDefault<URickAndMortyConfigurationDeveloperSettings>()
    );
}
