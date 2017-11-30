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

    DDSPublisher<Mind::Actuation_Command> publisher(SENSIBO_HOUSE_PARTITION);
    Mind::Actuation_Command actuation_command;
    actuation_command.UUID("First ActuationCommand");


    std::string command= "targetTemperature 29";

    Mind::Item_Command c01;
    c01.UUID("kvDso2fP"); // device UUID
    c01.command(command);
    c01.itemCategory(Mind::Category::CATEGORY_HEATING_COOLING_SENSIBO);
    actuation_command.commands().push_back(c01);

    std::cout << "publishing " << actuation_command.UUID() << std::endl;
    actuation_command.UUID(command);
    publisher.write(actuation_command);

  /*  Mind::Item_Command c02;
    c02.UUID("kvDso2fP"); // device UUID
    c02.command("targetTemperature 26");
    c02.itemCategory(Mind::Category::CATEGORY_HEATING_COOLING_SENSIBO);
    actuation_command.commands().push_back(c02);

    std::cout << "publishing " << actuation_command.UUID() << std::endl;
    actuation_command.UUID("ModeAUTO");
    publisher.write(actuation_command);
*/

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    return 0;
}
