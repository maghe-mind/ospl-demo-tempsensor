#ifndef ISOCPP2_ITEMS_H
#define ISOCPP2_ITEMS_H

#include "dds/dds.hpp"

#include "Items.h"
#include "ItemsSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::User_Command>
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
        return "Mind::User_Command";
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
"</Enum><Struct name=\"User_Command\"><Member name=\"UUID\"><String/></Member><Member name=\"itemCategory\">",
"<Type name=\"Category\"/></Member><Member name=\"command\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(7763);
        for (int i = 0; i < 62; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_User_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_User_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::User_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::User_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::User_Command)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Actuation_Command>
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
        return "Mind::Actuation_Command";
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
"</Enum><Struct name=\"Item_Command\"><Member name=\"UUID\"><String/></Member><Member name=\"itemCategory\">",
"<Type name=\"Category\"/></Member><Member name=\"command\"><String/></Member></Struct><Struct name=\"Actuation_Command\">",
"<Member name=\"UUID\"><String/></Member><Member name=\"commands\"><Sequence><Type name=\"Item_Command\"/>",
"</Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(7932);
        for (int i = 0; i < 64; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Actuation_Command__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Actuation_Command__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Actuation_Command>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Actuation_Command>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Actuation_Command)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Item_Command_Update_Category>
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
        return "Mind::Item_Command_Update_Category";
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
"</Enum><Struct name=\"Item_Command_Update_Category\"><Member name=\"UUID\"><String/></Member><Member name=\"itemCategory\">",
"<Type name=\"Category\"/></Member><Member name=\"command\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(7779);
        for (int i = 0; i < 62; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Item_Command_Update_Category__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Item_Command_Update_Category__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Item_Command_Update_Category>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Item_Command_Update_Category>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Item_Command_Update_Category)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Item_Consumption>
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
        return "Mind::Item_Consumption";
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
"</Enum><Struct name=\"Item_Consumption\"><Member name=\"UUID\"><String/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member><Member name=\"itemCategory\"><Type name=\"Category\"/></Member>",
"<Member name=\"power\"><Double/></Member><Member name=\"energy\"><Double/></Member><Member name=\"timestamp\">",
"<Long/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8032);
        for (int i = 0; i < 65; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Item_Consumption__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Item_Consumption__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Item_Consumption>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Item_Consumption>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Item_Consumption)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ExtractorFan>
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
        return "Mind::ExtractorFan";
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
"</Enum><Struct name=\"ExtractorFan\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8250);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ExtractorFan__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ExtractorFan__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ExtractorFan>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ExtractorFan>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ExtractorFan)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::VMC>
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
        return "Mind::VMC";
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
"</Enum><Struct name=\"VMC\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8241);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_VMC__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_VMC__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::VMC>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::VMC>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::VMC)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CappaAspirazione>
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
        return "Mind::CappaAspirazione";
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
"</Enum><Struct name=\"CappaAspirazione\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddressOnOff\">",
"<String/></Member><Member name=\"numRelayOnOff\"><Long/></Member><Member name=\"MACAddressLight\"><String/>",
"</Member><Member name=\"numRelayLight\"><Long/></Member><Member name=\"MACAddressSpeed1\"><String/></Member>",
"<Member name=\"numRelaySpeed1\"><Long/></Member><Member name=\"MACAddressSpeed2\"><String/></Member><Member name=\"numRelaySpeed2\">",
"<Long/></Member><Member name=\"MACAddressSpeed3\"><String/></Member><Member name=\"numRelaySpeed3\"><Long/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"connectedOnOff\">",
"<Boolean/></Member><Member name=\"connectedLight\"><Boolean/></Member><Member name=\"connectedSpeed1\">",
"<Boolean/></Member><Member name=\"connectedSpeed2\"><Boolean/></Member><Member name=\"connectedSpeed3\">",
"<Boolean/></Member><Member name=\"statusOnOff\"><Long/></Member><Member name=\"statusLight\"><Long/></Member>",
"<Member name=\"statusSpeed1\"><Long/></Member><Member name=\"statusSpeed2\"><Long/></Member><Member name=\"statusSpeed3\">",
"<Long/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member>",
"<Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\">",
"<String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8998);
        for (int i = 0; i < 73; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CappaAspirazione__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CappaAspirazione__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CappaAspirazione>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CappaAspirazione>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CappaAspirazione)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Light>
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
        return "Mind::Light";
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
"</Enum><Struct name=\"Light\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8243);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Light__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Light__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Light>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Light>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Light)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::LightDimmable>
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
        return "Mind::LightDimmable";
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
"</Enum><Struct name=\"LightDimmable\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"hasFilter\">",
"<Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\"><String/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8297);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_LightDimmable__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_LightDimmable__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::LightDimmable>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::LightDimmable>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::LightDimmable)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::LightMind>
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
        return "Mind::LightMind";
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
"</Enum><Struct name=\"LightMind\"><Member name=\"UUID\"><String/></Member><Member name=\"categories\">",
"<Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"statusDimmer\"><Long/></Member>",
"<Member name=\"statusTemperature\"><Long/></Member><Member name=\"status\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8058);
        for (int i = 0; i < 65; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_LightMind__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_LightMind__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::LightMind>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::LightMind>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::LightMind)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::LightMindLED>
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
        return "Mind::LightMindLED";
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
"</Enum><Struct name=\"LightMindLED\"><Member name=\"UUID\"><String/></Member><Member name=\"categories\">",
"<Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"status\"><Boolean/></Member><Member name=\"r\">",
"<Long/></Member><Member name=\"g\"><Long/></Member><Member name=\"b\"><Long/></Member><Member name=\"w\">",
"<Long/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member>",
"<Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8104);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_LightMindLED__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_LightMindLED__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::LightMindLED>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::LightMindLED>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::LightMindLED)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::BSwitch>
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
        return "Mind::BSwitch";
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
"</Enum><Struct name=\"BSwitch\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numInput\"><Long/></Member><Member name=\"status\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"disabled\"><Boolean/></Member><Member name=\"description\"><String/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8182);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_BSwitch__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_BSwitch__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::BSwitch>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::BSwitch>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::BSwitch)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Button>
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
        return "Mind::Button";
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
"</Enum><Struct name=\"Button\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numInput\"><Long/></Member><Member name=\"status\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"disabled\"><Boolean/></Member><Member name=\"description\"><String/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8181);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Button__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Button__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Button>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Button>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Button)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ShutterButton>
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
        return "Mind::ShutterButton";
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
"</Enum><Struct name=\"ShutterButton\"><Member name=\"UUID\"><String/></Member><Member name=\"UUIDShutter\">",
"<String/></Member><Member name=\"MACAddress\"><String/></Member><Member name=\"numInput\"><Long/></Member>",
"<Member name=\"status\"><Long/></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"disabled\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"updownType\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8282);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ShutterButton__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ShutterButton__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ShutterButton>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ShutterButton>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ShutterButton)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::DoorContact>
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
        return "Mind::DoorContact";
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
"</Enum><Struct name=\"DoorContact\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numInput\"><Long/></Member><Member name=\"status\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"disabled\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8186);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_DoorContact__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_DoorContact__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::DoorContact>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::DoorContact>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::DoorContact)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::WindowContact>
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
        return "Mind::WindowContact";
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
"</Enum><Struct name=\"WindowContact\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numInput\"><Long/></Member><Member name=\"status\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"disabled\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8188);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_WindowContact__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_WindowContact__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::WindowContact>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::WindowContact>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::WindowContact)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Tamper>
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
        return "Mind::Tamper";
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
"</Enum><Struct name=\"Tamper\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numInput\"><Long/></Member><Member name=\"status\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"disabled\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8181);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Tamper__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Tamper__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Tamper>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Tamper>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Tamper)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::PIRContact>
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
        return "Mind::PIRContact";
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
"</Enum><Struct name=\"PIRContact\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numInput\"><Long/></Member><Member name=\"status\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"disabled\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8185);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_PIRContact__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_PIRContact__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::PIRContact>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::PIRContact>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::PIRContact)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::RollerShutter>
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
        return "Mind::RollerShutter";
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
"</Enum><Struct name=\"RollerShutter\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8187);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_RollerShutter__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_RollerShutter__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::RollerShutter>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::RollerShutter>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::RollerShutter)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Scuro>
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
        return "Mind::Scuro";
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
"</Enum><Struct name=\"Scuro\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8179);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Scuro__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Scuro__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Scuro>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Scuro>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Scuro)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Frangisole>
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
        return "Mind::Frangisole";
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
"</Enum><Struct name=\"Frangisole\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8184);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Frangisole__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Frangisole__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Frangisole>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Frangisole>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Frangisole)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Blinds>
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
        return "Mind::Blinds";
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
"</Enum><Struct name=\"Blinds\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8180);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Blinds__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Blinds__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Blinds>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Blinds>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Blinds)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Veneziana>
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
        return "Mind::Veneziana";
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
"</Enum><Struct name=\"Veneziana\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8183);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Veneziana__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Veneziana__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Veneziana>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Veneziana>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Veneziana)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Grata>
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
        return "Mind::Grata";
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
"</Enum><Struct name=\"Grata\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8179);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Grata__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Grata__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Grata>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Grata>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Grata)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Forno>
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
        return "Mind::Forno";
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
"</Enum><Struct name=\"Forno\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8179);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Forno__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Forno__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Forno>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Forno>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Forno)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::FornoMicroonde>
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
        return "Mind::FornoMicroonde";
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
"</Enum><Struct name=\"FornoMicroonde\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8188);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_FornoMicroonde__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_FornoMicroonde__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::FornoMicroonde>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::FornoMicroonde>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::FornoMicroonde)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Frigo>
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
        return "Mind::Frigo";
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
"</Enum><Struct name=\"Frigo\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8179);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Frigo__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Frigo__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Frigo>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Frigo>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Frigo)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Freezer>
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
        return "Mind::Freezer";
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
"</Enum><Struct name=\"Freezer\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8181);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Freezer__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Freezer__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Freezer>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Freezer>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Freezer)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CantinaVini>
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
        return "Mind::CantinaVini";
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
"</Enum><Struct name=\"CantinaVini\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8185);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CantinaVini__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CantinaVini__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CantinaVini>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CantinaVini>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CantinaVini)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::MacchinaCaffe>
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
        return "Mind::MacchinaCaffe";
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
"</Enum><Struct name=\"MacchinaCaffe\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8187);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_MacchinaCaffe__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_MacchinaCaffe__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::MacchinaCaffe>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::MacchinaCaffe>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::MacchinaCaffe)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::PianoCottura>
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
        return "Mind::PianoCottura";
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
"</Enum><Struct name=\"PianoCottura\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8186);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_PianoCottura__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_PianoCottura__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::PianoCottura>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::PianoCottura>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::PianoCottura)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Lavatrice>
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
        return "Mind::Lavatrice";
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
"</Enum><Struct name=\"Lavatrice\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8183);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Lavatrice__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Lavatrice__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Lavatrice>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Lavatrice>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Lavatrice)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Lavastoviglie>
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
        return "Mind::Lavastoviglie";
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
"</Enum><Struct name=\"Lavastoviglie\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8187);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Lavastoviglie__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Lavastoviglie__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Lavastoviglie>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Lavastoviglie>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Lavastoviglie)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Asciugatrice>
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
        return "Mind::Asciugatrice";
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
"</Enum><Struct name=\"Asciugatrice\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8186);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Asciugatrice__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Asciugatrice__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Asciugatrice>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Asciugatrice>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Asciugatrice)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ColonnettaTesla>
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
        return "Mind::ColonnettaTesla";
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
"</Enum><Struct name=\"ColonnettaTesla\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8189);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ColonnettaTesla__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ColonnettaTesla__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ColonnettaTesla>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ColonnettaTesla>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ColonnettaTesla)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Impianto>
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
        return "Mind::Impianto";
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
"</Enum><Struct name=\"Impianto\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8182);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Impianto__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Impianto__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Impianto>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Impianto>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Impianto)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::IrrigationPump>
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
        return "Mind::IrrigationPump";
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
"</Enum><Struct name=\"IrrigationPump\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8188);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_IrrigationPump__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_IrrigationPump__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::IrrigationPump>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::IrrigationPump>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::IrrigationPump)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Siren>
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
        return "Mind::Siren";
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
"</Enum><Struct name=\"Siren\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8179);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Siren__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Siren__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Siren>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Siren>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Siren)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CancelloCarraio>
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
        return "Mind::CancelloCarraio";
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
"</Enum><Struct name=\"CancelloCarraio\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8189);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CancelloCarraio__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CancelloCarraio__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CancelloCarraio>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CancelloCarraio>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CancelloCarraio)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CancelloPedonale>
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
        return "Mind::CancelloPedonale";
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
"</Enum><Struct name=\"CancelloPedonale\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8190);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CancelloPedonale__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CancelloPedonale__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CancelloPedonale>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CancelloPedonale>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CancelloPedonale)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CancelloGarage>
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
        return "Mind::CancelloGarage";
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
"</Enum><Struct name=\"CancelloGarage\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8188);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CancelloGarage__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CancelloGarage__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CancelloGarage>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CancelloGarage>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CancelloGarage)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::GasValve>
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
        return "Mind::GasValve";
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
"</Enum><Struct name=\"GasValve\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8182);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_GasValve__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_GasValve__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::GasValve>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::GasValve>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::GasValve)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::WaterValve>
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
        return "Mind::WaterValve";
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
"</Enum><Struct name=\"WaterValve\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8184);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_WaterValve__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_WaterValve__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::WaterValve>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::WaterValve>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::WaterValve)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::PompaRicircolo>
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
        return "Mind::PompaRicircolo";
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
"</Enum><Struct name=\"PompaRicircolo\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8188);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_PompaRicircolo__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_PompaRicircolo__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::PompaRicircolo>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::PompaRicircolo>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::PompaRicircolo)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Socket_16A>
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
        return "Mind::Socket_16A";
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
"</Enum><Struct name=\"Socket_16A\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8248);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Socket_16A__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Socket_16A__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Socket_16A>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Socket_16A>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Socket_16A)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Socket_5A>
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
        return "Mind::Socket_5A";
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
"</Enum><Struct name=\"Socket_5A\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"hasFilter\">",
"<Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\"><String/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8293);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Socket_5A__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Socket_5A__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Socket_5A>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Socket_5A>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Socket_5A)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::VoiceCommand>
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
        return "Mind::VoiceCommand";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"VoiceCommand\"><Member name=\"text\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(331);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_VoiceCommand__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_VoiceCommand__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::VoiceCommand>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::VoiceCommand>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::VoiceCommand)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::PresaMultimediale>
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
        return "Mind::PresaMultimediale";
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
"</Enum><Struct name=\"PresaMultimediale\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8191);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_PresaMultimediale__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_PresaMultimediale__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::PresaMultimediale>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::PresaMultimediale>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::PresaMultimediale)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::HarmonyMultimedia>
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
        return "Mind::HarmonyMultimedia";
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
"</Enum><Struct name=\"HarmonyMultimedia\"><Member name=\"UUID\"><String/></Member><Member name=\"IPAddress\">",
"<String/></Member><Member name=\"currentActivity\"><String/></Member><Member name=\"availableActivities\">",
"<Sequence><String/></Sequence></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"name\"><String/></Member><Member name=\"UUIDAmbience\"><String/></Member>",
"<Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8138);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_HarmonyMultimedia__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_HarmonyMultimedia__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::HarmonyMultimedia>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::HarmonyMultimedia>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::HarmonyMultimedia)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::MindSound>
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
        return "Mind::MindSound";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"MindSound\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"currentSound\"><String/></Member><Member name=\"enabled\"><Boolean/></Member>",
