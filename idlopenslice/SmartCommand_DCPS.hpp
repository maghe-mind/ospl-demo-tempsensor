#ifndef ISOCPP2_SMARTCOMMAND_H
#define ISOCPP2_SMARTCOMMAND_H

#include "dds/dds.hpp"

#include "SmartCommand.h"
#include "SmartCommandSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Ambience_SmartCommandSettings>
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
        return "Mind::Ambience_SmartCommandSettings";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"SmartCommandType\"><Element name=\"SMART_COMMAND_LIGHTS\" value=\"0\"/>",
"<Element name=\"SMART_COMMAND_SHUTTERS\" value=\"1\"/><Element name=\"SMART_COMMAND_VENEZIANE\" value=\"2\"/>",
"<Element name=\"SMART_COMMAND_SCURI\" value=\"3\"/><Element name=\"SMART_COMMAND_GRATE\" value=\"4\"/>",
"<Element name=\"SMART_COMMAND_MULTIMEDIA\" value=\"5\"/><Element name=\"SMART_COMMAND_MUSICA\" value=\"6\"/>",
"<Element name=\"SMART_COMMAND_TEMPERATURE\" value=\"7\"/><Element name=\"SMART_COMMAND_WINDOWS\" value=\"8\"/>",
"<Element name=\"SMART_COMMAND_POWER_CONSUMPTION\" value=\"9\"/></Enum><Struct name=\"SmartCommand\"><Member name=\"commandType\">",
"<Type name=\"SmartCommandType\"/></Member><Member name=\"position\"><Long/></Member></Struct><Struct name=\"Ambience_SmartCommandSettings\">",
"<Member name=\"smartCommands\"><Sequence><Type name=\"SmartCommand\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(999);
        for (int i = 0; i < 9; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Ambience_SmartCommandSettings__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Ambience_SmartCommandSettings__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Ambience_SmartCommandSettings>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Ambience_SmartCommandSettings>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Ambience_SmartCommandSettings)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Command_Trigger_SmartCommand>
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
        return "Mind::Command_Trigger_SmartCommand";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"SmartCommandType\"><Element name=\"SMART_COMMAND_LIGHTS\" value=\"0\"/>",
"<Element name=\"SMART_COMMAND_SHUTTERS\" value=\"1\"/><Element name=\"SMART_COMMAND_VENEZIANE\" value=\"2\"/>",
"<Element name=\"SMART_COMMAND_SCURI\" value=\"3\"/><Element name=\"SMART_COMMAND_GRATE\" value=\"4\"/>",
"<Element name=\"SMART_COMMAND_MULTIMEDIA\" value=\"5\"/><Element name=\"SMART_COMMAND_MUSICA\" value=\"6\"/>",
"<Element name=\"SMART_COMMAND_TEMPERATURE\" value=\"7\"/><Element name=\"SMART_COMMAND_WINDOWS\" value=\"8\"/>",
"<Element name=\"SMART_COMMAND_POWER_CONSUMPTION\" value=\"9\"/></Enum><Struct name=\"Command_Trigger_SmartCommand\">",
"<Member name=\"smartCommand\"><Type name=\"SmartCommandType\"/></Member><Member name=\"command\"><String/>",
"</Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member>",
"<Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(1005);
        for (int i = 0; i < 10; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Command_Trigger_SmartCommand__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Command_Trigger_SmartCommand__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Command_Trigger_SmartCommand>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Command_Trigger_SmartCommand>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Command_Trigger_SmartCommand)

#endif /* ISOCPP2_SMARTCOMMAND_H */
