#ifndef ISOCPP2_NOTIFICATIONSERVICE_H
#define ISOCPP2_NOTIFICATIONSERVICE_H

#include "dds/dds.hpp"

#include "NotificationService.h"
#include "NotificationServiceSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Notification>
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
        return "Mind::Notification";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"NotificationType\"><Element name=\"NOTIFICATION_TYPE_EMERGENCY\" value=\"0\"/>",
"<Element name=\"NOTIFICATION_TYPE_ALERT\" value=\"1\"/><Element name=\"NOTIFICATION_TYPE_INFO\" value=\"2\"/>",
"</Enum><Enum name=\"NotificationSubtype\"><Element name=\"NOTIFICATION_SUBTYPE_EMERGENCY_FLOODING\" value=\"0\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_EMERGENCY_CO\" value=\"1\"/><Element name=\"NOTIFICATION_SUBTYPE_EMERGENCY_DISCONNECTED\" value=\"2\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_EMERGENCY_POWER_DOWN\" value=\"3\"/><Element name=\"NOTIFICATION_SUBTYPE_EMERGENCY_FAILED_CHECKIN\" value=\"4\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_EMERGENCY_HELP\" value=\"5\"/><Element name=\"NOTIFICATION_SUBTYPE_ALERT_POWER_THRESHOLD_REACHED\" value=\"6\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_ALERT_APPLIANCES_ON_WHILE_AWAY\" value=\"7\"/><Element name=\"NOTIFICATION_SUBTYPE_ALERT_PEOPLE_DETECTED_OUTSIDE\" value=\"8\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_ALERT_DOORBELL_WHILE_HOLIDAY\" value=\"9\"/><Element name=\"NOTIFICATION_SUBTYPE_ALERT_DOORBELL\" value=\"10\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_INFO_POWER_ANOMALY\" value=\"11\"/><Element name=\"NOTIFICATION_SUBTYPE_INFO_SETTINGS_UPDATED_BY_SYSTEM\" value=\"12\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_INFO_POWER_THRESHOLD_CLOSE\" value=\"13\"/><Element name=\"NOTIFICATION_SUBTYPE_INFO_AIR_QUALITY_ALERT\" value=\"14\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_INFO_UNKNOWN_PERSON_DETECTED\" value=\"15\"/><Element name=\"NOTIFICATION_SUBTYPE_INFO_CHECKIN_SUCCESSFUL\" value=\"16\"/>",
"<Element name=\"NOTIFICATION_SUBTYPE_MOVE_TO_HOLIDAY\" value=\"17\"/></Enum><Enum name=\"NotificationResponseType\">",
"<Element name=\"NOTIFICATION_RESPONSE_YES\" value=\"0\"/><Element name=\"NOTIFICATION_RESPONSE_NO\" value=\"1\"/>",
"<Element name=\"NOTIFICATION_RESPONSE_CANCEL\" value=\"2\"/></Enum><Struct name=\"Notification\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"type\"><Type name=\"NotificationType\"/></Member><Member name=\"subType\">",
"<Type name=\"NotificationSubtype\"/></Member><Member name=\"timestamp\"><Long/></Member><Member name=\"description\">",
"<String/></Member><Member name=\"URL\"><String/></Member><Member name=\"read\"><Boolean/></Member><Member name=\"responses\">",
"<Sequence><Type name=\"NotificationResponseType\"/></Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(2385);
        for (int i = 0; i < 18; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Notification__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Notification__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Notification>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Notification>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Notification)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::NotificationResponse>
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
        return "Mind::NotificationResponse";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"NotificationResponseType\"><Element name=\"NOTIFICATION_RESPONSE_YES\" value=\"0\"/>",
"<Element name=\"NOTIFICATION_RESPONSE_NO\" value=\"1\"/><Element name=\"NOTIFICATION_RESPONSE_CANCEL\" value=\"2\"/>",
"</Enum><Struct name=\"NotificationResponse\"><Member name=\"UUID\"><String/></Member><Member name=\"UUIDNotification\">",
"<String/></Member><Member name=\"response\"><Type name=\"NotificationResponseType\"/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(505);
        for (int i = 0; i < 5; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_NotificationResponse__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_NotificationResponse__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::NotificationResponse>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::NotificationResponse>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::NotificationResponse)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Reminder>
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
        return "Mind::Reminder";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Reminder\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"reminderDate\"><Long/></Member><Member name=\"subject\"><String/></Member><Member name=\"alertFrom\">",
"<String/></Member><Member name=\"message\"><String/></Member><Member name=\"acknowledged\"><Boolean/>",
"</Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(371);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Reminder__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Reminder__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Reminder>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Reminder>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Reminder)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Reminder_Command>
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
        return "Mind::Reminder_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Reminder_Command\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"property\"><String/></Member><Member name=\"value\"><String/></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(238);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Reminder_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Reminder_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Reminder_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Reminder_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Reminder_Command)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Timer>
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
        return "Mind::Timer";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Timer\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"timeStart\"><String/></Member><Member name=\"timeInterval\"><Long/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(415);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Timer__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Timer__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Timer>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Timer>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Timer)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Timer_Command>
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
        return "Mind::Timer_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Timer_Command\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"property\"><String/></Member><Member name=\"value\"><String/></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(235);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Timer_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Timer_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Timer_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Timer_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Timer_Command)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Wakeup>
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
        return "Mind::Wakeup";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Wakeup\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"dailyMask\"><String/></Member><Member name=\"time\"><String/></Member><Member name=\"UUIDUser\">",
"<String/></Member><Member name=\"soundType\"><String/></Member><Member name=\"enabled\"><Boolean/></Member>",
"<Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\">",
"<String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(543);
        for (int i = 0; i < 5; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Wakeup__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Wakeup__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Wakeup>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Wakeup>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Wakeup)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Wakeup_Command>
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
        return "Mind::Wakeup_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Wakeup_Command\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"property\"><String/></Member><Member name=\"value\"><String/></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(236);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Wakeup_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Wakeup_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Wakeup_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Wakeup_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Wakeup_Command)

#endif /* ISOCPP2_NOTIFICATIONSERVICE_H */
