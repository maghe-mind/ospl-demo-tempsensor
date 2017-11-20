#ifndef TEMPSENSORSPLTYPES_H
#define TEMPSENSORSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "tempsensor_DCPS.hpp"


extern c_metaObject __TemperatureScale__load (c_base base);
enum _TemperatureScale {
    _CELSIUS,
    _KELVIN,
    _FAHRENHEIT
};

extern const char *TempSensorType_metaDescriptor[];
extern const int TempSensorType_metaDescriptorArrLength;
extern const int TempSensorType_metaDescriptorLength;
extern c_metaObject __TempSensorType__load (c_base base);
struct _TempSensorType ;
extern  v_copyin_result __TempSensorType__copyIn(c_base base, const class TempSensorType *from, struct _TempSensorType *to);
extern  void __TempSensorType__copyOut(const void *_from, void *_to);
struct _TempSensorType {
    c_string UUID;
    c_float temp;
    c_float hum;
    enum _TemperatureScale scale;
};

#undef OS_API
#endif
