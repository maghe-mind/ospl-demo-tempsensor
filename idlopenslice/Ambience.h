#ifndef _AMBIENCE_H_
#define _AMBIENCE_H_

#include <dds/core/ddscore.hpp>
#include "Commons.h"

namespace Mind
{
    class Ambience OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _adjacentAmbiences_seq;

        typedef std::vector<std::string>  _adjacentAmbiencesOtherFloors_seq;

        std::string UUID_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;
        Mind::AmbienceType type_;
        std::string name_;
        std::vector<std::string>  adjacentAmbiences_;
        std::vector<std::string>  adjacentAmbiencesOtherFloors_;
        bool shadowed_;
        bool entrance_;
        bool secured_;
        int32_t bonusPeopleCount_;
        Mind::StateName currentState_;
        std::string currentMoment_;

    public:
        Ambience() :
                type_(OSPL_ENUM_LABEL(Mind,AmbienceType,AMBIENCE_TYPE_ENTRANCE)),
                shadowed_(false),
                entrance_(false),
                secured_(false),
                bonusPeopleCount_(0),
                currentState_(OSPL_ENUM_LABEL(Mind,StateName,STATE_SETUP)) {}

        explicit Ambience(
            const std::string& UUID,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse,
            Mind::AmbienceType type,
            const std::string& name,
            const std::vector<std::string> & adjacentAmbiences,
            const std::vector<std::string> & adjacentAmbiencesOtherFloors,
            bool shadowed,
            bool entrance,
            bool secured,
            int32_t bonusPeopleCount,
            Mind::StateName currentState,
            const std::string& currentMoment) : 
                UUID_(UUID),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse),
                type_(type),
                name_(name),
                adjacentAmbiences_(adjacentAmbiences),
                adjacentAmbiencesOtherFloors_(adjacentAmbiencesOtherFloors),
                shadowed_(shadowed),
                entrance_(entrance),
                secured_(secured),
                bonusPeopleCount_(bonusPeopleCount),
                currentState_(currentState),
                currentMoment_(currentMoment) {}

        Ambience(const Ambience &_other) : 
                UUID_(_other.UUID_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_),
                type_(_other.type_),
                name_(_other.name_),
                adjacentAmbiences_(_other.adjacentAmbiences_),
                adjacentAmbiencesOtherFloors_(_other.adjacentAmbiencesOtherFloors_),
                shadowed_(_other.shadowed_),
                entrance_(_other.entrance_),
                secured_(_other.secured_),
                bonusPeopleCount_(_other.bonusPeopleCount_),
                currentState_(_other.currentState_),
                currentMoment_(_other.currentMoment_) {}

#ifdef OSPL_DDS_CXX11
        Ambience(Ambience &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)),
                type_(::std::move(_other.type_)),
                name_(::std::move(_other.name_)),
                adjacentAmbiences_(::std::move(_other.adjacentAmbiences_)),
                adjacentAmbiencesOtherFloors_(::std::move(_other.adjacentAmbiencesOtherFloors_)),
                shadowed_(::std::move(_other.shadowed_)),
                entrance_(::std::move(_other.entrance_)),
                secured_(::std::move(_other.secured_)),
                bonusPeopleCount_(::std::move(_other.bonusPeopleCount_)),
                currentState_(::std::move(_other.currentState_)),
                currentMoment_(::std::move(_other.currentMoment_)) {}

        Ambience& operator=(Ambience &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
                type_ = ::std::move(_other.type_);
                name_ = ::std::move(_other.name_);
                adjacentAmbiences_ = ::std::move(_other.adjacentAmbiences_);
                adjacentAmbiencesOtherFloors_ = ::std::move(_other.adjacentAmbiencesOtherFloors_);
                shadowed_ = ::std::move(_other.shadowed_);
                entrance_ = ::std::move(_other.entrance_);
                secured_ = ::std::move(_other.secured_);
                bonusPeopleCount_ = ::std::move(_other.bonusPeopleCount_);
                currentState_ = ::std::move(_other.currentState_);
                currentMoment_ = ::std::move(_other.currentMoment_);
            }
            return *this;
        }
