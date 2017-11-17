#ifndef ISOCPP2_CHANGELOG_H
#define ISOCPP2_CHANGELOG_H

#include "dds/dds.hpp"

#include "ChangeLog.h"
#include "ChangeLogSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ChangeItem>
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
        return "Mind::ChangeItem";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"ChangeItemType\"><Element name=\"FACE\" value=\"0\"/>",
"<Element name=\"APPEARANCE\" value=\"1\"/></Enum><Enum name=\"ChangeItemAction\"><Element name=\"NEW\" value=\"0\"/>",
"<Element name=\"MODIFY\" value=\"1\"/><Element name=\"DELETE\" value=\"2\"/></Enum><Struct name=\"ChangeItem\">",
"<Member name=\"UUID\"><String/></Member><Member name=\"type\"><Type name=\"ChangeItemType\"/></Member>",
"<Member name=\"action\"><Type name=\"ChangeItemAction\"/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(540);
        for (int i = 0; i < 5; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ChangeItem__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ChangeItem__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ChangeItem>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ChangeItem>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ChangeItem)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ChangeLog>
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
        return "Mind::ChangeLog";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"ChangeItemType\"><Element name=\"FACE\" value=\"0\"/>",
"<Element name=\"APPEARANCE\" value=\"1\"/></Enum><Enum name=\"ChangeLogType\"><Element name=\"KNOWN_FACES\" value=\"0\"/>",
"<Element name=\"UNKNOWN_FACES\" value=\"1\"/><Element name=\"APPEARANCES\" value=\"2\"/></Enum><Enum name=\"ChangeItemAction\">",
"<Element name=\"NEW\" value=\"0\"/><Element name=\"MODIFY\" value=\"1\"/><Element name=\"DELETE\" value=\"2\"/>",
"</Enum><Struct name=\"ChangeItem\"><Member name=\"UUID\"><String/></Member><Member name=\"type\"><Type name=\"ChangeItemType\"/>",
"</Member><Member name=\"action\"><Type name=\"ChangeItemAction\"/></Member></Struct><Struct name=\"ChangeLog\">",
"<Member name=\"UUID\"><String/></Member><Member name=\"timestamp\"><Long/></Member><Member name=\"itemType\">",
"<Type name=\"ChangeItemType\"/></Member><Member name=\"changeLogType\"><Type name=\"ChangeLogType\"/>",
"</Member><Member name=\"changes\"><Sequence><Type name=\"ChangeItem\"/></Sequence></Member></Struct></Module>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(1044);
        for (int i = 0; i < 10; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ChangeLog__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ChangeLog__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ChangeLog>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ChangeLog>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ChangeLog)

#endif /* ISOCPP2_CHANGELOG_H */
