#include <iostream>
#include <algorithm>
#include "gen/tempsensor_DCPS.hpp"

int main() {
    std::cout << "Main started" << std::endl;


// create a Domain Participant
    dds::domain::DomainParticipant dp(2); //Change the value also in ospl.xml


    dds::core::policy::Durability durability = dds::core::policy::Durability::Persistent();
    dds::core::policy::Reliability reliability = dds::core::policy::Reliability::Reliable();
    dds::core::policy::History history = dds::core::policy::History::KeepLast(1);
    dds::topic::qos::TopicQos topicQos = dp.default_topic_qos() << durability << reliability << history;

    dds::topic::Topic<TempSensorType> topic(dp, "TempSensorTopic", topicQos);
    std::string name = "Temp Sensor";
    dds::pub::qos::PublisherQos pubQos
            = dp.default_publisher_qos()
                    << dds::core::policy::Partition(name);
    dds::pub::Publisher pub(dp, pubQos);

    dds::pub::qos::DataWriterQos dwqos = topic.qos();
    dwqos << dds::core::policy::WriterDataLifecycle::ManuallyDisposeUnregisteredInstances(); //??

    dds::pub::DataWriter<TempSensorType> dw(pub, topic, dwqos);


    TemperatureScale scale = TemperatureScale::CELSIUS;
    TempSensorType ts;
    ts.id(1);
    ts.hum(70.0F);
    ts.temp(26.0F);
    ts.scale(scale);

    // Write Data
    dw.write(ts);

    sleep(1);

    return 0;


/**********************************************************
* DataReader
**********************************************************

// Create a DataReader
    dds::sub::Subscriber sub(dp);
    dds::sub::DataReader<TempSensorType> dr(sub, topic);

    while (true) {
        auto samples = dr.read();
        std::for_each(samples.begin(),
                      samples.end(),
                      [](const dds::sub::Sample<TempSensorType>& s) {
                          std::cout << s.data() << std::endl;
                      });
        //std::this_thread::sleep_for(std::chrono::seconds(1));
    }








    return 0;
*/
 }

