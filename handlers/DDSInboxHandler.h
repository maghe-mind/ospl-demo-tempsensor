//
// Created by maghe on 27/11/17.
//

#ifndef TEMPSENSOR_DDSINBOXHANDLER_H
#define TEMPSENSOR_DDSINBOXHANDLER_H

#include <iostream>
#include "../sensiboManager/SensiboManager.h"
#include "DDSHandler.h"

class DDSInboxHandler: DDSHandler {

public:
    DDSInboxHandler();

    void DiscoverNewDevices();


private:
    //DDSSubscriber<Mind::Actuation_Command> ddsSubscriber;
    bool existDeviceInPartition(std::string pod, std::string partitionName);

    void addDeviceInPartition(std::string pod, std::string partitionName);

    SensiboManager sensiboManager;
};


#endif //TEMPSENSOR_DDSINBOXHANDLER_H
