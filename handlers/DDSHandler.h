//
// Created by maghe on 30/11/17.
//

#ifndef TEMPSENSOR_DDSPUBLISHERHANDLER_H
#define TEMPSENSOR_DDSPUBLISHERHANDLER_H


#include "../sensiboManager/SensiboSky.h"

class DDSHandler {

public:
    void publishSensiboDeviceOnDDS(SensiboSky device, std::string partitionName);
};


#endif //TEMPSENSOR_DDSPUBLISHERHANDLER_H
