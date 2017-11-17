#ifndef _NOTIFICATIONSERVICE_H_
#define _NOTIFICATIONSERVICE_H_

#include <dds/core/ddscore.hpp>
#include "Commons.h"

namespace Mind
{
    class Notification OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::NotificationResponseType>  _responses_seq;

        std::string UUID_;
        Mind::NotificationType type_;
        Mind::NotificationSubtype subType_;
        int32_t timestamp_;
        std::string description_;
        std::string URL_;
        bool read_;
        std::vector<Mind::NotificationResponseType>  responses_;

    public:
        Notification() :
                type_(OSPL_ENUM_LABEL(Mind,NotificationType,NOTIFICATION_TYPE_EMERGENCY)),
                subType_(OSPL_ENUM_LABEL(Mind,NotificationSubtype,NOTIFICATION_SUBTYPE_EMERGENCY_FLOODING)),
                timestamp_(0),
                read_(false) {}

        explicit Notification(
            const std::string& UUID,
            Mind::NotificationType type,
            Mind::NotificationSubtype subType,
            int32_t timestamp,
            const std::string& description,
            const std::string& URL,
            bool read,
            const std::vector<Mind::NotificationResponseType> & responses) : 
                UUID_(UUID),
                type_(type),
                subType_(subType),
                timestamp_(timestamp),
                description_(description),
                URL_(URL),
                read_(read),
                responses_(responses) {}

        Notification(const Notification &_other) : 
                UUID_(_other.UUID_),
                type_(_other.type_),
                subType_(_other.subType_),
                timestamp_(_other.timestamp_),
                description_(_other.description_),
                URL_(_other.URL_),
                read_(_other.read_),
                responses_(_other.responses_) {}

#ifdef OSPL_DDS_CXX11
        Notification(Notification &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                type_(::std::move(_other.type_)),
                subType_(::std::move(_other.subType_)),
                timestamp_(::std::move(_other.timestamp_)),
                description_(::std::move(_other.description_)),
                URL_(::std::move(_other.URL_)),
                read_(::std::move(_other.read_)),
                responses_(::std::move(_other.responses_)) {}

        Notification& operator=(Notification &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                type_ = ::std::move(_other.type_);
                subType_ = ::std::move(_other.subType_);
                timestamp_ = ::std::move(_other.timestamp_);
                description_ = ::std::move(_other.description_);
                URL_ = ::std::move(_other.URL_);
                read_ = ::std::move(_other.read_);
                responses_ = ::std::move(_other.responses_);
            }
            return *this;
        }
#endif

