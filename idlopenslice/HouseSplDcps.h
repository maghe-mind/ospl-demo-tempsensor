#ifndef HOUSESPLTYPES_H
#define HOUSESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "House_DCPS.hpp"
#include "Commons_DCPS.hpp"



extern c_metaObject __House_Mind__load (c_base base);

extern const char *Mind_House_metaDescriptor[];
extern const int Mind_House_metaDescriptorArrLength;
extern const int Mind_House_metaDescriptorLength;
extern c_metaObject __Mind_House__load (c_base base);
struct _Mind_House ;
extern  v_copyin_result __Mind_House__copyIn(c_base base, const class Mind::House *from, struct _Mind_House *to);
extern  void __Mind_House__copyOut(const void *_from, void *_to);
struct _Mind_House {
    c_string UUID;
    c_string name;
    c_double targetTemperatureAwaySummer;
    c_double targetTemperatureHolidaySummer;
    c_double targetTemperatureAwayWinter;
    c_double targetTemperatureHolidayWinter;
    enum _Mind_TemperatureMode temperatureMode;
    c_bool automaticWinterSummerSwitch;
    c_double lowTemperatureThreshold;
    c_double highTemperatureThreshold;
    enum _Mind_HouseMode currentMode;
    enum _Mind_StateName currentState;
    c_sequence image;
    c_string holidayStartDate;
    c_string holidayEndDate;
    c_long automaticHolidayFromAwayActivation_days;
    c_long automaticAwayFromHolidayActivation_days;
    c_long automaticAwayActivation_hours;
    c_double preheatingTime;
    enum _Mind_NotificationSetting notificationSettingDay;
    enum _Mind_NotificationSetting notificationSettingNight;
    enum _Mind_NotificationSetting notificationSettingAway;
    enum _Mind_NotificationSetting notificationSettingHoliday;
    enum _Mind_NotificationSetting notificationSettingGuest;
    enum _Mind_NightAlarmSetting alarmSetting;
    c_double geofenceThreshold;
    c_bool streamingEnabled;
    c_bool livenessSimulation;
    c_long guestCheckoutTimeout;
    c_long checkoutTimeout;
    c_long checkinTimeout;
    c_string longitude;
    c_string latitudine;
    c_long alarmDuration;
    c_long alarmMaxRepeat;
    c_double coThreshold;
    c_double coTolerance;
    c_double humidityThreshold;
    c_double humidityTolerance;
    c_double vocThreshold;
    c_double vocTolerance;
    c_double co2Threshold;
    c_double co2Tolerance;
    c_double nh4Threshold;
    c_double nh4Tolerance;
    c_double motionThreshold;
    c_double motionTolerance;
    c_double brightnessThreshold;
    c_double brightnessTolerance;
    c_double cloudyThreshold;
    c_double cloudyTolerance;
    c_string lowerDayThreshold;
    c_string upperDayThreshold;
};

extern const char *Mind_House_Network_Settings_metaDescriptor[];
extern const int Mind_House_Network_Settings_metaDescriptorArrLength;
extern const int Mind_House_Network_Settings_metaDescriptorLength;
extern c_metaObject __Mind_House_Network_Settings__load (c_base base);
struct _Mind_House_Network_Settings ;
extern  v_copyin_result __Mind_House_Network_Settings__copyIn(c_base base, const class Mind::House_Network_Settings *from, struct _Mind_House_Network_Settings *to);
extern  void __Mind_House_Network_Settings__copyOut(const void *_from, void *_to);
struct _Mind_House_Network_Settings {
    c_sequence MACAddresses;
    c_sequence IPAddresses;
    c_sequence serialNumber;
    c_string SSIDWifiUser;
    c_string SSDIWifiPassw;
};

extern const char *Mind_House_PeopleCount_metaDescriptor[];
extern const int Mind_House_PeopleCount_metaDescriptorArrLength;
extern const int Mind_House_PeopleCount_metaDescriptorLength;
extern c_metaObject __Mind_House_PeopleCount__load (c_base base);
struct _Mind_House_PeopleCount ;
extern  v_copyin_result __Mind_House_PeopleCount__copyIn(c_base base, const class Mind::House_PeopleCount *from, struct _Mind_House_PeopleCount *to);
extern  void __Mind_House_PeopleCount__copyOut(const void *_from, void *_to);
struct _Mind_House_PeopleCount {
    c_long knownPeopleCount;
    c_long previousKnownPeopleCount;
    c_long unknownPeopleCount;
    c_long previousUnknownPeopleCount;
    c_long bonusPeopleCount;
    c_long previousBonusPeopleCount;
    c_long peopleCount;
    c_long previousPeopleCount;
};

