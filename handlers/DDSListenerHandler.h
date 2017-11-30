//
// Created by maghe on 21/11/17.
//

#include <DDSManager.h>
#include "../sensiboManager/SensiboSky.h"

class DDSListenerHandler {

public:
    DDSListenerHandler(std::string partitionName) : ddsSubscriber(partitionName) {}

    void ProcessActuationCommand(Mind::Actuation_Command actuationCommand);

    void Run();

private:
    DDSSubscriber<Mind::Actuation_Command> ddsSubscriber;

    bool deviceExist(std::string partitionName, std::string canditateDeviceUUID);

    void publishSensiboDeviceOnDDS(SensiboSky device);
};
