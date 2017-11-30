//
// Created by maghe on 27/11/17.
//

#include "DDSInboxHandler.h"
#include <iostream>
#include <thread>
#include "DDSListenerHandler.h"
#include "../defines.h"
#include "../sensiboManager/SensiboManager.h"
#include "../sensiboManager/SensiboSky.h"

DDSInboxHandler::DDSInboxHandler() : sensiboManager(SENSIBO_HOST, SENSIBO_PORT) {
   }

void DDSInboxHandler::DiscoverNewDevices() {

    while (true) {

        std::vector<std::string> pods = sensiboManager.GetPods();

        for (auto const &pod: pods) {

            bool exist = existDeviceInPartition(pod, SENSIBO_HOUSE_PARTITION);

            if (exist == false) {
                exist = existDeviceInPartition(pod, SENSIBO_INBOX_PARTITION);
            }

            if (exist == false) {
                addDeviceInPartition(pod, SENSIBO_INBOX_PARTITION);
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));//TODO: change the execution time;
    }
}

bool DDSInboxHandler::existDeviceInPartition(std::string pod, std::string partitionName) {

    bool exist = false;
    DDSReader<Mind::SensiboSky> reader(partitionName);
    reader.initReader(60);
    std::vector<Mind::SensiboSky> devices;
    reader.readAll(devices);

    for (auto const &device: devices) {
        std::string tmp = device.UUID();
        if (pod == device.UUID()) {
            return true;
        }
        return exist;
    }
}

void DDSInboxHandler::addDeviceInPartition(std::string pod, std::string partitionName) {
    SensiboSky device = sensiboManager.GetDeviceInfo(pod);

    DDSPublisher<Mind::SensiboSky> ddsPublisher(partitionName);
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