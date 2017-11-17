#ifndef ISOCPP2_FLOOR_H
#define ISOCPP2_FLOOR_H

#include "dds/dds.hpp"

#include "Floor.h"
#include "FloorSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Floor>
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
        return "Mind::Floor";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Floor\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"UUIDHouse\"><String/></Member><Member name=\"name\"><String/></Member><Member name=\"number\">",
"<Long/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(267);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Floor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Floor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Floor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Floor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Floor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Floor_Command>
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
        return "property";
    }

    static const char *getTypeName()
    {
        return "Mind::Floor_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Floor_Command\"><Member name=\"property\">",
"<String/></Member><Member name=\"value\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(240);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Floor_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Floor_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Floor_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Floor_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Floor_Command)

#endif /* ISOCPP2_FLOOR_H */
