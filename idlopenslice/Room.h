#ifndef _ROOM_H_
#define _ROOM_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    class Room OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;
        std::string name_;
        bool temperatureControl_;
        double manualTemperatureTarget_;
        double targetTemperatureDayWinter_;
        double targetTemperatureNightWinter_;
        double targetTemperatureDaySummer_;
        double targetTemperatureNightSummer_;

    public:
        Room() :
                temperatureControl_(false),
                manualTemperatureTarget_(0.0),
                targetTemperatureDayWinter_(0.0),
                targetTemperatureNightWinter_(0.0),
                targetTemperatureDaySummer_(0.0),
                targetTemperatureNightSummer_(0.0) {}

        explicit Room(
            const std::string& UUID,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse,
            const std::string& name,
            bool temperatureControl,
            double manualTemperatureTarget,
            double targetTemperatureDayWinter,
            double targetTemperatureNightWinter,
            double targetTemperatureDaySummer,
            double targetTemperatureNightSummer) : 
                UUID_(UUID),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse),
                name_(name),
                temperatureControl_(temperatureControl),
                manualTemperatureTarget_(manualTemperatureTarget),
                targetTemperatureDayWinter_(targetTemperatureDayWinter),
                targetTemperatureNightWinter_(targetTemperatureNightWinter),
                targetTemperatureDaySummer_(targetTemperatureDaySummer),
                targetTemperatureNightSummer_(targetTemperatureNightSummer) {}

        Room(const Room &_other) : 
                UUID_(_other.UUID_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_),
                name_(_other.name_),
                temperatureControl_(_other.temperatureControl_),
                manualTemperatureTarget_(_other.manualTemperatureTarget_),
                targetTemperatureDayWinter_(_other.targetTemperatureDayWinter_),
                targetTemperatureNightWinter_(_other.targetTemperatureNightWinter_),
                targetTemperatureDaySummer_(_other.targetTemperatureDaySummer_),
                targetTemperatureNightSummer_(_other.targetTemperatureNightSummer_) {}

#ifdef OSPL_DDS_CXX11
        Room(Room &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)),
                name_(::std::move(_other.name_)),
                temperatureControl_(::std::move(_other.temperatureControl_)),
                manualTemperatureTarget_(::std::move(_other.manualTemperatureTarget_)),
                targetTemperatureDayWinter_(::std::move(_other.targetTemperatureDayWinter_)),
                targetTemperatureNightWinter_(::std::move(_other.targetTemperatureNightWinter_)),
                targetTemperatureDaySummer_(::std::move(_other.targetTemperatureDaySummer_)),
                targetTemperatureNightSummer_(::std::move(_other.targetTemperatureNightSummer_)) {}

        Room& operator=(Room &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
                name_ = ::std::move(_other.name_);
                temperatureControl_ = ::std::move(_other.temperatureControl_);
                manualTemperatureTarget_ = ::std::move(_other.manualTemperatureTarget_);
                targetTemperatureDayWinter_ = ::std::move(_other.targetTemperatureDayWinter_);
                targetTemperatureNightWinter_ = ::std::move(_other.targetTemperatureNightWinter_);
                targetTemperatureDaySummer_ = ::std::move(_other.targetTemperatureDaySummer_);
                targetTemperatureNightSummer_ = ::std::move(_other.targetTemperatureNightSummer_);
            }
            return *this;
        }
