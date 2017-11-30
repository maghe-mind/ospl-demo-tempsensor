//
// Created by maghe on 29/11/17.
//

#ifndef TEMPSENSOR_SENSIBOACSTATE_H
#define TEMPSENSOR_SENSIBOACSTATE_H

#include <iostream>
#include <Items.h>
#include "../lib/json.hpp"

const std::string EnumSensiboModeToString[5] = {"dry", "auto", "heat", "fan", "cool"};
const std::string EnumSensiboFabLevelToString[6] = {"low", "medium_low", "medium", "high", "auto", "NA"};
const std::string EnumSensiboTemperatureScaleToString[3] = {"C", "F", "NA"};
const std::string EnumSensiboSwingToString[2] = {"stopped", "rangeFull"};

class SensiboAcState {
public:
    SensiboAcState();

    SensiboAcState(std::string id, bool on, Mind::SensiboFanLevel fanLevel,
                   Mind::SensiboTemperatureScale temperatureUnit, int targetTemperature,
                   Mind::SensiboMode mode, Mind::SensiboSwing swing);

    nlohmann::json getJsonAcState();

public:
    const std::string &getId() const;

    void setId(const std::string &id);

    bool isOn() const;

    void setOn(bool on);

    Mind::SensiboMode getMode() const;

    void setMode(Mind::SensiboMode mode);

    Mind::SensiboFanLevel getFanLevel() const;

    void setFanLevel(Mind::SensiboFanLevel fanLevel);

    Mind::SensiboTemperatureScale getTemperatureUnit() const;

    void setTemperatureUnit(Mind::SensiboTemperatureScale temperatureUnit);

    int getTargetTemperature() const;

    void setTargetTemperature(int targetTemperature);

    Mind::SensiboSwing getSwing() const;

    void setSwing(Mind::SensiboSwing swing);


private:
    std::string id;
    bool on;
    Mind::SensiboFanLevel fanLevel;
    Mind::SensiboTemperatureScale temperatureUnit;
    int targetTemperature;
    Mind::SensiboMode mode;
    Mind::SensiboSwing swing;
};


#endif //TEMPSENSOR_SENSIBOACSTATE_H
