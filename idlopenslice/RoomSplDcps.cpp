#include "Room_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__Mind_Room__copyIn(
    c_base base,
    const class ::Mind::Room *from,
    struct _Mind_Room *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->UUID = c_stringNew_s(base, from->UUID_.c_str());
        if(to->UUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUID = c_stringNew_s(base, from->UUID_.c_str());
            if(to->UUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->UUIDFloor = c_stringNew_s(base, from->UUIDFloor_.c_str());
        if(to->UUIDFloor == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUIDFloor = c_stringNew_s(base, from->UUIDFloor_.c_str());
            if(to->UUIDFloor == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->UUIDHouse = c_stringNew_s(base, from->UUIDHouse_.c_str());
        if(to->UUIDHouse == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUIDHouse = c_stringNew_s(base, from->UUIDHouse_.c_str());
            if(to->UUIDHouse == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->name = c_stringNew_s(base, from->name_.c_str());
        if(to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->name = c_stringNew_s(base, from->name_.c_str());
            if(to->name == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->temperatureControl = (c_bool)from->temperatureControl_;
    to->manualTemperatureTarget = (c_double)from->manualTemperatureTarget_;
    to->targetTemperatureDayWinter = (c_double)from->targetTemperatureDayWinter_;
    to->targetTemperatureNightWinter = (c_double)from->targetTemperatureNightWinter_;
    to->targetTemperatureDaySummer = (c_double)from->targetTemperatureDaySummer_;
    to->targetTemperatureNightSummer = (c_double)from->targetTemperatureNightSummer_;
    return result;
}

v_copyin_result
__Mind_Room_Command__copyIn(
    c_base base,
    const class ::Mind::Room_Command *from,
    struct _Mind_Room_Command *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->UUID = c_stringNew_s(base, from->UUID_.c_str());
        if(to->UUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUID = c_stringNew_s(base, from->UUID_.c_str());
            if(to->UUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->property = c_stringNew_s(base, from->property_.c_str());
        if(to->property == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->property = c_stringNew_s(base, from->property_.c_str());
            if(to->property == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->value = c_stringNew_s(base, from->value_.c_str());
        if(to->value == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->value = c_stringNew_s(base, from->value_.c_str());
            if(to->value == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->UUIDRoom = c_stringNew_s(base, from->UUIDRoom_.c_str());
        if(to->UUIDRoom == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUIDRoom = c_stringNew_s(base, from->UUIDRoom_.c_str());
            if(to->UUIDRoom == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    return result;
}

void
__Mind_Room__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Room *from = (const struct _Mind_Room *)_from;
    class ::Mind::Room *to = (class ::Mind::Room *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->UUIDFloor(from->UUIDFloor ? from->UUIDFloor : "");
    to->UUIDHouse(from->UUIDHouse ? from->UUIDHouse : "");
    to->name(from->name ? from->name : "");
    to->temperatureControl((bool)from->temperatureControl);
    to->manualTemperatureTarget((double)from->manualTemperatureTarget);
    to->targetTemperatureDayWinter((double)from->targetTemperatureDayWinter);
    to->targetTemperatureNightWinter((double)from->targetTemperatureNightWinter);
    to->targetTemperatureDaySummer((double)from->targetTemperatureDaySummer);
    to->targetTemperatureNightSummer((double)from->targetTemperatureNightSummer);
}

void
__Mind_Room_Command__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Room_Command *from = (const struct _Mind_Room_Command *)_from;
    class ::Mind::Room_Command *to = (class ::Mind::Room_Command *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->property(from->property ? from->property : "");
    to->value(from->value ? from->value : "");
    to->UUIDRoom(from->UUIDRoom ? from->UUIDRoom : "");
}

