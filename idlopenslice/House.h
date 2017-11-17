#ifndef _HOUSE_H_
#define _HOUSE_H_

#include <dds/core/ddscore.hpp>
#include "Commons.h"

namespace Mind
{
    class House OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<uint8_t>  _image_seq;

        std::string UUID_;
        std::string name_;
        double targetTemperatureAwaySummer_;
        double targetTemperatureHolidaySummer_;
        double targetTemperatureAwayWinter_;
        double targetTemperatureHolidayWinter_;
        Mind::TemperatureMode temperatureMode_;
        bool automaticWinterSummerSwitch_;
        double lowTemperatureThreshold_;
        double highTemperatureThreshold_;
        Mind::HouseMode currentMode_;
        Mind::StateName currentState_;
        std::vector<uint8_t>  image_;
        std::string holidayStartDate_;
        std::string holidayEndDate_;
        int32_t automaticHolidayFromAwayActivation_days_;
        int32_t automaticAwayFromHolidayActivation_days_;
        int32_t automaticAwayActivation_hours_;
        double preheatingTime_;
        Mind::NotificationSetting notificationSettingDay_;
        Mind::NotificationSetting notificationSettingNight_;
        Mind::NotificationSetting notificationSettingAway_;
        Mind::NotificationSetting notificationSettingHoliday_;
        Mind::NotificationSetting notificationSettingGuest_;
        Mind::NightAlarmSetting alarmSetting_;
        double geofenceThreshold_;
        bool streamingEnabled_;
        bool livenessSimulation_;
        int32_t guestCheckoutTimeout_;
        int32_t checkoutTimeout_;
        int32_t checkinTimeout_;
        std::string longitude_;
        std::string latitudine_;
        int32_t alarmDuration_;
        int32_t alarmMaxRepeat_;
        double coThreshold_;
        double coTolerance_;
        double humidityThreshold_;
        double humidityTolerance_;
        double vocThreshold_;
        double vocTolerance_;
        double co2Threshold_;
        double co2Tolerance_;
        double nh4Threshold_;
        double nh4Tolerance_;
        double motionThreshold_;
        double motionTolerance_;
        double brightnessThreshold_;
        double brightnessTolerance_;
        double cloudyThreshold_;
        double cloudyTolerance_;
        std::string lowerDayThreshold_;
        std::string upperDayThreshold_;

    public:
        House() :
                targetTemperatureAwaySummer_(0.0),
                targetTemperatureHolidaySummer_(0.0),
                targetTemperatureAwayWinter_(0.0),
                targetTemperatureHolidayWinter_(0.0),
                temperatureMode_(OSPL_ENUM_LABEL(Mind,TemperatureMode,TEMPERATURE_MODE_NONE)),
                automaticWinterSummerSwitch_(false),
                lowTemperatureThreshold_(0.0),
                highTemperatureThreshold_(0.0),
                currentMode_(OSPL_ENUM_LABEL(Mind,HouseMode,HOUSE_MODE_AWAY)),
                currentState_(OSPL_ENUM_LABEL(Mind,StateName,STATE_SETUP)),
                automaticHolidayFromAwayActivation_days_(0),
                automaticAwayFromHolidayActivation_days_(0),
                automaticAwayActivation_hours_(0),
                preheatingTime_(0.0),
                notificationSettingDay_(OSPL_ENUM_LABEL(Mind,NotificationSetting,SECURITY_NOTIFICATION_SETTING_NONE)),
                notificationSettingNight_(OSPL_ENUM_LABEL(Mind,NotificationSetting,SECURITY_NOTIFICATION_SETTING_NONE)),
                notificationSettingAway_(OSPL_ENUM_LABEL(Mind,NotificationSetting,SECURITY_NOTIFICATION_SETTING_NONE)),
                notificationSettingHoliday_(OSPL_ENUM_LABEL(Mind,NotificationSetting,SECURITY_NOTIFICATION_SETTING_NONE)),
                notificationSettingGuest_(OSPL_ENUM_LABEL(Mind,NotificationSetting,SECURITY_NOTIFICATION_SETTING_NONE)),
                alarmSetting_(OSPL_ENUM_LABEL(Mind,NightAlarmSetting,NIGHT_ALARM_SETTING_NONE)),
                geofenceThreshold_(0.0),
                streamingEnabled_(false),
                livenessSimulation_(false),
                guestCheckoutTimeout_(0),
                checkoutTimeout_(0),
                checkinTimeout_(0),
                alarmDuration_(0),
                alarmMaxRepeat_(0),
                coThreshold_(0.0),
                coTolerance_(0.0),
                humidityThreshold_(0.0),
                humidityTolerance_(0.0),
                vocThreshold_(0.0),
                vocTolerance_(0.0),
                co2Threshold_(0.0),
                co2Tolerance_(0.0),
                nh4Threshold_(0.0),
                nh4Tolerance_(0.0),
                motionThreshold_(0.0),
                motionTolerance_(0.0),
                brightnessThreshold_(0.0),
                brightnessTolerance_(0.0),
                cloudyThreshold_(0.0),
                cloudyTolerance_(0.0) {}

        explicit House(
            const std::string& UUID,
            const std::string& name,
            double targetTemperatureAwaySummer,
            double targetTemperatureHolidaySummer,
            double targetTemperatureAwayWinter,
            double targetTemperatureHolidayWinter,
            Mind::TemperatureMode temperatureMode,
            bool automaticWinterSummerSwitch,
            double lowTemperatureThreshold,
            double highTemperatureThreshold,
            Mind::HouseMode currentMode,
            Mind::StateName currentState,
            const std::vector<uint8_t> & image,
            const std::string& holidayStartDate,
            const std::string& holidayEndDate,
            int32_t automaticHolidayFromAwayActivation_days,
            int32_t automaticAwayFromHolidayActivation_days,
            int32_t automaticAwayActivation_hours,
            double preheatingTime,
            Mind::NotificationSetting notificationSettingDay,
            Mind::NotificationSetting notificationSettingNight,
            Mind::NotificationSetting notificationSettingAway,
            Mind::NotificationSetting notificationSettingHoliday,
            Mind::NotificationSetting notificationSettingGuest,
            Mind::NightAlarmSetting alarmSetting,
            double geofenceThreshold,
            bool streamingEnabled,
            bool livenessSimulation,
            int32_t guestCheckoutTimeout,
            int32_t checkoutTimeout,
            int32_t checkinTimeout,
            const std::string& longitude,
            const std::string& latitudine,
            int32_t alarmDuration,
            int32_t alarmMaxRepeat,
            double coThreshold,
            double coTolerance,
            double humidityThreshold,
            double humidityTolerance,
            double vocThreshold,
            double vocTolerance,
            double co2Threshold,
            double co2Tolerance,
            double nh4Threshold,
            double nh4Tolerance,
            double motionThreshold,
            double motionTolerance,
            double brightnessThreshold,
            double brightnessTolerance,
            double cloudyThreshold,
            double cloudyTolerance,
            const std::string& lowerDayThreshold,
            const std::string& upperDayThreshold) : 
                UUID_(UUID),
                name_(name),
                targetTemperatureAwaySummer_(targetTemperatureAwaySummer),
                targetTemperatureHolidaySummer_(targetTemperatureHolidaySummer),
                targetTemperatureAwayWinter_(targetTemperatureAwayWinter),
                targetTemperatureHolidayWinter_(targetTemperatureHolidayWinter),
                temperatureMode_(temperatureMode),
                automaticWinterSummerSwitch_(automaticWinterSummerSwitch),
                lowTemperatureThreshold_(lowTemperatureThreshold),
                highTemperatureThreshold_(highTemperatureThreshold),
                currentMode_(currentMode),
                currentState_(currentState),
                image_(image),
                holidayStartDate_(holidayStartDate),
                holidayEndDate_(holidayEndDate),
                automaticHolidayFromAwayActivation_days_(automaticHolidayFromAwayActivation_days),
                automaticAwayFromHolidayActivation_days_(automaticAwayFromHolidayActivation_days),
                automaticAwayActivation_hours_(automaticAwayActivation_hours),
                preheatingTime_(preheatingTime),
                notificationSettingDay_(notificationSettingDay),
                notificationSettingNight_(notificationSettingNight),
                notificationSettingAway_(notificationSettingAway),
                notificationSettingHoliday_(notificationSettingHoliday),
                notificationSettingGuest_(notificationSettingGuest),
                alarmSetting_(alarmSetting),
                geofenceThreshold_(geofenceThreshold),
                streamingEnabled_(streamingEnabled),
                livenessSimulation_(livenessSimulation),
                guestCheckoutTimeout_(guestCheckoutTimeout),
                checkoutTimeout_(checkoutTimeout),
                checkinTimeout_(checkinTimeout),
                longitude_(longitude),
                latitudine_(latitudine),
                alarmDuration_(alarmDuration),
                alarmMaxRepeat_(alarmMaxRepeat),
                coThreshold_(coThreshold),
                coTolerance_(coTolerance),
                humidityThreshold_(humidityThreshold),
                humidityTolerance_(humidityTolerance),
                vocThreshold_(vocThreshold),
                vocTolerance_(vocTolerance),
                co2Threshold_(co2Threshold),
                co2Tolerance_(co2Tolerance),
                nh4Threshold_(nh4Threshold),
                nh4Tolerance_(nh4Tolerance),
                motionThreshold_(motionThreshold),
                motionTolerance_(motionTolerance),
                brightnessThreshold_(brightnessThreshold),
                brightnessTolerance_(brightnessTolerance),
                cloudyThreshold_(cloudyThreshold),
                cloudyTolerance_(cloudyTolerance),
                lowerDayThreshold_(lowerDayThreshold),
                upperDayThreshold_(upperDayThreshold) {}

