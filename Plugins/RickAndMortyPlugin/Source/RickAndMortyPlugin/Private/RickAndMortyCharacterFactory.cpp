#include "RickAndMortyCharacterFactory.h"

URickAndMortyCharacter* URickAndMortyCharacterFactory::Create()
{
    return NewObject<URickAndMortyCharacter>();
}

URickAndMortyCharacter* URickAndMortyCharacterFactory::CreateFromValues(
    FString Name,
    FString Status,
    FString Species,
    FString Type,
    FString Gender,
    FString Origin,
    FString Location,
    FString Image)
{
    URickAndMortyCharacter* Character = Create();

    Character->Name = Name;
    Character->Status = Status;
    Character->Species = Species;
    Character->Type = Type;
    Character->Gender = Gender;
    Character->Origin = Origin;
    Character->Location = Location;
    Character->Image = Image;

    return Character;
}
