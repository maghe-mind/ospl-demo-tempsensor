#ifndef ROOMSPLTYPES_H
#define ROOMSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Room_DCPS.hpp"


extern c_metaObject __Room_Mind__load (c_base base);

extern const char *Mind_Room_metaDescriptor[];
extern const int Mind_Room_metaDescriptorArrLength;
extern const int Mind_Room_metaDescriptorLength;
extern c_metaObject __Mind_Room__load (c_base base);
struct _Mind_Room ;
extern  v_copyin_result __Mind_Room__copyIn(c_base base, const class Mind::Room *from, struct _Mind_Room *to);
extern  void __Mind_Room__copyOut(const void *_from, void *_to);
struct _Mind_Room {
    c_string UUID;
    c_string UUIDFloor;
    c_string UUIDHouse;
    c_string name;
    c_bool temperatureControl;
    c_double manualTemperatureTarget;
    c_double targetTemperatureDayWinter;
    c_double targetTemperatureNightWinter;
    c_double targetTemperatureDaySummer;
    c_double targetTemperatureNightSummer;
};

extern const char *Mind_Room_Command_metaDescriptor[];
extern const int Mind_Room_Command_metaDescriptorArrLength;
extern const int Mind_Room_Command_metaDescriptorLength;
extern c_metaObject __Mind_Room_Command__load (c_base base);
struct _Mind_Room_Command ;
extern  v_copyin_result __Mind_Room_Command__copyIn(c_base base, const class Mind::Room_Command *from, struct _Mind_Room_Command *to);
extern  void __Mind_Room_Command__copyOut(const void *_from, void *_to);
struct _Mind_Room_Command {
    c_string UUID;
    c_string property;
    c_string value;
    c_string UUIDRoom;
};

#undef OS_API
#endif
