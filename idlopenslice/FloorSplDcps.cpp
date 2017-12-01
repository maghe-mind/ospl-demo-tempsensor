#include "Floor_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__Mind_Floor__copyIn(
    c_base base,
    const class ::Mind::Floor *from,
    struct _Mind_Floor *to)
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
    to->number = (c_long)from->number_;
    return result;
}

v_copyin_result
__Mind_Floor_Command__copyIn(
    c_base base,
    const class ::Mind::Floor_Command *from,
    struct _Mind_Floor_Command *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

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
    return result;
}

void
__Mind_Floor__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Floor *from = (const struct _Mind_Floor *)_from;
    class ::Mind::Floor *to = (class ::Mind::Floor *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->UUIDHouse(from->UUIDHouse ? from->UUIDHouse : "");
    to->name(from->name ? from->name : "");
    to->number((int32_t)from->number);
}

void
__Mind_Floor_Command__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Floor_Command *from = (const struct _Mind_Floor_Command *)_from;
    class ::Mind::Floor_Command *to = (class ::Mind::Floor_Command *)_to;
    to->property(from->property ? from->property : "");
    to->value(from->value ? from->value : "");
    to->UUIDFloor(from->UUIDFloor ? from->UUIDFloor : "");
}

