#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyCharacter.h"
#include "RickAndMortyCharacterFactory.generated.h"

/**
* RickAndMorty - Character Factory
*/
UCLASS(Blueprintable, BlueprintType, category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyCharacterFactory : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyCharacterFactory(): Super() {}

    URickAndMortyCharacterFactory(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}

    /**
    * Create empty character object
    */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Character")
    static URickAndMortyCharacter* Create();

    /**
    * Create character object from values
    */
    UFUNCTION(BlueprintCallable, Category = "Rick And Morty | Character")
    static URickAndMortyCharacter* CreateFromValues(
        FString Name,
        FString Status,
        FString Species,
        FString Type,
        FString Gender,
        FString Origin,
        FString Location,
        FString Image
    );
};
