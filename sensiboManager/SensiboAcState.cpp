//
// Created by maghe on 29/11/17.
//

#include "SensiboAcState.h"

SensiboAcState::SensiboAcState() {}

SensiboAcState::SensiboAcState(std::string id, bool on, std::string fanLevel, Mind::SensiboTemperatureScale temperatureUnit,
                               int targetTemperature, Mind::SensiboMode mode, std::string swing) {
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

const std::string &SensiboAcState::getFanLevel() const {
    return fanLevel;
}

void SensiboAcState::setFanLevel(const std::string &fanLevel) {
    SensiboAcState::fanLevel = fanLevel;
}



int SensiboAcState::getTargetTemperature() const {
    return targetTemperature;
}

void SensiboAcState::setTargetTemperature(int targetTemperature) {
    SensiboAcState::targetTemperature = targetTemperature;
}

const std::string &SensiboAcState::getSwing() const {
    return swing;
}

void SensiboAcState::setSwing(const std::string &swing) {
    SensiboAcState::swing = swing;
}

Mind::SensiboTemperatureScale SensiboAcState::getTemperatureUnit() const {
    return temperatureUnit;
}

void SensiboAcState::setTemperatureUnit(Mind::SensiboTemperatureScale temperatureUnit) {
    SensiboAcState::temperatureUnit = temperatureUnit;
}






