//
// Created by maghe on 21/11/17.
//

#include <iostream>
#include "DDSListenerHandler.h"
#include "tempsensor_DCPS.hpp"

void DDSListenerHandler::ProcessActuationCommand(TempSensorType type) {
    std::cout << "UUID " << type.UUID() << std::endl;
    std::cout << "Hum " << type.hum() << std::endl;
    std::cout << "temp " << type.temp() << std::endl << std::flush;
}

void DDSListenerHandler::Run() {
    ddsSubscriber.init();

    while (true) {
        std::vector<TempSensorType> received_data;
        ddsSubscriber.wait(received_data);
        std::cout << "Founded: " << received_data.size() << std::endl;
        for (const auto &d: received_data) {
            ProcessActuationCommand(d);
        }
    }
}
