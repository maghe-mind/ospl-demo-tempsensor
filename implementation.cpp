
#include <iostream>
#include "gen/tempsensor_DCPS.hpp"


namespace examples {
    namespace dcps {
        namespace tempsensor {

/**
  *
 * This is a simple publisher and subscriber example. One sample is
 * published, the sample is then read.
 * Some non-default QoS are used to guarantee delivery and to allow
 * the publisher to be optionally run before the subscriber.
 */
             namespace isocpp {

                /**
                 * This function performs the publisher role in this example.
                 * @return 0 if a sample is successfully written, 1 otherwise.
                 */
                int publisher(dds::domain::DomainParticipant dp,dds::topic::Topic<TempSensorType> topic,std::string name) {
                    int result = 0;
                    try {
                        std::cout << "Publisher" << std::endl;
                        // create a Domain Participant




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
                    }
                    catch (const dds::core::Exception &e) {
                        std::cerr << "ERROR: Exception: " << e.what() << std::endl;
                        result = 1;
                    }
                    return result;
                }

/**
 * Runs the subscriber role of this example.
 * @return 0 if a sample is successfully read, 1 otherwise.
 */
                int subscriber(dds::domain::DomainParticipant dp,dds::topic::Topic<TempSensorType> topic,std::string name) {
                    int result = 0;
                    try {


                        std::cout << "Main started" << std::endl;




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
                        do {
                            dds::sub::LoanedSamples<TempSensorType> samples = dr.take();
                            for (dds::sub::LoanedSamples<TempSensorType>::const_iterator sample = samples.begin();
                                 sample < samples.end();
                                 ++sample) {
                                if (sample->info().valid()) {
                                    std::cout << "=== [Subscriber] message received :" << std::endl;
                                    std::cout << "    ID  : " << sample->data().id() << std::endl;
                                    std::cout << "    Temp  : " << sample->data().temp() << std::endl;
                                    //std::cout << "    Scale  : " << sample->data().scale() << std::endl;
                                    std::cout << "    Humidity  : " << sample->data().hum() << std::endl;
                                    sampleReceived = true;
                                }
                            }


                            ++count;
                        } while (!sampleReceived && count < 600);

                    }
                    catch (const dds::core::Exception &e) {
                        std::cerr << "ERROR: Exception: " << e.what() << std::endl;
                        result = 1;
                    }
                    return result;
                }

            }
        }
    }
}