#ifndef NOTIFICATIONSERVICESPLTYPES_H
#define NOTIFICATIONSERVICESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "NotificationService_DCPS.hpp"
#include "Commons_DCPS.hpp"



extern c_metaObject __NotificationService_Mind__load (c_base base);

extern const char *Mind_Notification_metaDescriptor[];
extern const int Mind_Notification_metaDescriptorArrLength;
extern const int Mind_Notification_metaDescriptorLength;
extern c_metaObject __Mind_Notification__load (c_base base);
struct _Mind_Notification ;
extern  v_copyin_result __Mind_Notification__copyIn(c_base base, const class Mind::Notification *from, struct _Mind_Notification *to);
extern  void __Mind_Notification__copyOut(const void *_from, void *_to);
struct _Mind_Notification {
    c_string UUID;
    enum _Mind_NotificationType type;
    enum _Mind_NotificationSubtype subType;
    c_long timestamp;
    c_string description;
    c_string URL;
    c_bool read;
    c_sequence responses;
};

extern const char *Mind_NotificationResponse_metaDescriptor[];
extern const int Mind_NotificationResponse_metaDescriptorArrLength;
extern const int Mind_NotificationResponse_metaDescriptorLength;
extern c_metaObject __Mind_NotificationResponse__load (c_base base);
struct _Mind_NotificationResponse ;
extern  v_copyin_result __Mind_NotificationResponse__copyIn(c_base base, const class Mind::NotificationResponse *from, struct _Mind_NotificationResponse *to);
extern  void __Mind_NotificationResponse__copyOut(const void *_from, void *_to);
struct _Mind_NotificationResponse {
    c_string UUID;
    c_string UUIDNotification;
    enum _Mind_NotificationResponseType response;
};

extern const char *Mind_Reminder_metaDescriptor[];
extern const int Mind_Reminder_metaDescriptorArrLength;
extern const int Mind_Reminder_metaDescriptorLength;
extern c_metaObject __Mind_Reminder__load (c_base base);
struct _Mind_Reminder ;
extern  v_copyin_result __Mind_Reminder__copyIn(c_base base, const class Mind::Reminder *from, struct _Mind_Reminder *to);
extern  void __Mind_Reminder__copyOut(const void *_from, void *_to);
struct _Mind_Reminder {
    c_string UUID;
    c_long reminderDate;
    c_string subject;
    c_string alertFrom;
    c_string message;
    c_bool acknowledged;
};

extern const char *Mind_Reminder_Command_metaDescriptor[];
extern const int Mind_Reminder_Command_metaDescriptorArrLength;
extern const int Mind_Reminder_Command_metaDescriptorLength;
extern c_metaObject __Mind_Reminder_Command__load (c_base base);
struct _Mind_Reminder_Command ;
extern  v_copyin_result __Mind_Reminder_Command__copyIn(c_base base, const class Mind::Reminder_Command *from, struct _Mind_Reminder_Command *to);
extern  void __Mind_Reminder_Command__copyOut(const void *_from, void *_to);
struct _Mind_Reminder_Command {
    c_string UUID;
    c_string property;
    c_string value;
};

extern const char *Mind_Timer_metaDescriptor[];
extern const int Mind_Timer_metaDescriptorArrLength;
extern const int Mind_Timer_metaDescriptorLength;
extern c_metaObject __Mind_Timer__load (c_base base);
struct _Mind_Timer ;
extern  v_copyin_result __Mind_Timer__copyIn(c_base base, const class Mind::Timer *from, struct _Mind_Timer *to);
extern  void __Mind_Timer__copyOut(const void *_from, void *_to);
struct _Mind_Timer {
    c_string UUID;
    c_string timeStart;
    c_long timeInterval;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Timer_Command_metaDescriptor[];
extern const int Mind_Timer_Command_metaDescriptorArrLength;
extern const int Mind_Timer_Command_metaDescriptorLength;
extern c_metaObject __Mind_Timer_Command__load (c_base base);
struct _Mind_Timer_Command ;
extern  v_copyin_result __Mind_Timer_Command__copyIn(c_base base, const class Mind::Timer_Command *from, struct _Mind_Timer_Command *to);
extern  void __Mind_Timer_Command__copyOut(const void *_from, void *_to);
struct _Mind_Timer_Command {
    c_string UUID;
    c_string property;
    c_string value;
};

extern const char *Mind_Wakeup_metaDescriptor[];
extern const int Mind_Wakeup_metaDescriptorArrLength;
extern const int Mind_Wakeup_metaDescriptorLength;
extern c_metaObject __Mind_Wakeup__load (c_base base);
struct _Mind_Wakeup ;
extern  v_copyin_result __Mind_Wakeup__copyIn(c_base base, const class Mind::Wakeup *from, struct _Mind_Wakeup *to);
extern  void __Mind_Wakeup__copyOut(const void *_from, void *_to);
struct _Mind_Wakeup {
    c_string UUID;
    c_string dailyMask;
    c_string time;
    c_string UUIDUser;
    c_string soundType;
    c_bool enabled;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Wakeup_Command_metaDescriptor[];
extern const int Mind_Wakeup_Command_metaDescriptorArrLength;
extern const int Mind_Wakeup_Command_metaDescriptorLength;
extern c_metaObject __Mind_Wakeup_Command__load (c_base base);
struct _Mind_Wakeup_Command ;
extern  v_copyin_result __Mind_Wakeup_Command__copyIn(c_base base, const class Mind::Wakeup_Command *from, struct _Mind_Wakeup_Command *to);
extern  void __Mind_Wakeup_Command__copyOut(const void *_from, void *_to);
struct _Mind_Wakeup_Command {
    c_string UUID;
    c_string property;
    c_string value;
};

#undef OS_API
#endif
