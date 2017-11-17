#ifndef ITEMSSPLTYPES_H
#define ITEMSSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Items_DCPS.hpp"
#include "Commons_DCPS.hpp"



extern c_metaObject __Items_Mind__load (c_base base);

extern const char *Mind_User_Command_metaDescriptor[];
extern const int Mind_User_Command_metaDescriptorArrLength;
extern const int Mind_User_Command_metaDescriptorLength;
extern c_metaObject __Mind_User_Command__load (c_base base);
struct _Mind_User_Command ;
extern  v_copyin_result __Mind_User_Command__copyIn(c_base base, const class Mind::User_Command *from, struct _Mind_User_Command *to);
extern  void __Mind_User_Command__copyOut(const void *_from, void *_to);
struct _Mind_User_Command {
    c_string UUID;
    enum _Mind_Category itemCategory;
    c_string command;
};

extern const char *Mind_Item_Command_metaDescriptor[];
extern const int Mind_Item_Command_metaDescriptorArrLength;
extern const int Mind_Item_Command_metaDescriptorLength;
extern c_metaObject __Mind_Item_Command__load (c_base base);
struct _Mind_Item_Command ;
extern  v_copyin_result __Mind_Item_Command__copyIn(c_base base, const class Mind::Item_Command *from, struct _Mind_Item_Command *to);
extern  void __Mind_Item_Command__copyOut(const void *_from, void *_to);
struct _Mind_Item_Command {
    c_string UUID;
    enum _Mind_Category itemCategory;
    c_string command;
};

extern const char *Mind_Actuation_Command_metaDescriptor[];
extern const int Mind_Actuation_Command_metaDescriptorArrLength;
extern const int Mind_Actuation_Command_metaDescriptorLength;
extern c_metaObject __Mind_Actuation_Command__load (c_base base);
struct _Mind_Actuation_Command ;
extern  v_copyin_result __Mind_Actuation_Command__copyIn(c_base base, const class Mind::Actuation_Command *from, struct _Mind_Actuation_Command *to);
extern  void __Mind_Actuation_Command__copyOut(const void *_from, void *_to);
struct _Mind_Actuation_Command {
    c_string UUID;
    c_sequence commands;
};

extern const char *Mind_Item_Command_Update_Category_metaDescriptor[];
extern const int Mind_Item_Command_Update_Category_metaDescriptorArrLength;
extern const int Mind_Item_Command_Update_Category_metaDescriptorLength;
extern c_metaObject __Mind_Item_Command_Update_Category__load (c_base base);
struct _Mind_Item_Command_Update_Category ;
extern  v_copyin_result __Mind_Item_Command_Update_Category__copyIn(c_base base, const class Mind::Item_Command_Update_Category *from, struct _Mind_Item_Command_Update_Category *to);
extern  void __Mind_Item_Command_Update_Category__copyOut(const void *_from, void *_to);
struct _Mind_Item_Command_Update_Category {
    c_string UUID;
    enum _Mind_Category itemCategory;
    c_string command;
};

extern const char *Mind_Item_Consumption_metaDescriptor[];
extern const int Mind_Item_Consumption_metaDescriptorArrLength;
extern const int Mind_Item_Consumption_metaDescriptorLength;
extern c_metaObject __Mind_Item_Consumption__load (c_base base);
struct _Mind_Item_Consumption ;
extern  v_copyin_result __Mind_Item_Consumption__copyIn(c_base base, const class Mind::Item_Consumption *from, struct _Mind_Item_Consumption *to);
extern  void __Mind_Item_Consumption__copyOut(const void *_from, void *_to);
struct _Mind_Item_Consumption {
    c_string UUID;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
    enum _Mind_Category itemCategory;
    c_double power;
    c_double energy;
    c_long timestamp;
};

