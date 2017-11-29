//
// Created by maghe on 24/11/17.
//

#define CPPHTTPLIB_OPENSSL_SUPPORT

#include "../lib/httplib.h"
#include "../lib/json.hpp"
#include <iostream>
#include <memory>
#include "SensiboManager.h"
#include "../defines.h"
#include "SensiboAcState.h"
#include "SensiboDevice.h"
#include "boost/algorithm/string.hpp"
#include <algorithm>

using json = nlohmann::json;


SensiboManager::SensiboManager(std::string host, int port) :
        cli(httplib::SSLClient(host.c_str(), port)) {

}


SensiboDevice SensiboManager::GetDeviceInfo(std::string pod) {

    std::string room = SensiboManager::GetField(pod, "room");
    std::string roomName = json::parse(room)["room"]["name"];
    std::string rawdata = SensiboManager::GetRawData(pod);
    SensiboAcState sensiboCurrentAcState = SensiboManager::GetCurrentAcState(pod);

    SensiboDevice sensiboDevice(pod, roomName, rawdata, sensiboCurrentAcState);


    return sensiboDevice;
}


SensiboAcState SensiboManager::GetCurrentAcState(std::string pod) {

    SensiboAcState acCurrentState;
    //https://home.sensibo.com/api/v2/pods/kvDso2fP/acStates?apiKey=FdNABENzMCuRt7niVUgSm8oxVvXi85
    std::string path = "/api/v2/pods/" + pod + "/acStates?apiKey=" + SENSIBO_APIKEY;
    std::shared_ptr<httplib::Response> response = cli.get(path.c_str());

    if (response && response->status == 200) {
        std::cout << "Body:" << response->body << std::endl;
        auto parsedJsonResponse = json::parse(response->body);  //TODO: parse explicitly. Something more elegant?

        std::string id = parsedJsonResponse["result"][0]["id"];
        bool on = parsedJsonResponse["result"][0]["acState"]["on"];
        std::string mode = parsedJsonResponse["result"][0]["acState"]["mode"];


        std::vector<std::string> noFanModes = {"dry", "auto", "heat"};
        std::string fanLevel;
        if (std::find(noFanModes.begin(), noFanModes.end(), mode) == noFanModes.end())
            fanLevel= parsedJsonResponse["result"][0]["acState"]["fanLevel"];
        else
            fanLevel = "NA";


        std::string temperatureUnit = parsedJsonResponse["result"][0]["acState"]["temperatureUnit"];

        std::vector<std::string> noTemperature = {"fan"};
        int targetTemperature;
        if (std::find(noFanModes.begin(), noFanModes.end(), mode) == noFanModes.end())
            targetTemperature= parsedJsonResponse["result"][0]["acState"]["targetTemperature"];
        else
            targetTemperature = -1;

        std::string swing = parsedJsonResponse["result"][0]["acState"]["swing"];

        acCurrentState = SensiboAcState(id, on, fanLevel, temperatureUnit, targetTemperature, mode, swing);
    } else {
        std::cout << "No response or respose code != 200" << std::endl;
        throw std::exception(); // TODO: discuss how to manage the misbehavior
    }

    return acCurrentState;
}


std::map<std::string, SensiboDevice> SensiboManager::GetDevicesInfo() {

    std::map<std::string, SensiboDevice> sensiboDevices;
    auto pods = SensiboManager::GetPods();
    for (const std::string &pod : pods) {
        auto sensiboDevice = SensiboManager::GetDeviceInfo(pod);
        sensiboDevices.insert(std::pair<std::string, SensiboDevice>(pod, sensiboDevice));
    }
    return sensiboDevices;
}

std::vector<std::string> SensiboManager::GetPods() {

    std::vector<std::string> pods;
    std::string apiKey(
            SENSIBO_APIKEY); //TODO: I don't understand why operator + cannot be applied to char[], while in the method GetField this operator accepts it.
    std::string path = "/api/v2/users/me/pods?apiKey=" + apiKey;
    std::shared_ptr<httplib::Response> response = cli.get(path.c_str());

    if (response && response->status == 200) {
        auto parsedJsonResponse = json::parse(response->body);  //TODO: parse explicitly. Something more elegant?
        for (int i = 0; i < parsedJsonResponse["result"].size(); i++) {
            pods.push_back(parsedJsonResponse["result"][i]["id"]);
        }
    } else {
        std::cout << "No response or respose code != 200" << std::endl;
        throw std::exception(); // TODO: discuss how to manage the misbehavior
    }
    return pods;
}

