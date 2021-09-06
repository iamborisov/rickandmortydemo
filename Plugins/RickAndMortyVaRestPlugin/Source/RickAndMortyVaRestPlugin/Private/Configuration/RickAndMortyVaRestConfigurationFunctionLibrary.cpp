#include "Configuration/RickAndMortyVaRestConfigurationFunctionLibrary.h"
#include "Configuration/RickAndMortyVaRestConfigurationFactory.h"

URickAndMortyVaRestConfiguration* URickAndMortyVaRestConfigurationFunctionLibrary::GetConfiguration(
    UObject* WorldContextObject)
{
    return URickAndMortyVaRestConfigurationFactory::CreateFromCurrentSettings(WorldContextObject);
}
