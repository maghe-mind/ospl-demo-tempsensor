#ifndef ISOCPP2_HOUSE_H
#define ISOCPP2_HOUSE_H

#include "dds/dds.hpp"

#include "House.h"
#include "HouseSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House>
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
        return "Mind::House";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"TemperatureMode\"><Element name=\"TEMPERATURE_MODE_NONE\" value=\"0\"/>",
"<Element name=\"TEMPERATURE_MODE_SUMMER\" value=\"1\"/><Element name=\"TEMPERATURE_MODE_WINTER\" value=\"2\"/>",
"</Enum><Enum name=\"HouseMode\"><Element name=\"HOUSE_MODE_AWAY\" value=\"0\"/><Element name=\"HOUSE_MODE_HOLIDAY\" value=\"1\"/>",
"<Element name=\"HOUSE_MODE_DAY\" value=\"2\"/><Element name=\"HOUSE_MODE_NIGHT\" value=\"3\"/><Element name=\"HOUSE_MODE_GUEST\" value=\"4\"/>",
"<Element name=\"HOUSE_MODE_SETUP\" value=\"5\"/></Enum><Enum name=\"StateName\"><Element name=\"STATE_SETUP\" value=\"0\"/>",
"<Element name=\"STATE_AWAY\" value=\"1\"/><Element name=\"STATE_HOLIDAY\" value=\"2\"/><Element name=\"STATE_CHECKIN\" value=\"3\"/>",
"<Element name=\"STATE_ALARMFROMNIGHT\" value=\"4\"/><Element name=\"STATE_ALARMFROMCHECKIN\" value=\"5\"/>",
"<Element name=\"STATE_DAY\" value=\"6\"/><Element name=\"STATE_CHECKOUT\" value=\"7\"/><Element name=\"STATE_CHECKOUT_GUEST\" value=\"8\"/>",
"<Element name=\"STATE_CHECKOUT_HOLIDAY\" value=\"9\"/><Element name=\"STATE_GUEST\" value=\"10\"/><Element name=\"STATE_NIGHT\" value=\"11\"/>",
"</Enum><Enum name=\"NotificationSetting\"><Element name=\"SECURITY_NOTIFICATION_SETTING_NONE\" value=\"0\"/>",
"<Element name=\"SECURITY_NOTIFICATION_SETTING_SNS_PLUS_LED\" value=\"1\"/><Element name=\"SECURITY_NOTIFICATION_SETTING_SNS_PLUS_LED_PLUS_ALARM\" value=\"2\"/>",
"</Enum><Enum name=\"NightAlarmSetting\"><Element name=\"NIGHT_ALARM_SETTING_NONE\" value=\"0\"/><Element name=\"NIGHT_ALARM_SETTING_FACE_RECOGNITION\" value=\"1\"/>",
"<Element name=\"NIGHT_ALARM_SETTING_LOGIC\" value=\"2\"/><Element name=\"NIGHT_ALARM_SETTING_VOLUMETRIC\" value=\"3\"/>",
"</Enum><Struct name=\"House\"><Member name=\"UUID\"><String/></Member><Member name=\"name\"><String/>",
"</Member><Member name=\"targetTemperatureAwaySummer\"><Double/></Member><Member name=\"targetTemperatureHolidaySummer\">",
"<Double/></Member><Member name=\"targetTemperatureAwayWinter\"><Double/></Member><Member name=\"targetTemperatureHolidayWinter\">",
"<Double/></Member><Member name=\"temperatureMode\"><Type name=\"TemperatureMode\"/></Member><Member name=\"automaticWinterSummerSwitch\">",
"<Boolean/></Member><Member name=\"lowTemperatureThreshold\"><Double/></Member><Member name=\"highTemperatureThreshold\">",
"<Double/></Member><Member name=\"currentMode\"><Type name=\"HouseMode\"/></Member><Member name=\"currentState\">",
"<Type name=\"StateName\"/></Member><Member name=\"image\"><Sequence><Octet/></Sequence></Member><Member name=\"holidayStartDate\">",
"<String/></Member><Member name=\"holidayEndDate\"><String/></Member><Member name=\"automaticHolidayFromAwayActivation_days\">",
"<Long/></Member><Member name=\"automaticAwayFromHolidayActivation_days\"><Long/></Member><Member name=\"automaticAwayActivation_hours\">",
"<Long/></Member><Member name=\"preheatingTime\"><Double/></Member><Member name=\"notificationSettingDay\">",
"<Type name=\"NotificationSetting\"/></Member><Member name=\"notificationSettingNight\"><Type name=\"NotificationSetting\"/>",
"</Member><Member name=\"notificationSettingAway\"><Type name=\"NotificationSetting\"/></Member><Member name=\"notificationSettingHoliday\">",
"<Type name=\"NotificationSetting\"/></Member><Member name=\"notificationSettingGuest\"><Type name=\"NotificationSetting\"/>",
"</Member><Member name=\"alarmSetting\"><Type name=\"NightAlarmSetting\"/></Member><Member name=\"geofenceThreshold\">",
"<Double/></Member><Member name=\"streamingEnabled\"><Boolean/></Member><Member name=\"livenessSimulation\">",
"<Boolean/></Member><Member name=\"guestCheckoutTimeout\"><Long/></Member><Member name=\"checkoutTimeout\">",
"<Long/></Member><Member name=\"checkinTimeout\"><Long/></Member><Member name=\"longitude\"><String/></Member>",
"<Member name=\"latitudine\"><String/></Member><Member name=\"alarmDuration\"><Long/></Member><Member name=\"alarmMaxRepeat\">",
"<Long/></Member><Member name=\"coThreshold\"><Double/></Member><Member name=\"coTolerance\"><Double/>",
"</Member><Member name=\"humidityThreshold\"><Double/></Member><Member name=\"humidityTolerance\"><Double/>",
"</Member><Member name=\"vocThreshold\"><Double/></Member><Member name=\"vocTolerance\"><Double/></Member>",
"<Member name=\"co2Threshold\"><Double/></Member><Member name=\"co2Tolerance\"><Double/></Member><Member name=\"nh4Threshold\">",
"<Double/></Member><Member name=\"nh4Tolerance\"><Double/></Member><Member name=\"motionThreshold\"><Double/>",
"</Member><Member name=\"motionTolerance\"><Double/></Member><Member name=\"brightnessThreshold\"><Double/>",
"</Member><Member name=\"brightnessTolerance\"><Double/></Member><Member name=\"cloudyThreshold\"><Double/>",
"</Member><Member name=\"cloudyTolerance\"><Double/></Member><Member name=\"lowerDayThreshold\"><String/>",
"</Member><Member name=\"upperDayThreshold\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(4825);
        for (int i = 0; i < 40; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_Network_Settings>
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
        return "";
    }

    static const char *getTypeName()
    {
        return "Mind::House_Network_Settings";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_Network_Settings\"><Member name=\"MACAddresses\">",
"<Sequence><String/></Sequence></Member><Member name=\"IPAddresses\"><Sequence><String/></Sequence></Member>",
"<Member name=\"serialNumber\"><Sequence><String/></Sequence></Member><Member name=\"SSIDWifiUser\"><String/>",
"</Member><Member name=\"SSDIWifiPassw\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(422);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House_Network_Settings__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_Network_Settings__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_Network_Settings>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_Network_Settings>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_Network_Settings)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_PeopleCount>
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
        return "";
    }

    static const char *getTypeName()
    {
        return "Mind::House_PeopleCount";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_PeopleCount\"><Member name=\"knownPeopleCount\">",
"<Long/></Member><Member name=\"previousKnownPeopleCount\"><Long/></Member><Member name=\"unknownPeopleCount\">",
"<Long/></Member><Member name=\"previousUnknownPeopleCount\"><Long/></Member><Member name=\"bonusPeopleCount\">",
"<Long/></Member><Member name=\"previousBonusPeopleCount\"><Long/></Member><Member name=\"peopleCount\">",
"<Long/></Member><Member name=\"previousPeopleCount\"><Long/></Member></Struct></Module></MetaData>"
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
        return (copyInFunction) __Mind_House_PeopleCount__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_PeopleCount__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_PeopleCount>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_PeopleCount>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_PeopleCount)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_Occupancy>
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
        return "";
    }

    static const char *getTypeName()
    {
        return "Mind::House_Occupancy";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_Occupancy\"><Member name=\"weekDaily\">",
"<Sequence><Double/></Sequence></Member><Member name=\"weekDailySampleCount\"><Long/></Member><Member name=\"monthly\">",
"<Sequence><Double/></Sequence></Member><Member name=\"monthlySampleCount\"><Long/></Member></Struct></Module>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(348);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House_Occupancy__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_Occupancy__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_Occupancy>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_Occupancy>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_Occupancy)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_Presence>
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
        return "Mind::House_Presence";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_Presence\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"faceRecognized\"><Double/></Member><Member name=\"bluetoothRecognized\">",
"<Double/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(256);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House_Presence__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_Presence__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_Presence>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_Presence>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_Presence)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_PIN>
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
        return "";
    }

    static const char *getTypeName()
    {
        return "Mind::House_PIN";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_PIN\"><Member name=\"userPINCode\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(153);
        for (int i = 0; i < 2; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House_PIN__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_PIN__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_PIN>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_PIN>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_PIN)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_Command>
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
        return "Mind::House_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_Command\"><Member name=\"property\">",
"<String/></Member><Member name=\"value\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(195);
        for (int i = 0; i < 2; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_Command)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::House_Signal>
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
        return "";
    }

    static const char *getTypeName()
    {
        return "Mind::House_Signal";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"House_Signal\"><Member name=\"name\">",
"<String/></Member><Member name=\"value\"><String/></Member><Member name=\"ttl\"><Double/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(411);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_House_Signal__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_House_Signal__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::House_Signal>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::House_Signal>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::House_Signal)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Firmware>
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
        return "";
    }

    static const char *getTypeName()
    {
        return "Mind::Firmware";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Firmware\"><Member name=\"fwMicro\">",
"<Sequence><Octet/></Sequence></Member><Member name=\"fwESP8266\"><Sequence><Octet/></Sequence></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(233);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Firmware__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Firmware__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Firmware>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Firmware>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Firmware)

#endif /* ISOCPP2_HOUSE_H */
