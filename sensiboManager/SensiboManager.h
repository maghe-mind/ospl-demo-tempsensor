//
// Created by maghe on 24/11/17.
//

#ifndef SENSIBO_SENSIBOMANAGER_H
#define SENSIBO_SENSIBOMANAGER_H

#define CPPHTTPLIB_OPENSSL_SUPPORT //TODO: to remove, not useful

#include "../lib/httplib.h"
#include "../lib/json.hpp"
#include <iostream>
#include <memory>
#include "SensiboSkyAcState.h"
#include "SensiboSky.h"
#include "SensiboParser.h"
#include "boost/algorithm/string.hpp"
#include "../defines.h"

class SensiboManager {

public:
    SensiboManager(std::string host, int port);

    SensiboSky GetDeviceInfo(std::string pod);

    bool PostAcState(std::string uid, std::basic_string<char> message, std::string contentType);


    bool ActuateCommand(std::string itemCommand, std::string deviceUUID);

    SensiboSkyAcState GetCurrentAcState(std::string pod);

    std::string GetField(std::string pod, std::string fieldName);

    std::string GetRawData(std::string pod);

    std::vector<std::string> GetPods();

private:
    httplib::SSLClient cli;
    SensiboParser sensiboParser;
};


#endif //SENSIBO_SENSIBOMANAGER_H