        House(const House &_other) : 
                UUID_(_other.UUID_),
                name_(_other.name_),
                targetTemperatureAwaySummer_(_other.targetTemperatureAwaySummer_),
                targetTemperatureHolidaySummer_(_other.targetTemperatureHolidaySummer_),
                targetTemperatureAwayWinter_(_other.targetTemperatureAwayWinter_),
                targetTemperatureHolidayWinter_(_other.targetTemperatureHolidayWinter_),
                temperatureMode_(_other.temperatureMode_),
                automaticWinterSummerSwitch_(_other.automaticWinterSummerSwitch_),
                lowTemperatureThreshold_(_other.lowTemperatureThreshold_),
                highTemperatureThreshold_(_other.highTemperatureThreshold_),
                currentMode_(_other.currentMode_),
                currentState_(_other.currentState_),
                image_(_other.image_),
                holidayStartDate_(_other.holidayStartDate_),
                holidayEndDate_(_other.holidayEndDate_),
                automaticHolidayFromAwayActivation_days_(_other.automaticHolidayFromAwayActivation_days_),
                automaticAwayFromHolidayActivation_days_(_other.automaticAwayFromHolidayActivation_days_),
                automaticAwayActivation_hours_(_other.automaticAwayActivation_hours_),
                preheatingTime_(_other.preheatingTime_),
                notificationSettingDay_(_other.notificationSettingDay_),
                notificationSettingNight_(_other.notificationSettingNight_),
                notificationSettingAway_(_other.notificationSettingAway_),
                notificationSettingHoliday_(_other.notificationSettingHoliday_),
                notificationSettingGuest_(_other.notificationSettingGuest_),
                alarmSetting_(_other.alarmSetting_),
                geofenceThreshold_(_other.geofenceThreshold_),
                streamingEnabled_(_other.streamingEnabled_),
                livenessSimulation_(_other.livenessSimulation_),
                guestCheckoutTimeout_(_other.guestCheckoutTimeout_),
                checkoutTimeout_(_other.checkoutTimeout_),
                checkinTimeout_(_other.checkinTimeout_),
                longitude_(_other.longitude_),
                latitudine_(_other.latitudine_),
                alarmDuration_(_other.alarmDuration_),
                alarmMaxRepeat_(_other.alarmMaxRepeat_),
                coThreshold_(_other.coThreshold_),
                coTolerance_(_other.coTolerance_),
                humidityThreshold_(_other.humidityThreshold_),
                humidityTolerance_(_other.humidityTolerance_),
                vocThreshold_(_other.vocThreshold_),
                vocTolerance_(_other.vocTolerance_),
                co2Threshold_(_other.co2Threshold_),
                co2Tolerance_(_other.co2Tolerance_),
                nh4Threshold_(_other.nh4Threshold_),
                nh4Tolerance_(_other.nh4Tolerance_),
                motionThreshold_(_other.motionThreshold_),
                motionTolerance_(_other.motionTolerance_),
                brightnessThreshold_(_other.brightnessThreshold_),
                brightnessTolerance_(_other.brightnessTolerance_),
                cloudyThreshold_(_other.cloudyThreshold_),
                cloudyTolerance_(_other.cloudyTolerance_),
                lowerDayThreshold_(_other.lowerDayThreshold_),
                upperDayThreshold_(_other.upperDayThreshold_) {}

#ifdef OSPL_DDS_CXX11
        House(House &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                name_(::std::move(_other.name_)),
                targetTemperatureAwaySummer_(::std::move(_other.targetTemperatureAwaySummer_)),
                targetTemperatureHolidaySummer_(::std::move(_other.targetTemperatureHolidaySummer_)),
                targetTemperatureAwayWinter_(::std::move(_other.targetTemperatureAwayWinter_)),
                targetTemperatureHolidayWinter_(::std::move(_other.targetTemperatureHolidayWinter_)),
                temperatureMode_(::std::move(_other.temperatureMode_)),
                automaticWinterSummerSwitch_(::std::move(_other.automaticWinterSummerSwitch_)),
                lowTemperatureThreshold_(::std::move(_other.lowTemperatureThreshold_)),
                highTemperatureThreshold_(::std::move(_other.highTemperatureThreshold_)),
                currentMode_(::std::move(_other.currentMode_)),
                currentState_(::std::move(_other.currentState_)),
                image_(::std::move(_other.image_)),
                holidayStartDate_(::std::move(_other.holidayStartDate_)),
                holidayEndDate_(::std::move(_other.holidayEndDate_)),
                automaticHolidayFromAwayActivation_days_(::std::move(_other.automaticHolidayFromAwayActivation_days_)),
                automaticAwayFromHolidayActivation_days_(::std::move(_other.automaticAwayFromHolidayActivation_days_)),
                automaticAwayActivation_hours_(::std::move(_other.automaticAwayActivation_hours_)),
                preheatingTime_(::std::move(_other.preheatingTime_)),
                notificationSettingDay_(::std::move(_other.notificationSettingDay_)),
                notificationSettingNight_(::std::move(_other.notificationSettingNight_)),
                notificationSettingAway_(::std::move(_other.notificationSettingAway_)),
                notificationSettingHoliday_(::std::move(_other.notificationSettingHoliday_)),
                notificationSettingGuest_(::std::move(_other.notificationSettingGuest_)),
                alarmSetting_(::std::move(_other.alarmSetting_)),
                geofenceThreshold_(::std::move(_other.geofenceThreshold_)),
                streamingEnabled_(::std::move(_other.streamingEnabled_)),
                livenessSimulation_(::std::move(_other.livenessSimulation_)),
                guestCheckoutTimeout_(::std::move(_other.guestCheckoutTimeout_)),
                checkoutTimeout_(::std::move(_other.checkoutTimeout_)),
                checkinTimeout_(::std::move(_other.checkinTimeout_)),
                longitude_(::std::move(_other.longitude_)),
                latitudine_(::std::move(_other.latitudine_)),
                alarmDuration_(::std::move(_other.alarmDuration_)),
                alarmMaxRepeat_(::std::move(_other.alarmMaxRepeat_)),
                coThreshold_(::std::move(_other.coThreshold_)),
                coTolerance_(::std::move(_other.coTolerance_)),
                humidityThreshold_(::std::move(_other.humidityThreshold_)),
                humidityTolerance_(::std::move(_other.humidityTolerance_)),
                vocThreshold_(::std::move(_other.vocThreshold_)),
                vocTolerance_(::std::move(_other.vocTolerance_)),
                co2Threshold_(::std::move(_other.co2Threshold_)),
                co2Tolerance_(::std::move(_other.co2Tolerance_)),
                nh4Threshold_(::std::move(_other.nh4Threshold_)),
                nh4Tolerance_(::std::move(_other.nh4Tolerance_)),
                motionThreshold_(::std::move(_other.motionThreshold_)),
                motionTolerance_(::std::move(_other.motionTolerance_)),
                brightnessThreshold_(::std::move(_other.brightnessThreshold_)),
                brightnessTolerance_(::std::move(_other.brightnessTolerance_)),
                cloudyThreshold_(::std::move(_other.cloudyThreshold_)),
                cloudyTolerance_(::std::move(_other.cloudyTolerance_)),
                lowerDayThreshold_(::std::move(_other.lowerDayThreshold_)),
                upperDayThreshold_(::std::move(_other.upperDayThreshold_)) {}

        House& operator=(House &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                name_ = ::std::move(_other.name_);
                targetTemperatureAwaySummer_ = ::std::move(_other.targetTemperatureAwaySummer_);
                targetTemperatureHolidaySummer_ = ::std::move(_other.targetTemperatureHolidaySummer_);
                targetTemperatureAwayWinter_ = ::std::move(_other.targetTemperatureAwayWinter_);
                targetTemperatureHolidayWinter_ = ::std::move(_other.targetTemperatureHolidayWinter_);
                temperatureMode_ = ::std::move(_other.temperatureMode_);
                automaticWinterSummerSwitch_ = ::std::move(_other.automaticWinterSummerSwitch_);
                lowTemperatureThreshold_ = ::std::move(_other.lowTemperatureThreshold_);
                highTemperatureThreshold_ = ::std::move(_other.highTemperatureThreshold_);
                currentMode_ = ::std::move(_other.currentMode_);
                currentState_ = ::std::move(_other.currentState_);
                image_ = ::std::move(_other.image_);
                holidayStartDate_ = ::std::move(_other.holidayStartDate_);
                holidayEndDate_ = ::std::move(_other.holidayEndDate_);
                automaticHolidayFromAwayActivation_days_ = ::std::move(_other.automaticHolidayFromAwayActivation_days_);
                automaticAwayFromHolidayActivation_days_ = ::std::move(_other.automaticAwayFromHolidayActivation_days_);
                automaticAwayActivation_hours_ = ::std::move(_other.automaticAwayActivation_hours_);
                preheatingTime_ = ::std::move(_other.preheatingTime_);
                notificationSettingDay_ = ::std::move(_other.notificationSettingDay_);
                notificationSettingNight_ = ::std::move(_other.notificationSettingNight_);
                notificationSettingAway_ = ::std::move(_other.notificationSettingAway_);
                notificationSettingHoliday_ = ::std::move(_other.notificationSettingHoliday_);
                notificationSettingGuest_ = ::std::move(_other.notificationSettingGuest_);
                alarmSetting_ = ::std::move(_other.alarmSetting_);
                geofenceThreshold_ = ::std::move(_other.geofenceThreshold_);
                streamingEnabled_ = ::std::move(_other.streamingEnabled_);
                livenessSimulation_ = ::std::move(_other.livenessSimulation_);
                guestCheckoutTimeout_ = ::std::move(_other.guestCheckoutTimeout_);
                checkoutTimeout_ = ::std::move(_other.checkoutTimeout_);
                checkinTimeout_ = ::std::move(_other.checkinTimeout_);
                longitude_ = ::std::move(_other.longitude_);
                latitudine_ = ::std::move(_other.latitudine_);
                alarmDuration_ = ::std::move(_other.alarmDuration_);
                alarmMaxRepeat_ = ::std::move(_other.alarmMaxRepeat_);
                coThreshold_ = ::std::move(_other.coThreshold_);
                coTolerance_ = ::std::move(_other.coTolerance_);
                humidityThreshold_ = ::std::move(_other.humidityThreshold_);
                humidityTolerance_ = ::std::move(_other.humidityTolerance_);
                vocThreshold_ = ::std::move(_other.vocThreshold_);
                vocTolerance_ = ::std::move(_other.vocTolerance_);
                co2Threshold_ = ::std::move(_other.co2Threshold_);
                co2Tolerance_ = ::std::move(_other.co2Tolerance_);
                nh4Threshold_ = ::std::move(_other.nh4Threshold_);
                nh4Tolerance_ = ::std::move(_other.nh4Tolerance_);
                motionThreshold_ = ::std::move(_other.motionThreshold_);
                motionTolerance_ = ::std::move(_other.motionTolerance_);
                brightnessThreshold_ = ::std::move(_other.brightnessThreshold_);
                brightnessTolerance_ = ::std::move(_other.brightnessTolerance_);
                cloudyThreshold_ = ::std::move(_other.cloudyThreshold_);
                cloudyTolerance_ = ::std::move(_other.cloudyTolerance_);
                lowerDayThreshold_ = ::std::move(_other.lowerDayThreshold_);
                upperDayThreshold_ = ::std::move(_other.upperDayThreshold_);
            }
            return *this;
        }
#endif