        Notification& operator=(const Notification &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                type_ = _other.type_;
                subType_ = _other.subType_;
                timestamp_ = _other.timestamp_;
                description_ = _other.description_;
                URL_ = _other.URL_;
                read_ = _other.read_;
                responses_ = _other.responses_;
            }
            return *this;
        }

        bool operator==(const Notification& _other) const
        {
            return UUID_ == _other.UUID_ &&
                type_ == _other.type_ &&
                subType_ == _other.subType_ &&
                timestamp_ == _other.timestamp_ &&
                description_ == _other.description_ &&
                URL_ == _other.URL_ &&
                read_ == _other.read_ &&
                responses_ == _other.responses_;
        }

        bool operator!=(const Notification& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        Mind::NotificationType type() const { return this->type_; }
        Mind::NotificationType& type() { return this->type_; }
        void type(Mind::NotificationType _val_) { this->type_ = _val_; }
        Mind::NotificationSubtype subType() const { return this->subType_; }
        Mind::NotificationSubtype& subType() { return this->subType_; }
        void subType(Mind::NotificationSubtype _val_) { this->subType_ = _val_; }
        int32_t timestamp() const { return this->timestamp_; }
        int32_t& timestamp() { return this->timestamp_; }
        void timestamp(int32_t _val_) { this->timestamp_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        const std::string& URL() const { return this->URL_; }
        std::string& URL() { return this->URL_; }
        void URL(const std::string& _val_) { this->URL_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void URL(std::string&& _val_) { this->URL_ = _val_; }
#endif
        bool read() const { return this->read_; }
        bool& read() { return this->read_; }
        void read(bool _val_) { this->read_ = _val_; }
        const std::vector<Mind::NotificationResponseType> & responses() const { return this->responses_; }
        std::vector<Mind::NotificationResponseType> & responses() { return this->responses_; }
        void responses(const std::vector<Mind::NotificationResponseType> & _val_) { this->responses_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void responses(std::vector<Mind::NotificationResponseType> && _val_) { this->responses_ = _val_; }
#endif
    };

    class NotificationResponse OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string UUIDNotification_;
        Mind::NotificationResponseType response_;

    public:
        NotificationResponse() :
                response_(OSPL_ENUM_LABEL(Mind,NotificationResponseType,NOTIFICATION_RESPONSE_YES)) {}

        explicit NotificationResponse(
            const std::string& UUID,
            const std::string& UUIDNotification,
            Mind::NotificationResponseType response) : 
                UUID_(UUID),
                UUIDNotification_(UUIDNotification),
                response_(response) {}

        NotificationResponse(const NotificationResponse &_other) : 
                UUID_(_other.UUID_),
                UUIDNotification_(_other.UUIDNotification_),
                response_(_other.response_) {}

#ifdef OSPL_DDS_CXX11
        NotificationResponse(NotificationResponse &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDNotification_(::std::move(_other.UUIDNotification_)),
                response_(::std::move(_other.response_)) {}

        NotificationResponse& operator=(NotificationResponse &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDNotification_ = ::std::move(_other.UUIDNotification_);
                response_ = ::std::move(_other.response_);
            }
            return *this;
        }
#endif

        NotificationResponse& operator=(const NotificationResponse &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDNotification_ = _other.UUIDNotification_;
                response_ = _other.response_;
            }
            return *this;
        }

        bool operator==(const NotificationResponse& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDNotification_ == _other.UUIDNotification_ &&
                response_ == _other.response_;
        }

        bool operator!=(const NotificationResponse& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& UUIDNotification() const { return this->UUIDNotification_; }
        std::string& UUIDNotification() { return this->UUIDNotification_; }
        void UUIDNotification(const std::string& _val_) { this->UUIDNotification_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDNotification(std::string&& _val_) { this->UUIDNotification_ = _val_; }
#endif
        Mind::NotificationResponseType response() const { return this->response_; }
        Mind::NotificationResponseType& response() { return this->response_; }
        void response(Mind::NotificationResponseType _val_) { this->response_ = _val_; }
    };

    class Reminder OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        int32_t reminderDate_;
        std::string subject_;
        std::string alertFrom_;
        std::string message_;
        bool acknowledged_;

    public:
        Reminder() :
                reminderDate_(0),
                acknowledged_(false) {}

        explicit Reminder(
            const std::string& UUID,
            int32_t reminderDate,
            const std::string& subject,
            const std::string& alertFrom,
            const std::string& message,
            bool acknowledged) : 
                UUID_(UUID),
                reminderDate_(reminderDate),
                subject_(subject),
                alertFrom_(alertFrom),
                message_(message),
                acknowledged_(acknowledged) {}

        Reminder(const Reminder &_other) : 
                UUID_(_other.UUID_),
                reminderDate_(_other.reminderDate_),
                subject_(_other.subject_),
                alertFrom_(_other.alertFrom_),
                message_(_other.message_),
                acknowledged_(_other.acknowledged_) {}

#ifdef OSPL_DDS_CXX11
        Reminder(Reminder &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                reminderDate_(::std::move(_other.reminderDate_)),
                subject_(::std::move(_other.subject_)),
                alertFrom_(::std::move(_other.alertFrom_)),
                message_(::std::move(_other.message_)),
                acknowledged_(::std::move(_other.acknowledged_)) {}

        Reminder& operator=(Reminder &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                reminderDate_ = ::std::move(_other.reminderDate_);
                subject_ = ::std::move(_other.subject_);
                alertFrom_ = ::std::move(_other.alertFrom_);
                message_ = ::std::move(_other.message_);
                acknowledged_ = ::std::move(_other.acknowledged_);
            }
            return *this;
        }
#endif

        Reminder& operator=(const Reminder &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                reminderDate_ = _other.reminderDate_;
                subject_ = _other.subject_;
                alertFrom_ = _other.alertFrom_;
                message_ = _other.message_;
                acknowledged_ = _other.acknowledged_;
            }
            return *this;
        }

        bool operator==(const Reminder& _other) const
        {
            return UUID_ == _other.UUID_ &&
                reminderDate_ == _other.reminderDate_ &&
                subject_ == _other.subject_ &&
                alertFrom_ == _other.alertFrom_ &&
                message_ == _other.message_ &&
                acknowledged_ == _other.acknowledged_;
        }

        bool operator!=(const Reminder& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        int32_t reminderDate() const { return this->reminderDate_; }
        int32_t& reminderDate() { return this->reminderDate_; }
        void reminderDate(int32_t _val_) { this->reminderDate_ = _val_; }
        const std::string& subject() const { return this->subject_; }
        std::string& subject() { return this->subject_; }
        void subject(const std::string& _val_) { this->subject_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void subject(std::string&& _val_) { this->subject_ = _val_; }
#endif
        const std::string& alertFrom() const { return this->alertFrom_; }
        std::string& alertFrom() { return this->alertFrom_; }
        void alertFrom(const std::string& _val_) { this->alertFrom_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void alertFrom(std::string&& _val_) { this->alertFrom_ = _val_; }
#endif
        const std::string& message() const { return this->message_; }
        std::string& message() { return this->message_; }
        void message(const std::string& _val_) { this->message_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void message(std::string&& _val_) { this->message_ = _val_; }
#endif
        bool acknowledged() const { return this->acknowledged_; }
        bool& acknowledged() { return this->acknowledged_; }
        void acknowledged(bool _val_) { this->acknowledged_ = _val_; }
    };

    class Reminder_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string property_;
        std::string value_;

    public:
        Reminder_Command() {}

        explicit Reminder_Command(
            const std::string& UUID,
            const std::string& property,
            const std::string& value) : 
                UUID_(UUID),
                property_(property),
                value_(value) {}

        Reminder_Command(const Reminder_Command &_other) : 
                UUID_(_other.UUID_),
                property_(_other.property_),
                value_(_other.value_) {}

#ifdef OSPL_DDS_CXX11
        Reminder_Command(Reminder_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)) {}

        Reminder_Command& operator=(Reminder_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
            }
            return *this;
        }
#endif

        Reminder_Command& operator=(const Reminder_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                property_ = _other.property_;
                value_ = _other.value_;
            }
            return *this;
        }

        bool operator==(const Reminder_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                property_ == _other.property_ &&
                value_ == _other.value_;
        }

        bool operator!=(const Reminder_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
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

    class Timer OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string timeStart_;
        int32_t timeInterval_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Timer() :
                timeInterval_(0) {}

        explicit Timer(
            const std::string& UUID,
            const std::string& timeStart,
            int32_t timeInterval,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                timeStart_(timeStart),
                timeInterval_(timeInterval),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Timer(const Timer &_other) : 
                UUID_(_other.UUID_),
                timeStart_(_other.timeStart_),
                timeInterval_(_other.timeInterval_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Timer(Timer &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                timeStart_(::std::move(_other.timeStart_)),
                timeInterval_(::std::move(_other.timeInterval_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Timer& operator=(Timer &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                timeStart_ = ::std::move(_other.timeStart_);
                timeInterval_ = ::std::move(_other.timeInterval_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Timer& operator=(const Timer &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                timeStart_ = _other.timeStart_;
                timeInterval_ = _other.timeInterval_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Timer& _other) const
        {
            return UUID_ == _other.UUID_ &&
                timeStart_ == _other.timeStart_ &&
                timeInterval_ == _other.timeInterval_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Timer& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& timeStart() const { return this->timeStart_; }
        std::string& timeStart() { return this->timeStart_; }
        void timeStart(const std::string& _val_) { this->timeStart_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void timeStart(std::string&& _val_) { this->timeStart_ = _val_; }
#endif
        int32_t timeInterval() const { return this->timeInterval_; }
        int32_t& timeInterval() { return this->timeInterval_; }
        void timeInterval(int32_t _val_) { this->timeInterval_ = _val_; }
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

    class Timer_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string property_;
        std::string value_;

    public:
        Timer_Command() {}

        explicit Timer_Command(
            const std::string& UUID,
            const std::string& property,
            const std::string& value) : 
                UUID_(UUID),
                property_(property),
                value_(value) {}

        Timer_Command(const Timer_Command &_other) : 
                UUID_(_other.UUID_),
                property_(_other.property_),
                value_(_other.value_) {}

#ifdef OSPL_DDS_CXX11
        Timer_Command(Timer_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)) {}

        Timer_Command& operator=(Timer_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
            }
            return *this;
        }
#endif

        Timer_Command& operator=(const Timer_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                property_ = _other.property_;
                value_ = _other.value_;
            }
            return *this;
        }

        bool operator==(const Timer_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                property_ == _other.property_ &&
                value_ == _other.value_;
        }

        bool operator!=(const Timer_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
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

    class Wakeup OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string dailyMask_;
        std::string time_;
        std::string UUIDUser_;
        std::string soundType_;
        bool enabled_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Wakeup() :
                enabled_(false) {}

        explicit Wakeup(
            const std::string& UUID,
            const std::string& dailyMask,
            const std::string& time,
            const std::string& UUIDUser,
            const std::string& soundType,
            bool enabled,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                dailyMask_(dailyMask),
                time_(time),
                UUIDUser_(UUIDUser),
                soundType_(soundType),
                enabled_(enabled),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Wakeup(const Wakeup &_other) : 
                UUID_(_other.UUID_),
                dailyMask_(_other.dailyMask_),
                time_(_other.time_),
                UUIDUser_(_other.UUIDUser_),
                soundType_(_other.soundType_),
                enabled_(_other.enabled_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Wakeup(Wakeup &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                dailyMask_(::std::move(_other.dailyMask_)),
                time_(::std::move(_other.time_)),
                UUIDUser_(::std::move(_other.UUIDUser_)),
                soundType_(::std::move(_other.soundType_)),
                enabled_(::std::move(_other.enabled_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Wakeup& operator=(Wakeup &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                dailyMask_ = ::std::move(_other.dailyMask_);
                time_ = ::std::move(_other.time_);
                UUIDUser_ = ::std::move(_other.UUIDUser_);
                soundType_ = ::std::move(_other.soundType_);
                enabled_ = ::std::move(_other.enabled_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Wakeup& operator=(const Wakeup &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                dailyMask_ = _other.dailyMask_;
                time_ = _other.time_;
                UUIDUser_ = _other.UUIDUser_;
                soundType_ = _other.soundType_;
                enabled_ = _other.enabled_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Wakeup& _other) const
        {
            return UUID_ == _other.UUID_ &&
                dailyMask_ == _other.dailyMask_ &&
                time_ == _other.time_ &&
                UUIDUser_ == _other.UUIDUser_ &&
                soundType_ == _other.soundType_ &&
                enabled_ == _other.enabled_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Wakeup& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& dailyMask() const { return this->dailyMask_; }
        std::string& dailyMask() { return this->dailyMask_; }
        void dailyMask(const std::string& _val_) { this->dailyMask_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void dailyMask(std::string&& _val_) { this->dailyMask_ = _val_; }
#endif
        const std::string& time() const { return this->time_; }
        std::string& time() { return this->time_; }
        void time(const std::string& _val_) { this->time_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void time(std::string&& _val_) { this->time_ = _val_; }
#endif
        const std::string& UUIDUser() const { return this->UUIDUser_; }
        std::string& UUIDUser() { return this->UUIDUser_; }
        void UUIDUser(const std::string& _val_) { this->UUIDUser_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDUser(std::string&& _val_) { this->UUIDUser_ = _val_; }
#endif
        const std::string& soundType() const { return this->soundType_; }
        std::string& soundType() { return this->soundType_; }
        void soundType(const std::string& _val_) { this->soundType_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void soundType(std::string&& _val_) { this->soundType_ = _val_; }
#endif
        bool enabled() const { return this->enabled_; }
        bool& enabled() { return this->enabled_; }
        void enabled(bool _val_) { this->enabled_ = _val_; }
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

    class Wakeup_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string property_;
        std::string value_;

    public:
        Wakeup_Command() {}

        explicit Wakeup_Command(
            const std::string& UUID,
            const std::string& property,
            const std::string& value) : 
                UUID_(UUID),
                property_(property),
                value_(value) {}

        Wakeup_Command(const Wakeup_Command &_other) : 
                UUID_(_other.UUID_),
                property_(_other.property_),
                value_(_other.value_) {}

#ifdef OSPL_DDS_CXX11
        Wakeup_Command(Wakeup_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)) {}

        Wakeup_Command& operator=(Wakeup_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
            }
            return *this;
        }
#endif

        Wakeup_Command& operator=(const Wakeup_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                property_ = _other.property_;
                value_ = _other.value_;
            }
            return *this;
        }

        bool operator==(const Wakeup_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                property_ == _other.property_ &&
                value_ == _other.value_;
        }

        bool operator!=(const Wakeup_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
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

}

#endif /* _NOTIFICATIONSERVICE_H_ */
