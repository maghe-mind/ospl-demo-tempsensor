#ifndef ISOCPP2_AMBIENCE_H
#define ISOCPP2_AMBIENCE_H

#include "dds/dds.hpp"

#include "Ambience.h"
#include "AmbienceSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Ambience>
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
        return "Mind::Ambience";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"AmbienceType\"><Element name=\"AMBIENCE_TYPE_ENTRANCE\" value=\"0\"/>",
"<Element name=\"AMBIENCE_TYPE_CORRIDOR\" value=\"1\"/><Element name=\"AMBIENCE_TYPE_LIVING_ROOM\" value=\"2\"/>",
"<Element name=\"AMBIENCE_TYPE_DINING_ROOM\" value=\"3\"/><Element name=\"AMBIENCE_TYPE_KITCHEN\" value=\"4\"/>",
"<Element name=\"AMBIENCE_TYPE_PANTRY\" value=\"5\"/><Element name=\"AMBIENCE_TYPE_BATHROOM\" value=\"6\"/>",
"<Element name=\"AMBIENCE_TYPE_DRESSINGR_ROOM\" value=\"7\"/><Element name=\"AMBIENCE_TYPE_BEDROOM\" value=\"8\"/>",
"<Element name=\"AMBIENCE_TYPE_BEDROOM_CHILDREN\" value=\"9\"/><Element name=\"AMBIENCE_TYPE_WARDROBE\" value=\"10\"/>",
"<Element name=\"AMBIENCE_TYPE_CELLAR\" value=\"11\"/><Element name=\"AMBIENCE_TYPE_GARAGE\" value=\"12\"/>",
"<Element name=\"AMBIENCE_TYPE_TECHNICAL_ROOM\" value=\"13\"/><Element name=\"AMBIENCE_TYPE_CATCHALL\" value=\"14\"/>",
"<Element name=\"AMBIENCE_TYPE_UNDERSTAIRS\" value=\"15\"/><Element name=\"AMBIENCE_TYPE_TERRACE\" value=\"16\"/>",
"<Element name=\"AMBIENCE_TYPE_VERANDA\" value=\"17\"/><Element name=\"AMBIENCE_TYPE_GYM\" value=\"18\"/>",
"<Element name=\"AMBIENCE_TYPE_SPA\" value=\"19\"/><Element name=\"AMBIENCE_TYPE_PLAYROOM\" value=\"20\"/>",
"<Element name=\"AMBIENCE_TYPE_CINEMA\" value=\"21\"/><Element name=\"AMBIENCE_TYPE_LAUDRY\" value=\"22\"/>",
"<Element name=\"AMBIENCE_TYPE_OFFICE\" value=\"23\"/><Element name=\"AMBIENCE_TYPE_CAVEAU\" value=\"24\"/>",
"<Element name=\"AMBIENCE_TYPE_STAIRS\" value=\"25\"/><Element name=\"AMBIENCE_TYPE_GARDEN\" value=\"26\"/>",
"</Enum><Enum name=\"StateName\"><Element name=\"STATE_SETUP\" value=\"0\"/><Element name=\"STATE_AWAY\" value=\"1\"/>",
"<Element name=\"STATE_HOLIDAY\" value=\"2\"/><Element name=\"STATE_CHECKIN\" value=\"3\"/><Element name=\"STATE_ALARMFROMNIGHT\" value=\"4\"/>",
"<Element name=\"STATE_ALARMFROMCHECKIN\" value=\"5\"/><Element name=\"STATE_DAY\" value=\"6\"/><Element name=\"STATE_CHECKOUT\" value=\"7\"/>",
"<Element name=\"STATE_CHECKOUT_GUEST\" value=\"8\"/><Element name=\"STATE_CHECKOUT_HOLIDAY\" value=\"9\"/>",
"<Element name=\"STATE_GUEST\" value=\"10\"/><Element name=\"STATE_NIGHT\" value=\"11\"/></Enum><Struct name=\"Ambience\">",
"<Member name=\"UUID\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\">",
"<String/></Member><Member name=\"UUIDHouse\"><String/></Member><Member name=\"type\"><Type name=\"AmbienceType\"/>",
"</Member><Member name=\"name\"><String/></Member><Member name=\"adjacentAmbiences\"><Sequence><String/>",
"</Sequence></Member><Member name=\"adjacentAmbiencesOtherFloors\"><Sequence><String/></Sequence></Member>",
"<Member name=\"shadowed\"><Boolean/></Member><Member name=\"entrance\"><Boolean/></Member><Member name=\"secured\">",
"<Boolean/></Member><Member name=\"bonusPeopleCount\"><Long/></Member><Member name=\"currentState\"><Type name=\"StateName\"/>",
"</Member><Member name=\"currentMoment\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(2937);
        for (int i = 0; i < 26; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Ambience__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Ambience__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Ambience>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Ambience>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Ambience)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Ambience_Command_Start_Moment>
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
        return "Mind::Ambience_Command_Start_Moment";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Ambience_Command_Start_Moment\"><Member name=\"moment\">",
"<String/></Member><Member name=\"timestamp\"><String/></Member><Member name=\"UUIDAmbience\"><String/>",
"</Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(261);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Ambience_Command_Start_Moment__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Ambience_Command_Start_Moment__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Ambience_Command_Start_Moment>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Ambience_Command_Start_Moment>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Ambience_Command_Start_Moment)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Ambience_Command>
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
        return "Mind::Ambience_Command";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Ambience_Command\"><Member name=\"property\">",
"<String/></Member><Member name=\"value\"><String/></Member><Member name=\"UUIDAmbience\"><String/></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(246);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Ambience_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Ambience_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Ambience_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Ambience_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Ambience_Command)

#endif /* ISOCPP2_AMBIENCE_H */
