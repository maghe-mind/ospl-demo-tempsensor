//
// Created by maghe on 15/11/17.
//

#ifndef TEMPSENSOR_IMPLEMENTATION_H
#define TEMPSENSOR_IMPLEMENTATION_H

#endif //TEMPSENSOR_IMPLEMENTATION_H
#include "gen/tempsensor_DCPS.hpp"

namespace examples {
    namespace dcps {
        namespace tempsensor {
            namespace isocpp  {
                 int publisher(dds::domain::DomainParticipant dp,dds::topic::Topic<TempSensorType> topic,std::string name);
                 int subscriber(dds::domain::DomainParticipant dp,dds::topic::Topic<TempSensorType> topic,std::string name);
            }
        }
    }
}