#endif

        Room& operator=(const Room &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
                name_ = _other.name_;
                temperatureControl_ = _other.temperatureControl_;
                manualTemperatureTarget_ = _other.manualTemperatureTarget_;
                targetTemperatureDayWinter_ = _other.targetTemperatureDayWinter_;
                targetTemperatureNightWinter_ = _other.targetTemperatureNightWinter_;
                targetTemperatureDaySummer_ = _other.targetTemperatureDaySummer_;
                targetTemperatureNightSummer_ = _other.targetTemperatureNightSummer_;
            }
            return *this;
        }

        bool operator==(const Room& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_ &&
                name_ == _other.name_ &&
                temperatureControl_ == _other.temperatureControl_ &&
                manualTemperatureTarget_ == _other.manualTemperatureTarget_ &&
                targetTemperatureDayWinter_ == _other.targetTemperatureDayWinter_ &&
                targetTemperatureNightWinter_ == _other.targetTemperatureNightWinter_ &&
                targetTemperatureDaySummer_ == _other.targetTemperatureDaySummer_ &&
                targetTemperatureNightSummer_ == _other.targetTemperatureNightSummer_;
        }

        bool operator!=(const Room& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
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
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        bool temperatureControl() const { return this->temperatureControl_; }
        bool& temperatureControl() { return this->temperatureControl_; }
        void temperatureControl(bool _val_) { this->temperatureControl_ = _val_; }
        double manualTemperatureTarget() const { return this->manualTemperatureTarget_; }
        double& manualTemperatureTarget() { return this->manualTemperatureTarget_; }
        void manualTemperatureTarget(double _val_) { this->manualTemperatureTarget_ = _val_; }
        double targetTemperatureDayWinter() const { return this->targetTemperatureDayWinter_; }
        double& targetTemperatureDayWinter() { return this->targetTemperatureDayWinter_; }
        void targetTemperatureDayWinter(double _val_) { this->targetTemperatureDayWinter_ = _val_; }
        double targetTemperatureNightWinter() const { return this->targetTemperatureNightWinter_; }
        double& targetTemperatureNightWinter() { return this->targetTemperatureNightWinter_; }
        void targetTemperatureNightWinter(double _val_) { this->targetTemperatureNightWinter_ = _val_; }
        double targetTemperatureDaySummer() const { return this->targetTemperatureDaySummer_; }
        double& targetTemperatureDaySummer() { return this->targetTemperatureDaySummer_; }
        void targetTemperatureDaySummer(double _val_) { this->targetTemperatureDaySummer_ = _val_; }
        double targetTemperatureNightSummer() const { return this->targetTemperatureNightSummer_; }
        double& targetTemperatureNightSummer() { return this->targetTemperatureNightSummer_; }
        void targetTemperatureNightSummer(double _val_) { this->targetTemperatureNightSummer_ = _val_; }
    };

    class Room_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string property_;
        std::string value_;
        std::string UUIDRoom_;

    public:
        Room_Command() {}

        explicit Room_Command(
            const std::string& UUID,
            const std::string& property,
            const std::string& value,
            const std::string& UUIDRoom) : 
                UUID_(UUID),
                property_(property),
                value_(value),
                UUIDRoom_(UUIDRoom) {}

        Room_Command(const Room_Command &_other) : 
                UUID_(_other.UUID_),
                property_(_other.property_),
                value_(_other.value_),
                UUIDRoom_(_other.UUIDRoom_) {}

#ifdef OSPL_DDS_CXX11
        Room_Command(Room_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)) {}

        Room_Command& operator=(Room_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
            }
            return *this;
        }
#endif

        Room_Command& operator=(const Room_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                property_ = _other.property_;
                value_ = _other.value_;
                UUIDRoom_ = _other.UUIDRoom_;
            }
            return *this;
        }

        bool operator==(const Room_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                property_ == _other.property_ &&
                value_ == _other.value_ &&
                UUIDRoom_ == _other.UUIDRoom_;
        }

        bool operator!=(const Room_Command& _other) const
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
        const std::string& UUIDRoom() const { return this->UUIDRoom_; }
        std::string& UUIDRoom() { return this->UUIDRoom_; }
        void UUIDRoom(const std::string& _val_) { this->UUIDRoom_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDRoom(std::string&& _val_) { this->UUIDRoom_ = _val_; }
#endif
    };

}

#endif /* _ROOM_H_ */
