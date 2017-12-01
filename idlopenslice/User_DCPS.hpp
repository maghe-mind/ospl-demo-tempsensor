#ifndef ISOCPP2_USER_H
#define ISOCPP2_USER_H

#include "dds/dds.hpp"

#include "User.h"
#include "UserSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::UserDeny>
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
        return "Mind::UserDeny";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"UserDeny\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"voipID\"><String/></Member><Member name=\"pinCode\"><String/></Member><Member name=\"accessCount\">",
"<Long/></Member><Member name=\"bluetoothMACAddress\"><String/></Member><Member name=\"pinCodeMode\"><String/>",
"</Member><Member name=\"pinExpirationDate\"><String/></Member><Member name=\"pinMaxUsage\"><String/></Member>",
"<Member name=\"geofence\"><Boolean/></Member><Member name=\"doNotDisturb\"><Boolean/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(571);
        for (int i = 0; i < 6; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_UserDeny__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_UserDeny__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::UserDeny>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::UserDeny>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::UserDeny)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::User>
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
        return "Mind::User";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"UserRole\"><Element name=\"USER_ROLE_ADMIN\" value=\"0\"/>",
"<Element name=\"USER_ROLE_RESIDENT\" value=\"1\"/><Element name=\"USER_ROLE_GUEST\" value=\"2\"/></Enum>",
"<Struct name=\"User\"><Member name=\"UUID\"><String/></Member><Member name=\"nickname\"><String/></Member>",
"<Member name=\"image\"><String/></Member><Member name=\"role\"><Type name=\"UserRole\"/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(457);
        for (int i = 0; i < 5; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_User__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_User__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::User>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::User>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::User)

#endif /* ISOCPP2_USER_H */
