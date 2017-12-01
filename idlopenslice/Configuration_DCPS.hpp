#ifndef ISOCPP2_CONFIGURATION_H
#define ISOCPP2_CONFIGURATION_H

#include "dds/dds.hpp"

#include "Configuration.h"
#include "ConfigurationSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Configuration>
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
        return "Mind::Configuration";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"ConfigurationType\"><Element name=\"CONFIGURATION_TYPE_DEFAULT\" value=\"0\"/>",
"<Element name=\"CONFIGURATION_TYPE_PREFERRED\" value=\"1\"/><Element name=\"CONFIGURATION_TYPE_LEARNED\" value=\"2\"/>",
"</Enum><Enum name=\"Category\"><Element name=\"CATEGORY_NONE\" value=\"0\"/><Element name=\"CATEGORY_HOUSE\" value=\"1\"/>",
"<Element name=\"CATEGORY_FLOOR\" value=\"2\"/><Element name=\"CATEGORY_ROOM\" value=\"3\"/><Element name=\"CATEGORY_AMBIENCE\" value=\"4\"/>",
"<Element name=\"CATEGORY_MOBILE\" value=\"5\"/><Element name=\"CATEGORY_HOUSE_TABLET\" value=\"6\"/><Element name=\"CATEGORY_MIND_STREAMING\" value=\"7\"/>",
"<Element name=\"MACRO_CATEGORY_AIR_CLEANING\" value=\"8\"/><Element name=\"CATEGORY_AIR_CLEANING_VMC\" value=\"9\"/>",
"<Element name=\"CATEGORY_AIR_CLEANING_CAPPAASPIRAZIONE\" value=\"10\"/><Element name=\"CATEGORY_AIR_CLEANING_EXTRACTOR_FAN\" value=\"11\"/>",
"<Element name=\"CATEGORY_LIGHT\" value=\"12\"/><Element name=\"CATEGORY_LIGHT_DIMMABLE\" value=\"13\"/>",
"<Element name=\"CATEGORY_LIGHT_DIMMABLE_FILTER\" value=\"14\"/><Element name=\"CATEGORY_LIGHT_DIMMABLE_MIND\" value=\"15\"/>",
"<Element name=\"CATEGORY_LIGHT_RGBW_MIND\" value=\"16\"/><Element name=\"MACRO_CATEGORY_LIGHT_ALL\" value=\"17\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_INTERNAL\" value=\"18\"/><Element name=\"MACRO_CATEGORY_LIGHT_EXTERNAL\" value=\"19\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_MAIN\" value=\"20\"/><Element name=\"MACRO_CATEGORY_LIGHT_SOFT\" value=\"21\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_SERVICE\" value=\"22\"/><Element name=\"MACRO_CATEGORY_LIGHT_STAIR\" value=\"23\"/>",
"<Element name=\"CATEGORY_INPUT_SWITCH\" value=\"24\"/><Element name=\"CATEGORY_INPUT_BUTTON\" value=\"25\"/>",
"<Element name=\"CATEGORY_INPUT_SHUTTER_BUTTON\" value=\"26\"/><Element name=\"MACRO_CATEGORY_INPUT\" value=\"27\"/>",
"<Element name=\"CATEGORY_CONTACT_DOOR\" value=\"28\"/><Element name=\"CATEGORY_CONTACT_WINDOW\" value=\"29\"/>",
"<Element name=\"CATEGORY_CONTACT_TAMPER\" value=\"30\"/><Element name=\"CATEGORY_CONTACT_PIR\" value=\"31\"/>",
"<Element name=\"MACRO_CATEGORY_CONTACT\" value=\"32\"/><Element name=\"MACRO_CATEGORY_SHUTTER\" value=\"33\"/>",
"<Element name=\"MACRO_CATEGORY_EXTERNAL_SHUTTER\" value=\"34\"/><Element name=\"CATEGORY_EXTERNAL_SHUTTER_ROLLER_SHUTTER\" value=\"35\"/>",
"<Element name=\"CATEGORY_EXTERNAL_SHUTTER_SCURO\" value=\"36\"/><Element name=\"CATEGORY_EXTERNAL_SHUTTER_FRANGISOLE\" value=\"37\"/>",
"<Element name=\"MACRO_CATEGORY_INTERNAL_SHUTTER\" value=\"38\"/><Element name=\"CATEGORY_INTERNAL_SHUTTER_BLINDS\" value=\"39\"/>",
"<Element name=\"CATEGORY_INTERNAL_SHUTTER_VENEZIANA\" value=\"40\"/><Element name=\"MACRO_CATEGORY_SECURITY_SHUTTER\" value=\"41\"/>",
"<Element name=\"CATEGORY_SECURITY_SHUTTER_GRATA\" value=\"42\"/><Element name=\"MACRO_CATEGORY_APPLIANCE\" value=\"43\"/>",
"<Element name=\"CATEGORY_APPLIANCE_FORNO\" value=\"44\"/><Element name=\"CATEGORY_APPLIANCE_FORNO_MICROONDE\" value=\"45\"/>",
"<Element name=\"CATEGORY_APPLIANCE_FRIGO\" value=\"46\"/><Element name=\"CATEGORY_APPLIANCE_FREEZER\" value=\"47\"/>",
"<Element name=\"CATEGORY_APPLIANCE_CANTINA_VINI\" value=\"48\"/><Element name=\"CATEGORY_APPLIANCE_MACCHINA_CAFFE\" value=\"49\"/>",
"<Element name=\"CATEGORY_APPLIANCE_CAPPA\" value=\"50\"/><Element name=\"CATEGORY_APPLIANCE_PIANO_COTTURA\" value=\"51\"/>",
"<Element name=\"CATEGORY_APPLIANCE_LAVATRICE\" value=\"52\"/><Element name=\"CATEGORY_APPLIANCE_LAVASTOVIGLIE\" value=\"53\"/>",
"<Element name=\"CATEGORY_APPLIANCE_ASCIUGATRICE\" value=\"54\"/><Element name=\"CATEGORY_APPLIANCE_PRESA_MULTIMEDIALE\" value=\"55\"/>",
"<Element name=\"CATEGORY_APPLIANCE_COLONNETTA_TESLA\" value=\"56\"/><Element name=\"CATEGORY_APPLIANCE_IMPIANTO\" value=\"57\"/>",
"<Element name=\"MACRO_CATEGORY_IRRIGATION\" value=\"58\"/><Element name=\"CATEGORY_IRRIGATION_PUMP\" value=\"59\"/>",
"<Element name=\"MACRO_CATEGORY_ALARM\" value=\"60\"/><Element name=\"CATEGORY_ALARM_SIREN\" value=\"61\"/>",
"<Element name=\"MACRO_CATEGORY_GATE\" value=\"62\"/><Element name=\"CATEGORY_GATE_CARRAIO\" value=\"63\"/>",
"<Element name=\"CATEGORY_GATE_PEDONALE\" value=\"64\"/><Element name=\"CATEGORY_GATE_GARAGE\" value=\"65\"/>",
"<Element name=\"MACRO_CATEGORY_VALVE\" value=\"66\"/><Element name=\"CATEGORY_VALVE_WATER_POMPA_RICIRCOLO\" value=\"67\"/>",
"<Element name=\"CATEGORY_VALVE_WATER\" value=\"68\"/><Element name=\"CATEGORY_VALVE_GAS\" value=\"69\"/>",
"<Element name=\"MACRO_CATEGORY_SOCKET\" value=\"70\"/><Element name=\"CATEGORY_SOCKET_16A\" value=\"71\"/>",
"<Element name=\"CATEGORY_SOCKET_5A\" value=\"72\"/><Element name=\"MACRO_CATEGORY_MULTIMEDIA\" value=\"73\"/>",
"<Element name=\"MACRO_CATEGORY_MULTIMEDIA_HARMONY\" value=\"74\"/><Element name=\"MACRO_CATEGORY_MULTIMEDIA_MUSIC\" value=\"75\"/>",
"<Element name=\"CATEGORY_SHUTTER_PROJECTION_SCREEN\" value=\"76\"/><Element name=\"CATEGORY_HARMONY_MULTIMEDIA\" value=\"77\"/>",
"<Element name=\"CATEGORY_MULTIMEDIA_SONOS\" value=\"78\"/><Element name=\"CATEGORY_INTERCOM\" value=\"79\"/>",
"<Element name=\"CATEGORY_SOUND_MIND\" value=\"80\"/><Element name=\"MACRO_CATEGORY_HEATING_COOLING\" value=\"81\"/>",
"<Element name=\"MACRO_CATEGORY_IMPIANTI\" value=\"82\"/><Element name=\"MACRO_CATEGORY_TERMINAL\" value=\"83\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_THERMOSTAT\" value=\"84\"/><Element name=\"CATEGORY_HEATING_COOLING_CALDAIA\" value=\"85\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_POMPA_CALORE\" value=\"86\"/><Element name=\"CATEGORY_HEATING_COOLING_FLOOR_HEATING\" value=\"87\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_FAN_COIL\" value=\"88\"/><Element name=\"CATEGORY_HEATING_COOLING_COOLING_FAN\" value=\"89\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_HARMONY_SPLIT\" value=\"90\"/><Element name=\"CATEGORY_HEATING_COOLING_TERMOSIFONE\" value=\"91\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_HARMONY_AIR_CONDITIONER\" value=\"92\"/><Element name=\"MACRO_CATEGORY_FLOODING\" value=\"93\"/>",
"<Element name=\"CATEGORY_FLOODING_SENSOR\" value=\"94\"/><Element name=\"MACRO_CATEGORY_SECURITY\" value=\"95\"/>",
"<Element name=\"CATEGORY_SECURITY_SISTEM_GENERIC\" value=\"96\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_AUTO\" value=\"97\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_MANUAL\" value=\"98\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_CINEMA\" value=\"99\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_GIOCO\" value=\"100\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA\" value=\"101\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA_SERVICE_OVERRRIDABLE\" value=\"102\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA_SERVICE_NOT_OVERRRIDABLE\" value=\"103\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA\" value=\"104\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA_SERVICE_OVERRRIDABLE\" value=\"105\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA_SERVICE_NOT_OVERRRIDABLE\" value=\"106\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA\" value=\"107\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA_SERVICE_OVERRRIDABLE\" value=\"108\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA_SERVICE_NOT_OVERRRIDABLE\" value=\"109\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO\" value=\"110\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO_SERVICE_OVERRRIDABLE\" value=\"111\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO_SERVICE_NOT_OVERRRIDABLE\" value=\"112\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_CUCINO\" value=\"113\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_COLAZIONE\" value=\"114\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_RELAX\" value=\"115\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_FESTA\" value=\"116\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_SVEGLIA\" value=\"117\"/>",
"<Element name=\"VIRTUAL_CATEGORY_SOUND\" value=\"118\"/><Element name=\"VIRTUAL_CATEGORY_POWER_CONSUMPTION\" value=\"119\"/>",
"<Element name=\"VIRTUAL_CATEGORY_DEACTIVABLE_ITEM\" value=\"120\"/></Enum><Enum name=\"VirtualItemLocation\">",
"<Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_AMBIENCE\" value=\"0\"/><Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_AMBIENCE_NEIGHBORHOOD\" value=\"1\"/>",
"<Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_ROOM\" value=\"2\"/><Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_FLOOR\" value=\"3\"/>",
"<Element name=\"VIRTUAL_ITEM_LOCATION_HOUSE\" value=\"4\"/><Element name=\"VIRTUAL_ITEM_LOCATION_AMBIENCE_WITH_PEOPLE\" value=\"5\"/>",
"</Enum><Struct name=\"ConfiguredItem\"><Member name=\"UUIDItem\"><String/></Member><Member name=\"category\">",
"<Type name=\"Category\"/></Member><Member name=\"value\"><String/></Member><Member name=\"delay\"><Long/>",
"</Member></Struct><Struct name=\"VirtualItem\"><Member name=\"category\"><Type name=\"Category\"/></Member>",
"<Member name=\"location\"><Type name=\"VirtualItemLocation\"/></Member><Member name=\"GID\"><Long/></Member>",
"<Member name=\"priority\"><Long/></Member><Member name=\"value\"><String/></Member><Member name=\"enabled\">",
"<Boolean/></Member><Member name=\"delay\"><Long/></Member><Member name=\"triggers\"><Sequence><String/>",
"</Sequence></Member></Struct><Struct name=\"Configuration\"><Member name=\"UUID\"><String/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member><Member name=\"name\"><String/></Member><Member name=\"activeItemConfiguration\">",
"<Type name=\"ConfigurationType\"/></Member><Member name=\"configurationTriggers\"><Sequence><String/>",
"</Sequence></Member><Member name=\"defaultVirtualItems\"><Sequence><Type name=\"VirtualItem\"/></Sequence>",
"</Member><Member name=\"preferredVirtualItems\"><Sequence><Type name=\"VirtualItem\"/></Sequence></Member>",
"<Member name=\"learnedVirtualItems\"><Sequence><Type name=\"VirtualItem\"/></Sequence></Member><Member name=\"defaultConfiguredItems\">",
"<Sequence><Type name=\"ConfiguredItem\"/></Sequence></Member><Member name=\"preferredConfiguredItems\">",
"<Sequence><Type name=\"ConfiguredItem\"/></Sequence></Member><Member name=\"learnedConfiguredItems\">",
"<Sequence><Type name=\"ConfiguredItem\"/></Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(9972);
        for (int i = 0; i < 81; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Configuration__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Configuration__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Configuration>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Configuration>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Configuration)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Configuration_Command_Set_Active_Item_Configuration>
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
        return "Mind::Configuration_Command_Set_Active_Item_Configuration";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"ConfigurationType\"><Element name=\"CONFIGURATION_TYPE_DEFAULT\" value=\"0\"/>",
