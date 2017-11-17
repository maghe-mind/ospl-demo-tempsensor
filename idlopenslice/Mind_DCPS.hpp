#ifndef ISOCPP2_MIND_H
#define ISOCPP2_MIND_H

#include "dds/dds.hpp"

#include "Mind.h"
#include "MindSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<MindInternal::House>
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
        return "MindInternal::House";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"MindInternal\"><Struct name=\"House\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"address\"><String/></Member><Member name=\"city\"><String/></Member>",
"<Member name=\"zip\"><String/></Member><Member name=\"state\"><String/></Member><Member name=\"senderID\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(357);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __MindInternal_House__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __MindInternal_House__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<MindInternal::House>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<MindInternal::House>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(MindInternal::House)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<MindInternal::User>
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
        return "MindInternal::User";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"MindInternal\"><Struct name=\"User\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"fiscalCode\"><String/></Member><Member name=\"name\"><String/></Member>",
"<Member name=\"surname\"><String/></Member><Member name=\"phoneNumber\"><String/></Member><Member name=\"gender\">",
"<String/></Member><Member name=\"birthday\"><String/></Member><Member name=\"email\"><String/></Member>",
"<Member name=\"token\"><String/></Member><Member name=\"username\"><String/></Member><Member name=\"password\">",
"<String/></Member><Member name=\"bluetoothMACAddress\"><String/></Member><Member name=\"voipID\"><String/>",
"</Member><Member name=\"recipientID\"><String/></Member><Member name=\"gotCertificate\"><Boolean/></Member>",
"<Member name=\"UUIDHouses\"><Sequence><String/></Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(843);
        for (int i = 0; i < 8; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __MindInternal_User__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __MindInternal_User__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<MindInternal::User>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<MindInternal::User>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(MindInternal::User)

#endif /* ISOCPP2_MIND_H */
