#ifndef ISOCPP2_APPEARANCE_H
#define ISOCPP2_APPEARANCE_H

#include "dds/dds.hpp"

#include "Appearance.h"
#include "AppearanceSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Appearance>
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
        return "Mind::Appearance";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"AppearanceDummyEndType\"><Element name=\"APPEARANCE_NOTHING\" value=\"0\"/>",
"<Element name=\"APPEARANCE_MODEL\" value=\"1\"/></Enum><Struct name=\"Appearance\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"featureData\"><Sequence><Octet/></Sequence></Member><Member name=\"imageData\">",
"<Sequence><Octet/></Sequence></Member><Member name=\"timestamp\"><Long/></Member><Member name=\"oldClusterUUID\">",
"<String/></Member><Member name=\"clusterUUID\"><String/></Member><Member name=\"faceClusterUUIDs\"><Sequence>",
"<String/></Sequence></Member><Member name=\"label\"><Long/></Member><Member name=\"isMedoid\"><Boolean/>",
"</Member><Member name=\"endType\"><Type name=\"AppearanceDummyEndType\"/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(792);
        for (int i = 0; i < 7; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Appearance__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Appearance__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Appearance>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Appearance>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Appearance)

#endif /* ISOCPP2_APPEARANCE_H */
