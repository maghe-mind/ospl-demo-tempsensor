//
// Created by maghe on 21/11/17.
//

#include <DDSManager.h>
#include <tempsensor.h>

class DDSListenerHandler {

public:
    DDSListenerHandler(std::string partitionName) : ddsSubscriber(partitionName) {}

    void ProcessActuationCommand(TempSensorType type);

    void Run();

private:
    DDSSubscriber<TempSensorType> ddsSubscriber;
};
