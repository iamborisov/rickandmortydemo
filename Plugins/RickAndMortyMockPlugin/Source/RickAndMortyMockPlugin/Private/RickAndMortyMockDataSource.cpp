#include "RickAndMortyMockDataSource.h"

#include "RickAndMortyCharacterFactory.h"
#include "Configuration/RickAndMortyMockConfigurationFactory.h"

void URickAndMortyMockDataSource::Find(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result,
                                       struct FLatentActionInfo LatentInfo)
{
    FindLatentAction_Create(WorldContextObject, Result, LatentInfo);

    URickAndMortyMockConfiguration* Configuration =
        URickAndMortyMockConfigurationFactory::CreateFromCurrentSettings(GetOuter());

    URickAndMortyCharacter* Character = URickAndMortyCharacterFactory::CreateFromValues(
        Configuration->Name,
        Configuration->Status,
        Configuration->Species,
        Configuration->Type,
        Configuration->Gender,
        Configuration->Origin,
        Configuration->Location,
        Configuration->Image
    );

    FindLatentAction_Complete(Character);
}

void URickAndMortyMockDataSource::Count(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo)
{
    CountLatentAction_Create(WorldContextObject, Result, LatentInfo);

    URickAndMortyMockConfiguration* Configuration =
        URickAndMortyMockConfigurationFactory::CreateFromCurrentSettings(GetOuter());

    CountLatentAction_Complete(Configuration->Count);
}
