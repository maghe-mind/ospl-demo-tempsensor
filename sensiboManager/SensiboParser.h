//
// Created by maghe on 30/11/17.
//

#ifndef TEMPSENSOR_SENSIBOPARSER_H
#define TEMPSENSOR_SENSIBOPARSER_H

#include "../lib/httplib.h"
#include "../lib/json.hpp"
#include <iostream>
#include <memory>
#include "SensiboSkyAcState.h"
#include "SensiboSky.h"
#include "boost/algorithm/string.hpp"

class SensiboParser {

public:
    Mind::SensiboMode parseSensiboMode(std::string commandSensiboMode);

    bool parserSensinboOn(std::string commandSensiboOn);

    Mind::SensiboTemperatureScale parseSensiboTemperatureUnit(std::string commandSensiboTemperatureUnit);

    Mind::SensiboFanLevel parseSensiboFanLevel(std::string commandSensiboFanLevel);

    Mind::SensiboSwing parseSensiboSwing(std::string commandSensiboSwing);

    int parserSensinboTargetTemperature(int commandSensiboTemperatureUnit);
};


#endif //TEMPSENSOR_SENSIBOPARSER_H
