#pragma once

#include "CoreMinimal.h"
#include "RickAndMortyCharacter.generated.h"

/**
* RickAndMorty - Character
*/
UCLASS(Blueprintable, BlueprintType, category = "Rick And Morty")
class RICKANDMORTYPLUGIN_API URickAndMortyCharacter : public UObject
{
    GENERATED_BODY()

public:
    URickAndMortyCharacter(): Super() {}
    URickAndMortyCharacter(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer) {}
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Name;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Status;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Species;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Type;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Gender;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Origin;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Location;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Rick And Morty | Character")
    FString Image;
};
