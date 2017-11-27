//
// Created by maghe on 21/11/17.
//

#include <iostream>
#include "DDSListenerHandler.h"
#include "tempsensor_DCPS.hpp"

void DDSListenerHandler::ProcessActuationCommand(Mind::Actuation_Command actuationCommand) {
    std::cout << "UUID " << actuationCommand.UUID() << std::endl;
    //std::cout << "Hum " << actuationCommand.commands() << std::endl;
    // std::cout << "temp " << actuationCommand.temp() << std::endl << std::flush;
}

void DDSListenerHandler::Run() {
    ddsSubscriber.init();

    while (true) {
        std::cout << "waiting..." << std::endl;
        std::vector<Mind::Actuation_Command> received_data;
        ddsSubscriber.wait(received_data);
        if (received_data.size()>0) {
            std::cout << "Found: " << received_data.size() << std::endl;
            for (const auto &d: received_data) {
                ProcessActuationCommand(d);
            }
        }
    }
}
