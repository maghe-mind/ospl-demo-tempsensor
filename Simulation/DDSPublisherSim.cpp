//
// Created by maghe on 22/11/17.
//
#include <DDSManager.h>
#include "DDSPublisherSim.h"
#include <thread>
#include "../defines.h"
#include <ctime>
#include "../lib/Guid.hpp"
#include <ctime>


int DDSPublisherSim::publishActuationCommand() {

    // xg::Guid g = xg::newGuid();//TODO: how to use external lib

    DDSPublisher<Mind::Actuation_Command> publisher(SENSIBO_HOUSE_PARTITION);
    Mind::Actuation_Command actuation_command;
    actuation_command.UUID();

    Mind::Item_Command c;
    c.UUID("cb00f253-bdba-4fbd-9018-56058ec75c59");
    c.command("activity command: set temperature 30 C");
    c.itemCategory(Mind::Category::CATEGORY_HEATING_COOLING_POMPA_CALORE);
    actuation_command.commands().push_back(c);

    for (int i = 0; i < 10; ++i) {
        std::cout << "publishing " << actuation_command.UUID() << std::endl;
        actuation_command.UUID(std::to_string(i));
        publisher.write(actuation_command);
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    }
    return 0;
}
