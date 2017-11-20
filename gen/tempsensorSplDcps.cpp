#include "tempsensor_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__TempSensorType__copyIn(
    c_base base,
    const class TempSensorType *from,
    struct _TempSensorType *to)
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
    to->temp = (c_float)from->temp_;
    to->hum = (c_float)from->hum_;
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->scale_) >= 0) && (((c_long)from->scale_) < 3) ){
        to->scale = (enum _TemperatureScale)from->scale_;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'TempSensorType.scale' of type 'TemperatureScale' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->scale = (enum _TemperatureScale)from->scale_;
#endif
    return result;
}

void
__TempSensorType__copyOut(
    const void *_from,
    void *_to)
{
    const struct _TempSensorType *from = (const struct _TempSensorType *)_from;
    class TempSensorType *to = (class TempSensorType *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->temp((float)from->temp);
    to->hum((float)from->hum);
    to->scale((TemperatureScale)from->scale);
}