extern const char *Mind_House_Occupancy_metaDescriptor[];
extern const int Mind_House_Occupancy_metaDescriptorArrLength;
extern const int Mind_House_Occupancy_metaDescriptorLength;
extern c_metaObject __Mind_House_Occupancy__load (c_base base);
struct _Mind_House_Occupancy ;
extern  v_copyin_result __Mind_House_Occupancy__copyIn(c_base base, const class Mind::House_Occupancy *from, struct _Mind_House_Occupancy *to);
extern  void __Mind_House_Occupancy__copyOut(const void *_from, void *_to);
struct _Mind_House_Occupancy {
    c_sequence weekDaily;
    c_long weekDailySampleCount;
    c_sequence monthly;
    c_long monthlySampleCount;
};

extern const char *Mind_House_Presence_metaDescriptor[];
extern const int Mind_House_Presence_metaDescriptorArrLength;
extern const int Mind_House_Presence_metaDescriptorLength;
extern c_metaObject __Mind_House_Presence__load (c_base base);
struct _Mind_House_Presence ;
extern  v_copyin_result __Mind_House_Presence__copyIn(c_base base, const class Mind::House_Presence *from, struct _Mind_House_Presence *to);
extern  void __Mind_House_Presence__copyOut(const void *_from, void *_to);
struct _Mind_House_Presence {
    c_string UUID;
    c_double faceRecognized;
    c_double bluetoothRecognized;
};

extern const char *Mind_House_PIN_metaDescriptor[];
extern const int Mind_House_PIN_metaDescriptorArrLength;
extern const int Mind_House_PIN_metaDescriptorLength;
extern c_metaObject __Mind_House_PIN__load (c_base base);
struct _Mind_House_PIN ;
extern  v_copyin_result __Mind_House_PIN__copyIn(c_base base, const class Mind::House_PIN *from, struct _Mind_House_PIN *to);
extern  void __Mind_House_PIN__copyOut(const void *_from, void *_to);
struct _Mind_House_PIN {
    c_string userPINCode;
};

extern const char *Mind_House_Command_metaDescriptor[];
extern const int Mind_House_Command_metaDescriptorArrLength;
extern const int Mind_House_Command_metaDescriptorLength;
extern c_metaObject __Mind_House_Command__load (c_base base);
struct _Mind_House_Command ;
extern  v_copyin_result __Mind_House_Command__copyIn(c_base base, const class Mind::House_Command *from, struct _Mind_House_Command *to);
extern  void __Mind_House_Command__copyOut(const void *_from, void *_to);
struct _Mind_House_Command {
    c_string property;
    c_string value;
};

extern const char *Mind_House_Signal_metaDescriptor[];
extern const int Mind_House_Signal_metaDescriptorArrLength;
extern const int Mind_House_Signal_metaDescriptorLength;
extern c_metaObject __Mind_House_Signal__load (c_base base);
struct _Mind_House_Signal ;
extern  v_copyin_result __Mind_House_Signal__copyIn(c_base base, const class Mind::House_Signal *from, struct _Mind_House_Signal *to);
extern  void __Mind_House_Signal__copyOut(const void *_from, void *_to);
struct _Mind_House_Signal {
    c_string name;
    c_string value;
    c_double ttl;
    c_string UUIDAmbience;
    c_string UUIDRoom;
    c_string UUIDFloor;
    c_string UUIDHouse;
};

extern const char *Mind_Firmware_metaDescriptor[];
extern const int Mind_Firmware_metaDescriptorArrLength;
extern const int Mind_Firmware_metaDescriptorLength;
extern c_metaObject __Mind_Firmware__load (c_base base);
struct _Mind_Firmware ;
extern  v_copyin_result __Mind_Firmware__copyIn(c_base base, const class Mind::Firmware *from, struct _Mind_Firmware *to);
extern  void __Mind_Firmware__copyOut(const void *_from, void *_to);
struct _Mind_Firmware {
    c_sequence fwMicro;
    c_sequence fwESP8266;
};

#undef OS_API
#endif