extern const char *Mind_ExtractorFan_metaDescriptor[];
extern const int Mind_ExtractorFan_metaDescriptorArrLength;
extern const int Mind_ExtractorFan_metaDescriptorLength;
extern c_metaObject __Mind_ExtractorFan__load (c_base base);
struct _Mind_ExtractorFan ;
extern  v_copyin_result __Mind_ExtractorFan__copyIn(c_base base, const class Mind::ExtractorFan *from, struct _Mind_ExtractorFan *to);
extern  void __Mind_ExtractorFan__copyOut(const void *_from, void *_to);
struct _Mind_ExtractorFan {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_VMC_metaDescriptor[];
extern const int Mind_VMC_metaDescriptorArrLength;
extern const int Mind_VMC_metaDescriptorLength;
extern c_metaObject __Mind_VMC__load (c_base base);
struct _Mind_VMC ;
extern  v_copyin_result __Mind_VMC__copyIn(c_base base, const class Mind::VMC *from, struct _Mind_VMC *to);
extern  void __Mind_VMC__copyOut(const void *_from, void *_to);
struct _Mind_VMC {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CappaAspirazione_metaDescriptor[];
extern const int Mind_CappaAspirazione_metaDescriptorArrLength;
extern const int Mind_CappaAspirazione_metaDescriptorLength;
extern c_metaObject __Mind_CappaAspirazione__load (c_base base);
struct _Mind_CappaAspirazione ;
extern  v_copyin_result __Mind_CappaAspirazione__copyIn(c_base base, const class Mind::CappaAspirazione *from, struct _Mind_CappaAspirazione *to);
extern  void __Mind_CappaAspirazione__copyOut(const void *_from, void *_to);
struct _Mind_CappaAspirazione {
    c_string UUID;
    c_string MACAddressOnOff;
    c_long numRelayOnOff;
    c_string MACAddressLight;
    c_long numRelayLight;
    c_string MACAddressSpeed1;
    c_long numRelaySpeed1;
    c_string MACAddressSpeed2;
    c_long numRelaySpeed2;
    c_string MACAddressSpeed3;
    c_long numRelaySpeed3;
    c_sequence categories;
    c_bool connectedOnOff;
    c_bool connectedLight;
    c_bool connectedSpeed1;
    c_bool connectedSpeed2;
    c_bool connectedSpeed3;
    c_long statusOnOff;
    c_long statusLight;
    c_long statusSpeed1;
    c_long statusSpeed2;
    c_long statusSpeed3;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Light_metaDescriptor[];
extern const int Mind_Light_metaDescriptorArrLength;
extern const int Mind_Light_metaDescriptorLength;
extern c_metaObject __Mind_Light__load (c_base base);
struct _Mind_Light ;
extern  v_copyin_result __Mind_Light__copyIn(c_base base, const class Mind::Light *from, struct _Mind_Light *to);
extern  void __Mind_Light__copyOut(const void *_from, void *_to);
struct _Mind_Light {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_LightDimmable_metaDescriptor[];
extern const int Mind_LightDimmable_metaDescriptorArrLength;
extern const int Mind_LightDimmable_metaDescriptorLength;
extern c_metaObject __Mind_LightDimmable__load (c_base base);
struct _Mind_LightDimmable ;
extern  v_copyin_result __Mind_LightDimmable__copyIn(c_base base, const class Mind::LightDimmable *from, struct _Mind_LightDimmable *to);
extern  void __Mind_LightDimmable__copyOut(const void *_from, void *_to);
struct _Mind_LightDimmable {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_bool hasFilter;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_LightMind_metaDescriptor[];
extern const int Mind_LightMind_metaDescriptorArrLength;
extern const int Mind_LightMind_metaDescriptorLength;
extern c_metaObject __Mind_LightMind__load (c_base base);
struct _Mind_LightMind ;
extern  v_copyin_result __Mind_LightMind__copyIn(c_base base, const class Mind::LightMind *from, struct _Mind_LightMind *to);
extern  void __Mind_LightMind__copyOut(const void *_from, void *_to);
struct _Mind_LightMind {
    c_string UUID;
    c_sequence categories;
    c_long statusDimmer;
    c_long statusTemperature;
    c_bool status;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_LightMindLED_metaDescriptor[];
extern const int Mind_LightMindLED_metaDescriptorArrLength;
extern const int Mind_LightMindLED_metaDescriptorLength;
extern c_metaObject __Mind_LightMindLED__load (c_base base);
struct _Mind_LightMindLED ;
extern  v_copyin_result __Mind_LightMindLED__copyIn(c_base base, const class Mind::LightMindLED *from, struct _Mind_LightMindLED *to);
extern  void __Mind_LightMindLED__copyOut(const void *_from, void *_to);
struct _Mind_LightMindLED {
    c_string UUID;
    c_sequence categories;
    c_bool status;
    c_long r;
    c_long g;
    c_long b;
    c_long w;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_BSwitch_metaDescriptor[];
extern const int Mind_BSwitch_metaDescriptorArrLength;
extern const int Mind_BSwitch_metaDescriptorLength;
extern c_metaObject __Mind_BSwitch__load (c_base base);
struct _Mind_BSwitch ;
extern  v_copyin_result __Mind_BSwitch__copyIn(c_base base, const class Mind::BSwitch *from, struct _Mind_BSwitch *to);
extern  void __Mind_BSwitch__copyOut(const void *_from, void *_to);
struct _Mind_BSwitch {
    c_string UUID;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_bool disabled;
    c_string description;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Button_metaDescriptor[];
extern const int Mind_Button_metaDescriptorArrLength;
extern const int Mind_Button_metaDescriptorLength;
extern c_metaObject __Mind_Button__load (c_base base);
struct _Mind_Button ;
extern  v_copyin_result __Mind_Button__copyIn(c_base base, const class Mind::Button *from, struct _Mind_Button *to);
extern  void __Mind_Button__copyOut(const void *_from, void *_to);
struct _Mind_Button {
    c_string UUID;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_bool disabled;
    c_string description;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_ShutterButton_metaDescriptor[];
extern const int Mind_ShutterButton_metaDescriptorArrLength;
extern const int Mind_ShutterButton_metaDescriptorLength;
extern c_metaObject __Mind_ShutterButton__load (c_base base);
struct _Mind_ShutterButton ;
extern  v_copyin_result __Mind_ShutterButton__copyIn(c_base base, const class Mind::ShutterButton *from, struct _Mind_ShutterButton *to);
extern  void __Mind_ShutterButton__copyOut(const void *_from, void *_to);
struct _Mind_ShutterButton {
    c_string UUID;
    c_string UUIDShutter;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_bool disabled;
    c_string description;
    c_bool updownType;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_DoorContact_metaDescriptor[];
extern const int Mind_DoorContact_metaDescriptorArrLength;
extern const int Mind_DoorContact_metaDescriptorLength;
extern c_metaObject __Mind_DoorContact__load (c_base base);
struct _Mind_DoorContact ;
extern  v_copyin_result __Mind_DoorContact__copyIn(c_base base, const class Mind::DoorContact *from, struct _Mind_DoorContact *to);
extern  void __Mind_DoorContact__copyOut(const void *_from, void *_to);
struct _Mind_DoorContact {
    c_string UUID;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_string description;
    c_bool disabled;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_WindowContact_metaDescriptor[];
extern const int Mind_WindowContact_metaDescriptorArrLength;
extern const int Mind_WindowContact_metaDescriptorLength;
extern c_metaObject __Mind_WindowContact__load (c_base base);
struct _Mind_WindowContact ;
extern  v_copyin_result __Mind_WindowContact__copyIn(c_base base, const class Mind::WindowContact *from, struct _Mind_WindowContact *to);
extern  void __Mind_WindowContact__copyOut(const void *_from, void *_to);
struct _Mind_WindowContact {
    c_string UUID;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_string description;
    c_bool disabled;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Tamper_metaDescriptor[];
extern const int Mind_Tamper_metaDescriptorArrLength;
extern const int Mind_Tamper_metaDescriptorLength;
extern c_metaObject __Mind_Tamper__load (c_base base);
struct _Mind_Tamper ;
extern  v_copyin_result __Mind_Tamper__copyIn(c_base base, const class Mind::Tamper *from, struct _Mind_Tamper *to);
extern  void __Mind_Tamper__copyOut(const void *_from, void *_to);
struct _Mind_Tamper {
    c_string UUID;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_string description;
    c_bool disabled;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_PIRContact_metaDescriptor[];
extern const int Mind_PIRContact_metaDescriptorArrLength;
extern const int Mind_PIRContact_metaDescriptorLength;
extern c_metaObject __Mind_PIRContact__load (c_base base);
struct _Mind_PIRContact ;
extern  v_copyin_result __Mind_PIRContact__copyIn(c_base base, const class Mind::PIRContact *from, struct _Mind_PIRContact *to);
extern  void __Mind_PIRContact__copyOut(const void *_from, void *_to);
struct _Mind_PIRContact {
    c_string UUID;
    c_string MACAddress;
    c_long numInput;
    c_long status;
    c_bool connected;
    c_string description;
    c_bool disabled;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_RollerShutter_metaDescriptor[];
extern const int Mind_RollerShutter_metaDescriptorArrLength;
extern const int Mind_RollerShutter_metaDescriptorLength;
extern c_metaObject __Mind_RollerShutter__load (c_base base);
struct _Mind_RollerShutter ;
extern  v_copyin_result __Mind_RollerShutter__copyIn(c_base base, const class Mind::RollerShutter *from, struct _Mind_RollerShutter *to);
extern  void __Mind_RollerShutter__copyOut(const void *_from, void *_to);
struct _Mind_RollerShutter {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Scuro_metaDescriptor[];
extern const int Mind_Scuro_metaDescriptorArrLength;
extern const int Mind_Scuro_metaDescriptorLength;
extern c_metaObject __Mind_Scuro__load (c_base base);
struct _Mind_Scuro ;
extern  v_copyin_result __Mind_Scuro__copyIn(c_base base, const class Mind::Scuro *from, struct _Mind_Scuro *to);
extern  void __Mind_Scuro__copyOut(const void *_from, void *_to);
struct _Mind_Scuro {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Frangisole_metaDescriptor[];
extern const int Mind_Frangisole_metaDescriptorArrLength;
extern const int Mind_Frangisole_metaDescriptorLength;
extern c_metaObject __Mind_Frangisole__load (c_base base);
struct _Mind_Frangisole ;
extern  v_copyin_result __Mind_Frangisole__copyIn(c_base base, const class Mind::Frangisole *from, struct _Mind_Frangisole *to);
extern  void __Mind_Frangisole__copyOut(const void *_from, void *_to);
struct _Mind_Frangisole {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Blinds_metaDescriptor[];
extern const int Mind_Blinds_metaDescriptorArrLength;
extern const int Mind_Blinds_metaDescriptorLength;
extern c_metaObject __Mind_Blinds__load (c_base base);
struct _Mind_Blinds ;
extern  v_copyin_result __Mind_Blinds__copyIn(c_base base, const class Mind::Blinds *from, struct _Mind_Blinds *to);
extern  void __Mind_Blinds__copyOut(const void *_from, void *_to);
struct _Mind_Blinds {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Veneziana_metaDescriptor[];
extern const int Mind_Veneziana_metaDescriptorArrLength;
extern const int Mind_Veneziana_metaDescriptorLength;
extern c_metaObject __Mind_Veneziana__load (c_base base);
struct _Mind_Veneziana ;
extern  v_copyin_result __Mind_Veneziana__copyIn(c_base base, const class Mind::Veneziana *from, struct _Mind_Veneziana *to);
extern  void __Mind_Veneziana__copyOut(const void *_from, void *_to);
struct _Mind_Veneziana {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Grata_metaDescriptor[];
extern const int Mind_Grata_metaDescriptorArrLength;
extern const int Mind_Grata_metaDescriptorLength;
extern c_metaObject __Mind_Grata__load (c_base base);
struct _Mind_Grata ;
extern  v_copyin_result __Mind_Grata__copyIn(c_base base, const class Mind::Grata *from, struct _Mind_Grata *to);
extern  void __Mind_Grata__copyOut(const void *_from, void *_to);
struct _Mind_Grata {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Forno_metaDescriptor[];
extern const int Mind_Forno_metaDescriptorArrLength;
extern const int Mind_Forno_metaDescriptorLength;
extern c_metaObject __Mind_Forno__load (c_base base);
struct _Mind_Forno ;
extern  v_copyin_result __Mind_Forno__copyIn(c_base base, const class Mind::Forno *from, struct _Mind_Forno *to);
extern  void __Mind_Forno__copyOut(const void *_from, void *_to);
struct _Mind_Forno {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_FornoMicroonde_metaDescriptor[];
extern const int Mind_FornoMicroonde_metaDescriptorArrLength;
extern const int Mind_FornoMicroonde_metaDescriptorLength;
extern c_metaObject __Mind_FornoMicroonde__load (c_base base);
struct _Mind_FornoMicroonde ;
extern  v_copyin_result __Mind_FornoMicroonde__copyIn(c_base base, const class Mind::FornoMicroonde *from, struct _Mind_FornoMicroonde *to);
extern  void __Mind_FornoMicroonde__copyOut(const void *_from, void *_to);
struct _Mind_FornoMicroonde {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Frigo_metaDescriptor[];
extern const int Mind_Frigo_metaDescriptorArrLength;
extern const int Mind_Frigo_metaDescriptorLength;
extern c_metaObject __Mind_Frigo__load (c_base base);
struct _Mind_Frigo ;
extern  v_copyin_result __Mind_Frigo__copyIn(c_base base, const class Mind::Frigo *from, struct _Mind_Frigo *to);
extern  void __Mind_Frigo__copyOut(const void *_from, void *_to);
struct _Mind_Frigo {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Freezer_metaDescriptor[];
extern const int Mind_Freezer_metaDescriptorArrLength;
extern const int Mind_Freezer_metaDescriptorLength;
extern c_metaObject __Mind_Freezer__load (c_base base);
struct _Mind_Freezer ;
extern  v_copyin_result __Mind_Freezer__copyIn(c_base base, const class Mind::Freezer *from, struct _Mind_Freezer *to);
extern  void __Mind_Freezer__copyOut(const void *_from, void *_to);
struct _Mind_Freezer {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CantinaVini_metaDescriptor[];
extern const int Mind_CantinaVini_metaDescriptorArrLength;
extern const int Mind_CantinaVini_metaDescriptorLength;
extern c_metaObject __Mind_CantinaVini__load (c_base base);
struct _Mind_CantinaVini ;
extern  v_copyin_result __Mind_CantinaVini__copyIn(c_base base, const class Mind::CantinaVini *from, struct _Mind_CantinaVini *to);
extern  void __Mind_CantinaVini__copyOut(const void *_from, void *_to);
struct _Mind_CantinaVini {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_MacchinaCaffe_metaDescriptor[];
extern const int Mind_MacchinaCaffe_metaDescriptorArrLength;
extern const int Mind_MacchinaCaffe_metaDescriptorLength;
extern c_metaObject __Mind_MacchinaCaffe__load (c_base base);
struct _Mind_MacchinaCaffe ;
extern  v_copyin_result __Mind_MacchinaCaffe__copyIn(c_base base, const class Mind::MacchinaCaffe *from, struct _Mind_MacchinaCaffe *to);
extern  void __Mind_MacchinaCaffe__copyOut(const void *_from, void *_to);
struct _Mind_MacchinaCaffe {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_PianoCottura_metaDescriptor[];
extern const int Mind_PianoCottura_metaDescriptorArrLength;
extern const int Mind_PianoCottura_metaDescriptorLength;
extern c_metaObject __Mind_PianoCottura__load (c_base base);
struct _Mind_PianoCottura ;
extern  v_copyin_result __Mind_PianoCottura__copyIn(c_base base, const class Mind::PianoCottura *from, struct _Mind_PianoCottura *to);
extern  void __Mind_PianoCottura__copyOut(const void *_from, void *_to);
struct _Mind_PianoCottura {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Lavatrice_metaDescriptor[];
extern const int Mind_Lavatrice_metaDescriptorArrLength;
extern const int Mind_Lavatrice_metaDescriptorLength;
extern c_metaObject __Mind_Lavatrice__load (c_base base);
struct _Mind_Lavatrice ;
extern  v_copyin_result __Mind_Lavatrice__copyIn(c_base base, const class Mind::Lavatrice *from, struct _Mind_Lavatrice *to);
extern  void __Mind_Lavatrice__copyOut(const void *_from, void *_to);
struct _Mind_Lavatrice {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Lavastoviglie_metaDescriptor[];
extern const int Mind_Lavastoviglie_metaDescriptorArrLength;
extern const int Mind_Lavastoviglie_metaDescriptorLength;
extern c_metaObject __Mind_Lavastoviglie__load (c_base base);
struct _Mind_Lavastoviglie ;
extern  v_copyin_result __Mind_Lavastoviglie__copyIn(c_base base, const class Mind::Lavastoviglie *from, struct _Mind_Lavastoviglie *to);
extern  void __Mind_Lavastoviglie__copyOut(const void *_from, void *_to);
struct _Mind_Lavastoviglie {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Asciugatrice_metaDescriptor[];
extern const int Mind_Asciugatrice_metaDescriptorArrLength;
extern const int Mind_Asciugatrice_metaDescriptorLength;
extern c_metaObject __Mind_Asciugatrice__load (c_base base);
struct _Mind_Asciugatrice ;
extern  v_copyin_result __Mind_Asciugatrice__copyIn(c_base base, const class Mind::Asciugatrice *from, struct _Mind_Asciugatrice *to);
extern  void __Mind_Asciugatrice__copyOut(const void *_from, void *_to);
struct _Mind_Asciugatrice {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_ColonnettaTesla_metaDescriptor[];
extern const int Mind_ColonnettaTesla_metaDescriptorArrLength;
extern const int Mind_ColonnettaTesla_metaDescriptorLength;
extern c_metaObject __Mind_ColonnettaTesla__load (c_base base);
struct _Mind_ColonnettaTesla ;
extern  v_copyin_result __Mind_ColonnettaTesla__copyIn(c_base base, const class Mind::ColonnettaTesla *from, struct _Mind_ColonnettaTesla *to);
extern  void __Mind_ColonnettaTesla__copyOut(const void *_from, void *_to);
struct _Mind_ColonnettaTesla {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Impianto_metaDescriptor[];
extern const int Mind_Impianto_metaDescriptorArrLength;
extern const int Mind_Impianto_metaDescriptorLength;
extern c_metaObject __Mind_Impianto__load (c_base base);
struct _Mind_Impianto ;
extern  v_copyin_result __Mind_Impianto__copyIn(c_base base, const class Mind::Impianto *from, struct _Mind_Impianto *to);
extern  void __Mind_Impianto__copyOut(const void *_from, void *_to);
struct _Mind_Impianto {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_IrrigationPump_metaDescriptor[];
extern const int Mind_IrrigationPump_metaDescriptorArrLength;
extern const int Mind_IrrigationPump_metaDescriptorLength;
extern c_metaObject __Mind_IrrigationPump__load (c_base base);
struct _Mind_IrrigationPump ;
extern  v_copyin_result __Mind_IrrigationPump__copyIn(c_base base, const class Mind::IrrigationPump *from, struct _Mind_IrrigationPump *to);
extern  void __Mind_IrrigationPump__copyOut(const void *_from, void *_to);
struct _Mind_IrrigationPump {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Siren_metaDescriptor[];
extern const int Mind_Siren_metaDescriptorArrLength;
extern const int Mind_Siren_metaDescriptorLength;
extern c_metaObject __Mind_Siren__load (c_base base);
struct _Mind_Siren ;
extern  v_copyin_result __Mind_Siren__copyIn(c_base base, const class Mind::Siren *from, struct _Mind_Siren *to);
extern  void __Mind_Siren__copyOut(const void *_from, void *_to);
struct _Mind_Siren {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CancelloCarraio_metaDescriptor[];
extern const int Mind_CancelloCarraio_metaDescriptorArrLength;
extern const int Mind_CancelloCarraio_metaDescriptorLength;
extern c_metaObject __Mind_CancelloCarraio__load (c_base base);
struct _Mind_CancelloCarraio ;
extern  v_copyin_result __Mind_CancelloCarraio__copyIn(c_base base, const class Mind::CancelloCarraio *from, struct _Mind_CancelloCarraio *to);
extern  void __Mind_CancelloCarraio__copyOut(const void *_from, void *_to);
struct _Mind_CancelloCarraio {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CancelloPedonale_metaDescriptor[];
extern const int Mind_CancelloPedonale_metaDescriptorArrLength;
extern const int Mind_CancelloPedonale_metaDescriptorLength;
extern c_metaObject __Mind_CancelloPedonale__load (c_base base);
struct _Mind_CancelloPedonale ;
extern  v_copyin_result __Mind_CancelloPedonale__copyIn(c_base base, const class Mind::CancelloPedonale *from, struct _Mind_CancelloPedonale *to);
extern  void __Mind_CancelloPedonale__copyOut(const void *_from, void *_to);
struct _Mind_CancelloPedonale {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CancelloGarage_metaDescriptor[];
extern const int Mind_CancelloGarage_metaDescriptorArrLength;
extern const int Mind_CancelloGarage_metaDescriptorLength;
extern c_metaObject __Mind_CancelloGarage__load (c_base base);
struct _Mind_CancelloGarage ;
extern  v_copyin_result __Mind_CancelloGarage__copyIn(c_base base, const class Mind::CancelloGarage *from, struct _Mind_CancelloGarage *to);
extern  void __Mind_CancelloGarage__copyOut(const void *_from, void *_to);
struct _Mind_CancelloGarage {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_GasValve_metaDescriptor[];
extern const int Mind_GasValve_metaDescriptorArrLength;
extern const int Mind_GasValve_metaDescriptorLength;
extern c_metaObject __Mind_GasValve__load (c_base base);
struct _Mind_GasValve ;
extern  v_copyin_result __Mind_GasValve__copyIn(c_base base, const class Mind::GasValve *from, struct _Mind_GasValve *to);
extern  void __Mind_GasValve__copyOut(const void *_from, void *_to);
struct _Mind_GasValve {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_WaterValve_metaDescriptor[];
extern const int Mind_WaterValve_metaDescriptorArrLength;
extern const int Mind_WaterValve_metaDescriptorLength;
extern c_metaObject __Mind_WaterValve__load (c_base base);
struct _Mind_WaterValve ;
extern  v_copyin_result __Mind_WaterValve__copyIn(c_base base, const class Mind::WaterValve *from, struct _Mind_WaterValve *to);
extern  void __Mind_WaterValve__copyOut(const void *_from, void *_to);
struct _Mind_WaterValve {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_PompaRicircolo_metaDescriptor[];
extern const int Mind_PompaRicircolo_metaDescriptorArrLength;
extern const int Mind_PompaRicircolo_metaDescriptorLength;
extern c_metaObject __Mind_PompaRicircolo__load (c_base base);
struct _Mind_PompaRicircolo ;
extern  v_copyin_result __Mind_PompaRicircolo__copyIn(c_base base, const class Mind::PompaRicircolo *from, struct _Mind_PompaRicircolo *to);
extern  void __Mind_PompaRicircolo__copyOut(const void *_from, void *_to);
struct _Mind_PompaRicircolo {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Socket_16A_metaDescriptor[];
extern const int Mind_Socket_16A_metaDescriptorArrLength;
extern const int Mind_Socket_16A_metaDescriptorLength;
extern c_metaObject __Mind_Socket_16A__load (c_base base);
struct _Mind_Socket_16A ;
extern  v_copyin_result __Mind_Socket_16A__copyIn(c_base base, const class Mind::Socket_16A *from, struct _Mind_Socket_16A *to);
extern  void __Mind_Socket_16A__copyOut(const void *_from, void *_to);
struct _Mind_Socket_16A {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Socket_5A_metaDescriptor[];
extern const int Mind_Socket_5A_metaDescriptorArrLength;
extern const int Mind_Socket_5A_metaDescriptorLength;
extern c_metaObject __Mind_Socket_5A__load (c_base base);
struct _Mind_Socket_5A ;
extern  v_copyin_result __Mind_Socket_5A__copyIn(c_base base, const class Mind::Socket_5A *from, struct _Mind_Socket_5A *to);
extern  void __Mind_Socket_5A__copyOut(const void *_from, void *_to);
struct _Mind_Socket_5A {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_bool hasFilter;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_VoiceCommand_metaDescriptor[];
extern const int Mind_VoiceCommand_metaDescriptorArrLength;
extern const int Mind_VoiceCommand_metaDescriptorLength;
extern c_metaObject __Mind_VoiceCommand__load (c_base base);
struct _Mind_VoiceCommand ;
extern  v_copyin_result __Mind_VoiceCommand__copyIn(c_base base, const class Mind::VoiceCommand *from, struct _Mind_VoiceCommand *to);
extern  void __Mind_VoiceCommand__copyOut(const void *_from, void *_to);
struct _Mind_VoiceCommand {
    c_string text;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_PresaMultimediale_metaDescriptor[];
extern const int Mind_PresaMultimediale_metaDescriptorArrLength;
extern const int Mind_PresaMultimediale_metaDescriptorLength;
extern c_metaObject __Mind_PresaMultimediale__load (c_base base);
struct _Mind_PresaMultimediale ;
extern  v_copyin_result __Mind_PresaMultimediale__copyIn(c_base base, const class Mind::PresaMultimediale *from, struct _Mind_PresaMultimediale *to);
extern  void __Mind_PresaMultimediale__copyOut(const void *_from, void *_to);
struct _Mind_PresaMultimediale {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_HarmonyMultimedia_metaDescriptor[];
extern const int Mind_HarmonyMultimedia_metaDescriptorArrLength;
extern const int Mind_HarmonyMultimedia_metaDescriptorLength;
extern c_metaObject __Mind_HarmonyMultimedia__load (c_base base);
struct _Mind_HarmonyMultimedia ;
extern  v_copyin_result __Mind_HarmonyMultimedia__copyIn(c_base base, const class Mind::HarmonyMultimedia *from, struct _Mind_HarmonyMultimedia *to);
extern  void __Mind_HarmonyMultimedia__copyOut(const void *_from, void *_to);
struct _Mind_HarmonyMultimedia {
    c_string UUID;
    c_string IPAddress;
    c_string currentActivity;
    c_sequence availableActivities;
    c_sequence categories;
    c_string name;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_MindSound_metaDescriptor[];
extern const int Mind_MindSound_metaDescriptorArrLength;
extern const int Mind_MindSound_metaDescriptorLength;
extern c_metaObject __Mind_MindSound__load (c_base base);
struct _Mind_MindSound ;
extern  v_copyin_result __Mind_MindSound__copyIn(c_base base, const class Mind::MindSound *from, struct _Mind_MindSound *to);
extern  void __Mind_MindSound__copyOut(const void *_from, void *_to);
struct _Mind_MindSound {
    c_string UUID;
    c_string currentSound;
    c_bool enabled;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern c_metaObject __Mind_TransportStatus__load (c_base base);
enum _Mind_TransportStatus {
    _Mind_TRANSPORT_PLAY,
    _Mind_TRANSPORT_PAUSE,
    _Mind_TRANSPORT_STOP
};

extern const char *Mind_TransportData_metaDescriptor[];
extern const int Mind_TransportData_metaDescriptorArrLength;
extern const int Mind_TransportData_metaDescriptorLength;
extern c_metaObject __Mind_TransportData__load (c_base base);
struct _Mind_TransportData ;
extern  v_copyin_result __Mind_TransportData__copyIn(c_base base, const class Mind::TransportData *from, struct _Mind_TransportData *to);
extern  void __Mind_TransportData__copyOut(const void *_from, void *_to);
struct _Mind_TransportData {
    c_string title;
    c_string artist;
    c_string uri;
    c_long queueSize;
    c_string currentTrackDuration;
    c_string CurrentTransportActions;
    enum _Mind_TransportStatus status;
};

extern const char *Mind_RenderingData_metaDescriptor[];
extern const int Mind_RenderingData_metaDescriptorArrLength;
extern const int Mind_RenderingData_metaDescriptorLength;
extern c_metaObject __Mind_RenderingData__load (c_base base);
struct _Mind_RenderingData ;
extern  v_copyin_result __Mind_RenderingData__copyIn(c_base base, const class Mind::RenderingData *from, struct _Mind_RenderingData *to);
extern  void __Mind_RenderingData__copyOut(const void *_from, void *_to);
struct _Mind_RenderingData {
    c_long volumeMaster;
    c_long volumeLF;
    c_long volumeRF;
    c_bool muteMaster;
    c_bool muteLF;
    c_bool muteRF;
};

extern const char *Mind_Sonos_metaDescriptor[];
extern const int Mind_Sonos_metaDescriptorArrLength;
extern const int Mind_Sonos_metaDescriptorLength;
extern c_metaObject __Mind_Sonos__load (c_base base);
struct _Mind_Sonos ;
extern  v_copyin_result __Mind_Sonos__copyIn(c_base base, const class Mind::Sonos *from, struct _Mind_Sonos *to);
extern  void __Mind_Sonos__copyOut(const void *_from, void *_to);
struct _Mind_Sonos {
    c_string UUID;
    c_string zoneName;
    c_string uri;
    c_string coordinatorUUID;
    struct _Mind_TransportData transportData;
    struct _Mind_RenderingData renderingData;
    c_bool connected;
    c_bool enabled;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_ProjectionScreen_metaDescriptor[];
extern const int Mind_ProjectionScreen_metaDescriptorArrLength;
extern const int Mind_ProjectionScreen_metaDescriptorLength;
extern c_metaObject __Mind_ProjectionScreen__load (c_base base);
struct _Mind_ProjectionScreen ;
extern  v_copyin_result __Mind_ProjectionScreen__copyIn(c_base base, const class Mind::ProjectionScreen *from, struct _Mind_ProjectionScreen *to);
extern  void __Mind_ProjectionScreen__copyOut(const void *_from, void *_to);
struct _Mind_ProjectionScreen {
    c_string UUID;
    c_string MACAddress;
    c_long status;
    c_long numRelay;
    c_bool connected;
    c_string description;
    c_bool blocked;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Citofono_metaDescriptor[];
extern const int Mind_Citofono_metaDescriptorArrLength;
extern const int Mind_Citofono_metaDescriptorLength;
extern c_metaObject __Mind_Citofono__load (c_base base);
struct _Mind_Citofono ;
extern  v_copyin_result __Mind_Citofono__copyIn(c_base base, const class Mind::Citofono *from, struct _Mind_Citofono *to);
extern  void __Mind_Citofono__copyOut(const void *_from, void *_to);
struct _Mind_Citofono {
    c_string UUID;
    c_string IPAddress;
    c_string description;
    c_bool status;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_FloodingSensor_metaDescriptor[];
extern const int Mind_FloodingSensor_metaDescriptorArrLength;
extern const int Mind_FloodingSensor_metaDescriptorLength;
extern c_metaObject __Mind_FloodingSensor__load (c_base base);
struct _Mind_FloodingSensor ;
extern  v_copyin_result __Mind_FloodingSensor__copyIn(c_base base, const class Mind::FloodingSensor *from, struct _Mind_FloodingSensor *to);
extern  void __Mind_FloodingSensor__copyOut(const void *_from, void *_to);
struct _Mind_FloodingSensor {
    c_string UUID;
    c_string IPAddress;
    c_string description;
    c_bool status;
    c_sequence categories;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_EnvironmentalSensor_metaDescriptor[];
extern const int Mind_EnvironmentalSensor_metaDescriptorArrLength;
extern const int Mind_EnvironmentalSensor_metaDescriptorLength;
extern c_metaObject __Mind_EnvironmentalSensor__load (c_base base);
struct _Mind_EnvironmentalSensor ;
extern  v_copyin_result __Mind_EnvironmentalSensor__copyIn(c_base base, const class Mind::EnvironmentalSensor *from, struct _Mind_EnvironmentalSensor *to);
extern  void __Mind_EnvironmentalSensor__copyOut(const void *_from, void *_to);
struct _Mind_EnvironmentalSensor {
    c_string UUID;
    c_sequence categories;
    c_double temperature;
    c_double CO;
    c_double CO2;
    c_double humidity;
    c_double VOC;
    c_double smoke;
    c_string timestamp;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_VisionEnvironmentalSensor_metaDescriptor[];
extern const int Mind_VisionEnvironmentalSensor_metaDescriptorArrLength;
extern const int Mind_VisionEnvironmentalSensor_metaDescriptorLength;
extern c_metaObject __Mind_VisionEnvironmentalSensor__load (c_base base);
struct _Mind_VisionEnvironmentalSensor ;
extern  v_copyin_result __Mind_VisionEnvironmentalSensor__copyIn(c_base base, const class Mind::VisionEnvironmentalSensor *from, struct _Mind_VisionEnvironmentalSensor *to);
extern  void __Mind_VisionEnvironmentalSensor__copyOut(const void *_from, void *_to);
struct _Mind_VisionEnvironmentalSensor {
    c_string UUID;
    c_sequence categories;
    c_double brightness;
    c_double motion;
    c_string timestamp;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_VisionPeopleSensor_metaDescriptor[];
extern const int Mind_VisionPeopleSensor_metaDescriptorArrLength;
extern const int Mind_VisionPeopleSensor_metaDescriptorLength;
extern c_metaObject __Mind_VisionPeopleSensor__load (c_base base);
struct _Mind_VisionPeopleSensor ;
extern  v_copyin_result __Mind_VisionPeopleSensor__copyIn(c_base base, const class Mind::VisionPeopleSensor *from, struct _Mind_VisionPeopleSensor *to);
extern  void __Mind_VisionPeopleSensor__copyOut(const void *_from, void *_to);
struct _Mind_VisionPeopleSensor {
    c_string UUID;
    c_sequence categories;
    c_long peopleCount;
    c_long knownPeopleCount;
    c_long unknownPeopleCount;
    c_long faceCount;
    c_string timestamp;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_PowerSensor_metaDescriptor[];
extern const int Mind_PowerSensor_metaDescriptorArrLength;
extern const int Mind_PowerSensor_metaDescriptorLength;
extern c_metaObject __Mind_PowerSensor__load (c_base base);
struct _Mind_PowerSensor ;
extern  v_copyin_result __Mind_PowerSensor__copyIn(c_base base, const class Mind::PowerSensor *from, struct _Mind_PowerSensor *to);
extern  void __Mind_PowerSensor__copyOut(const void *_from, void *_to);
struct _Mind_PowerSensor {
    c_string UUID;
    c_double consumption;
    c_string timestamp;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_BluetoothIdentitySensor_metaDescriptor[];
extern const int Mind_BluetoothIdentitySensor_metaDescriptorArrLength;
extern const int Mind_BluetoothIdentitySensor_metaDescriptorLength;
extern c_metaObject __Mind_BluetoothIdentitySensor__load (c_base base);
struct _Mind_BluetoothIdentitySensor ;
extern  v_copyin_result __Mind_BluetoothIdentitySensor__copyIn(c_base base, const class Mind::BluetoothIdentitySensor *from, struct _Mind_BluetoothIdentitySensor *to);
extern  void __Mind_BluetoothIdentitySensor__copyOut(const void *_from, void *_to);
struct _Mind_BluetoothIdentitySensor {
    c_string UUID;
    c_double probability;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_VisionIdentitySensor_metaDescriptor[];
extern const int Mind_VisionIdentitySensor_metaDescriptorArrLength;
extern const int Mind_VisionIdentitySensor_metaDescriptorLength;
extern c_metaObject __Mind_VisionIdentitySensor__load (c_base base);
struct _Mind_VisionIdentitySensor ;
extern  v_copyin_result __Mind_VisionIdentitySensor__copyIn(c_base base, const class Mind::VisionIdentitySensor *from, struct _Mind_VisionIdentitySensor *to);
extern  void __Mind_VisionIdentitySensor__copyOut(const void *_from, void *_to);
struct _Mind_VisionIdentitySensor {
    c_string UUID;
    c_double probability;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Thermostat_metaDescriptor[];
extern const int Mind_Thermostat_metaDescriptorArrLength;
extern const int Mind_Thermostat_metaDescriptorLength;
extern c_metaObject __Mind_Thermostat__load (c_base base);
struct _Mind_Thermostat ;
extern  v_copyin_result __Mind_Thermostat__copyIn(c_base base, const class Mind::Thermostat *from, struct _Mind_Thermostat *to);
extern  void __Mind_Thermostat__copyOut(const void *_from, void *_to);
struct _Mind_Thermostat {
    c_string UUID;
    c_double targetTemperature;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CurrentWeather_metaDescriptor[];
extern const int Mind_CurrentWeather_metaDescriptorArrLength;
extern const int Mind_CurrentWeather_metaDescriptorLength;
extern c_metaObject __Mind_CurrentWeather__load (c_base base);
struct _Mind_CurrentWeather ;
extern  v_copyin_result __Mind_CurrentWeather__copyIn(c_base base, const class Mind::CurrentWeather *from, struct _Mind_CurrentWeather *to);
extern  void __Mind_CurrentWeather__copyOut(const void *_from, void *_to);
struct _Mind_CurrentWeather {
    c_long referenceTimestamp;
    c_double temperature;
    c_double pressure;
    c_double humidity;
    c_double windKph;
    c_double uv;
    c_long cloudiness;
    c_long conditionCode;
    c_string conditionName;
    c_string nextSunrise;
    c_string nextSunset;
};

extern const char *Mind_HourlyWeatherData_metaDescriptor[];
extern const int Mind_HourlyWeatherData_metaDescriptorArrLength;
extern const int Mind_HourlyWeatherData_metaDescriptorLength;
extern c_metaObject __Mind_HourlyWeatherData__load (c_base base);
struct _Mind_HourlyWeatherData ;
extern  v_copyin_result __Mind_HourlyWeatherData__copyIn(c_base base, const class Mind::HourlyWeatherData *from, struct _Mind_HourlyWeatherData *to);
extern  void __Mind_HourlyWeatherData__copyOut(const void *_from, void *_to);
struct _Mind_HourlyWeatherData {
    c_long referenceTimestamp;
    c_double windKph;
    c_double temperature;
    c_long rainChance;
    c_bool willItRain;
    c_bool isDay;
    c_long conditionCode;
    c_string conditionName;
    c_long cloudiness;
    c_double precipMm;
};

extern const char *Mind_DailyWeatherData_metaDescriptor[];
extern const int Mind_DailyWeatherData_metaDescriptorArrLength;
extern const int Mind_DailyWeatherData_metaDescriptorLength;
extern c_metaObject __Mind_DailyWeatherData__load (c_base base);
struct _Mind_DailyWeatherData ;
extern  v_copyin_result __Mind_DailyWeatherData__copyIn(c_base base, const class Mind::DailyWeatherData *from, struct _Mind_DailyWeatherData *to);
extern  void __Mind_DailyWeatherData__copyOut(const void *_from, void *_to);
struct _Mind_DailyWeatherData {
    c_long referenceTimestamp;
    c_double maxTemperature;
    c_double temperature;
    c_double minTemperature;
    c_double precipMm;
    c_long conditionCode;
    c_string conditionName;
    c_double uv;
};

extern const char *Mind_HistoricalAndForecastedWeather_metaDescriptor[];
extern const int Mind_HistoricalAndForecastedWeather_metaDescriptorArrLength;
extern const int Mind_HistoricalAndForecastedWeather_metaDescriptorLength;
extern c_metaObject __Mind_HistoricalAndForecastedWeather__load (c_base base);
struct _Mind_HistoricalAndForecastedWeather ;
extern  v_copyin_result __Mind_HistoricalAndForecastedWeather__copyIn(c_base base, const class Mind::HistoricalAndForecastedWeather *from, struct _Mind_HistoricalAndForecastedWeather *to);
extern  void __Mind_HistoricalAndForecastedWeather__copyOut(const void *_from, void *_to);
struct _Mind_HistoricalAndForecastedWeather {
    c_long lastUpdateTimestamp;
    struct _Mind_DailyWeatherData tomorrow;
    struct _Mind_DailyWeatherData today;
    struct _Mind_DailyWeatherData yesterday;
    c_sequence hourlyForecast;
    c_sequence hourlyHistory;
};

extern const char *Mind_Caldaia_metaDescriptor[];
extern const int Mind_Caldaia_metaDescriptorArrLength;
extern const int Mind_Caldaia_metaDescriptorLength;
extern c_metaObject __Mind_Caldaia__load (c_base base);
struct _Mind_Caldaia ;
extern  v_copyin_result __Mind_Caldaia__copyIn(c_base base, const class Mind::Caldaia *from, struct _Mind_Caldaia *to);
extern  void __Mind_Caldaia__copyOut(const void *_from, void *_to);
struct _Mind_Caldaia {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_PompaCalore_metaDescriptor[];
extern const int Mind_PompaCalore_metaDescriptorArrLength;
extern const int Mind_PompaCalore_metaDescriptorLength;
extern c_metaObject __Mind_PompaCalore__load (c_base base);
struct _Mind_PompaCalore ;
extern  v_copyin_result __Mind_PompaCalore__copyIn(c_base base, const class Mind::PompaCalore *from, struct _Mind_PompaCalore *to);
extern  void __Mind_PompaCalore__copyOut(const void *_from, void *_to);
struct _Mind_PompaCalore {
    c_string UUID;
    c_string MACAddressOnOff;
    c_long numRelayOnOff;
    c_string MACAddressCF;
    c_long numRelayCF;
    c_sequence categories;
    c_bool connectedOnOff;
    c_bool connectedCF;
    c_bool statusOnOff;
    c_bool statusCF;
    c_string description;
    c_bool blocked;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_FloorHeating_metaDescriptor[];
extern const int Mind_FloorHeating_metaDescriptorArrLength;
extern const int Mind_FloorHeating_metaDescriptorLength;
extern c_metaObject __Mind_FloorHeating__load (c_base base);
struct _Mind_FloorHeating ;
extern  v_copyin_result __Mind_FloorHeating__copyIn(c_base base, const class Mind::FloorHeating *from, struct _Mind_FloorHeating *to);
extern  void __Mind_FloorHeating__copyOut(const void *_from, void *_to);
struct _Mind_FloorHeating {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_sequence UUIDAmbiences;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_FanCoil_metaDescriptor[];
extern const int Mind_FanCoil_metaDescriptorArrLength;
extern const int Mind_FanCoil_metaDescriptorLength;
extern c_metaObject __Mind_FanCoil__load (c_base base);
struct _Mind_FanCoil ;
extern  v_copyin_result __Mind_FanCoil__copyIn(c_base base, const class Mind::FanCoil *from, struct _Mind_FanCoil *to);
extern  void __Mind_FanCoil__copyOut(const void *_from, void *_to);
struct _Mind_FanCoil {
    c_string UUID;
    c_string description;
    c_string MACAddressOnOff;
    c_long numRelayOnOff;
    c_string MACAddressSpeed1;
    c_long numRelaySpeed1;
    c_string MACAddressSpeed2;
    c_long numRelaySpeed2;
    c_string MACAddressSpeed3;
    c_long numRelaySpeed3;
    c_sequence categories;
    c_bool connectedOnOff;
    c_bool connectedSpeed1;
    c_bool connectedSpeed2;
    c_bool connectedSpeed3;
    c_long statusOnOff;
    c_long statusSpeed1;
    c_long statusSpeed2;
    c_long statusSpeed3;
    c_bool blocked;
    c_sequence UUIDAmbiences;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_CoolingFan_metaDescriptor[];
extern const int Mind_CoolingFan_metaDescriptorArrLength;
extern const int Mind_CoolingFan_metaDescriptorLength;
extern c_metaObject __Mind_CoolingFan__load (c_base base);
struct _Mind_CoolingFan ;
extern  v_copyin_result __Mind_CoolingFan__copyIn(c_base base, const class Mind::CoolingFan *from, struct _Mind_CoolingFan *to);
extern  void __Mind_CoolingFan__copyOut(const void *_from, void *_to);
struct _Mind_CoolingFan {
    c_string UUID;
    c_string MACAddress;
    c_long numRelay;
    c_sequence categories;
    c_bool connected;
    c_long status;
    c_string description;
    c_bool blocked;
    c_string physicalLocationUUIDAmbience;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_HarmonySplit_metaDescriptor[];
extern const int Mind_HarmonySplit_metaDescriptorArrLength;
extern const int Mind_HarmonySplit_metaDescriptorLength;
extern c_metaObject __Mind_HarmonySplit__load (c_base base);
struct _Mind_HarmonySplit ;
extern  v_copyin_result __Mind_HarmonySplit__copyIn(c_base base, const class Mind::HarmonySplit *from, struct _Mind_HarmonySplit *to);
extern  void __Mind_HarmonySplit__copyOut(const void *_from, void *_to);
struct _Mind_HarmonySplit {
    c_string UUID;
    c_string IPAddress;
    c_string description;
    c_sequence categories;
    c_long temperature;
    c_bool deumidifica;
    c_long speed;
    c_long airOrientation;
    c_sequence UUIDAmbience;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Termosifone_metaDescriptor[];
extern const int Mind_Termosifone_metaDescriptorArrLength;
extern const int Mind_Termosifone_metaDescriptorLength;
extern c_metaObject __Mind_Termosifone__load (c_base base);
struct _Mind_Termosifone ;
extern  v_copyin_result __Mind_Termosifone__copyIn(c_base base, const class Mind::Termosifone *from, struct _Mind_Termosifone *to);
extern  void __Mind_Termosifone__copyOut(const void *_from, void *_to);
struct _Mind_Termosifone {
    c_string UUID;
    c_string MACAddressBT;
    c_sequence categories;
    c_double batteryStatus;
    c_bool connected;
    c_bool status;
    c_string description;
    c_sequence UUIDAmbience;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

#undef OS_API
#endif
