//
// Created by maghe on 21/11/17.
//

#include <iostream>
#include "DDSListenerHandler.h"
#include "../defines.h"
#include "../sensiboManager/SensiboManager.h"
#include "../sensiboManager/SensiboSky.h"


void DDSListenerHandler::Run() {
    ddsSubscriber.init();

    while (true) {
        std::cout << "ddsListenerHandler on " << SENSIBO_HOUSE_PARTITION << " is waiting..." << std::endl;
        std::vector<Mind::Actuation_Command> received_data;
        ddsSubscriber.wait(received_data);
        if (received_data.size() > 0) {
            std::cout << "Found new ActuationCommands: " << received_data.size() << std::endl;
            for (const auto &d: received_data) {
                ProcessActuationCommand(d);
            }
        }
    }
}


void DDSListenerHandler::ProcessActuationCommand(Mind::Actuation_Command actuationCommand) {

    std::cout << "ActuationCommand UUID: " << actuationCommand.UUID() << std::endl;

    for (auto const &itemCommand: actuationCommand.commands()) {
        if ((itemCommand.itemCategory() == Mind::Category::CATEGORY_HEATING_COOLING_SENSIBO) &&
            (deviceExist(SENSIBO_HOUSE_PARTITION, itemCommand.UUID()))) {

            SensiboManager sensiboManager(SENSIBO_HOST, SENSIBO_PORT); //TODO: singleton?

            auto result = sensiboManager.ActuateCommand(itemCommand.command(), itemCommand.UUID());

            if (result) {
                //SensiboSky sensiboDevice = sensiboManager.GetDeviceInfo(itemCommand.UUID());


                SensiboSkyAcState acState("kvDso2fP",true, Mind::SensiboFanLevel::fanMedium, Mind::SensiboTemperatureScale::C, 25, Mind::SensiboMode::modeHeat,Mind::SensiboSwing::swingStopped);
                SensiboSky sensiboDevice("kvDso2fP","MACDDRESS", "roomName","rawdata",acState);
                publishSensiboDeviceOnDDS(sensiboDevice);
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


void DDSListenerHandler::publishSensiboDeviceOnDDS(SensiboSky device) {
    DDSPublisher<Mind::SensiboSky> ddsPublisher(SENSIBO_DEVICE_PARTITION);
    Mind::SensiboSky sensiboSky;

    sensiboSky.UUID(device.getPod());
    sensiboSky.MACAddress(device.getMacAddress());
    sensiboSky.on(device.getSensiboCurrentAcState().isOn());
    sensiboSky.mode(device.getSensiboCurrentAcState().getMode());
    sensiboSky.targetTemperature(device.getSensiboCurrentAcState().getTargetTemperature());
    sensiboSky.temperatureScale(device.getSensiboCurrentAcState().getTemperatureUnit());
    sensiboSky.fanlevel(device.getSensiboCurrentAcState().getFanLevel());
    sensiboSky.swing(device.getSensiboCurrentAcState().getSwing());
    sensiboSky.UUIDAmbience("Ambience"); //TODO: how to manage these properties?
    sensiboSky.UUIDRoom("Room");
    sensiboSky.UUIDFloor("Floor");
    sensiboSky.UUIDHouse("House");

    ddsPublisher.write(sensiboSky);
}

