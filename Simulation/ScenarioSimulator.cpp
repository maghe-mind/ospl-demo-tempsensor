//
// Created by maghe on 28/11/17.
//

#include "ScenarioSimulator.h"

void ScenarioSimulator::createScenario() {

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

    DDSPublisher<Mind::SensiboSky> ddsPublisher(SENSIBO_HOUSE_PARTITION);
    ddsPublisher.write(sensiboSky);

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    DDSPublisherSim simPublisher;
    simPublisher.publishActuationCommand();

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    /*
    DDSReader<Mind::SensiboSky> reader(SENSIBO_HOUSE_PARTITION);
    reader.initReader(60);
    std::vector<Mind::SensiboSky> devices;
    reader.readAll(devices);
    for (auto const &device: devices) {
        std::cout << device.UUID() << std::endl;
    }
    */
}
