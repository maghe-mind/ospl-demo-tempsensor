#ifndef SMARTCOMMANDSPLTYPES_H
#define SMARTCOMMANDSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "SmartCommand_DCPS.hpp"
#include "Commons_DCPS.hpp"



extern c_metaObject __SmartCommand_Mind__load (c_base base);

extern const char *Mind_SmartCommand_metaDescriptor[];
extern const int Mind_SmartCommand_metaDescriptorArrLength;
extern const int Mind_SmartCommand_metaDescriptorLength;
extern c_metaObject __Mind_SmartCommand__load (c_base base);
struct _Mind_SmartCommand ;
extern  v_copyin_result __Mind_SmartCommand__copyIn(c_base base, const class Mind::SmartCommand *from, struct _Mind_SmartCommand *to);
extern  void __Mind_SmartCommand__copyOut(const void *_from, void *_to);
struct _Mind_SmartCommand {
    enum _Mind_SmartCommandType commandType;
    c_long position;
};

extern const char *Mind_Ambience_SmartCommandSettings_metaDescriptor[];
extern const int Mind_Ambience_SmartCommandSettings_metaDescriptorArrLength;
extern const int Mind_Ambience_SmartCommandSettings_metaDescriptorLength;
extern c_metaObject __Mind_Ambience_SmartCommandSettings__load (c_base base);
struct _Mind_Ambience_SmartCommandSettings ;
extern  v_copyin_result __Mind_Ambience_SmartCommandSettings__copyIn(c_base base, const class Mind::Ambience_SmartCommandSettings *from, struct _Mind_Ambience_SmartCommandSettings *to);
extern  void __Mind_Ambience_SmartCommandSettings__copyOut(const void *_from, void *_to);
struct _Mind_Ambience_SmartCommandSettings {
    c_sequence smartCommands;
    c_string UUIDAmbience;
};

extern const char *Mind_Command_Trigger_SmartCommand_metaDescriptor[];
extern const int Mind_Command_Trigger_SmartCommand_metaDescriptorArrLength;
extern const int Mind_Command_Trigger_SmartCommand_metaDescriptorLength;
extern c_metaObject __Mind_Command_Trigger_SmartCommand__load (c_base base);
struct _Mind_Command_Trigger_SmartCommand ;
extern  v_copyin_result __Mind_Command_Trigger_SmartCommand__copyIn(c_base base, const class Mind::Command_Trigger_SmartCommand *from, struct _Mind_Command_Trigger_SmartCommand *to);
extern  void __Mind_Command_Trigger_SmartCommand__copyOut(const void *_from, void *_to);
struct _Mind_Command_Trigger_SmartCommand {
    enum _Mind_SmartCommandType smartCommand;
    c_string command;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

#undef OS_API
#endif
