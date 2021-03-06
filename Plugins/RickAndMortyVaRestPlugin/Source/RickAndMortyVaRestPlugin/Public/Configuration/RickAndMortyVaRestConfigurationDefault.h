#pragma once

/**
 * RickAndMorty VaRest - Configuration - Default values
 */

#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_ENDPOINT_URL TEXT("https://rickandmortyapi.com/api/character/{id}")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_ENDPOINT_VERB EVaRestRequestVerb::GET
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_ENDPOINT_CONTENTTYPE EVaRestRequestContentType::json
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_NAME TEXT("name")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_STATUS TEXT("status")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_SPECIES TEXT("species")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_TYPE TEXT("type")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_GENDER TEXT("gender")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_ORIGIN TEXT("origin.name")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_LOCATION TEXT("location.name")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCHARACTER_DATAMAPPING_IMAGE TEXT("image")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_ENDPOINT_URL TEXT("https://rickandmortyapi.com/api/character")
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_ENDPOINT_VERB EVaRestRequestVerb::GET
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_ENDPOINT_CONTENTTYPE EVaRestRequestContentType::json
#define RICKANDMORTYVARESTPLUGIN_CONFIGURATION_DEFAULT_GETCOUNT_DATAMAPPING_COUNT TEXT("info.count")
