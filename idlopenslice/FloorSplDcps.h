#ifndef FLOORSPLTYPES_H
#define FLOORSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Floor_DCPS.hpp"


extern c_metaObject __Floor_Mind__load (c_base base);

extern const char *Mind_Floor_metaDescriptor[];
extern const int Mind_Floor_metaDescriptorArrLength;
extern const int Mind_Floor_metaDescriptorLength;
extern c_metaObject __Mind_Floor__load (c_base base);
struct _Mind_Floor ;
extern  v_copyin_result __Mind_Floor__copyIn(c_base base, const class Mind::Floor *from, struct _Mind_Floor *to);
extern  void __Mind_Floor__copyOut(const void *_from, void *_to);
struct _Mind_Floor {
    c_string UUID;
    c_string UUIDHouse;
    c_string name;
    c_long number;
};

extern const char *Mind_Floor_Command_metaDescriptor[];
extern const int Mind_Floor_Command_metaDescriptorArrLength;
extern const int Mind_Floor_Command_metaDescriptorLength;
extern c_metaObject __Mind_Floor_Command__load (c_base base);
struct _Mind_Floor_Command ;
extern  v_copyin_result __Mind_Floor_Command__copyIn(c_base base, const class Mind::Floor_Command *from, struct _Mind_Floor_Command *to);
extern  void __Mind_Floor_Command__copyOut(const void *_from, void *_to);
struct _Mind_Floor_Command {
    c_string property;
    c_string value;
    c_string UUIDFloor;
};

#undef OS_API
#endif
