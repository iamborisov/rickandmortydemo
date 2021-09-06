#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyCharacter.h"
#include "RickAndMortyDataSource.h"

#include "RickAndMortyFunctionLibrary.generated.h"

/**
 * RickAndMorty Mock - Blueprint Function Library
 */
UCLASS(Category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "Rick And Morty")
    static void GetCharacterById(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result, struct FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "Rick And Morty")
    static void GetCharactersCount(UObject* WorldContextObject, int32& Result, struct FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Rick And Morty")
    static URickAndMortyDataSource* GetDataSource(UObject* WorldContextObject);
};
