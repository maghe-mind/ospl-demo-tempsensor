#include <iostream>
#include <algorithm>
#include "gen/tempsensor_DCPS.hpp"
#include "implementation.h"

int main() {


    dds::domain::DomainParticipant dp(2); //Change the value also in ospl.xml

    dds::core::policy::Durability durability = dds::core::policy::Durability::Persistent();
    //dds::core::policy::Durability durability = dds::core::policy::Durability::Volatile();
    dds::core::policy::Reliability reliability = dds::core::policy::Reliability::Reliable();
    dds::core::policy::History history = dds::core::policy::History::KeepLast(1);
    dds::topic::qos::TopicQos topicQos =
            dp.default_topic_qos() << durability << reliability << history;

    dds::topic::Topic<TempSensorType> topic(dp, "TempSensorTopic", topicQos);
    std::string name = "Temp Sensor";



    int i = examples::dcps::tempsensor::isocpp::publisher(dp, topic, name);



    int k = examples::dcps::tempsensor::isocpp::subscriber(dp, topic, name);


    //int j = examples::dcps::tempsensor::isocpp::publisher(dp, topic, name);


        return 0;
}

