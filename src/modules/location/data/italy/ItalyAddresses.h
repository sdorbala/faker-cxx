#pragma once

#include "../CountryAddresses.h"
#include "ItalyCities.h"
#include "ItalyStates.h"
#include "ItalyStreetPrefixes.h"

namespace faker
{
const std::string italyZipCodeFormat{"#####"};

const std::vector<std::string> italyAddressFormats{"{street} {buildingNumber}",
                                                   "{street} {buildingNumber} {secondaryAddress}"};

const std::vector<std::string> italySecondaryAddressFormats{"Appartamento ##", "Piano #"};

const std::vector<std::string> italyBuildingNumberFormats{"###", "##", "#"};

const std::vector<std::string> italyStreetFormats{"{streetPrefix} {firstName}", "{streetPrefix} {lastName}"};

const std::vector<std::string> italyCityFormats{"{cityName}"};

const CountryAddresses italyAddresses{italyZipCodeFormat,
                                      italyAddressFormats,
                                      italySecondaryAddressFormats,
                                      italyStreetFormats,
                                      italyStreetPrefixes,
                                      {},
                                      {},
                                      italyBuildingNumberFormats,
                                      italyCityFormats,
                                      {},
                                      italyCities,
                                      {},
                                      italyStates,
                                      {}};
}
