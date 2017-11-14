#ifndef ISOCPP2_TEMPSENSOR_H
#define ISOCPP2_TEMPSENSOR_H

#include "dds/dds.hpp"

#include "tempsensor.h"
#include "tempsensorSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<TempSensorType>
{
public:
    static ::org::opensplice::topic::DataRepresentationId_t getDataRepresentationId()
    {
        return ::org::opensplice::topic::OSPL_REPRESENTATION;
    }

    static ::std::vector<os_uchar> getMetaData()
    {
        return ::std::vector<os_uchar>();
    }

    static ::std::vector<os_uchar> getTypeHash()
    {
        return ::std::vector<os_uchar>();
    }

    static ::std::vector<os_uchar> getExtentions()
    {
        return ::std::vector<os_uchar>();
    }

    static const char *getKeyList()
    {
        return "id";
    }

    static const char *getTypeName()
    {
        return "TempSensorType";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Enum name=\"TemperatureScale\"><Element name=\"CELSIUS\" value=\"0\"/><Element name=\"KELVIN\" value=\"1\"/>",
"<Element name=\"FAHRENHEIT\" value=\"2\"/></Enum><Struct name=\"TempSensorType\"><Member name=\"id\">",
"<Short/></Member><Member name=\"temp\"><Float/></Member><Member name=\"hum\"><Float/></Member><Member name=\"scale\">",
"<Type name=\"TemperatureScale\"/></Member></Struct></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(417);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __TempSensorType__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __TempSensorType__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<TempSensorType>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<TempSensorType>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(TempSensorType)

#endif /* ISOCPP2_TEMPSENSOR_H */