"<Element name=\"CONFIGURATION_TYPE_PREFERRED\" value=\"1\"/><Element name=\"CONFIGURATION_TYPE_LEARNED\" value=\"2\"/>",
"</Enum><Struct name=\"Configuration_Command_Set_Active_Item_Configuration\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"activeItemConfiguration\"><Type name=\"ConfigurationType\"/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(488);
        for (int i = 0; i < 5; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Configuration_Command_Set_Active_Item_Configuration__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Configuration_Command_Set_Active_Item_Configuration__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Configuration_Command_Set_Active_Item_Configuration>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Configuration_Command_Set_Active_Item_Configuration>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Configuration_Command_Set_Active_Item_Configuration)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Configuration_Command_Set_Preferred_Virtual_Items_Configuration>
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
        return "Mind::Configuration_Command_Set_Preferred_Virtual_Items_Configuration";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"Category\"><Element name=\"CATEGORY_NONE\" value=\"0\"/>",
"<Element name=\"CATEGORY_HOUSE\" value=\"1\"/><Element name=\"CATEGORY_FLOOR\" value=\"2\"/><Element name=\"CATEGORY_ROOM\" value=\"3\"/>",
"<Element name=\"CATEGORY_AMBIENCE\" value=\"4\"/><Element name=\"CATEGORY_MOBILE\" value=\"5\"/><Element name=\"CATEGORY_HOUSE_TABLET\" value=\"6\"/>",
"<Element name=\"CATEGORY_MIND_STREAMING\" value=\"7\"/><Element name=\"MACRO_CATEGORY_AIR_CLEANING\" value=\"8\"/>",
"<Element name=\"CATEGORY_AIR_CLEANING_VMC\" value=\"9\"/><Element name=\"CATEGORY_AIR_CLEANING_CAPPAASPIRAZIONE\" value=\"10\"/>",
"<Element name=\"CATEGORY_AIR_CLEANING_EXTRACTOR_FAN\" value=\"11\"/><Element name=\"CATEGORY_LIGHT\" value=\"12\"/>",
"<Element name=\"CATEGORY_LIGHT_DIMMABLE\" value=\"13\"/><Element name=\"CATEGORY_LIGHT_DIMMABLE_FILTER\" value=\"14\"/>",
"<Element name=\"CATEGORY_LIGHT_DIMMABLE_MIND\" value=\"15\"/><Element name=\"CATEGORY_LIGHT_RGBW_MIND\" value=\"16\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_ALL\" value=\"17\"/><Element name=\"MACRO_CATEGORY_LIGHT_INTERNAL\" value=\"18\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_EXTERNAL\" value=\"19\"/><Element name=\"MACRO_CATEGORY_LIGHT_MAIN\" value=\"20\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_SOFT\" value=\"21\"/><Element name=\"MACRO_CATEGORY_LIGHT_SERVICE\" value=\"22\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_STAIR\" value=\"23\"/><Element name=\"CATEGORY_INPUT_SWITCH\" value=\"24\"/>",
"<Element name=\"CATEGORY_INPUT_BUTTON\" value=\"25\"/><Element name=\"CATEGORY_INPUT_SHUTTER_BUTTON\" value=\"26\"/>",
"<Element name=\"MACRO_CATEGORY_INPUT\" value=\"27\"/><Element name=\"CATEGORY_CONTACT_DOOR\" value=\"28\"/>",
"<Element name=\"CATEGORY_CONTACT_WINDOW\" value=\"29\"/><Element name=\"CATEGORY_CONTACT_TAMPER\" value=\"30\"/>",
"<Element name=\"CATEGORY_CONTACT_PIR\" value=\"31\"/><Element name=\"MACRO_CATEGORY_CONTACT\" value=\"32\"/>",
"<Element name=\"MACRO_CATEGORY_SHUTTER\" value=\"33\"/><Element name=\"MACRO_CATEGORY_EXTERNAL_SHUTTER\" value=\"34\"/>",
"<Element name=\"CATEGORY_EXTERNAL_SHUTTER_ROLLER_SHUTTER\" value=\"35\"/><Element name=\"CATEGORY_EXTERNAL_SHUTTER_SCURO\" value=\"36\"/>",
"<Element name=\"CATEGORY_EXTERNAL_SHUTTER_FRANGISOLE\" value=\"37\"/><Element name=\"MACRO_CATEGORY_INTERNAL_SHUTTER\" value=\"38\"/>",
"<Element name=\"CATEGORY_INTERNAL_SHUTTER_BLINDS\" value=\"39\"/><Element name=\"CATEGORY_INTERNAL_SHUTTER_VENEZIANA\" value=\"40\"/>",
"<Element name=\"MACRO_CATEGORY_SECURITY_SHUTTER\" value=\"41\"/><Element name=\"CATEGORY_SECURITY_SHUTTER_GRATA\" value=\"42\"/>",
"<Element name=\"MACRO_CATEGORY_APPLIANCE\" value=\"43\"/><Element name=\"CATEGORY_APPLIANCE_FORNO\" value=\"44\"/>",
"<Element name=\"CATEGORY_APPLIANCE_FORNO_MICROONDE\" value=\"45\"/><Element name=\"CATEGORY_APPLIANCE_FRIGO\" value=\"46\"/>",
"<Element name=\"CATEGORY_APPLIANCE_FREEZER\" value=\"47\"/><Element name=\"CATEGORY_APPLIANCE_CANTINA_VINI\" value=\"48\"/>",
"<Element name=\"CATEGORY_APPLIANCE_MACCHINA_CAFFE\" value=\"49\"/><Element name=\"CATEGORY_APPLIANCE_CAPPA\" value=\"50\"/>",
"<Element name=\"CATEGORY_APPLIANCE_PIANO_COTTURA\" value=\"51\"/><Element name=\"CATEGORY_APPLIANCE_LAVATRICE\" value=\"52\"/>",
"<Element name=\"CATEGORY_APPLIANCE_LAVASTOVIGLIE\" value=\"53\"/><Element name=\"CATEGORY_APPLIANCE_ASCIUGATRICE\" value=\"54\"/>",
"<Element name=\"CATEGORY_APPLIANCE_PRESA_MULTIMEDIALE\" value=\"55\"/><Element name=\"CATEGORY_APPLIANCE_COLONNETTA_TESLA\" value=\"56\"/>",
"<Element name=\"CATEGORY_APPLIANCE_IMPIANTO\" value=\"57\"/><Element name=\"MACRO_CATEGORY_IRRIGATION\" value=\"58\"/>",
"<Element name=\"CATEGORY_IRRIGATION_PUMP\" value=\"59\"/><Element name=\"MACRO_CATEGORY_ALARM\" value=\"60\"/>",
"<Element name=\"CATEGORY_ALARM_SIREN\" value=\"61\"/><Element name=\"MACRO_CATEGORY_GATE\" value=\"62\"/>",
"<Element name=\"CATEGORY_GATE_CARRAIO\" value=\"63\"/><Element name=\"CATEGORY_GATE_PEDONALE\" value=\"64\"/>",
"<Element name=\"CATEGORY_GATE_GARAGE\" value=\"65\"/><Element name=\"MACRO_CATEGORY_VALVE\" value=\"66\"/>",
"<Element name=\"CATEGORY_VALVE_WATER_POMPA_RICIRCOLO\" value=\"67\"/><Element name=\"CATEGORY_VALVE_WATER\" value=\"68\"/>",
"<Element name=\"CATEGORY_VALVE_GAS\" value=\"69\"/><Element name=\"MACRO_CATEGORY_SOCKET\" value=\"70\"/>",
"<Element name=\"CATEGORY_SOCKET_16A\" value=\"71\"/><Element name=\"CATEGORY_SOCKET_5A\" value=\"72\"/>",
"<Element name=\"MACRO_CATEGORY_MULTIMEDIA\" value=\"73\"/><Element name=\"MACRO_CATEGORY_MULTIMEDIA_HARMONY\" value=\"74\"/>",
"<Element name=\"MACRO_CATEGORY_MULTIMEDIA_MUSIC\" value=\"75\"/><Element name=\"CATEGORY_SHUTTER_PROJECTION_SCREEN\" value=\"76\"/>",
"<Element name=\"CATEGORY_HARMONY_MULTIMEDIA\" value=\"77\"/><Element name=\"CATEGORY_MULTIMEDIA_SONOS\" value=\"78\"/>",
"<Element name=\"CATEGORY_INTERCOM\" value=\"79\"/><Element name=\"CATEGORY_SOUND_MIND\" value=\"80\"/>",
"<Element name=\"MACRO_CATEGORY_HEATING_COOLING\" value=\"81\"/><Element name=\"MACRO_CATEGORY_IMPIANTI\" value=\"82\"/>",
"<Element name=\"MACRO_CATEGORY_TERMINAL\" value=\"83\"/><Element name=\"CATEGORY_HEATING_COOLING_THERMOSTAT\" value=\"84\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_CALDAIA\" value=\"85\"/><Element name=\"CATEGORY_HEATING_COOLING_POMPA_CALORE\" value=\"86\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_FLOOR_HEATING\" value=\"87\"/><Element name=\"CATEGORY_HEATING_COOLING_FAN_COIL\" value=\"88\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_COOLING_FAN\" value=\"89\"/><Element name=\"CATEGORY_HEATING_COOLING_HARMONY_SPLIT\" value=\"90\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_TERMOSIFONE\" value=\"91\"/><Element name=\"CATEGORY_HEATING_COOLING_HARMONY_AIR_CONDITIONER\" value=\"92\"/>",
"<Element name=\"MACRO_CATEGORY_FLOODING\" value=\"93\"/><Element name=\"CATEGORY_FLOODING_SENSOR\" value=\"94\"/>",
"<Element name=\"MACRO_CATEGORY_SECURITY\" value=\"95\"/><Element name=\"CATEGORY_SECURITY_SISTEM_GENERIC\" value=\"96\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_AUTO\" value=\"97\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_MANUAL\" value=\"98\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CINEMA\" value=\"99\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_GIOCO\" value=\"100\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA\" value=\"101\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA_SERVICE_OVERRRIDABLE\" value=\"102\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA_SERVICE_NOT_OVERRRIDABLE\" value=\"103\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA\" value=\"104\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA_SERVICE_OVERRRIDABLE\" value=\"105\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA_SERVICE_NOT_OVERRRIDABLE\" value=\"106\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA\" value=\"107\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA_SERVICE_OVERRRIDABLE\" value=\"108\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA_SERVICE_NOT_OVERRRIDABLE\" value=\"109\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO\" value=\"110\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO_SERVICE_OVERRRIDABLE\" value=\"111\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO_SERVICE_NOT_OVERRRIDABLE\" value=\"112\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CUCINO\" value=\"113\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_COLAZIONE\" value=\"114\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_RELAX\" value=\"115\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_FESTA\" value=\"116\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_SVEGLIA\" value=\"117\"/><Element name=\"VIRTUAL_CATEGORY_SOUND\" value=\"118\"/>",
"<Element name=\"VIRTUAL_CATEGORY_POWER_CONSUMPTION\" value=\"119\"/><Element name=\"VIRTUAL_CATEGORY_DEACTIVABLE_ITEM\" value=\"120\"/>",
"</Enum><Enum name=\"VirtualItemLocation\"><Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_AMBIENCE\" value=\"0\"/>",
"<Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_AMBIENCE_NEIGHBORHOOD\" value=\"1\"/><Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_ROOM\" value=\"2\"/>",
"<Element name=\"VIRTUAL_ITEM_LOCATION_CURRENT_FLOOR\" value=\"3\"/><Element name=\"VIRTUAL_ITEM_LOCATION_HOUSE\" value=\"4\"/>",
"<Element name=\"VIRTUAL_ITEM_LOCATION_AMBIENCE_WITH_PEOPLE\" value=\"5\"/></Enum><Struct name=\"VirtualItem\">",
"<Member name=\"category\"><Type name=\"Category\"/></Member><Member name=\"location\"><Type name=\"VirtualItemLocation\"/>",
"</Member><Member name=\"GID\"><Long/></Member><Member name=\"priority\"><Long/></Member><Member name=\"value\">",
"<String/></Member><Member name=\"enabled\"><Boolean/></Member><Member name=\"delay\"><Long/></Member>",
"<Member name=\"triggers\"><Sequence><String/></Sequence></Member></Struct><Struct name=\"Configuration_Command_Set_Preferred_Virtual_Items_Configuration\">",
"<Member name=\"UUID\"><String/></Member><Member name=\"preferredVirtualItems\"><Sequence><Type name=\"VirtualItem\"/>",
"</Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8702);
        for (int i = 0; i < 70; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Configuration_Command_Set_Preferred_Virtual_Items_Configuration>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Configuration_Command_Set_Preferred_Virtual_Items_Configuration>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Configuration_Command_Set_Preferred_Virtual_Items_Configuration)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Configuration_Command_Set_Preferred_Configured_Items_Configuration>
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
        return "Mind::Configuration_Command_Set_Preferred_Configured_Items_Configuration";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"Category\"><Element name=\"CATEGORY_NONE\" value=\"0\"/>",
