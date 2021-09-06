#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyDataSource.h"
#include "VaRestRequestJSON.h"

#include "RickAndMortyVaRestDataSource.generated.h"

/**
* RickAndMorty Mock - DataSource implementation
*/
UCLASS(Blueprintable, BlueprintType)
class RICKANDMORTYVARESTPLUGIN_API URickAndMortyVaRestDataSource : public URickAndMortyDataSource
{
    GENERATED_BODY()

public:
    URickAndMortyVaRestDataSource(): Super() {}
    URickAndMortyVaRestDataSource(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}
    
    /**
    * Find character by ID
    */
    virtual void Find(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo) override;

    /**
    * Get characters count
    */
    virtual void Count(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo) override;

private:
    UFUNCTION()
    void OnFindRequestComplete(UVaRestRequestJSON* Request);
    
    UFUNCTION()
    void OnCountRequestComplete(UVaRestRequestJSON* Request);

    UVaRestJsonValue* GetResponseField(UVaRestRequestJSON* Request, FString FieldName);
    FString GetResponseFieldAsString(UVaRestRequestJSON* Request, FString FieldName);
    int32 GetResponseFieldAsInteger(UVaRestRequestJSON* Request, FString FieldName);

public:
    virtual void FindLatentAction_Cancel() override;
    virtual void CountLatentAction_Cancel() override;
};
