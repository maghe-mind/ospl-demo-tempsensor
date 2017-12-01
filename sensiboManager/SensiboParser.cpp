//
// Created by maghe on 30/11/17.
//

#include "SensiboParser.h"

Mind::SensiboMode SensiboParser::parseSensiboMode(std::string commandSensiboMode) {

    if (commandSensiboMode == "dry") {
        return Mind::SensiboMode::modeDry;
    } else if (commandSensiboMode == "auto") {
        return Mind::SensiboMode::modeAuto;
    } else if (commandSensiboMode == "heat") {
        return Mind::SensiboMode::modeHeat;
    } else if (commandSensiboMode == "fan") {
        return Mind::SensiboMode::modeFan;
    } else if (commandSensiboMode == "cool") {
        return Mind::SensiboMode::modeCool;
    } else {
        throw;//TODO: throw exception
    }
}

bool SensiboParser::parserSensinboOn(std::string commandSensiboOn) {
    std::stringstream ss(commandSensiboOn);
    bool on;
    if (!(ss >> std::boolalpha >> on)) {
        // Parsing error.
        throw;//TODO: throw exception
    }
    return on;
}

Mind::SensiboTemperatureScale
SensiboParser::parseSensiboTemperatureUnit(std::string commandSensiboTemperatureUnit) {
    if (commandSensiboTemperatureUnit == "C") {
        return Mind::SensiboTemperatureScale::C;
    } else if (commandSensiboTemperatureUnit == "F") {
        return Mind::SensiboTemperatureScale::F;
    } else {
        throw;//TODO: throw exception
    }
}

Mind::SensiboFanLevel SensiboParser::parseSensiboFanLevel(std::string commandSensiboFanLevel) {

    if (commandSensiboFanLevel == "low") {
        return Mind::SensiboFanLevel::fanLow;
    } else if (commandSensiboFanLevel == "medium_low") {
        return Mind::SensiboFanLevel::fanMedium_low;
    } else if (commandSensiboFanLevel == "medium") {
        return Mind::SensiboFanLevel::fanMedium;
    } else if (commandSensiboFanLevel == "high") {
        return Mind::SensiboFanLevel::fanHigh;
    } else if (commandSensiboFanLevel == "auto") {
        return Mind::SensiboFanLevel::fanAuto;
    } else {
        return Mind::SensiboFanLevel::fanNA;
        //TODO: throw exception?
    }
}

Mind::SensiboSwing SensiboParser::parseSensiboSwing(std::string commandSensiboSwing) {
    if (commandSensiboSwing == "stopped") {
        return Mind::SensiboSwing::swingStopped;
    } else if (commandSensiboSwing == "rangeFull") {
        return Mind::SensiboSwing::swingRangeFull;
    } else {
        throw;//TODO: throw exception
    }
}

int SensiboParser::parserSensinboTargetTemperature(int commandSensiboTemperatureUnit) {

    if (commandSensiboTemperatureUnit > 30) {
        return 30;
    } else if (commandSensiboTemperatureUnit < 16) {
        return 16;
    }
    return commandSensiboTemperatureUnit;
}
