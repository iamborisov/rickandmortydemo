#include "RickAndMortyFunctionLibrary.h"

#include "Configuration/RickAndMortyConfigurationFactory.h"

void URickAndMortyFunctionLibrary::GetCharacterById(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo)
{
    return GetDataSource(WorldContextObject)->Find(WorldContextObject, Id, Result, LatentInfo);
}

void URickAndMortyFunctionLibrary::GetCharactersCount(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo)
{
    return GetDataSource(WorldContextObject)->Count(WorldContextObject, Result, LatentInfo);
}

URickAndMortyDataSource* URickAndMortyFunctionLibrary::GetDataSource(UObject* WorldContextObject)
{
    return URickAndMortyConfigurationFactory::CreateFromCurrentSettings(WorldContextObject)->DataSource;
}
