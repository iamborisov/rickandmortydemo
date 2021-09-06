#include "RickAndMortyDataSource.h"

void URickAndMortyDataSource::Find(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo)
{
    FindLatentAction_Create(WorldContextObject, Result, LatentInfo);
    FindLatentAction_Complete(nullptr);
}

void URickAndMortyDataSource::Count(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo)
{
    CountLatentAction_Create(WorldContextObject, Result, LatentInfo);
    CountLatentAction_Complete(0);
}

void URickAndMortyDataSource::FindLatentAction_Create(UObject* WorldContextObject, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo)
{
    if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
    {
        FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
        FRickAndMortyDataSourceLatentAction<URickAndMortyCharacter*>* ActionInstance = LatentActionManager.FindExistingAction<FRickAndMortyDataSourceLatentAction<URickAndMortyCharacter*>>(LatentInfo.CallbackTarget, LatentInfo.UUID);

        if (ActionInstance != nullptr)
        {
            ActionInstance->Cancel();
            LatentActionManager.RemoveActionsForObject(LatentInfo.CallbackTarget);
        }

        LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, FindLatentAction = new FRickAndMortyDataSourceLatentAction<URickAndMortyCharacter*>(this, Result, LatentInfo));
    }
}

void URickAndMortyDataSource::FindLatentAction_Complete(URickAndMortyCharacter* Result)
{
    if (FindLatentAction)
    {
        FRickAndMortyDataSourceLatentAction<URickAndMortyCharacter*>* Action = FindLatentAction;
        FindLatentAction = nullptr;

        Action->Call(Result);
    }
}

void URickAndMortyDataSource::FindLatentAction_Cancel()
{
    /*_*/
}

void URickAndMortyDataSource::CountLatentAction_Create(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo)
{
    if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
    {
        FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
        FRickAndMortyDataSourceLatentAction<int32>* ActionInstance = LatentActionManager.FindExistingAction<FRickAndMortyDataSourceLatentAction<int32>>(LatentInfo.CallbackTarget, LatentInfo.UUID);

        if (ActionInstance != nullptr)
        {
            ActionInstance->Cancel();
            LatentActionManager.RemoveActionsForObject(LatentInfo.CallbackTarget);
        }

        LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, CountLatentAction = new FRickAndMortyDataSourceLatentAction<int32>(this, Result, LatentInfo));
    }
}

void URickAndMortyDataSource::CountLatentAction_Complete(int32 Result)
{
    if (CountLatentAction)
    {
        FRickAndMortyDataSourceLatentAction<int32>* Action = CountLatentAction;
        CountLatentAction = nullptr;

        Action->Call(Result);
    }
}

void URickAndMortyDataSource::CountLatentAction_Cancel()
{
    /*_*/
}
