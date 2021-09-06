#include "RickAndMortyDataSourceLatentAction.h"

#include "RickAndMortyDataSource.h"

template <>
void FRickAndMortyDataSourceLatentAction<URickAndMortyCharacter*>::Cancel()
{
    UObject* Obj = DataSource.Get();
    if (Obj != nullptr)
    {
        ((URickAndMortyDataSource*)Obj)->FindLatentAction_Cancel();
    }
}

template <>
void FRickAndMortyDataSourceLatentAction<int32>::Cancel()
{
    UObject* Obj = DataSource.Get();
    if (Obj != nullptr)
    {
        ((URickAndMortyDataSource*)Obj)->CountLatentAction_Cancel();
    }
}
