//
// Created by maghe on 30/11/17.
//

#include <DDSManager.h>
#include "DDSHandler.h"
#include "../defines.h"

void DDSHandler::publishSensiboDeviceOnDDS(SensiboSky device, std::string partitionName) {
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