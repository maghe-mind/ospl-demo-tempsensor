#define CUSTOM_DOMAIN_PARTITIPANT 2
//TODO: what is the best place to store CUSTOM_DOMAIN_PARTITIPANT?

#include <iostream>
#include <algorithm>
#include <thread>
#include <dds_json.h>
#include "DDSManager.h"
#include "defines.h"
#include "sensiboManager/SensiboManager.h"



int main() {

    SensiboManager sensiboManager(SENSIBO_HOST, SENSIBO_PORT);
    auto devices = sensiboManager.GetDevicesInfo();

    for (auto const &device : devices) {
        std::cout << device.first  // string (key)
                  << ':'
                  << device.second.toString() // string's value
                  << std::endl;
    }

    json j2 = {
            {"acState", {
                                {"on", false},
                                {"targetTemperature", 23},
                                {"temperatureUnit", "C"},
                                {"mode", "auto"},
                                {"swing", "rangeFull"}
                        }
            }
    };
    std::string contentType = "application/json";



    for (auto const &device : devices){
        auto responsePost = sensiboManager.PostAcState(device.second.getPod(), j2.dump(), contentType);
    }

  /*  DDSListenerHandler ddsListenerHandler(SENSIBO_HOUSE_PARTITION);
    std::thread t1([&ddsListenerHandler] {
        ddsListenerHandler.Run();
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    ScenarioSimulator scenarioSimulator;
    scenarioSimulator.createScenario();

    t1.join();
*/

    /*
    Example: read exists
    TempSensorType findSample;
    bool b = reader.exists(2);
    */
    return 0;
}