#endif

        Ambience& operator=(const Ambience &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
                type_ = _other.type_;
                name_ = _other.name_;
                adjacentAmbiences_ = _other.adjacentAmbiences_;
                adjacentAmbiencesOtherFloors_ = _other.adjacentAmbiencesOtherFloors_;
                shadowed_ = _other.shadowed_;
                entrance_ = _other.entrance_;
                secured_ = _other.secured_;
                bonusPeopleCount_ = _other.bonusPeopleCount_;
                currentState_ = _other.currentState_;
                currentMoment_ = _other.currentMoment_;
            }
            return *this;
        }

        bool operator==(const Ambience& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_ &&
                type_ == _other.type_ &&
                name_ == _other.name_ &&
                adjacentAmbiences_ == _other.adjacentAmbiences_ &&
                adjacentAmbiencesOtherFloors_ == _other.adjacentAmbiencesOtherFloors_ &&
                shadowed_ == _other.shadowed_ &&
                entrance_ == _other.entrance_ &&
                secured_ == _other.secured_ &&
                bonusPeopleCount_ == _other.bonusPeopleCount_ &&
                currentState_ == _other.currentState_ &&
                currentMoment_ == _other.currentMoment_;
        }

        bool operator!=(const Ambience& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
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
        Mind::AmbienceType type() const { return this->type_; }
        Mind::AmbienceType& type() { return this->type_; }
        void type(Mind::AmbienceType _val_) { this->type_ = _val_; }
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        const std::vector<std::string> & adjacentAmbiences() const { return this->adjacentAmbiences_; }
        std::vector<std::string> & adjacentAmbiences() { return this->adjacentAmbiences_; }
        void adjacentAmbiences(const std::vector<std::string> & _val_) { this->adjacentAmbiences_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void adjacentAmbiences(std::vector<std::string> && _val_) { this->adjacentAmbiences_ = _val_; }
#endif
        const std::vector<std::string> & adjacentAmbiencesOtherFloors() const { return this->adjacentAmbiencesOtherFloors_; }
        std::vector<std::string> & adjacentAmbiencesOtherFloors() { return this->adjacentAmbiencesOtherFloors_; }
        void adjacentAmbiencesOtherFloors(const std::vector<std::string> & _val_) { this->adjacentAmbiencesOtherFloors_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void adjacentAmbiencesOtherFloors(std::vector<std::string> && _val_) { this->adjacentAmbiencesOtherFloors_ = _val_; }
#endif
        bool shadowed() const { return this->shadowed_; }
        bool& shadowed() { return this->shadowed_; }
        void shadowed(bool _val_) { this->shadowed_ = _val_; }
        bool entrance() const { return this->entrance_; }
        bool& entrance() { return this->entrance_; }
        void entrance(bool _val_) { this->entrance_ = _val_; }
        bool secured() const { return this->secured_; }
        bool& secured() { return this->secured_; }
        void secured(bool _val_) { this->secured_ = _val_; }
        int32_t bonusPeopleCount() const { return this->bonusPeopleCount_; }
        int32_t& bonusPeopleCount() { return this->bonusPeopleCount_; }
        void bonusPeopleCount(int32_t _val_) { this->bonusPeopleCount_ = _val_; }
        Mind::StateName currentState() const { return this->currentState_; }
        Mind::StateName& currentState() { return this->currentState_; }
        void currentState(Mind::StateName _val_) { this->currentState_ = _val_; }
        const std::string& currentMoment() const { return this->currentMoment_; }
        std::string& currentMoment() { return this->currentMoment_; }
        void currentMoment(const std::string& _val_) { this->currentMoment_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void currentMoment(std::string&& _val_) { this->currentMoment_ = _val_; }
#endif
    };

    class Ambience_Command_Start_Moment OSPL_DDS_FINAL
    {
    public:
        std::string moment_;
        std::string timestamp_;
        std::string UUIDAmbience_;

    public:
        Ambience_Command_Start_Moment() {}

        explicit Ambience_Command_Start_Moment(
            const std::string& moment,
            const std::string& timestamp,
            const std::string& UUIDAmbience) : 
                moment_(moment),
                timestamp_(timestamp),
                UUIDAmbience_(UUIDAmbience) {}

        Ambience_Command_Start_Moment(const Ambience_Command_Start_Moment &_other) : 
                moment_(_other.moment_),
                timestamp_(_other.timestamp_),
                UUIDAmbience_(_other.UUIDAmbience_) {}

#ifdef OSPL_DDS_CXX11
        Ambience_Command_Start_Moment(Ambience_Command_Start_Moment &&_other) : 
                moment_(::std::move(_other.moment_)),
                timestamp_(::std::move(_other.timestamp_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)) {}

        Ambience_Command_Start_Moment& operator=(Ambience_Command_Start_Moment &&_other)
        {
            if (this != &_other) {
                moment_ = ::std::move(_other.moment_);
                timestamp_ = ::std::move(_other.timestamp_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
            }
            return *this;
        }
#endif

        Ambience_Command_Start_Moment& operator=(const Ambience_Command_Start_Moment &_other)
        {
            if (this != &_other) {
                moment_ = _other.moment_;
                timestamp_ = _other.timestamp_;
                UUIDAmbience_ = _other.UUIDAmbience_;
            }
            return *this;
        }

        bool operator==(const Ambience_Command_Start_Moment& _other) const
        {
            return moment_ == _other.moment_ &&
                timestamp_ == _other.timestamp_ &&
                UUIDAmbience_ == _other.UUIDAmbience_;
        }

        bool operator!=(const Ambience_Command_Start_Moment& _other) const
        {
            return !(*this == _other);
        }

        const std::string& moment() const { return this->moment_; }
        std::string& moment() { return this->moment_; }
        void moment(const std::string& _val_) { this->moment_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void moment(std::string&& _val_) { this->moment_ = _val_; }
#endif
        const std::string& timestamp() const { return this->timestamp_; }
        std::string& timestamp() { return this->timestamp_; }
        void timestamp(const std::string& _val_) { this->timestamp_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void timestamp(std::string&& _val_) { this->timestamp_ = _val_; }
#endif
        const std::string& UUIDAmbience() const { return this->UUIDAmbience_; }
        std::string& UUIDAmbience() { return this->UUIDAmbience_; }
        void UUIDAmbience(const std::string& _val_) { this->UUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbience(std::string&& _val_) { this->UUIDAmbience_ = _val_; }
#endif
    };

    class Ambience_Command OSPL_DDS_FINAL
    {
    public:
        std::string property_;
        std::string value_;
        std::string UUIDAmbience_;

    public:
        Ambience_Command() {}

        explicit Ambience_Command(
            const std::string& property,
            const std::string& value,
            const std::string& UUIDAmbience) : 
                property_(property),
                value_(value),
                UUIDAmbience_(UUIDAmbience) {}

        Ambience_Command(const Ambience_Command &_other) : 
                property_(_other.property_),
                value_(_other.value_),
                UUIDAmbience_(_other.UUIDAmbience_) {}

#ifdef OSPL_DDS_CXX11
        Ambience_Command(Ambience_Command &&_other) : 
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)) {}

        Ambience_Command& operator=(Ambience_Command &&_other)
        {
            if (this != &_other) {
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
            }
            return *this;
        }
#endif

        Ambience_Command& operator=(const Ambience_Command &_other)
        {
            if (this != &_other) {
                property_ = _other.property_;
                value_ = _other.value_;
                UUIDAmbience_ = _other.UUIDAmbience_;
            }
            return *this;
        }

        bool operator==(const Ambience_Command& _other) const
        {
            return property_ == _other.property_ &&
                value_ == _other.value_ &&
                UUIDAmbience_ == _other.UUIDAmbience_;
        }

        bool operator!=(const Ambience_Command& _other) const
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
        const std::string& UUIDAmbience() const { return this->UUIDAmbience_; }
        std::string& UUIDAmbience() { return this->UUIDAmbience_; }
        void UUIDAmbience(const std::string& _val_) { this->UUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbience(std::string&& _val_) { this->UUIDAmbience_ = _val_; }
#endif
    };

}

#endif /* _AMBIENCE_H_ */