"<Element name=\"CATEGORY_HOUSE\" value=\"1\"/><Element name=\"CATEGORY_FLOOR\" value=\"2\"/><Element name=\"CATEGORY_ROOM\" value=\"3\"/>",
"<Element name=\"CATEGORY_AMBIENCE\" value=\"4\"/><Element name=\"CATEGORY_MOBILE\" value=\"5\"/><Element name=\"CATEGORY_HOUSE_TABLET\" value=\"6\"/>",
"<Element name=\"CATEGORY_MIND_STREAMING\" value=\"7\"/><Element name=\"MACRO_CATEGORY_AIR_CLEANING\" value=\"8\"/>",
"<Element name=\"CATEGORY_AIR_CLEANING_VMC\" value=\"9\"/><Element name=\"CATEGORY_AIR_CLEANING_CAPPAASPIRAZIONE\" value=\"10\"/>",
"<Element name=\"CATEGORY_AIR_CLEANING_EXTRACTOR_FAN\" value=\"11\"/><Element name=\"CATEGORY_LIGHT\" value=\"12\"/>",
"<Element name=\"CATEGORY_LIGHT_DIMMABLE\" value=\"13\"/><Element name=\"CATEGORY_LIGHT_DIMMABLE_FILTER\" value=\"14\"/>",
"<Element name=\"CATEGORY_LIGHT_DIMMABLE_MIND\" value=\"15\"/><Element name=\"CATEGORY_LIGHT_RGBW_MIND\" value=\"16\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_ALL\" value=\"17\"/><Element name=\"MACRO_CATEGORY_LIGHT_INTERNAL\" value=\"18\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_EXTERNAL\" value=\"19\"/><Element name=\"MACRO_CATEGORY_LIGHT_MAIN\" value=\"20\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_SOFT\" value=\"21\"/><Element name=\"MACRO_CATEGORY_LIGHT_SERVICE\" value=\"22\"/>",
"<Element name=\"MACRO_CATEGORY_LIGHT_STAIR\" value=\"23\"/><Element name=\"CATEGORY_INPUT_SWITCH\" value=\"24\"/>",
"<Element name=\"CATEGORY_INPUT_BUTTON\" value=\"25\"/><Element name=\"CATEGORY_INPUT_SHUTTER_BUTTON\" value=\"26\"/>",
"<Element name=\"MACRO_CATEGORY_INPUT\" value=\"27\"/><Element name=\"CATEGORY_CONTACT_DOOR\" value=\"28\"/>",
"<Element name=\"CATEGORY_CONTACT_WINDOW\" value=\"29\"/><Element name=\"CATEGORY_CONTACT_TAMPER\" value=\"30\"/>",
"<Element name=\"CATEGORY_CONTACT_PIR\" value=\"31\"/><Element name=\"MACRO_CATEGORY_CONTACT\" value=\"32\"/>",
"<Element name=\"MACRO_CATEGORY_SHUTTER\" value=\"33\"/><Element name=\"MACRO_CATEGORY_EXTERNAL_SHUTTER\" value=\"34\"/>",
"<Element name=\"CATEGORY_EXTERNAL_SHUTTER_ROLLER_SHUTTER\" value=\"35\"/><Element name=\"CATEGORY_EXTERNAL_SHUTTER_SCURO\" value=\"36\"/>",
"<Element name=\"CATEGORY_EXTERNAL_SHUTTER_FRANGISOLE\" value=\"37\"/><Element name=\"MACRO_CATEGORY_INTERNAL_SHUTTER\" value=\"38\"/>",
"<Element name=\"CATEGORY_INTERNAL_SHUTTER_BLINDS\" value=\"39\"/><Element name=\"CATEGORY_INTERNAL_SHUTTER_VENEZIANA\" value=\"40\"/>",
"<Element name=\"MACRO_CATEGORY_SECURITY_SHUTTER\" value=\"41\"/><Element name=\"CATEGORY_SECURITY_SHUTTER_GRATA\" value=\"42\"/>",
"<Element name=\"MACRO_CATEGORY_APPLIANCE\" value=\"43\"/><Element name=\"CATEGORY_APPLIANCE_FORNO\" value=\"44\"/>",
"<Element name=\"CATEGORY_APPLIANCE_FORNO_MICROONDE\" value=\"45\"/><Element name=\"CATEGORY_APPLIANCE_FRIGO\" value=\"46\"/>",
"<Element name=\"CATEGORY_APPLIANCE_FREEZER\" value=\"47\"/><Element name=\"CATEGORY_APPLIANCE_CANTINA_VINI\" value=\"48\"/>",
"<Element name=\"CATEGORY_APPLIANCE_MACCHINA_CAFFE\" value=\"49\"/><Element name=\"CATEGORY_APPLIANCE_CAPPA\" value=\"50\"/>",
"<Element name=\"CATEGORY_APPLIANCE_PIANO_COTTURA\" value=\"51\"/><Element name=\"CATEGORY_APPLIANCE_LAVATRICE\" value=\"52\"/>",
"<Element name=\"CATEGORY_APPLIANCE_LAVASTOVIGLIE\" value=\"53\"/><Element name=\"CATEGORY_APPLIANCE_ASCIUGATRICE\" value=\"54\"/>",
"<Element name=\"CATEGORY_APPLIANCE_PRESA_MULTIMEDIALE\" value=\"55\"/><Element name=\"CATEGORY_APPLIANCE_COLONNETTA_TESLA\" value=\"56\"/>",
"<Element name=\"CATEGORY_APPLIANCE_IMPIANTO\" value=\"57\"/><Element name=\"MACRO_CATEGORY_IRRIGATION\" value=\"58\"/>",
"<Element name=\"CATEGORY_IRRIGATION_PUMP\" value=\"59\"/><Element name=\"MACRO_CATEGORY_ALARM\" value=\"60\"/>",
"<Element name=\"CATEGORY_ALARM_SIREN\" value=\"61\"/><Element name=\"MACRO_CATEGORY_GATE\" value=\"62\"/>",
"<Element name=\"CATEGORY_GATE_CARRAIO\" value=\"63\"/><Element name=\"CATEGORY_GATE_PEDONALE\" value=\"64\"/>",
"<Element name=\"CATEGORY_GATE_GARAGE\" value=\"65\"/><Element name=\"MACRO_CATEGORY_VALVE\" value=\"66\"/>",
"<Element name=\"CATEGORY_VALVE_WATER_POMPA_RICIRCOLO\" value=\"67\"/><Element name=\"CATEGORY_VALVE_WATER\" value=\"68\"/>",
"<Element name=\"CATEGORY_VALVE_GAS\" value=\"69\"/><Element name=\"MACRO_CATEGORY_SOCKET\" value=\"70\"/>",
"<Element name=\"CATEGORY_SOCKET_16A\" value=\"71\"/><Element name=\"CATEGORY_SOCKET_5A\" value=\"72\"/>",
"<Element name=\"MACRO_CATEGORY_MULTIMEDIA\" value=\"73\"/><Element name=\"MACRO_CATEGORY_MULTIMEDIA_HARMONY\" value=\"74\"/>",
"<Element name=\"MACRO_CATEGORY_MULTIMEDIA_MUSIC\" value=\"75\"/><Element name=\"CATEGORY_SHUTTER_PROJECTION_SCREEN\" value=\"76\"/>",
"<Element name=\"CATEGORY_HARMONY_MULTIMEDIA\" value=\"77\"/><Element name=\"CATEGORY_MULTIMEDIA_SONOS\" value=\"78\"/>",
"<Element name=\"CATEGORY_INTERCOM\" value=\"79\"/><Element name=\"CATEGORY_SOUND_MIND\" value=\"80\"/>",
"<Element name=\"MACRO_CATEGORY_HEATING_COOLING\" value=\"81\"/><Element name=\"MACRO_CATEGORY_IMPIANTI\" value=\"82\"/>",
"<Element name=\"MACRO_CATEGORY_TERMINAL\" value=\"83\"/><Element name=\"CATEGORY_HEATING_COOLING_THERMOSTAT\" value=\"84\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_CALDAIA\" value=\"85\"/><Element name=\"CATEGORY_HEATING_COOLING_POMPA_CALORE\" value=\"86\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_FLOOR_HEATING\" value=\"87\"/><Element name=\"CATEGORY_HEATING_COOLING_FAN_COIL\" value=\"88\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_COOLING_FAN\" value=\"89\"/><Element name=\"CATEGORY_HEATING_COOLING_HARMONY_SPLIT\" value=\"90\"/>",
"<Element name=\"CATEGORY_HEATING_COOLING_TERMOSIFONE\" value=\"91\"/><Element name=\"CATEGORY_HEATING_COOLING_HARMONY_AIR_CONDITIONER\" value=\"92\"/>",
"<Element name=\"MACRO_CATEGORY_FLOODING\" value=\"93\"/><Element name=\"CATEGORY_FLOODING_SENSOR\" value=\"94\"/>",
"<Element name=\"MACRO_CATEGORY_SECURITY\" value=\"95\"/><Element name=\"CATEGORY_SECURITY_SISTEM_GENERIC\" value=\"96\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_AUTO\" value=\"97\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_MANUAL\" value=\"98\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CINEMA\" value=\"99\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_GIOCO\" value=\"100\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA\" value=\"101\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA_SERVICE_OVERRRIDABLE\" value=\"102\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NINNANANNA_SERVICE_NOT_OVERRRIDABLE\" value=\"103\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA\" value=\"104\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA_SERVICE_OVERRRIDABLE\" value=\"105\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_NANNA_SERVICE_NOT_OVERRRIDABLE\" value=\"106\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA\" value=\"107\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA_SERVICE_OVERRRIDABLE\" value=\"108\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CENA_SERVICE_NOT_OVERRRIDABLE\" value=\"109\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO\" value=\"110\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO_SERVICE_OVERRRIDABLE\" value=\"111\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_PRANZO_SERVICE_NOT_OVERRRIDABLE\" value=\"112\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_CUCINO\" value=\"113\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_COLAZIONE\" value=\"114\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_RELAX\" value=\"115\"/><Element name=\"VIRTUAL_CATEGORY_MOMENT_FESTA\" value=\"116\"/>",
"<Element name=\"VIRTUAL_CATEGORY_MOMENT_SVEGLIA\" value=\"117\"/><Element name=\"VIRTUAL_CATEGORY_SOUND\" value=\"118\"/>",
"<Element name=\"VIRTUAL_CATEGORY_POWER_CONSUMPTION\" value=\"119\"/><Element name=\"VIRTUAL_CATEGORY_DEACTIVABLE_ITEM\" value=\"120\"/>",
"</Enum><Struct name=\"ConfiguredItem\"><Member name=\"UUIDItem\"><String/></Member><Member name=\"category\">",
"<Type name=\"Category\"/></Member><Member name=\"value\"><String/></Member><Member name=\"delay\"><Long/>",
"</Member></Struct><Struct name=\"Configuration_Command_Set_Preferred_Configured_Items_Configuration\">",
"<Member name=\"UUID\"><String/></Member><Member name=\"preferredConfiguredItems\"><Sequence><Type name=\"ConfiguredItem\"/>",
"</Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8038);
        for (int i = 0; i < 65; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Configuration_Command_Set_Preferred_Configured_Items_Configuration>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Configuration_Command_Set_Preferred_Configured_Items_Configuration>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Configuration_Command_Set_Preferred_Configured_Items_Configuration)

#endif /* ISOCPP2_CONFIGURATION_H */
