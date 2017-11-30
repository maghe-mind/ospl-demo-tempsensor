//
// Created by maghe on 29/11/17.
//

#include "SensiboAcState.h"

SensiboAcState::SensiboAcState() {}

SensiboAcState::SensiboAcState(std::string id, bool on, Mind::SensiboFanLevel fanLevel,
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

const std::string &SensiboAcState::getId() const {
    return id;
}

void SensiboAcState::setId(const std::string &id) {
    SensiboAcState::id = id;
}

bool SensiboAcState::isOn() const {
    return on;
}

void SensiboAcState::setOn(bool on) {
    SensiboAcState::on = on;
}

Mind::SensiboMode SensiboAcState::getMode() const {
    return mode;
}

void SensiboAcState::setMode(Mind::SensiboMode mode) {
    SensiboAcState::mode = mode;
}

Mind::SensiboFanLevel SensiboAcState::getFanLevel() const {
    return fanLevel;
}

void SensiboAcState::setFanLevel(Mind::SensiboFanLevel fanLevel) {
    SensiboAcState::fanLevel = fanLevel;
}


int SensiboAcState::getTargetTemperature() const {
    return targetTemperature;
}

void SensiboAcState::setTargetTemperature(int targetTemperature) {
    SensiboAcState::targetTemperature = targetTemperature;
}


Mind::SensiboSwing SensiboAcState::getSwing() const {
    return swing;
}

void SensiboAcState::setSwing(Mind::SensiboSwing swing) {
    SensiboAcState::swing = swing;
}

Mind::SensiboTemperatureScale SensiboAcState::getTemperatureUnit() const {
    return temperatureUnit;
}

void SensiboAcState::setTemperatureUnit(Mind::SensiboTemperatureScale temperatureUnit) {
    SensiboAcState::temperatureUnit = temperatureUnit;
}

nlohmann::json SensiboAcState::getJsonAcState() {

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




    nlohmann::json j2 = {
            {"acState", {
                                {"on", on},
                                {"targetTemperature", temperature},
                                {"temperatureUnit", temperatureUnit},
                                {"mode", mode},
                                {"swing", swing},
                                {"fanLevel", fanLevel} //TODO: finish
                        }
            }
    };
    return j2;
}