"<Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\">",
"<String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(420);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_MindSound__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_MindSound__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::MindSound>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::MindSound>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::MindSound)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Sonos>
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
        return "Mind::Sonos";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Enum name=\"TransportStatus\"><Element name=\"TRANSPORT_PLAY\" value=\"0\"/>",
"<Element name=\"TRANSPORT_PAUSE\" value=\"1\"/><Element name=\"TRANSPORT_STOP\" value=\"2\"/></Enum><Struct name=\"RenderingData\">",
"<Member name=\"volumeMaster\"><Long/></Member><Member name=\"volumeLF\"><Long/></Member><Member name=\"volumeRF\">",
"<Long/></Member><Member name=\"muteMaster\"><Boolean/></Member><Member name=\"muteLF\"><Boolean/></Member>",
"<Member name=\"muteRF\"><Boolean/></Member></Struct><Enum name=\"Category\"><Element name=\"CATEGORY_NONE\" value=\"0\"/>",
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
"</Enum><Struct name=\"TransportData\"><Member name=\"title\"><String/></Member><Member name=\"artist\">",
"<String/></Member><Member name=\"uri\"><String/></Member><Member name=\"queueSize\"><Long/></Member><Member name=\"currentTrackDuration\">",
"<String/></Member><Member name=\"CurrentTransportActions\"><String/></Member><Member name=\"status\">",
"<Type name=\"TransportStatus\"/></Member></Struct><Struct name=\"Sonos\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"zoneName\"><String/></Member><Member name=\"uri\"><String/></Member><Member name=\"coordinatorUUID\">",
"<String/></Member><Member name=\"transportData\"><Type name=\"TransportData\"/></Member><Member name=\"renderingData\">",
"<Type name=\"RenderingData\"/></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"enabled\">",
"<Boolean/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member>",
"<Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\">",
"<String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(9143);
        for (int i = 0; i < 74; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Sonos__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Sonos__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Sonos>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Sonos>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Sonos)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ProjectionScreen>
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
        return "Mind::ProjectionScreen";
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
"</Enum><Struct name=\"ProjectionScreen\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"status\"><Long/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"connected\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/>",
"</Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8190);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ProjectionScreen__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ProjectionScreen__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ProjectionScreen>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ProjectionScreen>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ProjectionScreen)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Citofono>
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
        return "Mind::Citofono";
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
"</Enum><Struct name=\"Citofono\"><Member name=\"UUID\"><String/></Member><Member name=\"IPAddress\"><String/>",
"</Member><Member name=\"description\"><String/></Member><Member name=\"status\"><Boolean/></Member><Member name=\"categories\">",
"<Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\"><String/></Member>",
"<Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8052);
        for (int i = 0; i < 65; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Citofono__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Citofono__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Citofono>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Citofono>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Citofono)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::FloodingSensor>
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
        return "Mind::FloodingSensor";
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
"</Enum><Struct name=\"FloodingSensor\"><Member name=\"UUID\"><String/></Member><Member name=\"IPAddress\">",
"<String/></Member><Member name=\"description\"><String/></Member><Member name=\"status\"><Boolean/></Member>",
"<Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8058);
        for (int i = 0; i < 65; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_FloodingSensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_FloodingSensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::FloodingSensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::FloodingSensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::FloodingSensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::EnvironmentalSensor>
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
        return "Mind::EnvironmentalSensor";
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
"</Enum><Struct name=\"EnvironmentalSensor\"><Member name=\"UUID\"><String/></Member><Member name=\"categories\">",
"<Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"temperature\"><Double/></Member>",
"<Member name=\"CO\"><Double/></Member><Member name=\"CO2\"><Double/></Member><Member name=\"humidity\">",
"<Double/></Member><Member name=\"VOC\"><Double/></Member><Member name=\"smoke\"><Double/></Member><Member name=\"timestamp\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8221);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_EnvironmentalSensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_EnvironmentalSensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::EnvironmentalSensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::EnvironmentalSensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::EnvironmentalSensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::VisionEnvironmentalSensor>
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
        return "Mind::VisionEnvironmentalSensor";
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
"</Enum><Struct name=\"VisionEnvironmentalSensor\"><Member name=\"UUID\"><String/></Member><Member name=\"categories\">",
"<Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"brightness\"><Double/></Member>",
"<Member name=\"motion\"><Double/></Member><Member name=\"timestamp\"><String/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8067);
        for (int i = 0; i < 65; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_VisionEnvironmentalSensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_VisionEnvironmentalSensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::VisionEnvironmentalSensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::VisionEnvironmentalSensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::VisionEnvironmentalSensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::VisionPeopleSensor>
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
        return "Mind::VisionPeopleSensor";
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
"</Enum><Struct name=\"VisionPeopleSensor\"><Member name=\"UUID\"><String/></Member><Member name=\"categories\">",
"<Sequence><Type name=\"Category\"/></Sequence></Member><Member name=\"peopleCount\"><Long/></Member><Member name=\"knownPeopleCount\">",
"<Long/></Member><Member name=\"unknownPeopleCount\"><Long/></Member><Member name=\"faceCount\"><Long/>",
"</Member><Member name=\"timestamp\"><String/></Member><Member name=\"UUIDAmbience\"><String/></Member>",
"<Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8162);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_VisionPeopleSensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_VisionPeopleSensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::VisionPeopleSensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::VisionPeopleSensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::VisionPeopleSensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::PowerSensor>
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
        return "Mind::PowerSensor";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"PowerSensor\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"consumption\"><Double/></Member><Member name=\"timestamp\"><String/>",
"</Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member>",
"<Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(422);
        for (int i = 0; i < 5; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_PowerSensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_PowerSensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::PowerSensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::PowerSensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::PowerSensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::BluetoothIdentitySensor>
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
        return "Mind::BluetoothIdentitySensor";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"BluetoothIdentitySensor\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"probability\"><Double/></Member><Member name=\"UUIDAmbience\"><String/>",
"</Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(389);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_BluetoothIdentitySensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_BluetoothIdentitySensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::BluetoothIdentitySensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::BluetoothIdentitySensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::BluetoothIdentitySensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::VisionIdentitySensor>
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
        return "Mind::VisionIdentitySensor";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"VisionIdentitySensor\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"probability\"><Double/></Member><Member name=\"UUIDAmbience\"><String/>",
"</Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(386);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_VisionIdentitySensor__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_VisionIdentitySensor__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::VisionIdentitySensor>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::VisionIdentitySensor>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::VisionIdentitySensor)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Thermostat>
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
        return "Mind::Thermostat";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"Thermostat\"><Member name=\"UUID\"><String/>",
"</Member><Member name=\"targetTemperature\"><Double/></Member><Member name=\"UUIDAmbience\"><String/>",
"</Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(382);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Thermostat__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Thermostat__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Thermostat>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Thermostat>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Thermostat)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CurrentWeather>
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
        return "Mind::CurrentWeather";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"CurrentWeather\"><Member name=\"referenceTimestamp\">",
"<Long/></Member><Member name=\"temperature\"><Double/></Member><Member name=\"pressure\"><Double/></Member>",
"<Member name=\"humidity\"><Double/></Member><Member name=\"windKph\"><Double/></Member><Member name=\"uv\">",
"<Double/></Member><Member name=\"cloudiness\"><Long/></Member><Member name=\"conditionCode\"><Long/></Member>",
"<Member name=\"conditionName\"><String/></Member><Member name=\"nextSunrise\"><String/></Member><Member name=\"nextSunset\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(612);
        for (int i = 0; i < 6; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CurrentWeather__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CurrentWeather__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CurrentWeather>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CurrentWeather>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CurrentWeather)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::HistoricalAndForecastedWeather>
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
        return "Mind::HistoricalAndForecastedWeather";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"DailyWeatherData\"><Member name=\"referenceTimestamp\">",
"<Long/></Member><Member name=\"maxTemperature\"><Double/></Member><Member name=\"temperature\"><Double/>",
"</Member><Member name=\"minTemperature\"><Double/></Member><Member name=\"precipMm\"><Double/></Member>",
"<Member name=\"conditionCode\"><Long/></Member><Member name=\"conditionName\"><String/></Member><Member name=\"uv\">",
"<Double/></Member></Struct><Struct name=\"HourlyWeatherData\"><Member name=\"referenceTimestamp\"><Long/>",
"</Member><Member name=\"windKph\"><Double/></Member><Member name=\"temperature\"><Double/></Member><Member name=\"rainChance\">",
"<Long/></Member><Member name=\"willItRain\"><Boolean/></Member><Member name=\"isDay\"><Boolean/></Member>",
"<Member name=\"conditionCode\"><Long/></Member><Member name=\"conditionName\"><String/></Member><Member name=\"cloudiness\">",
"<Long/></Member><Member name=\"precipMm\"><Double/></Member></Struct><Struct name=\"HistoricalAndForecastedWeather\">",
"<Member name=\"lastUpdateTimestamp\"><Long/></Member><Member name=\"tomorrow\"><Type name=\"DailyWeatherData\"/>",
"</Member><Member name=\"today\"><Type name=\"DailyWeatherData\"/></Member><Member name=\"yesterday\">",
"<Type name=\"DailyWeatherData\"/></Member><Member name=\"hourlyForecast\"><Sequence><Type name=\"HourlyWeatherData\"/>",
"</Sequence></Member><Member name=\"hourlyHistory\"><Sequence><Type name=\"HourlyWeatherData\"/></Sequence>",
"</Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(1496);
        for (int i = 0; i < 14; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_HistoricalAndForecastedWeather__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_HistoricalAndForecastedWeather__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::HistoricalAndForecastedWeather>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::HistoricalAndForecastedWeather>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::HistoricalAndForecastedWeather)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Caldaia>
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
        return "Mind::Caldaia";
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
"</Enum><Struct name=\"Caldaia\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\"><String/>",
"</Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8181);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Caldaia__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Caldaia__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Caldaia>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Caldaia>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Caldaia)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::PompaCalore>
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
        return "Mind::PompaCalore";
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
"</Enum><Struct name=\"PompaCalore\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddressOnOff\">",
"<String/></Member><Member name=\"numRelayOnOff\"><Long/></Member><Member name=\"MACAddressCF\"><String/>",
"</Member><Member name=\"numRelayCF\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connectedOnOff\"><Boolean/></Member><Member name=\"connectedCF\"><Boolean/>",
"</Member><Member name=\"statusOnOff\"><Boolean/></Member><Member name=\"statusCF\"><Boolean/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbience\">",
"<String/></Member><Member name=\"UUIDRoom\"><String/></Member><Member name=\"UUIDFloor\"><String/></Member>",
"<Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8393);
        for (int i = 0; i < 68; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_PompaCalore__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_PompaCalore__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::PompaCalore>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::PompaCalore>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::PompaCalore)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::FloorHeating>
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
        return "Mind::FloorHeating";
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
"</Enum><Struct name=\"FloorHeating\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbiences\">",
"<Sequence><String/></Sequence></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\">",
"<String/></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8256);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_FloorHeating__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_FloorHeating__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::FloorHeating>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::FloorHeating>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::FloorHeating)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::FanCoil>
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
        return "Mind::FanCoil";
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
"</Enum><Struct name=\"FanCoil\"><Member name=\"UUID\"><String/></Member><Member name=\"description\">",
"<String/></Member><Member name=\"MACAddressOnOff\"><String/></Member><Member name=\"numRelayOnOff\"><Long/>",
"</Member><Member name=\"MACAddressSpeed1\"><String/></Member><Member name=\"numRelaySpeed1\"><Long/></Member>",
"<Member name=\"MACAddressSpeed2\"><String/></Member><Member name=\"numRelaySpeed2\"><Long/></Member><Member name=\"MACAddressSpeed3\">",
"<String/></Member><Member name=\"numRelaySpeed3\"><Long/></Member><Member name=\"categories\"><Sequence>",
"<Type name=\"Category\"/></Sequence></Member><Member name=\"connectedOnOff\"><Boolean/></Member><Member name=\"connectedSpeed1\">",
"<Boolean/></Member><Member name=\"connectedSpeed2\"><Boolean/></Member><Member name=\"connectedSpeed3\">",
"<Boolean/></Member><Member name=\"statusOnOff\"><Long/></Member><Member name=\"statusSpeed1\"><Long/>",
"</Member><Member name=\"statusSpeed2\"><Long/></Member><Member name=\"statusSpeed3\"><Long/></Member>",
"<Member name=\"blocked\"><Boolean/></Member><Member name=\"UUIDAmbiences\"><Sequence><String/></Sequence>",
"</Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/></Member>",
"<Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8865);
        for (int i = 0; i < 73; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_FanCoil__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_FanCoil__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::FanCoil>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::FanCoil>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::FanCoil)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::CoolingFan>
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
        return "Mind::CoolingFan";
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
"</Enum><Struct name=\"CoolingFan\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddress\">",
"<String/></Member><Member name=\"numRelay\"><Long/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/>",
"</Sequence></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\"><Long/></Member>",
"<Member name=\"description\"><String/></Member><Member name=\"blocked\"><Boolean/></Member><Member name=\"physicalLocationUUIDAmbience\">",
"<String/></Member><Member name=\"UUIDAmbience\"><String/></Member><Member name=\"UUIDRoom\"><String/>",
"</Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\"><String/></Member></Struct>",
"</Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8248);
        for (int i = 0; i < 67; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_CoolingFan__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_CoolingFan__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::CoolingFan>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::CoolingFan>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::CoolingFan)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::HarmonySplit>
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
        return "Mind::HarmonySplit";
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
"</Enum><Struct name=\"HarmonySplit\"><Member name=\"UUID\"><String/></Member><Member name=\"IPAddress\">",
"<String/></Member><Member name=\"description\"><String/></Member><Member name=\"categories\"><Sequence>",
"<Type name=\"Category\"/></Sequence></Member><Member name=\"temperature\"><Long/></Member><Member name=\"deumidifica\">",
"<Boolean/></Member><Member name=\"speed\"><Long/></Member><Member name=\"airOrientation\"><Long/></Member>",
"<Member name=\"UUIDAmbience\"><Sequence><String/></Sequence></Member><Member name=\"UUIDFloor\"><String/>",
"</Member><Member name=\"UUIDHouse\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8170);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_HarmonySplit__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_HarmonySplit__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::HarmonySplit>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::HarmonySplit>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::HarmonySplit)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::Termosifone>
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
        return "Mind::Termosifone";
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
"</Enum><Struct name=\"Termosifone\"><Member name=\"UUID\"><String/></Member><Member name=\"MACAddressBT\">",
"<String/></Member><Member name=\"categories\"><Sequence><Type name=\"Category\"/></Sequence></Member>",
"<Member name=\"batteryStatus\"><Double/></Member><Member name=\"connected\"><Boolean/></Member><Member name=\"status\">",
"<Boolean/></Member><Member name=\"description\"><String/></Member><Member name=\"UUIDAmbience\"><Sequence>",
"<String/></Sequence></Member><Member name=\"UUIDFloor\"><String/></Member><Member name=\"UUIDHouse\">",
"<String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(8130);
        for (int i = 0; i < 66; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_Termosifone__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_Termosifone__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::Termosifone>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::Termosifone>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::Termosifone)

#endif /* ISOCPP2_ITEMS_H */
