#define CUSTOM_DOMAIN_PARTITIPANT 2

#include <iostream>
#include <algorithm>
#include "DDSManager.h"
#include "handlers/DDSListenerHandler.h"
#include <thread>
#include "defines.h"
#include "Simulation/DDSPublisherSim.h"

/*
 template<>
class DDSConf<TempSensorType> {
public:
    static ConfData get() {
        ConfData conf;
        conf.durability = dds::core::policy::Durability::Persistent();
        conf.reliability = dds::core::policy::Reliability::Reliable();
        conf.history = dds::core::policy::History::KeepAll(); //keeplast(1);
        conf.topicName = "TempSensorType";
        return conf;
    }
};




 void writeOnTopic(std::string partitionName, TempSensorType ts) {
    std::cout << "Publisher" << std::endl;
    DDSPublisher<TempSensorType> ddsPublisher(SENSIBO_HOUSE_PARTITION);
    ddsPublisher.write(ts);
}
*/


int main() {


    DDSListenerHandler ddsListenerHandler(SENSIBO_HOUSE_PARTITION);

    std::thread t1([&ddsListenerHandler] {
        ddsListenerHandler.Run();
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    DDSPublisherSim simPublisher;
    simPublisher.publishActuationCommand();

    t1.join();


/*      TemperatureScale scale = TemperatureScale::CELSIUS;
      int progressiveNumber = 0;
      while (true) {

          TempSensorType ts;
          ts.UUID(std::to_string(progressiveNumber++));
          ts.hum(75.0F + rand() % 10);
          ts.temp(30.0F + rand() % 5);
          ts.scale(scale);

          writeOnTopic(SENSIBO_HOUSE_PARTITION, ts);
          std::this_thread::sleep_for(std::chrono::milliseconds(5000));
      }
*/


    //t1.join();

    /*
    Example: read exists
    TempSensorType findSample;
    bool b = reader.exists(2);
    */

    return 0;
}

