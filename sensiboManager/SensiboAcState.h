//
// Created by maghe on 29/11/17.
//

#ifndef TEMPSENSOR_SENSIBOACSTATE_H
#define TEMPSENSOR_SENSIBOACSTATE_H

#include <iostream>

class SensiboAcState {
public:
    SensiboAcState();

    SensiboAcState(std::string id, bool on, std::string fanLevel, std::string temperatureUnit, int targetTemperature,
                   std::string mode, std::string swing);

public:
    const std::string &getId() const;

    void setId(const std::string &id);

    bool isOn() const;

    void setOn(bool on);

    const std::string &getFanLevel() const;

    void setFanLevel(const std::string &fanLevel);

    const std::string &getTemperatureUnit() const;

    void setTemperatureUnit(const std::string &temperatureUnit);

    int getTargetTemperature() const;

    void setTargetTemperature(int targetTemperature);

    const std::string &getMode() const;

    void setMode(const std::string &mode);

    const std::string &getSwing() const;

    void setSwing(const std::string &swing);

private:
    std::string id;
    bool on;
    std::string fanLevel;
    std::string temperatureUnit;
    int targetTemperature;
    std::string mode;
    std::string swing;
};


#endif //TEMPSENSOR_SENSIBOACSTATE_H
