#pragma once

#include "CoreMinimal.h"
#include "LatentActions.h"

template <class T>
class FRickAndMortyDataSourceLatentAction : public FPendingLatentAction
{
public:
    virtual void Call(const T& Value)
    {
        Result = Value;
        Called = true;
    }

    void operator()(const T& Value)
    {
        Call(Value);
    }

    void Cancel();

    FRickAndMortyDataSourceLatentAction(FWeakObjectPtr DataSourceObj, T& ResultParam, const FLatentActionInfo& LatentInfo)
        : Called(false)
        , DataSource(DataSourceObj)
        , ExecutionFunction(LatentInfo.ExecutionFunction)
        , OutputLink(LatentInfo.Linkage)
        , CallbackTarget(LatentInfo.CallbackTarget)
        , Result(ResultParam)
    {
    }

    virtual void UpdateOperation(FLatentResponse& Response) override
    {
        Response.FinishAndTriggerIf(Called, ExecutionFunction, OutputLink, CallbackTarget);
    }

    virtual void NotifyObjectDestroyed()
    {
        Cancel();
    }

    virtual void NotifyActionAborted()
    {
        Cancel();
    }

private:
    bool Called;
    FWeakObjectPtr DataSource;

public:
    const FName ExecutionFunction;
    const int32 OutputLink;
    const FWeakObjectPtr CallbackTarget;
    T& Result;
};