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





/*
 **********************************************************
* DataReader
**********************************************************
 */



         /** A dds::sub::Subscriber is created on the domain participant. */
    //std::string name = "Durability example";
    dds::sub::qos::SubscriberQos subQos
            = dp.default_subscriber_qos()
                    << dds::core::policy::Partition(name);
    dds::sub::Subscriber sub(dp, subQos);

    /** The dds::sub::qos::DataReaderQos are derived from the topic qos */
    dds::sub::qos::DataReaderQos drqos = topic.qos();

    /** A dds::sub::DataReader is created on the Subscriber & Topic with the DataReaderQos. */
    dds::sub::DataReader<TempSensorType> dr(sub, topic, drqos);
    dds::core::Duration timeout(40, 0);
   // dr.wait_for_historical_data(timeout);

    std::cout << "=== [Subscriber] Ready ..." << std::endl;


    bool sampleReceived = false;
    int count = 0;
    do
    {
        dds::sub::LoanedSamples<TempSensorType> samples = dr.take();
        for (dds::sub::LoanedSamples<TempSensorType>::const_iterator sample = samples.begin();
             sample < samples.end();
             ++sample)
        {
            if (sample->info().valid())
            {
                std::cout << "=== [Subscriber] message received :" << std::endl;
                std::cout << "    ID  : " << sample->data().id() << std::endl;
                std::cout << "    Temp  : " << sample->data().temp() << std::endl;
                //std::cout << "    Scale  : " << sample->data().scale() << std::endl;
                std::cout << "    Humidity  : " << sample->data().hum() << std::endl;
                sampleReceived = true;
            }
        }


        ++count;
    }
    while (!sampleReceived && count < 600);















/*
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



*/






    return 0;
 }

