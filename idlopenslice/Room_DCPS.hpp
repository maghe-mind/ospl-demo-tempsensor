#ifndef ISOCPP2_ROOM_H
#define ISOCPP2_ROOM_H

#include "dds/dds.hpp"

#include "Room.h"
#include "RoomSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Room>
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
        return "UUID";
    }

    static const char *getTypeName()
    {
        return "Mind::Room";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Room\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member><Member name=\"name\">",
"<String/></Member><Member name=\"temperatureControl\"><Boolean/></Member><Member name=\"manualTemperatureTarget\">",
"<Double/></Member><Member name=\"targetTemperatureDayWinter\"><Double/></Member><Member name=\"targetTemperatureNightWinter\">",
"<Double/></Member><Member name=\"targetTemperatureDaySummer\"><Double/></Member><Member name=\"targetTemperatureNightSummer\">",
"<Double/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(637);
        for (int i = 0; i < 6; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Room__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Room__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Room>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Room>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Room)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Room_Command>
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
        return "UUID";
    }

    static const char *getTypeName()
    {
        return "Mind::Room_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Room_Command\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"property\"><String/></Member><Member name=\"value\"><String/></Member>",
"<Member name=\"UUIDRoom\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(278);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Room_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Room_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Room_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Room_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Room_Command)

#endif /* ISOCPP2_ROOM_H */
