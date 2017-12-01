#ifndef ISOCPP2_HOUSEUSER_H
#define ISOCPP2_HOUSEUSER_H

#include "dds/dds.hpp"

#include "HouseUser.h"
#include "HouseUserSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::HouseUser>
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
        return "Mind::HouseUser";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"HouseUser\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"UUIDHouses\"><Sequence><String/></Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(213);
        for (int i = 0; i < 2; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_HouseUser__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_HouseUser__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::HouseUser>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::HouseUser>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::HouseUser)

#endif /* ISOCPP2_HOUSEUSER_H */
