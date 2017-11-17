#define CUSTOM_DOMAIN_PARTITIPANT 2

#include <iostream>
#include <algorithm>
#include "tempsensor_DCPS.hpp"
#include "DDSManager.h"
#include "Items.h"
#include <thread>

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

int main() {

    std::string partitionName = "DemoTempSensor";
    DDSPublisher<TempSensorType> ddsPublisher(partitionName);

    TemperatureScale scale = TemperatureScale::CELSIUS;
    TempSensorType ts;
    ts.id(2);
    ts.hum(75.0F);
    ts.temp(30.0F);
    ts.scale(scale);
    ddsPublisher.write(ts);

    DDSReader<TempSensorType> reader(partitionName);
    reader.initReader(10);

    std::vector<TempSensorType> samples;
    reader.readAll(samples);

    for (int i = 0; i < samples.size(); i++) {

        std::cout << "ID " << samples[i].id() << std::endl;
        std::cout << "Hum " << samples[i].hum() << std::endl;
        std::cout << "temp " << samples[i].temp() << std::endl;
    }

    /*
    Example: read exists
    TempSensorType findSample;
    bool b = reader.exists(2);
    */

    return 0;
}

