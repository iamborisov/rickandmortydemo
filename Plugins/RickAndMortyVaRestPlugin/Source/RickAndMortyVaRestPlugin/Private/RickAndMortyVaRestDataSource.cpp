#include "RickAndMortyVaRestDataSource.h"

#include "RickAndMortyCharacterFactory.h"
#include "VaRestSubsystem.h"
#include "Configuration/RickAndMortyVaRestConfigurationFactory.h"

void URickAndMortyVaRestDataSource::Find(UObject* WorldContextObject, int32 Id, URickAndMortyCharacter*& Result,
                                         struct FLatentActionInfo LatentInfo)
{
    URickAndMortyVaRestConfiguration* Configuration =
        URickAndMortyVaRestConfigurationFactory::CreateFromCurrentSettings(GetOuter());

    FindLatentAction_Create(WorldContextObject, Result, LatentInfo);

    FVaRestCallDelegate Delegate = FVaRestCallDelegate();
    Delegate.BindDynamic(this, &URickAndMortyVaRestDataSource::OnFindRequestComplete);
    GEngine->GetEngineSubsystem<UVaRestSubsystem>()->CallURL(
        Configuration->GetCharacter_Endpoint_URL.Replace(TEXT("{id}"), ToCStr(FString::FromInt(Id))),
        Configuration->GetCharacter_Endpoint_Verb,
        Configuration->GetCharacter_Endpoint_ContentType,
        nullptr,
        Delegate
    );
}

void URickAndMortyVaRestDataSource::OnFindRequestComplete(UVaRestRequestJSON* Request)
{
    URickAndMortyVaRestConfiguration* Configuration =
        URickAndMortyVaRestConfigurationFactory::CreateFromCurrentSettings(GetOuter());

    UVaRestJsonObject* Response = Request->GetResponseValue()->AsObject();
    URickAndMortyCharacter* Character = URickAndMortyCharacterFactory::CreateFromValues(
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Name),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Status),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Species),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Type),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Gender),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Origin),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Location),
        GetResponseFieldAsString(Request, Configuration->GetCharacter_DataMapping_Image)
    );

    FindLatentAction_Complete(Character);
}

void URickAndMortyVaRestDataSource::FindLatentAction_Cancel()
{
    // TODO: Cancel http request
}

void URickAndMortyVaRestDataSource::Count(UObject* WorldContextObject, int32& Result,
                                          struct FLatentActionInfo LatentInfo)
{
    URickAndMortyVaRestConfiguration* Configuration =
        URickAndMortyVaRestConfigurationFactory::CreateFromCurrentSettings(GetOuter());

    CountLatentAction_Create(WorldContextObject, Result, LatentInfo);

    FVaRestCallDelegate Delegate = FVaRestCallDelegate();
    Delegate.BindDynamic(this, &URickAndMortyVaRestDataSource::OnCountRequestComplete);
    GEngine->GetEngineSubsystem<UVaRestSubsystem>()->CallURL(
        Configuration->GetCount_Endpoint_URL,
        Configuration->GetCount_Endpoint_Verb,
        Configuration->GetCount_Endpoint_ContentType,
        nullptr,
        Delegate
    );
}

void URickAndMortyVaRestDataSource::OnCountRequestComplete(UVaRestRequestJSON* Request)
{
    URickAndMortyVaRestConfiguration* Configuration =
        URickAndMortyVaRestConfigurationFactory::CreateFromCurrentSettings(GetOuter());

    UVaRestJsonObject* Response = Request->GetResponseValue()->AsObject();

    CountLatentAction_Complete(
        GetResponseFieldAsInteger(Request, Configuration->GetCount_DataMapping_Count)
    );
}

void URickAndMortyVaRestDataSource::CountLatentAction_Cancel()
{
    // TODO: Cancel http request
}

FString URickAndMortyVaRestDataSource::GetResponseFieldAsString(UVaRestRequestJSON* Request, FString FieldName)
{
    return GetResponseField(Request, FieldName)->AsString();
}

int32 URickAndMortyVaRestDataSource::GetResponseFieldAsInteger(UVaRestRequestJSON* Request, FString FieldName)
{
    return GetResponseField(Request, FieldName)->AsInt32();
}

UVaRestJsonValue* URickAndMortyVaRestDataSource::GetResponseField(UVaRestRequestJSON* Request, FString FieldName)
{
    TArray<FString> Parts;
    FieldName.ParseIntoArray(Parts, TEXT("."), false);

    UVaRestJsonObject* Root = Request->GetResponseValue()->AsObject();
    for (int32 i = 0; i < Parts.Num() - 1; i++)
    {
        Root = Root->GetObjectField(Parts[i]);
    }

    return Root->GetField(Parts[Parts.Num() - 1]);
}
