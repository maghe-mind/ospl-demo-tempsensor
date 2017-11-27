//
// Created by maghe on 21/11/17.
//

#include <iostream>
#include "DDSListenerHandler.h"
#include "tempsensor_DCPS.hpp"
#include "../defines.h"

void DDSListenerHandler::ProcessActuationCommand(Mind::Actuation_Command actuationCommand) {

    std::cout << "UUID: " << actuationCommand.UUID() << std::endl;

    for (auto const &itemCommand: actuationCommand.commands()) {
        if (itemCommand.itemCategory() == Mind::Category::CATEGORY_HEATING_COOLING_POMPA_CALORE) {

            //TODO extract device UUID from command
            std::string canditateDeviceUUID = "XXX";

            if (deviceExist(SENSIBO_HOUSE_PARTITION, canditateDeviceUUID)) {

                //DO STAFF

                DDSPublisher<TempSensorType> ddsPublisher(SENSIBO_DEVICE_PARTITION);

                TemperatureScale scale = TemperatureScale::CELSIUS;

                TempSensorType ts;
                ts.UUID("1234567890");
                ts.hum(75.0F + rand() % 10);
                ts.temp(30.0F + rand() % 5);
                ts.scale(scale);

                ddsPublisher.write(ts);
            }
        }
    }
}


bool DDSListenerHandler::deviceExist(std::string partitionName, std::string canditateDeviceUUID) {
    DDSReader<Mind::PompaCalore> reader(partitionName);
    std::vector<Mind::PompaCalore> devices;
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

