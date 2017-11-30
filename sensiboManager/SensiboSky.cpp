//
// Created by maghe on 24/11/17.
//

#include "SensiboSky.h"
#include "SensiboSkyAcState.h"

SensiboSky::SensiboSky(std::string pod, std::string macAddress,std::string roomName, std::string rawdata,
                             SensiboSkyAcState sensiboCurrentAcState) {
    this->pod = pod;
    this->macAddress = macAddress;
    this->roomName = roomName;
    this->rawdata = rawdata;
    this->sensiboCurrentAcState = sensiboCurrentAcState;
}


std::string SensiboSky::getPod() const {
    return pod;
}

std::string SensiboSky::getMacAddress() const {
    return macAddress;
}

std::string SensiboSky::getRoomName() const {
    return roomName;
}

std::string SensiboSky::getRawdata() const {
    return rawdata;
}

SensiboSkyAcState SensiboSky::getSensiboCurrentAcState() const {
    return sensiboCurrentAcState;
}
