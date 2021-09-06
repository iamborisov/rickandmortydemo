#include "Configuration/RickAndMortyMockConfigurationFunctionLibrary.h"
#include "Configuration/RickAndMortyMockConfigurationFactory.h"

URickAndMortyMockConfiguration* URickAndMortyMockConfigurationFunctionLibrary::GetConfiguration(
    UObject* WorldContextObject)
{
    return URickAndMortyMockConfigurationFactory::CreateFromCurrentSettings(WorldContextObject);
}
