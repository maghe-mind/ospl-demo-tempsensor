//
// Created by maghe on 21/11/17.
//

#include <iostream>
#include "DDSListenerHandler.h"
#include "../defines.h"
#include "../sensiboManager/SensiboManager.h"

void DDSListenerHandler::ProcessActuationCommand(Mind::Actuation_Command actuationCommand) {

    std::cout << "UUID: " << actuationCommand.UUID() << std::endl;

    for (auto const &itemCommand: actuationCommand.commands()) {
        if (itemCommand.itemCategory() == Mind::Category::CATEGORY_HEATING_COOLING_SENSIBO) {


            if (deviceExist(SENSIBO_HOUSE_PARTITION, itemCommand.UUID())) {

                SensiboManager sensiboManager(SENSIBO_HOST, SENSIBO_PORT);
                auto boolean = sensiboManager.ActuateCommand(itemCommand.command(), itemCommand.UUID());






                //DO STAFF

                DDSPublisher<Mind::SensiboSky> ddsPublisher(SENSIBO_DEVICE_PARTITION);
                Mind::SensiboSky sensiboSky;
                sensiboSky.UUID("kvDso2fP");
                sensiboSky.MACAddress("f0:c7:7f:d4:16:02");
                sensiboSky.on(false);
                sensiboSky.mode(Mind::SensiboMode::modeAuto);
                sensiboSky.targetTemperature(25);
                sensiboSky.temperatureScale(Mind::SensiboTemperatureScale::C);
                sensiboSky.fanlevel(Mind::SensiboFanLevel::fanAuto);
                sensiboSky.swing(Mind::SensiboSwing::swingStopped);
                sensiboSky.UUIDAmbience("Ambience");
                sensiboSky.UUIDRoom("Room");
                sensiboSky.UUIDFloor("Floor");
                sensiboSky.UUIDHouse("House");

                ddsPublisher.write(sensiboSky);
            }
        }
    }
}


bool DDSListenerHandler::deviceExist(std::string partitionName, std::string canditateDeviceUUID) {
    DDSReader<Mind::SensiboSky> reader(partitionName);
    reader.initReader(60);
    std::vector<Mind::SensiboSky> devices;
    reader.readAll(devices);

    for (auto const &device: devices) {

        if (device.UUID() == canditateDeviceUUID) {
            return true;
        }
    }
    return false;
}


void DDSListenerHandler::Run() {
    ddsSubscriber.init();

    while (true) {
        std::cout << "waiting..." << std::endl;
        std::vector<Mind::Actuation_Command> received_data;
        ddsSubscriber.wait(received_data);
        if (received_data.size() > 0) {
            std::cout << "Found: " << received_data.size() << std::endl;
            for (const auto &d: received_data) {
                ProcessActuationCommand(d);
            }
        }
    }
}

