#ifndef ISOCPP2_IDENTITY_H
#define ISOCPP2_IDENTITY_H

#include "dds/dds.hpp"

#include "Identity.h"
#include "IdentitySplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Identity>
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
        return "Mind::Identity";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Identity\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"clusterUUID\"><Sequence><String/></Sequence></Member></Struct></Module></MetaData>"
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
        return (copyInFunction) __Mind_Identity__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Identity__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Identity>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Identity>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Identity)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Identity_Command>
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
        return "Mind::Identity_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Identity_Command\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"command\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(196);
        for (int i = 0; i < 2; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Identity_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Identity_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Identity_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Identity_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Identity_Command)

#endif /* ISOCPP2_IDENTITY_H */