        House& operator=(const House &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                name_ = _other.name_;
                targetTemperatureAwaySummer_ = _other.targetTemperatureAwaySummer_;
                targetTemperatureHolidaySummer_ = _other.targetTemperatureHolidaySummer_;
                targetTemperatureAwayWinter_ = _other.targetTemperatureAwayWinter_;
                targetTemperatureHolidayWinter_ = _other.targetTemperatureHolidayWinter_;
                temperatureMode_ = _other.temperatureMode_;
                automaticWinterSummerSwitch_ = _other.automaticWinterSummerSwitch_;
                lowTemperatureThreshold_ = _other.lowTemperatureThreshold_;
                highTemperatureThreshold_ = _other.highTemperatureThreshold_;
                currentMode_ = _other.currentMode_;
                currentState_ = _other.currentState_;
                image_ = _other.image_;
                holidayStartDate_ = _other.holidayStartDate_;
                holidayEndDate_ = _other.holidayEndDate_;
                automaticHolidayFromAwayActivation_days_ = _other.automaticHolidayFromAwayActivation_days_;
                automaticAwayFromHolidayActivation_days_ = _other.automaticAwayFromHolidayActivation_days_;
                automaticAwayActivation_hours_ = _other.automaticAwayActivation_hours_;
                preheatingTime_ = _other.preheatingTime_;
                notificationSettingDay_ = _other.notificationSettingDay_;
                notificationSettingNight_ = _other.notificationSettingNight_;
                notificationSettingAway_ = _other.notificationSettingAway_;
                notificationSettingHoliday_ = _other.notificationSettingHoliday_;
                notificationSettingGuest_ = _other.notificationSettingGuest_;
                alarmSetting_ = _other.alarmSetting_;
                geofenceThreshold_ = _other.geofenceThreshold_;
                streamingEnabled_ = _other.streamingEnabled_;
                livenessSimulation_ = _other.livenessSimulation_;
                guestCheckoutTimeout_ = _other.guestCheckoutTimeout_;
                checkoutTimeout_ = _other.checkoutTimeout_;
                checkinTimeout_ = _other.checkinTimeout_;
                longitude_ = _other.longitude_;
                latitudine_ = _other.latitudine_;
                alarmDuration_ = _other.alarmDuration_;
                alarmMaxRepeat_ = _other.alarmMaxRepeat_;
                coThreshold_ = _other.coThreshold_;
                coTolerance_ = _other.coTolerance_;
                humidityThreshold_ = _other.humidityThreshold_;
                humidityTolerance_ = _other.humidityTolerance_;
                vocThreshold_ = _other.vocThreshold_;
                vocTolerance_ = _other.vocTolerance_;
                co2Threshold_ = _other.co2Threshold_;
                co2Tolerance_ = _other.co2Tolerance_;
                nh4Threshold_ = _other.nh4Threshold_;
                nh4Tolerance_ = _other.nh4Tolerance_;
                motionThreshold_ = _other.motionThreshold_;
                motionTolerance_ = _other.motionTolerance_;
                brightnessThreshold_ = _other.brightnessThreshold_;
                brightnessTolerance_ = _other.brightnessTolerance_;
                cloudyThreshold_ = _other.cloudyThreshold_;
                cloudyTolerance_ = _other.cloudyTolerance_;
                lowerDayThreshold_ = _other.lowerDayThreshold_;
                upperDayThreshold_ = _other.upperDayThreshold_;
            }
            return *this;
        }

        bool operator==(const House& _other) const
        {
            return UUID_ == _other.UUID_ &&
                name_ == _other.name_ &&
                targetTemperatureAwaySummer_ == _other.targetTemperatureAwaySummer_ &&
                targetTemperatureHolidaySummer_ == _other.targetTemperatureHolidaySummer_ &&
                targetTemperatureAwayWinter_ == _other.targetTemperatureAwayWinter_ &&
                targetTemperatureHolidayWinter_ == _other.targetTemperatureHolidayWinter_ &&
                temperatureMode_ == _other.temperatureMode_ &&
                automaticWinterSummerSwitch_ == _other.automaticWinterSummerSwitch_ &&
                lowTemperatureThreshold_ == _other.lowTemperatureThreshold_ &&
                highTemperatureThreshold_ == _other.highTemperatureThreshold_ &&
                currentMode_ == _other.currentMode_ &&
                currentState_ == _other.currentState_ &&
                image_ == _other.image_ &&
                holidayStartDate_ == _other.holidayStartDate_ &&
                holidayEndDate_ == _other.holidayEndDate_ &&
                automaticHolidayFromAwayActivation_days_ == _other.automaticHolidayFromAwayActivation_days_ &&
                automaticAwayFromHolidayActivation_days_ == _other.automaticAwayFromHolidayActivation_days_ &&
                automaticAwayActivation_hours_ == _other.automaticAwayActivation_hours_ &&
                preheatingTime_ == _other.preheatingTime_ &&
                notificationSettingDay_ == _other.notificationSettingDay_ &&
                notificationSettingNight_ == _other.notificationSettingNight_ &&
                notificationSettingAway_ == _other.notificationSettingAway_ &&
                notificationSettingHoliday_ == _other.notificationSettingHoliday_ &&
                notificationSettingGuest_ == _other.notificationSettingGuest_ &&
                alarmSetting_ == _other.alarmSetting_ &&
                geofenceThreshold_ == _other.geofenceThreshold_ &&
                streamingEnabled_ == _other.streamingEnabled_ &&
                livenessSimulation_ == _other.livenessSimulation_ &&
                guestCheckoutTimeout_ == _other.guestCheckoutTimeout_ &&
                checkoutTimeout_ == _other.checkoutTimeout_ &&
                checkinTimeout_ == _other.checkinTimeout_ &&
                longitude_ == _other.longitude_ &&
                latitudine_ == _other.latitudine_ &&
                alarmDuration_ == _other.alarmDuration_ &&
                alarmMaxRepeat_ == _other.alarmMaxRepeat_ &&
                coThreshold_ == _other.coThreshold_ &&
                coTolerance_ == _other.coTolerance_ &&
                humidityThreshold_ == _other.humidityThreshold_ &&
                humidityTolerance_ == _other.humidityTolerance_ &&
                vocThreshold_ == _other.vocThreshold_ &&
                vocTolerance_ == _other.vocTolerance_ &&
                co2Threshold_ == _other.co2Threshold_ &&
                co2Tolerance_ == _other.co2Tolerance_ &&
                nh4Threshold_ == _other.nh4Threshold_ &&
                nh4Tolerance_ == _other.nh4Tolerance_ &&
                motionThreshold_ == _other.motionThreshold_ &&
                motionTolerance_ == _other.motionTolerance_ &&
                brightnessThreshold_ == _other.brightnessThreshold_ &&
                brightnessTolerance_ == _other.brightnessTolerance_ &&
                cloudyThreshold_ == _other.cloudyThreshold_ &&
                cloudyTolerance_ == _other.cloudyTolerance_ &&
                lowerDayThreshold_ == _other.lowerDayThreshold_ &&
                upperDayThreshold_ == _other.upperDayThreshold_;
        }

        bool operator!=(const House& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        double targetTemperatureAwaySummer() const { return this->targetTemperatureAwaySummer_; }
        double& targetTemperatureAwaySummer() { return this->targetTemperatureAwaySummer_; }
        void targetTemperatureAwaySummer(double _val_) { this->targetTemperatureAwaySummer_ = _val_; }
        double targetTemperatureHolidaySummer() const { return this->targetTemperatureHolidaySummer_; }
        double& targetTemperatureHolidaySummer() { return this->targetTemperatureHolidaySummer_; }
        void targetTemperatureHolidaySummer(double _val_) { this->targetTemperatureHolidaySummer_ = _val_; }
        double targetTemperatureAwayWinter() const { return this->targetTemperatureAwayWinter_; }
        double& targetTemperatureAwayWinter() { return this->targetTemperatureAwayWinter_; }
        void targetTemperatureAwayWinter(double _val_) { this->targetTemperatureAwayWinter_ = _val_; }
        double targetTemperatureHolidayWinter() const { return this->targetTemperatureHolidayWinter_; }
        double& targetTemperatureHolidayWinter() { return this->targetTemperatureHolidayWinter_; }
        void targetTemperatureHolidayWinter(double _val_) { this->targetTemperatureHolidayWinter_ = _val_; }
        Mind::TemperatureMode temperatureMode() const { return this->temperatureMode_; }
        Mind::TemperatureMode& temperatureMode() { return this->temperatureMode_; }
        void temperatureMode(Mind::TemperatureMode _val_) { this->temperatureMode_ = _val_; }
        bool automaticWinterSummerSwitch() const { return this->automaticWinterSummerSwitch_; }
        bool& automaticWinterSummerSwitch() { return this->automaticWinterSummerSwitch_; }
        void automaticWinterSummerSwitch(bool _val_) { this->automaticWinterSummerSwitch_ = _val_; }
        double lowTemperatureThreshold() const { return this->lowTemperatureThreshold_; }
        double& lowTemperatureThreshold() { return this->lowTemperatureThreshold_; }
        void lowTemperatureThreshold(double _val_) { this->lowTemperatureThreshold_ = _val_; }
        double highTemperatureThreshold() const { return this->highTemperatureThreshold_; }
        double& highTemperatureThreshold() { return this->highTemperatureThreshold_; }
        void highTemperatureThreshold(double _val_) { this->highTemperatureThreshold_ = _val_; }
        Mind::HouseMode currentMode() const { return this->currentMode_; }
        Mind::HouseMode& currentMode() { return this->currentMode_; }
        void currentMode(Mind::HouseMode _val_) { this->currentMode_ = _val_; }
        Mind::StateName currentState() const { return this->currentState_; }
        Mind::StateName& currentState() { return this->currentState_; }
        void currentState(Mind::StateName _val_) { this->currentState_ = _val_; }
        const std::vector<uint8_t> & image() const { return this->image_; }
        std::vector<uint8_t> & image() { return this->image_; }
        void image(const std::vector<uint8_t> & _val_) { this->image_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void image(std::vector<uint8_t> && _val_) { this->image_ = _val_; }
#endif
        const std::string& holidayStartDate() const { return this->holidayStartDate_; }
        std::string& holidayStartDate() { return this->holidayStartDate_; }
        void holidayStartDate(const std::string& _val_) { this->holidayStartDate_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void holidayStartDate(std::string&& _val_) { this->holidayStartDate_ = _val_; }
#endif
        const std::string& holidayEndDate() const { return this->holidayEndDate_; }
        std::string& holidayEndDate() { return this->holidayEndDate_; }
        void holidayEndDate(const std::string& _val_) { this->holidayEndDate_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void holidayEndDate(std::string&& _val_) { this->holidayEndDate_ = _val_; }
#endif
        int32_t automaticHolidayFromAwayActivation_days() const { return this->automaticHolidayFromAwayActivation_days_; }
        int32_t& automaticHolidayFromAwayActivation_days() { return this->automaticHolidayFromAwayActivation_days_; }
        void automaticHolidayFromAwayActivation_days(int32_t _val_) { this->automaticHolidayFromAwayActivation_days_ = _val_; }
        int32_t automaticAwayFromHolidayActivation_days() const { return this->automaticAwayFromHolidayActivation_days_; }
        int32_t& automaticAwayFromHolidayActivation_days() { return this->automaticAwayFromHolidayActivation_days_; }
        void automaticAwayFromHolidayActivation_days(int32_t _val_) { this->automaticAwayFromHolidayActivation_days_ = _val_; }
        int32_t automaticAwayActivation_hours() const { return this->automaticAwayActivation_hours_; }
        int32_t& automaticAwayActivation_hours() { return this->automaticAwayActivation_hours_; }
        void automaticAwayActivation_hours(int32_t _val_) { this->automaticAwayActivation_hours_ = _val_; }
        double preheatingTime() const { return this->preheatingTime_; }
        double& preheatingTime() { return this->preheatingTime_; }
        void preheatingTime(double _val_) { this->preheatingTime_ = _val_; }
        Mind::NotificationSetting notificationSettingDay() const { return this->notificationSettingDay_; }
        Mind::NotificationSetting& notificationSettingDay() { return this->notificationSettingDay_; }
        void notificationSettingDay(Mind::NotificationSetting _val_) { this->notificationSettingDay_ = _val_; }
        Mind::NotificationSetting notificationSettingNight() const { return this->notificationSettingNight_; }
        Mind::NotificationSetting& notificationSettingNight() { return this->notificationSettingNight_; }
        void notificationSettingNight(Mind::NotificationSetting _val_) { this->notificationSettingNight_ = _val_; }
        Mind::NotificationSetting notificationSettingAway() const { return this->notificationSettingAway_; }
        Mind::NotificationSetting& notificationSettingAway() { return this->notificationSettingAway_; }
        void notificationSettingAway(Mind::NotificationSetting _val_) { this->notificationSettingAway_ = _val_; }
        Mind::NotificationSetting notificationSettingHoliday() const { return this->notificationSettingHoliday_; }
        Mind::NotificationSetting& notificationSettingHoliday() { return this->notificationSettingHoliday_; }
        void notificationSettingHoliday(Mind::NotificationSetting _val_) { this->notificationSettingHoliday_ = _val_; }
        Mind::NotificationSetting notificationSettingGuest() const { return this->notificationSettingGuest_; }
        Mind::NotificationSetting& notificationSettingGuest() { return this->notificationSettingGuest_; }
        void notificationSettingGuest(Mind::NotificationSetting _val_) { this->notificationSettingGuest_ = _val_; }
        Mind::NightAlarmSetting alarmSetting() const { return this->alarmSetting_; }
        Mind::NightAlarmSetting& alarmSetting() { return this->alarmSetting_; }
        void alarmSetting(Mind::NightAlarmSetting _val_) { this->alarmSetting_ = _val_; }
        double geofenceThreshold() const { return this->geofenceThreshold_; }
        double& geofenceThreshold() { return this->geofenceThreshold_; }
        void geofenceThreshold(double _val_) { this->geofenceThreshold_ = _val_; }
        bool streamingEnabled() const { return this->streamingEnabled_; }
        bool& streamingEnabled() { return this->streamingEnabled_; }
        void streamingEnabled(bool _val_) { this->streamingEnabled_ = _val_; }
        bool livenessSimulation() const { return this->livenessSimulation_; }
        bool& livenessSimulation() { return this->livenessSimulation_; }
        void livenessSimulation(bool _val_) { this->livenessSimulation_ = _val_; }
        int32_t guestCheckoutTimeout() const { return this->guestCheckoutTimeout_; }
        int32_t& guestCheckoutTimeout() { return this->guestCheckoutTimeout_; }
        void guestCheckoutTimeout(int32_t _val_) { this->guestCheckoutTimeout_ = _val_; }
        int32_t checkoutTimeout() const { return this->checkoutTimeout_; }
        int32_t& checkoutTimeout() { return this->checkoutTimeout_; }
        void checkoutTimeout(int32_t _val_) { this->checkoutTimeout_ = _val_; }
        int32_t checkinTimeout() const { return this->checkinTimeout_; }
        int32_t& checkinTimeout() { return this->checkinTimeout_; }
        void checkinTimeout(int32_t _val_) { this->checkinTimeout_ = _val_; }
        const std::string& longitude() const { return this->longitude_; }
        std::string& longitude() { return this->longitude_; }
        void longitude(const std::string& _val_) { this->longitude_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void longitude(std::string&& _val_) { this->longitude_ = _val_; }
#endif
        const std::string& latitudine() const { return this->latitudine_; }
        std::string& latitudine() { return this->latitudine_; }
        void latitudine(const std::string& _val_) { this->latitudine_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void latitudine(std::string&& _val_) { this->latitudine_ = _val_; }
#endif
        int32_t alarmDuration() const { return this->alarmDuration_; }
        int32_t& alarmDuration() { return this->alarmDuration_; }
        void alarmDuration(int32_t _val_) { this->alarmDuration_ = _val_; }
        int32_t alarmMaxRepeat() const { return this->alarmMaxRepeat_; }
        int32_t& alarmMaxRepeat() { return this->alarmMaxRepeat_; }
        void alarmMaxRepeat(int32_t _val_) { this->alarmMaxRepeat_ = _val_; }
        double coThreshold() const { return this->coThreshold_; }
        double& coThreshold() { return this->coThreshold_; }
        void coThreshold(double _val_) { this->coThreshold_ = _val_; }
        double coTolerance() const { return this->coTolerance_; }
        double& coTolerance() { return this->coTolerance_; }
        void coTolerance(double _val_) { this->coTolerance_ = _val_; }
        double humidityThreshold() const { return this->humidityThreshold_; }
        double& humidityThreshold() { return this->humidityThreshold_; }
        void humidityThreshold(double _val_) { this->humidityThreshold_ = _val_; }
        double humidityTolerance() const { return this->humidityTolerance_; }
        double& humidityTolerance() { return this->humidityTolerance_; }
        void humidityTolerance(double _val_) { this->humidityTolerance_ = _val_; }
        double vocThreshold() const { return this->vocThreshold_; }
        double& vocThreshold() { return this->vocThreshold_; }
        void vocThreshold(double _val_) { this->vocThreshold_ = _val_; }
        double vocTolerance() const { return this->vocTolerance_; }
        double& vocTolerance() { return this->vocTolerance_; }
        void vocTolerance(double _val_) { this->vocTolerance_ = _val_; }
        double co2Threshold() const { return this->co2Threshold_; }
        double& co2Threshold() { return this->co2Threshold_; }
        void co2Threshold(double _val_) { this->co2Threshold_ = _val_; }
        double co2Tolerance() const { return this->co2Tolerance_; }
        double& co2Tolerance() { return this->co2Tolerance_; }
        void co2Tolerance(double _val_) { this->co2Tolerance_ = _val_; }
        double nh4Threshold() const { return this->nh4Threshold_; }
        double& nh4Threshold() { return this->nh4Threshold_; }
        void nh4Threshold(double _val_) { this->nh4Threshold_ = _val_; }
        double nh4Tolerance() const { return this->nh4Tolerance_; }
        double& nh4Tolerance() { return this->nh4Tolerance_; }
        void nh4Tolerance(double _val_) { this->nh4Tolerance_ = _val_; }
        double motionThreshold() const { return this->motionThreshold_; }
        double& motionThreshold() { return this->motionThreshold_; }
        void motionThreshold(double _val_) { this->motionThreshold_ = _val_; }
        double motionTolerance() const { return this->motionTolerance_; }
        double& motionTolerance() { return this->motionTolerance_; }
        void motionTolerance(double _val_) { this->motionTolerance_ = _val_; }
        double brightnessThreshold() const { return this->brightnessThreshold_; }
        double& brightnessThreshold() { return this->brightnessThreshold_; }
        void brightnessThreshold(double _val_) { this->brightnessThreshold_ = _val_; }
        double brightnessTolerance() const { return this->brightnessTolerance_; }
        double& brightnessTolerance() { return this->brightnessTolerance_; }
        void brightnessTolerance(double _val_) { this->brightnessTolerance_ = _val_; }
        double cloudyThreshold() const { return this->cloudyThreshold_; }
        double& cloudyThreshold() { return this->cloudyThreshold_; }
        void cloudyThreshold(double _val_) { this->cloudyThreshold_ = _val_; }
        double cloudyTolerance() const { return this->cloudyTolerance_; }
        double& cloudyTolerance() { return this->cloudyTolerance_; }
        void cloudyTolerance(double _val_) { this->cloudyTolerance_ = _val_; }
        const std::string& lowerDayThreshold() const { return this->lowerDayThreshold_; }
        std::string& lowerDayThreshold() { return this->lowerDayThreshold_; }
        void lowerDayThreshold(const std::string& _val_) { this->lowerDayThreshold_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void lowerDayThreshold(std::string&& _val_) { this->lowerDayThreshold_ = _val_; }
#endif
        const std::string& upperDayThreshold() const { return this->upperDayThreshold_; }
        std::string& upperDayThreshold() { return this->upperDayThreshold_; }
        void upperDayThreshold(const std::string& _val_) { this->upperDayThreshold_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void upperDayThreshold(std::string&& _val_) { this->upperDayThreshold_ = _val_; }
#endif
    };

    class House_Network_Settings OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _MACAddresses_seq;

        typedef std::vector<std::string>  _IPAddresses_seq;

        typedef std::vector<std::string>  _serialNumber_seq;

        std::vector<std::string>  MACAddresses_;
        std::vector<std::string>  IPAddresses_;
        std::vector<std::string>  serialNumber_;
        std::string SSIDWifiUser_;
        std::string SSDIWifiPassw_;

    public:
        House_Network_Settings() {}

        explicit House_Network_Settings(
            const std::vector<std::string> & MACAddresses,
            const std::vector<std::string> & IPAddresses,
            const std::vector<std::string> & serialNumber,
            const std::string& SSIDWifiUser,
            const std::string& SSDIWifiPassw) : 
                MACAddresses_(MACAddresses),
                IPAddresses_(IPAddresses),
                serialNumber_(serialNumber),
                SSIDWifiUser_(SSIDWifiUser),
                SSDIWifiPassw_(SSDIWifiPassw) {}

        House_Network_Settings(const House_Network_Settings &_other) : 
                MACAddresses_(_other.MACAddresses_),
                IPAddresses_(_other.IPAddresses_),
                serialNumber_(_other.serialNumber_),
                SSIDWifiUser_(_other.SSIDWifiUser_),
                SSDIWifiPassw_(_other.SSDIWifiPassw_) {}

#ifdef OSPL_DDS_CXX11
        House_Network_Settings(House_Network_Settings &&_other) : 
                MACAddresses_(::std::move(_other.MACAddresses_)),
                IPAddresses_(::std::move(_other.IPAddresses_)),
                serialNumber_(::std::move(_other.serialNumber_)),
                SSIDWifiUser_(::std::move(_other.SSIDWifiUser_)),
                SSDIWifiPassw_(::std::move(_other.SSDIWifiPassw_)) {}

        House_Network_Settings& operator=(House_Network_Settings &&_other)
        {
            if (this != &_other) {
                MACAddresses_ = ::std::move(_other.MACAddresses_);
                IPAddresses_ = ::std::move(_other.IPAddresses_);
                serialNumber_ = ::std::move(_other.serialNumber_);
                SSIDWifiUser_ = ::std::move(_other.SSIDWifiUser_);
                SSDIWifiPassw_ = ::std::move(_other.SSDIWifiPassw_);
            }
            return *this;
        }
#endif

        House_Network_Settings& operator=(const House_Network_Settings &_other)
        {
            if (this != &_other) {
                MACAddresses_ = _other.MACAddresses_;
                IPAddresses_ = _other.IPAddresses_;
                serialNumber_ = _other.serialNumber_;
                SSIDWifiUser_ = _other.SSIDWifiUser_;
                SSDIWifiPassw_ = _other.SSDIWifiPassw_;
            }
            return *this;
        }

        bool operator==(const House_Network_Settings& _other) const
        {
            return MACAddresses_ == _other.MACAddresses_ &&
                IPAddresses_ == _other.IPAddresses_ &&
                serialNumber_ == _other.serialNumber_ &&
                SSIDWifiUser_ == _other.SSIDWifiUser_ &&
                SSDIWifiPassw_ == _other.SSDIWifiPassw_;
        }

        bool operator!=(const House_Network_Settings& _other) const
        {
            return !(*this == _other);
        }

        const std::vector<std::string> & MACAddresses() const { return this->MACAddresses_; }
        std::vector<std::string> & MACAddresses() { return this->MACAddresses_; }
        void MACAddresses(const std::vector<std::string> & _val_) { this->MACAddresses_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddresses(std::vector<std::string> && _val_) { this->MACAddresses_ = _val_; }
#endif
        const std::vector<std::string> & IPAddresses() const { return this->IPAddresses_; }
        std::vector<std::string> & IPAddresses() { return this->IPAddresses_; }
        void IPAddresses(const std::vector<std::string> & _val_) { this->IPAddresses_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void IPAddresses(std::vector<std::string> && _val_) { this->IPAddresses_ = _val_; }
#endif
        const std::vector<std::string> & serialNumber() const { return this->serialNumber_; }
        std::vector<std::string> & serialNumber() { return this->serialNumber_; }
        void serialNumber(const std::vector<std::string> & _val_) { this->serialNumber_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void serialNumber(std::vector<std::string> && _val_) { this->serialNumber_ = _val_; }
#endif
        const std::string& SSIDWifiUser() const { return this->SSIDWifiUser_; }
        std::string& SSIDWifiUser() { return this->SSIDWifiUser_; }
        void SSIDWifiUser(const std::string& _val_) { this->SSIDWifiUser_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void SSIDWifiUser(std::string&& _val_) { this->SSIDWifiUser_ = _val_; }
#endif
        const std::string& SSDIWifiPassw() const { return this->SSDIWifiPassw_; }
        std::string& SSDIWifiPassw() { return this->SSDIWifiPassw_; }
        void SSDIWifiPassw(const std::string& _val_) { this->SSDIWifiPassw_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void SSDIWifiPassw(std::string&& _val_) { this->SSDIWifiPassw_ = _val_; }
#endif
    };

    class House_PeopleCount OSPL_DDS_FINAL
    {
    public:
        int32_t knownPeopleCount_;
        int32_t previousKnownPeopleCount_;
        int32_t unknownPeopleCount_;
        int32_t previousUnknownPeopleCount_;
        int32_t bonusPeopleCount_;
        int32_t previousBonusPeopleCount_;
        int32_t peopleCount_;
        int32_t previousPeopleCount_;

    public:
        House_PeopleCount() :
                knownPeopleCount_(0),
                previousKnownPeopleCount_(0),
                unknownPeopleCount_(0),
                previousUnknownPeopleCount_(0),
                bonusPeopleCount_(0),
                previousBonusPeopleCount_(0),
                peopleCount_(0),
                previousPeopleCount_(0) {}

        explicit House_PeopleCount(
            int32_t knownPeopleCount,
            int32_t previousKnownPeopleCount,
            int32_t unknownPeopleCount,
            int32_t previousUnknownPeopleCount,
            int32_t bonusPeopleCount,
            int32_t previousBonusPeopleCount,
            int32_t peopleCount,
            int32_t previousPeopleCount) : 
                knownPeopleCount_(knownPeopleCount),
                previousKnownPeopleCount_(previousKnownPeopleCount),
                unknownPeopleCount_(unknownPeopleCount),
                previousUnknownPeopleCount_(previousUnknownPeopleCount),
                bonusPeopleCount_(bonusPeopleCount),
                previousBonusPeopleCount_(previousBonusPeopleCount),
                peopleCount_(peopleCount),
                previousPeopleCount_(previousPeopleCount) {}

        House_PeopleCount(const House_PeopleCount &_other) : 
                knownPeopleCount_(_other.knownPeopleCount_),
                previousKnownPeopleCount_(_other.previousKnownPeopleCount_),
                unknownPeopleCount_(_other.unknownPeopleCount_),
                previousUnknownPeopleCount_(_other.previousUnknownPeopleCount_),
                bonusPeopleCount_(_other.bonusPeopleCount_),
                previousBonusPeopleCount_(_other.previousBonusPeopleCount_),
                peopleCount_(_other.peopleCount_),
                previousPeopleCount_(_other.previousPeopleCount_) {}

#ifdef OSPL_DDS_CXX11
        House_PeopleCount(House_PeopleCount &&_other) : 
                knownPeopleCount_(::std::move(_other.knownPeopleCount_)),
                previousKnownPeopleCount_(::std::move(_other.previousKnownPeopleCount_)),
                unknownPeopleCount_(::std::move(_other.unknownPeopleCount_)),
                previousUnknownPeopleCount_(::std::move(_other.previousUnknownPeopleCount_)),
                bonusPeopleCount_(::std::move(_other.bonusPeopleCount_)),
                previousBonusPeopleCount_(::std::move(_other.previousBonusPeopleCount_)),
                peopleCount_(::std::move(_other.peopleCount_)),
                previousPeopleCount_(::std::move(_other.previousPeopleCount_)) {}

        House_PeopleCount& operator=(House_PeopleCount &&_other)
        {
            if (this != &_other) {
                knownPeopleCount_ = ::std::move(_other.knownPeopleCount_);
                previousKnownPeopleCount_ = ::std::move(_other.previousKnownPeopleCount_);
                unknownPeopleCount_ = ::std::move(_other.unknownPeopleCount_);
                previousUnknownPeopleCount_ = ::std::move(_other.previousUnknownPeopleCount_);
                bonusPeopleCount_ = ::std::move(_other.bonusPeopleCount_);
                previousBonusPeopleCount_ = ::std::move(_other.previousBonusPeopleCount_);
                peopleCount_ = ::std::move(_other.peopleCount_);
                previousPeopleCount_ = ::std::move(_other.previousPeopleCount_);
            }
            return *this;
        }
#endif

        House_PeopleCount& operator=(const House_PeopleCount &_other)
        {
            if (this != &_other) {
                knownPeopleCount_ = _other.knownPeopleCount_;
                previousKnownPeopleCount_ = _other.previousKnownPeopleCount_;
                unknownPeopleCount_ = _other.unknownPeopleCount_;
                previousUnknownPeopleCount_ = _other.previousUnknownPeopleCount_;
                bonusPeopleCount_ = _other.bonusPeopleCount_;
                previousBonusPeopleCount_ = _other.previousBonusPeopleCount_;
                peopleCount_ = _other.peopleCount_;
                previousPeopleCount_ = _other.previousPeopleCount_;
            }
            return *this;
        }

        bool operator==(const House_PeopleCount& _other) const
        {
            return knownPeopleCount_ == _other.knownPeopleCount_ &&
                previousKnownPeopleCount_ == _other.previousKnownPeopleCount_ &&
                unknownPeopleCount_ == _other.unknownPeopleCount_ &&
                previousUnknownPeopleCount_ == _other.previousUnknownPeopleCount_ &&
                bonusPeopleCount_ == _other.bonusPeopleCount_ &&
                previousBonusPeopleCount_ == _other.previousBonusPeopleCount_ &&
                peopleCount_ == _other.peopleCount_ &&
                previousPeopleCount_ == _other.previousPeopleCount_;
        }

        bool operator!=(const House_PeopleCount& _other) const
        {
            return !(*this == _other);
        }

        int32_t knownPeopleCount() const { return this->knownPeopleCount_; }
        int32_t& knownPeopleCount() { return this->knownPeopleCount_; }
        void knownPeopleCount(int32_t _val_) { this->knownPeopleCount_ = _val_; }
        int32_t previousKnownPeopleCount() const { return this->previousKnownPeopleCount_; }
        int32_t& previousKnownPeopleCount() { return this->previousKnownPeopleCount_; }
        void previousKnownPeopleCount(int32_t _val_) { this->previousKnownPeopleCount_ = _val_; }
        int32_t unknownPeopleCount() const { return this->unknownPeopleCount_; }
        int32_t& unknownPeopleCount() { return this->unknownPeopleCount_; }
        void unknownPeopleCount(int32_t _val_) { this->unknownPeopleCount_ = _val_; }
        int32_t previousUnknownPeopleCount() const { return this->previousUnknownPeopleCount_; }
        int32_t& previousUnknownPeopleCount() { return this->previousUnknownPeopleCount_; }
        void previousUnknownPeopleCount(int32_t _val_) { this->previousUnknownPeopleCount_ = _val_; }
        int32_t bonusPeopleCount() const { return this->bonusPeopleCount_; }
        int32_t& bonusPeopleCount() { return this->bonusPeopleCount_; }
        void bonusPeopleCount(int32_t _val_) { this->bonusPeopleCount_ = _val_; }
        int32_t previousBonusPeopleCount() const { return this->previousBonusPeopleCount_; }
        int32_t& previousBonusPeopleCount() { return this->previousBonusPeopleCount_; }
        void previousBonusPeopleCount(int32_t _val_) { this->previousBonusPeopleCount_ = _val_; }
        int32_t peopleCount() const { return this->peopleCount_; }
        int32_t& peopleCount() { return this->peopleCount_; }
        void peopleCount(int32_t _val_) { this->peopleCount_ = _val_; }
        int32_t previousPeopleCount() const { return this->previousPeopleCount_; }
        int32_t& previousPeopleCount() { return this->previousPeopleCount_; }
        void previousPeopleCount(int32_t _val_) { this->previousPeopleCount_ = _val_; }
    };

    class House_Occupancy OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<double>  _weekDaily_seq;

        typedef std::vector<double>  _monthly_seq;

        std::vector<double>  weekDaily_;
        int32_t weekDailySampleCount_;
        std::vector<double>  monthly_;
        int32_t monthlySampleCount_;

    public:
        House_Occupancy() :
                weekDailySampleCount_(0),
                monthlySampleCount_(0) {}

        explicit House_Occupancy(
            const std::vector<double> & weekDaily,
            int32_t weekDailySampleCount,
            const std::vector<double> & monthly,
            int32_t monthlySampleCount) : 
                weekDaily_(weekDaily),
                weekDailySampleCount_(weekDailySampleCount),
                monthly_(monthly),
                monthlySampleCount_(monthlySampleCount) {}

        House_Occupancy(const House_Occupancy &_other) : 
                weekDaily_(_other.weekDaily_),
                weekDailySampleCount_(_other.weekDailySampleCount_),
                monthly_(_other.monthly_),
                monthlySampleCount_(_other.monthlySampleCount_) {}

#ifdef OSPL_DDS_CXX11
        House_Occupancy(House_Occupancy &&_other) : 
                weekDaily_(::std::move(_other.weekDaily_)),
                weekDailySampleCount_(::std::move(_other.weekDailySampleCount_)),
                monthly_(::std::move(_other.monthly_)),
                monthlySampleCount_(::std::move(_other.monthlySampleCount_)) {}

        House_Occupancy& operator=(House_Occupancy &&_other)
        {
            if (this != &_other) {
                weekDaily_ = ::std::move(_other.weekDaily_);
                weekDailySampleCount_ = ::std::move(_other.weekDailySampleCount_);
                monthly_ = ::std::move(_other.monthly_);
                monthlySampleCount_ = ::std::move(_other.monthlySampleCount_);
            }
            return *this;
        }
#endif

        House_Occupancy& operator=(const House_Occupancy &_other)
        {
            if (this != &_other) {
                weekDaily_ = _other.weekDaily_;
                weekDailySampleCount_ = _other.weekDailySampleCount_;
                monthly_ = _other.monthly_;
                monthlySampleCount_ = _other.monthlySampleCount_;
            }
            return *this;
        }

        bool operator==(const House_Occupancy& _other) const
        {
            return weekDaily_ == _other.weekDaily_ &&
                weekDailySampleCount_ == _other.weekDailySampleCount_ &&
                monthly_ == _other.monthly_ &&
                monthlySampleCount_ == _other.monthlySampleCount_;
        }

        bool operator!=(const House_Occupancy& _other) const
        {
            return !(*this == _other);
        }

        const std::vector<double> & weekDaily() const { return this->weekDaily_; }
        std::vector<double> & weekDaily() { return this->weekDaily_; }
        void weekDaily(const std::vector<double> & _val_) { this->weekDaily_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void weekDaily(std::vector<double> && _val_) { this->weekDaily_ = _val_; }
#endif
        int32_t weekDailySampleCount() const { return this->weekDailySampleCount_; }
        int32_t& weekDailySampleCount() { return this->weekDailySampleCount_; }
        void weekDailySampleCount(int32_t _val_) { this->weekDailySampleCount_ = _val_; }
        const std::vector<double> & monthly() const { return this->monthly_; }
        std::vector<double> & monthly() { return this->monthly_; }
        void monthly(const std::vector<double> & _val_) { this->monthly_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void monthly(std::vector<double> && _val_) { this->monthly_ = _val_; }
#endif
        int32_t monthlySampleCount() const { return this->monthlySampleCount_; }
        int32_t& monthlySampleCount() { return this->monthlySampleCount_; }
        void monthlySampleCount(int32_t _val_) { this->monthlySampleCount_ = _val_; }
    };

    class House_Presence OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        double faceRecognized_;
        double bluetoothRecognized_;

    public:
        House_Presence() :
                faceRecognized_(0.0),
                bluetoothRecognized_(0.0) {}

        explicit House_Presence(
            const std::string& UUID,
            double faceRecognized,
            double bluetoothRecognized) : 
                UUID_(UUID),
                faceRecognized_(faceRecognized),
                bluetoothRecognized_(bluetoothRecognized) {}

        House_Presence(const House_Presence &_other) : 
                UUID_(_other.UUID_),
                faceRecognized_(_other.faceRecognized_),
                bluetoothRecognized_(_other.bluetoothRecognized_) {}

#ifdef OSPL_DDS_CXX11
        House_Presence(House_Presence &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                faceRecognized_(::std::move(_other.faceRecognized_)),
                bluetoothRecognized_(::std::move(_other.bluetoothRecognized_)) {}

        House_Presence& operator=(House_Presence &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                faceRecognized_ = ::std::move(_other.faceRecognized_);
                bluetoothRecognized_ = ::std::move(_other.bluetoothRecognized_);
            }
            return *this;
        }
#endif

        House_Presence& operator=(const House_Presence &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                faceRecognized_ = _other.faceRecognized_;
                bluetoothRecognized_ = _other.bluetoothRecognized_;
            }
            return *this;
        }

        bool operator==(const House_Presence& _other) const
        {
            return UUID_ == _other.UUID_ &&
                faceRecognized_ == _other.faceRecognized_ &&
                bluetoothRecognized_ == _other.bluetoothRecognized_;
        }

        bool operator!=(const House_Presence& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        double faceRecognized() const { return this->faceRecognized_; }
        double& faceRecognized() { return this->faceRecognized_; }
        void faceRecognized(double _val_) { this->faceRecognized_ = _val_; }
        double bluetoothRecognized() const { return this->bluetoothRecognized_; }
        double& bluetoothRecognized() { return this->bluetoothRecognized_; }
        void bluetoothRecognized(double _val_) { this->bluetoothRecognized_ = _val_; }
    };

    class House_PIN OSPL_DDS_FINAL
    {
    public:
        std::string userPINCode_;

    public:
        House_PIN() {}

        explicit House_PIN(
            const std::string& userPINCode) : 
                userPINCode_(userPINCode) {}

        House_PIN(const House_PIN &_other) : 
                userPINCode_(_other.userPINCode_) {}

#ifdef OSPL_DDS_CXX11
        House_PIN(House_PIN &&_other) : 
                userPINCode_(::std::move(_other.userPINCode_)) {}

        House_PIN& operator=(House_PIN &&_other)
        {
            if (this != &_other) {
                userPINCode_ = ::std::move(_other.userPINCode_);
            }
            return *this;
        }
#endif

        House_PIN& operator=(const House_PIN &_other)
        {
            if (this != &_other) {
                userPINCode_ = _other.userPINCode_;
            }
            return *this;
        }

        bool operator==(const House_PIN& _other) const
        {
            return userPINCode_ == _other.userPINCode_;
        }

        bool operator!=(const House_PIN& _other) const
        {
            return !(*this == _other);
        }

        const std::string& userPINCode() const { return this->userPINCode_; }
        std::string& userPINCode() { return this->userPINCode_; }
        void userPINCode(const std::string& _val_) { this->userPINCode_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void userPINCode(std::string&& _val_) { this->userPINCode_ = _val_; }
#endif
    };

    class House_Command OSPL_DDS_FINAL
    {
    public:
        std::string property_;
        std::string value_;

    public:
        House_Command() {}

        explicit House_Command(
            const std::string& property,
            const std::string& value) : 
                property_(property),
                value_(value) {}

        House_Command(const House_Command &_other) : 
                property_(_other.property_),
                value_(_other.value_) {}

#ifdef OSPL_DDS_CXX11
        House_Command(House_Command &&_other) : 
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)) {}

        House_Command& operator=(House_Command &&_other)
        {
            if (this != &_other) {
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
            }
            return *this;
        }
#endif

        House_Command& operator=(const House_Command &_other)
        {
            if (this != &_other) {
                property_ = _other.property_;
                value_ = _other.value_;
            }
            return *this;
        }

        bool operator==(const House_Command& _other) const
        {
            return property_ == _other.property_ &&
                value_ == _other.value_;
        }

        bool operator!=(const House_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& property() const { return this->property_; }
        std::string& property() { return this->property_; }
        void property(const std::string& _val_) { this->property_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void property(std::string&& _val_) { this->property_ = _val_; }
#endif
        const std::string& value() const { return this->value_; }
        std::string& value() { return this->value_; }
        void value(const std::string& _val_) { this->value_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void value(std::string&& _val_) { this->value_ = _val_; }
#endif
    };

    class House_Signal OSPL_DDS_FINAL
    {
    public:
        std::string name_;
        std::string value_;
        double ttl_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        House_Signal() :
                ttl_(0.0) {}

        explicit House_Signal(
            const std::string& name,
            const std::string& value,
            double ttl,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                name_(name),
                value_(value),
                ttl_(ttl),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        House_Signal(const House_Signal &_other) : 
                name_(_other.name_),
                value_(_other.value_),
                ttl_(_other.ttl_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        House_Signal(House_Signal &&_other) : 
                name_(::std::move(_other.name_)),
                value_(::std::move(_other.value_)),
                ttl_(::std::move(_other.ttl_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        House_Signal& operator=(House_Signal &&_other)
        {
            if (this != &_other) {
                name_ = ::std::move(_other.name_);
                value_ = ::std::move(_other.value_);
                ttl_ = ::std::move(_other.ttl_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        House_Signal& operator=(const House_Signal &_other)
        {
            if (this != &_other) {
                name_ = _other.name_;
                value_ = _other.value_;
                ttl_ = _other.ttl_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const House_Signal& _other) const
        {
            return name_ == _other.name_ &&
                value_ == _other.value_ &&
                ttl_ == _other.ttl_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const House_Signal& _other) const
        {
            return !(*this == _other);
        }

        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        const std::string& value() const { return this->value_; }
        std::string& value() { return this->value_; }
        void value(const std::string& _val_) { this->value_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void value(std::string&& _val_) { this->value_ = _val_; }
#endif
        double ttl() const { return this->ttl_; }
        double& ttl() { return this->ttl_; }
        void ttl(double _val_) { this->ttl_ = _val_; }
        const std::string& UUIDAmbience() const { return this->UUIDAmbience_; }
        std::string& UUIDAmbience() { return this->UUIDAmbience_; }
        void UUIDAmbience(const std::string& _val_) { this->UUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbience(std::string&& _val_) { this->UUIDAmbience_ = _val_; }
#endif
        const std::string& UUIDRoom() const { return this->UUIDRoom_; }
        std::string& UUIDRoom() { return this->UUIDRoom_; }
        void UUIDRoom(const std::string& _val_) { this->UUIDRoom_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDRoom(std::string&& _val_) { this->UUIDRoom_ = _val_; }
#endif
        const std::string& UUIDFloor() const { return this->UUIDFloor_; }
        std::string& UUIDFloor() { return this->UUIDFloor_; }
        void UUIDFloor(const std::string& _val_) { this->UUIDFloor_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDFloor(std::string&& _val_) { this->UUIDFloor_ = _val_; }
#endif
        const std::string& UUIDHouse() const { return this->UUIDHouse_; }
        std::string& UUIDHouse() { return this->UUIDHouse_; }
        void UUIDHouse(const std::string& _val_) { this->UUIDHouse_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDHouse(std::string&& _val_) { this->UUIDHouse_ = _val_; }
#endif
    };

    class Firmware OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<uint8_t>  _fwMicro_seq;

        typedef std::vector<uint8_t>  _fwESP8266_seq;

        std::vector<uint8_t>  fwMicro_;
        std::vector<uint8_t>  fwESP8266_;

    public:
        Firmware() {}

        explicit Firmware(
            const std::vector<uint8_t> & fwMicro,
            const std::vector<uint8_t> & fwESP8266) : 
                fwMicro_(fwMicro),
                fwESP8266_(fwESP8266) {}

        Firmware(const Firmware &_other) : 
                fwMicro_(_other.fwMicro_),
                fwESP8266_(_other.fwESP8266_) {}

#ifdef OSPL_DDS_CXX11
        Firmware(Firmware &&_other) : 
                fwMicro_(::std::move(_other.fwMicro_)),
                fwESP8266_(::std::move(_other.fwESP8266_)) {}

        Firmware& operator=(Firmware &&_other)
        {
            if (this != &_other) {
                fwMicro_ = ::std::move(_other.fwMicro_);
                fwESP8266_ = ::std::move(_other.fwESP8266_);
            }
            return *this;
        }
#endif

        Firmware& operator=(const Firmware &_other)
        {
            if (this != &_other) {
                fwMicro_ = _other.fwMicro_;
                fwESP8266_ = _other.fwESP8266_;
            }
            return *this;
        }

        bool operator==(const Firmware& _other) const
        {
            return fwMicro_ == _other.fwMicro_ &&
                fwESP8266_ == _other.fwESP8266_;
        }

        bool operator!=(const Firmware& _other) const
        {
            return !(*this == _other);
        }

        const std::vector<uint8_t> & fwMicro() const { return this->fwMicro_; }
        std::vector<uint8_t> & fwMicro() { return this->fwMicro_; }
        void fwMicro(const std::vector<uint8_t> & _val_) { this->fwMicro_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void fwMicro(std::vector<uint8_t> && _val_) { this->fwMicro_ = _val_; }
#endif
        const std::vector<uint8_t> & fwESP8266() const { return this->fwESP8266_; }
        std::vector<uint8_t> & fwESP8266() { return this->fwESP8266_; }
        void fwESP8266(const std::vector<uint8_t> & _val_) { this->fwESP8266_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void fwESP8266(std::vector<uint8_t> && _val_) { this->fwESP8266_ = _val_; }
#endif
    };

}

#endif /* _HOUSE_H_ */
