//
// Created by maghe on 29/11/17.
//

#include "SensiboSkyAcState.h"

SensiboSkyAcState::SensiboSkyAcState() {}

SensiboSkyAcState::SensiboSkyAcState(std::string id, bool on, Mind::SensiboFanLevel fanLevel,
                               Mind::SensiboTemperatureScale temperatureUnit,
                               int targetTemperature, Mind::SensiboMode mode, Mind::SensiboSwing swing) {
    this->id = id;
    this->on = on;
    this->fanLevel = fanLevel;
    this->temperatureUnit = temperatureUnit;
    this->targetTemperature = targetTemperature;
    this->mode = mode;
    this->swing = swing;
}

const std::string &SensiboSkyAcState::getId() const {
    return id;
}

void SensiboSkyAcState::setId(const std::string &id) {
    SensiboSkyAcState::id = id;
}

bool SensiboSkyAcState::isOn() const {
    return on;
}

void SensiboSkyAcState::setOn(bool on) {
    SensiboSkyAcState::on = on;
}

Mind::SensiboMode SensiboSkyAcState::getMode() const {
    return mode;
}

void SensiboSkyAcState::setMode(Mind::SensiboMode mode) {
    SensiboSkyAcState::mode = mode;
}

Mind::SensiboFanLevel SensiboSkyAcState::getFanLevel() const {
    return fanLevel;
}

void SensiboSkyAcState::setFanLevel(Mind::SensiboFanLevel fanLevel) {
    SensiboSkyAcState::fanLevel = fanLevel;
}


int SensiboSkyAcState::getTargetTemperature() const {
    return targetTemperature;
}

void SensiboSkyAcState::setTargetTemperature(int targetTemperature) {
    SensiboSkyAcState::targetTemperature = targetTemperature;
}


Mind::SensiboSwing SensiboSkyAcState::getSwing() const {
    return swing;
}

void SensiboSkyAcState::setSwing(Mind::SensiboSwing swing) {
    SensiboSkyAcState::swing = swing;
}

Mind::SensiboTemperatureScale SensiboSkyAcState::getTemperatureUnit() const {
    return temperatureUnit;
}

void SensiboSkyAcState::setTemperatureUnit(Mind::SensiboTemperatureScale temperatureUnit) {
    SensiboSkyAcState::temperatureUnit = temperatureUnit;
}

nlohmann::json SensiboSkyAcState::getJsonAcState() {

    std::string mode = EnumSensiboModeToString[(int) getMode()];

    std::string fanLevel;
    if (getFanLevel() == Mind::SensiboFanLevel::fanNA) {
        fanLevel = "low";
    } else {
        fanLevel = EnumSensiboFabLevelToString[(int) getFanLevel()];
    }

    std::string temperatureUnit;
    if (getTemperatureUnit() == Mind::SensiboTemperatureScale::NA) {
        temperatureUnit = "C";
    } else {
        temperatureUnit = EnumSensiboTemperatureScaleToString[(int) getTemperatureUnit()];
    }

    int temperature;
    if (getTargetTemperature() < 16 || getTargetTemperature() > 30) {
        temperature = 20;
    } else {
        temperature = getTargetTemperature();
    }

    std::string swing = EnumSensiboSwingToString[(int) getSwing()];

    nlohmann::json jsonSensiboAcState;
    jsonSensiboAcState["acState"]["on"] = on;
    jsonSensiboAcState["acState"]["mode"] = mode;

    if (getMode() != Mind::SensiboMode::modeFan) {
        jsonSensiboAcState["acState"]["targetTemperature"] = temperature;
        jsonSensiboAcState["acState"]["temperatureUnit"] = temperatureUnit;
    }
    if ((getMode() != Mind::SensiboMode::modeDry) || (getMode() != Mind::SensiboMode::modeAuto)) {
        jsonSensiboAcState["acState"]["fanLevel"] = fanLevel;
    }
    jsonSensiboAcState["acState"]["swing"] = swing;


    return jsonSensiboAcState;
}






