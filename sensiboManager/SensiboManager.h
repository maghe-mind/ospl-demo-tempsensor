//
// Created by maghe on 24/11/17.
//

#ifndef SENSIBO_SENSIBOMANAGER_H
#define SENSIBO_SENSIBOMANAGER_H

#define CPPHTTPLIB_OPENSSL_SUPPORT //TODO: to remove, not useful

#include "../lib/httplib.h"
#include "../lib/json.hpp"
#include "SensiboSkyAcState.h"
#include "SensiboSky.h"
#include <iostream>
#include <memory>

class SensiboManager {

public:
    SensiboManager(std::string host, int port);

    SensiboSky GetDeviceInfo(std::string pod);

    std::map<std::string, SensiboSky> GetDevicesInfo();

    bool PostAcState(std::string uid, std::basic_string<char> message, std::string contentType);

    /*
    void PrintResponse(std::shared_ptr<httplib::Response> states);
    */

    bool ActuateCommand(std::string itemCommand, std::string deviceUUID);

    SensiboSkyAcState GetCurrentAcState(std::string pod);

    std::string GetField(std::string pod, std::string fieldName);

    std::string GetRawData(std::string pod);

    std::vector<std::string> GetPods();


private:
    httplib::SSLClient cli;



    bool UpdateOn(std::string property, std::string value);

    Mind::SensiboMode parseSensiboMode(std::string commandSensiboMode);

    bool parserSensinboOn(std::string commandSensiboOn);

    Mind::SensiboTemperatureScale parseSensiboTemperatureUnit(std::string commandSensiboTemperatureUnit);

    Mind::SensiboFanLevel parseSensiboFanLevel(std::string commandSensiboFanLevel);

    Mind::SensiboSwing parseSensiboSwing(std::string commandSensiboSwing);
};


#endif //SENSIBO_SENSIBOMANAGER_H
