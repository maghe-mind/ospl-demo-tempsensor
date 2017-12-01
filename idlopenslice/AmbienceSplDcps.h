#ifndef AMBIENCESPLTYPES_H
#define AMBIENCESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Ambience_DCPS.hpp"
#include "Commons_DCPS.hpp"



extern c_metaObject __Ambience_Mind__load (c_base base);

extern const char *Mind_Ambience_metaDescriptor[];
extern const int Mind_Ambience_metaDescriptorArrLength;
extern const int Mind_Ambience_metaDescriptorLength;
extern c_metaObject __Mind_Ambience__load (c_base base);
struct _Mind_Ambience ;
extern  v_copyin_result __Mind_Ambience__copyIn(c_base base, const class Mind::Ambience *from, struct _Mind_Ambience *to);
extern  void __Mind_Ambience__copyOut(const void *_from, void *_to);
struct _Mind_Ambience {
    c_string UUID;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
    enum _Mind_AmbienceType type;
    c_string name;
    c_sequence adjacentAmbiences;
    c_sequence adjacentAmbiencesOtherFloors;
    c_bool shadowed;
    c_bool entrance;
    c_bool secured;
    c_long bonusPeopleCount;
    enum _Mind_StateName currentState;
    c_string currentMoment;
};

extern const char *Mind_Ambience_Command_Start_Moment_metaDescriptor[];
extern const int Mind_Ambience_Command_Start_Moment_metaDescriptorArrLength;
extern const int Mind_Ambience_Command_Start_Moment_metaDescriptorLength;
extern c_metaObject __Mind_Ambience_Command_Start_Moment__load (c_base base);
struct _Mind_Ambience_Command_Start_Moment ;
extern  v_copyin_result __Mind_Ambience_Command_Start_Moment__copyIn(c_base base, const class Mind::Ambience_Command_Start_Moment *from, struct _Mind_Ambience_Command_Start_Moment *to);
extern  void __Mind_Ambience_Command_Start_Moment__copyOut(const void *_from, void *_to);
struct _Mind_Ambience_Command_Start_Moment {
    c_string moment;
    c_string timestamp;
    c_string UUIDAmbience;
};

extern const char *Mind_Ambience_Command_metaDescriptor[];
extern const int Mind_Ambience_Command_metaDescriptorArrLength;
extern const int Mind_Ambience_Command_metaDescriptorLength;
extern c_metaObject __Mind_Ambience_Command__load (c_base base);
struct _Mind_Ambience_Command ;
extern  v_copyin_result __Mind_Ambience_Command__copyIn(c_base base, const class Mind::Ambience_Command *from, struct _Mind_Ambience_Command *to);
extern  void __Mind_Ambience_Command__copyOut(const void *_from, void *_to);
struct _Mind_Ambience_Command {
    c_string property;
    c_string value;
    c_string UUIDAmbience;
};

#undef OS_API
#endif
