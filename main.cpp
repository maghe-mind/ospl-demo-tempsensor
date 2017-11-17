#define CUSTOM_DOMAIN_PARTITIPANT 2

#include <iostream>
#include <algorithm>
#include "tempsensor_DCPS.hpp"
#include "implementation.h"
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

    /*
    dds::domain::DomainParticipant dp(2); //Change the value also in ospl.xml

    dds::core::policy::Durability durability = dds::core::policy::Durability::Persistent();
    //dds::core::policy::Durability durability = dds::core::policy::Durability::Volatile();
    dds::core::policy::Reliability reliability = dds::core::policy::Reliability::Reliable();
    dds::core::policy::History history = dds::core::policy::History::KeepLast(1);
    dds::topic::qos::TopicQos topicQos =
            dp.default_topic_qos() << durability << reliability << history;

    /*dds::topic::Topic<Mind::PompaCalore> topic(dp, "PompaCalore", topicQos);
    std::string partitionName = "PompaCalore";
    DDSPublisher<dds::topic::Topic<Mind::PompaCalore>> ddsPublisher (partitionName);
    ddsPublisher.write(topic);* /


    dds::topic::Topic<TempSensorType> topic(dp, "TempSensorTopic", topicQos);
     */



    std::string partitionName = "prova";
    DDSPublisher<TempSensorType> ddsPublisher (partitionName);

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

    for(int i =0; i<samples.size();i++){

        std::cout<< "ID " << samples[i].id() << std::endl;
        std::cout<< "Hum " << samples[i].hum() << std::endl;
        std::cout<< "temp "<<samples[i].temp() << std::endl;
       // std::cout<< "scale  "<<samples[i].scale() << std::endl;
    }



/*
    TempSensorType findSample;
    bool b = reader.exists(2);
*/

    //int i = examples::dcps::tempsensor::isocpp::publisher(dp, topic, partitionName);
    //int k = examples::dcps::tempsensor::isocpp::subscriber(dp, topic, partitionName);
    //int j = examples::dcps::tempsensor::isocpp::publisher(dp, topic, partitionName);


        return 0;
}

