#ifndef ISOCPP2_EXTERNALSCHEDULING_H
#define ISOCPP2_EXTERNALSCHEDULING_H

#include "dds/dds.hpp"

#include "ExternalScheduling.h"
#include "ExternalSchedulingSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::IrrigationSchedule>
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
        return "Mind::IrrigationSchedule";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"IrrigationScheduleItem\"><Member name=\"name\">",
"<String/></Member><Member name=\"dailyMask\"><String/></Member><Member name=\"timeStart\"><String/></Member>",
"<Member name=\"timeEnd\"><String/></Member><Member name=\"pumps\"><Sequence><String/></Sequence></Member>",
"</Struct><Struct name=\"IrrigationSchedule\"><Member name=\"UUID\"><String/></Member><Member name=\"name\">",
"<String/></Member><Member name=\"monthlyMask\"><String/></Member><Member name=\"automatic\"><Boolean/>",
"</Member><Member name=\"scheduleItems\"><Sequence><Type name=\"IrrigationScheduleItem\"/></Sequence></Member>",
"</Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(672);
        for (int i = 0; i < 7; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_IrrigationSchedule__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_IrrigationSchedule__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::IrrigationSchedule>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::IrrigationSchedule>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::IrrigationSchedule)

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<Mind::ExternalLightsSchedule>
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
        return "Mind::ExternalLightsSchedule";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"Mind\"><Struct name=\"ExternalLightsSchedule\"><Member name=\"UUID\">",
"<String/></Member><Member name=\"name\"><String/></Member><Member name=\"timeStart\"><String/></Member>",
"<Member name=\"timeEnd\"><String/></Member><Member name=\"automatic\"><Boolean/></Member><Member name=\"diffLights\">",
"<Sequence><String/></Sequence></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(400);
        for (int i = 0; i < 4; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __Mind_ExternalLightsSchedule__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __Mind_ExternalLightsSchedule__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<Mind::ExternalLightsSchedule>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<Mind::ExternalLightsSchedule>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(Mind::ExternalLightsSchedule)

#endif /* ISOCPP2_EXTERNALSCHEDULING_H */
