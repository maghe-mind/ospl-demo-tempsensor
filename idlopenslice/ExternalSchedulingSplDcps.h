#ifndef EXTERNALSCHEDULINGSPLTYPES_H
#define EXTERNALSCHEDULINGSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ExternalScheduling_DCPS.hpp"


extern c_metaObject __ExternalScheduling_Mind__load (c_base base);

extern const char *Mind_IrrigationScheduleItem_metaDescriptor[];
extern const int Mind_IrrigationScheduleItem_metaDescriptorArrLength;
extern const int Mind_IrrigationScheduleItem_metaDescriptorLength;
extern c_metaObject __Mind_IrrigationScheduleItem__load (c_base base);
struct _Mind_IrrigationScheduleItem ;
extern  v_copyin_result __Mind_IrrigationScheduleItem__copyIn(c_base base, const class Mind::IrrigationScheduleItem *from, struct _Mind_IrrigationScheduleItem *to);
extern  void __Mind_IrrigationScheduleItem__copyOut(const void *_from, void *_to);
struct _Mind_IrrigationScheduleItem {
    c_string name;
    c_string dailyMask;
    c_string timeStart;
    c_string timeEnd;
    c_sequence pumps;
};

extern const char *Mind_IrrigationSchedule_metaDescriptor[];
extern const int Mind_IrrigationSchedule_metaDescriptorArrLength;
extern const int Mind_IrrigationSchedule_metaDescriptorLength;
extern c_metaObject __Mind_IrrigationSchedule__load (c_base base);
struct _Mind_IrrigationSchedule ;
extern  v_copyin_result __Mind_IrrigationSchedule__copyIn(c_base base, const class Mind::IrrigationSchedule *from, struct _Mind_IrrigationSchedule *to);
extern  void __Mind_IrrigationSchedule__copyOut(const void *_from, void *_to);
struct _Mind_IrrigationSchedule {
    c_string UUID;
    c_string name;
    c_string monthlyMask;
    c_bool automatic;
    c_sequence scheduleItems;
};

extern const char *Mind_ExternalLightsSchedule_metaDescriptor[];
extern const int Mind_ExternalLightsSchedule_metaDescriptorArrLength;
extern const int Mind_ExternalLightsSchedule_metaDescriptorLength;
extern c_metaObject __Mind_ExternalLightsSchedule__load (c_base base);
struct _Mind_ExternalLightsSchedule ;
extern  v_copyin_result __Mind_ExternalLightsSchedule__copyIn(c_base base, const class Mind::ExternalLightsSchedule *from, struct _Mind_ExternalLightsSchedule *to);
extern  void __Mind_ExternalLightsSchedule__copyOut(const void *_from, void *_to);
struct _Mind_ExternalLightsSchedule {
    c_string UUID;
    c_string name;
    c_string timeStart;
    c_string timeEnd;
    c_bool automatic;
    c_sequence diffLights;
};

#undef OS_API
#endif
