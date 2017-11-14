#include <iostream>
#include <algorithm>
#include "gen/tempsensor_DCPS.hpp"

int main() {
    std::cout << "Main started" << std::endl;


// create a Domain Participant
    dds::domain:: DomainParticipant dp(2);


    dds::topic::Topic<TempSensorType> topic(dp, "TempSensorTopic");
    dds::pub::Publisher pub(dp);
    dds::pub::DataWriter<TempSensorType> dw(pub, topic);


    TemperatureScale scale = TemperatureScale::CELSIUS;
    TempSensorType ts {1, 26.0F, 70.0F, scale};
    // Write Data
     dw.write(ts);




/**********************************************************
* DataReader
**********************************************************/

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
}