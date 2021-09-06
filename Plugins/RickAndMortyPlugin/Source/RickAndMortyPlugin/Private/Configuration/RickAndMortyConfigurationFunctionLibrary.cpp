#include "Configuration/RickAndMortyConfigurationFunctionLibrary.h"
#include "Configuration/RickAndMortyConfigurationFactory.h"

URickAndMortyConfiguration* URickAndMortyConfigurationFunctionLibrary::GetConfiguration(UObject* WorldContextObject)
{
    return URickAndMortyConfigurationFactory::CreateFromCurrentSettings(WorldContextObject);
}