std::string SensiboManager::GetField(std::string pod, std::string fieldName) {

    std::string responseResult;
    std::string path = "/api/v2/pods/" + pod
                       + "?apiKey=" + SENSIBO_APIKEY
                       + "&fields=" + fieldName;
    std::shared_ptr<httplib::Response> response = cli.get(path.c_str());

    if (response && response->status == 200) {
        auto parsedJsonResponse = json::parse(response->body);  //TODO: parse explicitly. Something more elegant?
        responseResult = parsedJsonResponse["result"].dump();

    } else {
        std::cout << "No response or respose code != 200" << std::endl;
        std::cout << response->status << std::endl;
        throw std::exception(); // TODO: discuss how to manage the misbehavior
    }
    return responseResult;
}

std::string SensiboManager::GetRawData(std::string pod) {
    return SensiboManager::GetField(pod, "");
}

bool SensiboManager::PostAcState(std::string uid, std::basic_string<char> message, std::string contentType) {

    std::string path = "/api/v2/pods/" + uid + "/acStates?apiKey=" + SENSIBO_APIKEY;
    std::shared_ptr<httplib::Response> response = cli.post(path.c_str(), message, contentType.c_str());

    if (response && response->status == 200) {
        std::cout << "PostAcState response" << std::endl;
        std::cout << "Status: " << response->status << std::endl;
        std::cout << "Body:" << response->body << std::endl;
        return true;
    } else {
        std::cout << "No response or respose code != 200" << std::endl;
        std::cout << response->status << std::endl;
        throw std::exception(); // TODO: discuss how to manage the misbehavior
    }
}

bool SensiboManager::ActuateCommand(std::string itemCommand, std::string deviceUUID) {


    SensiboDevice sensiboDevice = GetDeviceInfo(deviceUUID);
    SensiboAcState sensiboNewAcState = sensiboDevice.getSensiboCurrentAcState();


    std::vector<std::string> splittedItemCommand;
    boost::split(splittedItemCommand, itemCommand, boost::is_any_of(" "));

    for (auto const &value:splittedItemCommand) {
        std::cout << value << std::endl;
    }

    try {

        bool on = true;

        if (splittedItemCommand.size() == 2) {

            if (splittedItemCommand[0] == "on") {

                std::stringstream ss(splittedItemCommand[1]);
                if (!(ss >> std::boolalpha >> on)) {
                    // Parsing error.
                }
                sensiboNewAcState.setOn(on);

            }
            if (splittedItemCommand[0] == "mode") {
                sensiboNewAcState.setMode(splittedItemCommand[1]);
            }
            if (splittedItemCommand[0] == "targetTemperature") {
                int value = std::atoi(splittedItemCommand[1].c_str());
                sensiboNewAcState.setTargetTemperature(value);
            }
            if (splittedItemCommand[0] == "temperatureScale") {
                sensiboNewAcState.setTemperatureUnit(splittedItemCommand[1]);
            }
            if (splittedItemCommand[0] == "fanLevel") {
                sensiboNewAcState.setFanLevel(splittedItemCommand[1]);
            }
            if (splittedItemCommand[0] == "swing") {
                sensiboNewAcState.setSwing(splittedItemCommand[1]);
            }
        } else {
            return false;
        }


        json j2 = {
                {"acState", {
                                    {"on", on},
                                    {"targetTemperature", sensiboNewAcState.getTargetTemperature()},
                                    {"temperatureUnit", sensiboNewAcState.getTemperatureUnit()},
                                    {"mode", sensiboNewAcState.getMode()},
                                    {"swing", sensiboNewAcState.getSwing()}
                            }
                }
        };


        std::string contentType = "application/json";

        std::string body = j2.dump();


        PostAcState(deviceUUID, j2.dump(), contentType);


    } catch (...) {
        //   logger->error("Error while parsing command: %v sent to: %v", command->command(), command->UUID());
    }
    return true;
}

bool SensiboManager::UpdateOn(std::string property, std::string value) {


    return false;
}


/*
void SensiboManager::PrintResponse(std::shared_ptr<httplib::Response> states) {
    if (states) {
        std::cout << "Status: ";
        std::cout << states->status << std::endl;

        //if(states->status == 200) {

        std::cout << "BODY:" + states->body << std::endl;

        // parse explicitly
        auto j3 = json::parse(states->body);
        std::cout << "JSON parsing: ";
        std::cout << j3 << std::endl;

    } else {
        std::cout << "state is null! error!" << std::endl;
    }
}


std::shared_ptr<httplib::Response> SensiboManager::GetStates(std::string uid, std::string apiKey) {

    std::string path = "/api/v2/pods/" + uid + "/acStates?apiKey=" + apiKey;
    std::shared_ptr<httplib::Response> res = cli.get(path.c_str());
    return res;

}
*/



