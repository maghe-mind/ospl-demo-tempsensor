#ifndef _FLOOR_H_
#define _FLOOR_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    class Floor OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string UUIDHouse_;
        std::string name_;
        int32_t number_;

    public:
        Floor() :
                number_(0) {}

        explicit Floor(
            const std::string& UUID,
            const std::string& UUIDHouse,
            const std::string& name,
            int32_t number) : 
                UUID_(UUID),
                UUIDHouse_(UUIDHouse),
                name_(name),
                number_(number) {}

        Floor(const Floor &_other) : 
                UUID_(_other.UUID_),
                UUIDHouse_(_other.UUIDHouse_),
                name_(_other.name_),
                number_(_other.number_) {}

#ifdef OSPL_DDS_CXX11
        Floor(Floor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)),
                name_(::std::move(_other.name_)),
                number_(::std::move(_other.number_)) {}

        Floor& operator=(Floor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
                name_ = ::std::move(_other.name_);
                number_ = ::std::move(_other.number_);
            }
            return *this;
        }
#endif

        Floor& operator=(const Floor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDHouse_ = _other.UUIDHouse_;
                name_ = _other.name_;
                number_ = _other.number_;
            }
            return *this;
        }

        bool operator==(const Floor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDHouse_ == _other.UUIDHouse_ &&
                name_ == _other.name_ &&
                number_ == _other.number_;
        }

        bool operator!=(const Floor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
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
        int32_t number() const { return this->number_; }
        int32_t& number() { return this->number_; }
        void number(int32_t _val_) { this->number_ = _val_; }
    };

    class Floor_Command OSPL_DDS_FINAL
    {
    public:
        std::string property_;
        std::string value_;
        std::string UUIDFloor_;

    public:
        Floor_Command() {}

        explicit Floor_Command(
            const std::string& property,
            const std::string& value,
            const std::string& UUIDFloor) : 
                property_(property),
                value_(value),
                UUIDFloor_(UUIDFloor) {}

        Floor_Command(const Floor_Command &_other) : 
                property_(_other.property_),
                value_(_other.value_),
                UUIDFloor_(_other.UUIDFloor_) {}

#ifdef OSPL_DDS_CXX11
        Floor_Command(Floor_Command &&_other) : 
                property_(::std::move(_other.property_)),
                value_(::std::move(_other.value_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)) {}

        Floor_Command& operator=(Floor_Command &&_other)
        {
            if (this != &_other) {
                property_ = ::std::move(_other.property_);
                value_ = ::std::move(_other.value_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
            }
            return *this;
        }
#endif

        Floor_Command& operator=(const Floor_Command &_other)
        {
            if (this != &_other) {
                property_ = _other.property_;
                value_ = _other.value_;
                UUIDFloor_ = _other.UUIDFloor_;
            }
            return *this;
        }

        bool operator==(const Floor_Command& _other) const
        {
            return property_ == _other.property_ &&
                value_ == _other.value_ &&
                UUIDFloor_ == _other.UUIDFloor_;
        }

        bool operator!=(const Floor_Command& _other) const
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
        const std::string& UUIDFloor() const { return this->UUIDFloor_; }
        std::string& UUIDFloor() { return this->UUIDFloor_; }
        void UUIDFloor(const std::string& _val_) { this->UUIDFloor_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDFloor(std::string&& _val_) { this->UUIDFloor_ = _val_; }
#endif
    };

}

#endif /* _FLOOR_H_ */
