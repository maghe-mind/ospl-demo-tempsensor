//
// Created by maghe on 28/11/17.
//

#ifndef TEMPSENSOR_SCENARIOSIMULATOR_H
#define TEMPSENSOR_SCENARIOSIMULATOR_H

#include <iostream>
#include <algorithm>
#include "DDSManager.h"
#include "../handlers/DDSListenerHandler.h"
#include <thread>
#include "../defines.h"
#include "DDSPublisherSim.h"
#include <exception>

class ScenarioSimulator {

public:
    void createScenario();
};


#endif //TEMPSENSOR_SCENARIOSIMULATOR_H
