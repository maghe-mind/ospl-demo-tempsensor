#ifndef CONFIGURATIONSPLTYPES_H
#define CONFIGURATIONSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Configuration_DCPS.hpp"
#include "Commons_DCPS.hpp"



extern c_metaObject __Configuration_Mind__load (c_base base);

extern const char *Mind_VirtualItem_metaDescriptor[];
extern const int Mind_VirtualItem_metaDescriptorArrLength;
extern const int Mind_VirtualItem_metaDescriptorLength;
extern c_metaObject __Mind_VirtualItem__load (c_base base);
struct _Mind_VirtualItem ;
extern  v_copyin_result __Mind_VirtualItem__copyIn(c_base base, const class Mind::VirtualItem *from, struct _Mind_VirtualItem *to);
extern  void __Mind_VirtualItem__copyOut(const void *_from, void *_to);
struct _Mind_VirtualItem {
    enum _Mind_Category category;
    enum _Mind_VirtualItemLocation location;
    c_long GID;
    c_long priority;
    c_string value;
    c_bool enabled;
    c_long delay;
    c_sequence triggers;
};

extern const char *Mind_ConfiguredItem_metaDescriptor[];
extern const int Mind_ConfiguredItem_metaDescriptorArrLength;
extern const int Mind_ConfiguredItem_metaDescriptorLength;
extern c_metaObject __Mind_ConfiguredItem__load (c_base base);
struct _Mind_ConfiguredItem ;
extern  v_copyin_result __Mind_ConfiguredItem__copyIn(c_base base, const class Mind::ConfiguredItem *from, struct _Mind_ConfiguredItem *to);
extern  void __Mind_ConfiguredItem__copyOut(const void *_from, void *_to);
struct _Mind_ConfiguredItem {
    c_string UUIDItem;
    enum _Mind_Category category;
    c_string value;
    c_long delay;
};

extern const char *Mind_Configuration_metaDescriptor[];
extern const int Mind_Configuration_metaDescriptorArrLength;
extern const int Mind_Configuration_metaDescriptorLength;
extern c_metaObject __Mind_Configuration__load (c_base base);
struct _Mind_Configuration ;
extern  v_copyin_result __Mind_Configuration__copyIn(c_base base, const class Mind::Configuration *from, struct _Mind_Configuration *to);
extern  void __Mind_Configuration__copyOut(const void *_from, void *_to);
struct _Mind_Configuration {
    c_string UUID;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
    c_string name;
    enum _Mind_ConfigurationType activeItemConfiguration;
    c_sequence configurationTriggers;
    c_sequence defaultVirtualItems;
    c_sequence preferredVirtualItems;
    c_sequence learnedVirtualItems;
    c_sequence defaultConfiguredItems;
    c_sequence preferredConfiguredItems;
    c_sequence learnedConfiguredItems;
};

extern const char *Mind_Configuration_Command_Set_Active_Item_Configuration_metaDescriptor[];
extern const int Mind_Configuration_Command_Set_Active_Item_Configuration_metaDescriptorArrLength;
extern const int Mind_Configuration_Command_Set_Active_Item_Configuration_metaDescriptorLength;
extern c_metaObject __Mind_Configuration_Command_Set_Active_Item_Configuration__load (c_base base);
struct _Mind_Configuration_Command_Set_Active_Item_Configuration ;
extern  v_copyin_result __Mind_Configuration_Command_Set_Active_Item_Configuration__copyIn(c_base base, const class Mind::Configuration_Command_Set_Active_Item_Configuration *from, struct _Mind_Configuration_Command_Set_Active_Item_Configuration *to);
extern  void __Mind_Configuration_Command_Set_Active_Item_Configuration__copyOut(const void *_from, void *_to);
struct _Mind_Configuration_Command_Set_Active_Item_Configuration {
    c_string UUID;
    enum _Mind_ConfigurationType activeItemConfiguration;
};

extern const char *Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration_metaDescriptor[];
extern const int Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration_metaDescriptorArrLength;
extern const int Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration_metaDescriptorLength;
extern c_metaObject __Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration__load (c_base base);
struct _Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration ;
extern  v_copyin_result __Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration__copyIn(c_base base, const class Mind::Configuration_Command_Set_Preferred_Virtual_Items_Configuration *from, struct _Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration *to);
extern  void __Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration__copyOut(const void *_from, void *_to);
struct _Mind_Configuration_Command_Set_Preferred_Virtual_Items_Configuration {
    c_string UUID;
    c_sequence preferredVirtualItems;
};

extern const char *Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration_metaDescriptor[];
extern const int Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration_metaDescriptorArrLength;
extern const int Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration_metaDescriptorLength;
extern c_metaObject __Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration__load (c_base base);
struct _Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration ;
extern  v_copyin_result __Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration__copyIn(c_base base, const class Mind::Configuration_Command_Set_Preferred_Configured_Items_Configuration *from, struct _Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration *to);
extern  void __Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration__copyOut(const void *_from, void *_to);
struct _Mind_Configuration_Command_Set_Preferred_Configured_Items_Configuration {
    c_string UUID;
    c_sequence preferredConfiguredItems;
};

#undef OS_API
#endif
