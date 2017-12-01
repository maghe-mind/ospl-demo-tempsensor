//
// Created by maghe on 24/11/17.
//

#ifndef SENSIBO_SENSIBODEVICE_H
#define SENSIBO_SENSIBODEVICE_H


#include "iostream"
#include "SensiboSkyAcState.h"


class SensiboSky {

public:
    SensiboSky(std::string pod, std::string macAddress, std::string roomName, std::string rawdata,
               SensiboSkyAcState sensiboCurrentAcState);

    std::string getPod() const;

    std::string getMacAddress() const;

    std::string getRoomName() const;

    std::string getRawdata() const;

    SensiboSkyAcState getSensiboCurrentAcState() const;

private:
    std::string pod;
    std::string roomName;
    std::string rawdata;
    SensiboSkyAcState sensiboCurrentAcState;
    std::string macAddress;
};


#endif //SENSIBO_SENSIBODEVICE_H
