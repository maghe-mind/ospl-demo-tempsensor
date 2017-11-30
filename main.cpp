#define CUSTOM_DOMAIN_PARTITIPANT 2
//TODO: what is the best place to store CUSTOM_DOMAIN_PARTITIPANT?

#include <iostream>
#include <algorithm>
#include <thread>
#include <dds_json.h>
#include "DDSManager.h"
#include "defines.h"
#include "sensiboManager/SensiboManager.h"
#include "Simulation/ScenarioSimulator.h"


int main() {

    DDSListenerHandler ddsListenerHandler(SENSIBO_HOUSE_PARTITION);
    std::thread t1([&ddsListenerHandler] {
        ddsListenerHandler.Run();
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));

    ScenarioSimulator scenarioSimulator;
    scenarioSimulator.createScenario();

    t1.join();

    /*
    Example: read exists
    TempSensorType findSample;
    bool b = reader.exists(2);
    */
    return 0;
}

