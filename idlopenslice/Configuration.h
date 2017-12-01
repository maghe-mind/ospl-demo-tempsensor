#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include <dds/core/ddscore.hpp>
#include "Commons.h"

namespace Mind
{
    class VirtualItem OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _triggers_seq;

        Mind::Category category_;
        Mind::VirtualItemLocation location_;
        int32_t GID_;
        int32_t priority_;
        std::string value_;
        bool enabled_;
        int32_t delay_;
        std::vector<std::string>  triggers_;

    public:
        VirtualItem() :
                category_(OSPL_ENUM_LABEL(Mind,Category,CATEGORY_NONE)),
                location_(OSPL_ENUM_LABEL(Mind,VirtualItemLocation,VIRTUAL_ITEM_LOCATION_CURRENT_AMBIENCE)),
                GID_(0),
                priority_(0),
                enabled_(false),
                delay_(0) {}

        explicit VirtualItem(
            Mind::Category category,
            Mind::VirtualItemLocation location,
            int32_t GID,
            int32_t priority,
            const std::string& value,
            bool enabled,
            int32_t delay,
            const std::vector<std::string> & triggers) : 
                category_(category),
                location_(location),
                GID_(GID),
                priority_(priority),
                value_(value),
                enabled_(enabled),
                delay_(delay),
                triggers_(triggers) {}

        VirtualItem(const VirtualItem &_other) : 
                category_(_other.category_),
                location_(_other.location_),
                GID_(_other.GID_),
                priority_(_other.priority_),
                value_(_other.value_),
                enabled_(_other.enabled_),
                delay_(_other.delay_),
                triggers_(_other.triggers_) {}

#ifdef OSPL_DDS_CXX11
        VirtualItem(VirtualItem &&_other) : 
                category_(::std::move(_other.category_)),
                location_(::std::move(_other.location_)),
                GID_(::std::move(_other.GID_)),
                priority_(::std::move(_other.priority_)),
                value_(::std::move(_other.value_)),
                enabled_(::std::move(_other.enabled_)),
                delay_(::std::move(_other.delay_)),
                triggers_(::std::move(_other.triggers_)) {}

        VirtualItem& operator=(VirtualItem &&_other)
        {
            if (this != &_other) {
                category_ = ::std::move(_other.category_);
                location_ = ::std::move(_other.location_);
                GID_ = ::std::move(_other.GID_);
                priority_ = ::std::move(_other.priority_);
                value_ = ::std::move(_other.value_);
                enabled_ = ::std::move(_other.enabled_);
                delay_ = ::std::move(_other.delay_);
                triggers_ = ::std::move(_other.triggers_);
            }
            return *this;
        }
#endif

        VirtualItem& operator=(const VirtualItem &_other)
        {
            if (this != &_other) {
                category_ = _other.category_;
                location_ = _other.location_;
                GID_ = _other.GID_;
                priority_ = _other.priority_;
                value_ = _other.value_;
                enabled_ = _other.enabled_;
                delay_ = _other.delay_;
                triggers_ = _other.triggers_;
            }
            return *this;
        }

        bool operator==(const VirtualItem& _other) const
        {
            return category_ == _other.category_ &&
                location_ == _other.location_ &&
                GID_ == _other.GID_ &&
                priority_ == _other.priority_ &&
                value_ == _other.value_ &&
                enabled_ == _other.enabled_ &&
                delay_ == _other.delay_ &&
                triggers_ == _other.triggers_;
        }

        bool operator!=(const VirtualItem& _other) const
        {
            return !(*this == _other);
        }

        Mind::Category category() const { return this->category_; }
        Mind::Category& category() { return this->category_; }
        void category(Mind::Category _val_) { this->category_ = _val_; }
        Mind::VirtualItemLocation location() const { return this->location_; }
        Mind::VirtualItemLocation& location() { return this->location_; }
        void location(Mind::VirtualItemLocation _val_) { this->location_ = _val_; }
        int32_t GID() const { return this->GID_; }
        int32_t& GID() { return this->GID_; }
        void GID(int32_t _val_) { this->GID_ = _val_; }
        int32_t priority() const { return this->priority_; }
        int32_t& priority() { return this->priority_; }
        void priority(int32_t _val_) { this->priority_ = _val_; }
        const std::string& value() const { return this->value_; }
        std::string& value() { return this->value_; }
        void value(const std::string& _val_) { this->value_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void value(std::string&& _val_) { this->value_ = _val_; }
#endif
        bool enabled() const { return this->enabled_; }
        bool& enabled() { return this->enabled_; }
        void enabled(bool _val_) { this->enabled_ = _val_; }
        int32_t delay() const { return this->delay_; }
        int32_t& delay() { return this->delay_; }
        void delay(int32_t _val_) { this->delay_ = _val_; }
        const std::vector<std::string> & triggers() const { return this->triggers_; }
        std::vector<std::string> & triggers() { return this->triggers_; }
        void triggers(const std::vector<std::string> & _val_) { this->triggers_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void triggers(std::vector<std::string> && _val_) { this->triggers_ = _val_; }
#endif
    };

    class ConfiguredItem OSPL_DDS_FINAL
    {
    public:
        std::string UUIDItem_;
        Mind::Category category_;
        std::string value_;
        int32_t delay_;

    public:
        ConfiguredItem() :
                category_(OSPL_ENUM_LABEL(Mind,Category,CATEGORY_NONE)),
                delay_(0) {}

        explicit ConfiguredItem(
            const std::string& UUIDItem,
            Mind::Category category,
            const std::string& value,
            int32_t delay) : 
                UUIDItem_(UUIDItem),
                category_(category),
                value_(value),
                delay_(delay) {}

        ConfiguredItem(const ConfiguredItem &_other) : 
                UUIDItem_(_other.UUIDItem_),
                category_(_other.category_),
                value_(_other.value_),
                delay_(_other.delay_) {}

#ifdef OSPL_DDS_CXX11
        ConfiguredItem(ConfiguredItem &&_other) : 
                UUIDItem_(::std::move(_other.UUIDItem_)),
                category_(::std::move(_other.category_)),
                value_(::std::move(_other.value_)),
                delay_(::std::move(_other.delay_)) {}

        ConfiguredItem& operator=(ConfiguredItem &&_other)
        {
            if (this != &_other) {
                UUIDItem_ = ::std::move(_other.UUIDItem_);
                category_ = ::std::move(_other.category_);
                value_ = ::std::move(_other.value_);
                delay_ = ::std::move(_other.delay_);
            }
            return *this;
        }
#endif

        ConfiguredItem& operator=(const ConfiguredItem &_other)
        {
            if (this != &_other) {
                UUIDItem_ = _other.UUIDItem_;
                category_ = _other.category_;
                value_ = _other.value_;
                delay_ = _other.delay_;
            }
            return *this;
        }

        bool operator==(const ConfiguredItem& _other) const
        {
            return UUIDItem_ == _other.UUIDItem_ &&
                category_ == _other.category_ &&
                value_ == _other.value_ &&
                delay_ == _other.delay_;
        }

        bool operator!=(const ConfiguredItem& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUIDItem() const { return this->UUIDItem_; }
        std::string& UUIDItem() { return this->UUIDItem_; }
        void UUIDItem(const std::string& _val_) { this->UUIDItem_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDItem(std::string&& _val_) { this->UUIDItem_ = _val_; }
#endif
        Mind::Category category() const { return this->category_; }
        Mind::Category& category() { return this->category_; }
        void category(Mind::Category _val_) { this->category_ = _val_; }
        const std::string& value() const { return this->value_; }
        std::string& value() { return this->value_; }
        void value(const std::string& _val_) { this->value_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void value(std::string&& _val_) { this->value_ = _val_; }
#endif
        int32_t delay() const { return this->delay_; }
        int32_t& delay() { return this->delay_; }
        void delay(int32_t _val_) { this->delay_ = _val_; }
    };

    class Configuration OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _configurationTriggers_seq;

        typedef std::vector<Mind::VirtualItem>  _defaultVirtualItems_seq;

        typedef std::vector<Mind::VirtualItem>  _preferredVirtualItems_seq;

        typedef std::vector<Mind::VirtualItem>  _learnedVirtualItems_seq;

        typedef std::vector<Mind::ConfiguredItem>  _defaultConfiguredItems_seq;

        typedef std::vector<Mind::ConfiguredItem>  _preferredConfiguredItems_seq;

        typedef std::vector<Mind::ConfiguredItem>  _learnedConfiguredItems_seq;

        std::string UUID_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;
        std::string name_;
        Mind::ConfigurationType activeItemConfiguration_;
        std::vector<std::string>  configurationTriggers_;
        std::vector<Mind::VirtualItem>  defaultVirtualItems_;
        std::vector<Mind::VirtualItem>  preferredVirtualItems_;
        std::vector<Mind::VirtualItem>  learnedVirtualItems_;
        std::vector<Mind::ConfiguredItem>  defaultConfiguredItems_;
        std::vector<Mind::ConfiguredItem>  preferredConfiguredItems_;
        std::vector<Mind::ConfiguredItem>  learnedConfiguredItems_;

    public:
        Configuration() :
                activeItemConfiguration_(OSPL_ENUM_LABEL(Mind,ConfigurationType,CONFIGURATION_TYPE_DEFAULT)) {}

        explicit Configuration(
            const std::string& UUID,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse,
            const std::string& name,
            Mind::ConfigurationType activeItemConfiguration,
            const std::vector<std::string> & configurationTriggers,
            const std::vector<Mind::VirtualItem> & defaultVirtualItems,
            const std::vector<Mind::VirtualItem> & preferredVirtualItems,
            const std::vector<Mind::VirtualItem> & learnedVirtualItems,
            const std::vector<Mind::ConfiguredItem> & defaultConfiguredItems,
            const std::vector<Mind::ConfiguredItem> & preferredConfiguredItems,
            const std::vector<Mind::ConfiguredItem> & learnedConfiguredItems) : 
                UUID_(UUID),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse),
                name_(name),
                activeItemConfiguration_(activeItemConfiguration),
                configurationTriggers_(configurationTriggers),
                defaultVirtualItems_(defaultVirtualItems),
                preferredVirtualItems_(preferredVirtualItems),
                learnedVirtualItems_(learnedVirtualItems),
                defaultConfiguredItems_(defaultConfiguredItems),
                preferredConfiguredItems_(preferredConfiguredItems),
                learnedConfiguredItems_(learnedConfiguredItems) {}

        Configuration(const Configuration &_other) : 
                UUID_(_other.UUID_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_),
                name_(_other.name_),
                activeItemConfiguration_(_other.activeItemConfiguration_),
                configurationTriggers_(_other.configurationTriggers_),
                defaultVirtualItems_(_other.defaultVirtualItems_),
                preferredVirtualItems_(_other.preferredVirtualItems_),
                learnedVirtualItems_(_other.learnedVirtualItems_),
                defaultConfiguredItems_(_other.defaultConfiguredItems_),
                preferredConfiguredItems_(_other.preferredConfiguredItems_),
                learnedConfiguredItems_(_other.learnedConfiguredItems_) {}

#ifdef OSPL_DDS_CXX11
        Configuration(Configuration &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)),
                name_(::std::move(_other.name_)),
                activeItemConfiguration_(::std::move(_other.activeItemConfiguration_)),
                configurationTriggers_(::std::move(_other.configurationTriggers_)),
                defaultVirtualItems_(::std::move(_other.defaultVirtualItems_)),
                preferredVirtualItems_(::std::move(_other.preferredVirtualItems_)),
                learnedVirtualItems_(::std::move(_other.learnedVirtualItems_)),
                defaultConfiguredItems_(::std::move(_other.defaultConfiguredItems_)),
                preferredConfiguredItems_(::std::move(_other.preferredConfiguredItems_)),
                learnedConfiguredItems_(::std::move(_other.learnedConfiguredItems_)) {}

        Configuration& operator=(Configuration &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
                name_ = ::std::move(_other.name_);
                activeItemConfiguration_ = ::std::move(_other.activeItemConfiguration_);
                configurationTriggers_ = ::std::move(_other.configurationTriggers_);
                defaultVirtualItems_ = ::std::move(_other.defaultVirtualItems_);
                preferredVirtualItems_ = ::std::move(_other.preferredVirtualItems_);
                learnedVirtualItems_ = ::std::move(_other.learnedVirtualItems_);
                defaultConfiguredItems_ = ::std::move(_other.defaultConfiguredItems_);
                preferredConfiguredItems_ = ::std::move(_other.preferredConfiguredItems_);
                learnedConfiguredItems_ = ::std::move(_other.learnedConfiguredItems_);
            }
            return *this;
        }
#endif

        Configuration& operator=(const Configuration &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
                name_ = _other.name_;
                activeItemConfiguration_ = _other.activeItemConfiguration_;
                configurationTriggers_ = _other.configurationTriggers_;
                defaultVirtualItems_ = _other.defaultVirtualItems_;
                preferredVirtualItems_ = _other.preferredVirtualItems_;
                learnedVirtualItems_ = _other.learnedVirtualItems_;
                defaultConfiguredItems_ = _other.defaultConfiguredItems_;
                preferredConfiguredItems_ = _other.preferredConfiguredItems_;
                learnedConfiguredItems_ = _other.learnedConfiguredItems_;
            }
            return *this;
        }

        bool operator==(const Configuration& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_ &&
                name_ == _other.name_ &&
                activeItemConfiguration_ == _other.activeItemConfiguration_ &&
                configurationTriggers_ == _other.configurationTriggers_ &&
                defaultVirtualItems_ == _other.defaultVirtualItems_ &&
                preferredVirtualItems_ == _other.preferredVirtualItems_ &&
                learnedVirtualItems_ == _other.learnedVirtualItems_ &&
                defaultConfiguredItems_ == _other.defaultConfiguredItems_ &&
                preferredConfiguredItems_ == _other.preferredConfiguredItems_ &&
                learnedConfiguredItems_ == _other.learnedConfiguredItems_;
        }

        bool operator!=(const Configuration& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
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
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        Mind::ConfigurationType activeItemConfiguration() const { return this->activeItemConfiguration_; }
        Mind::ConfigurationType& activeItemConfiguration() { return this->activeItemConfiguration_; }
        void activeItemConfiguration(Mind::ConfigurationType _val_) { this->activeItemConfiguration_ = _val_; }
        const std::vector<std::string> & configurationTriggers() const { return this->configurationTriggers_; }
        std::vector<std::string> & configurationTriggers() { return this->configurationTriggers_; }
        void configurationTriggers(const std::vector<std::string> & _val_) { this->configurationTriggers_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void configurationTriggers(std::vector<std::string> && _val_) { this->configurationTriggers_ = _val_; }
#endif
        const std::vector<Mind::VirtualItem> & defaultVirtualItems() const { return this->defaultVirtualItems_; }
        std::vector<Mind::VirtualItem> & defaultVirtualItems() { return this->defaultVirtualItems_; }
        void defaultVirtualItems(const std::vector<Mind::VirtualItem> & _val_) { this->defaultVirtualItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void defaultVirtualItems(std::vector<Mind::VirtualItem> && _val_) { this->defaultVirtualItems_ = _val_; }
#endif
        const std::vector<Mind::VirtualItem> & preferredVirtualItems() const { return this->preferredVirtualItems_; }
        std::vector<Mind::VirtualItem> & preferredVirtualItems() { return this->preferredVirtualItems_; }
        void preferredVirtualItems(const std::vector<Mind::VirtualItem> & _val_) { this->preferredVirtualItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void preferredVirtualItems(std::vector<Mind::VirtualItem> && _val_) { this->preferredVirtualItems_ = _val_; }
#endif
        const std::vector<Mind::VirtualItem> & learnedVirtualItems() const { return this->learnedVirtualItems_; }
        std::vector<Mind::VirtualItem> & learnedVirtualItems() { return this->learnedVirtualItems_; }
        void learnedVirtualItems(const std::vector<Mind::VirtualItem> & _val_) { this->learnedVirtualItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void learnedVirtualItems(std::vector<Mind::VirtualItem> && _val_) { this->learnedVirtualItems_ = _val_; }
#endif
        const std::vector<Mind::ConfiguredItem> & defaultConfiguredItems() const { return this->defaultConfiguredItems_; }
        std::vector<Mind::ConfiguredItem> & defaultConfiguredItems() { return this->defaultConfiguredItems_; }
        void defaultConfiguredItems(const std::vector<Mind::ConfiguredItem> & _val_) { this->defaultConfiguredItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void defaultConfiguredItems(std::vector<Mind::ConfiguredItem> && _val_) { this->defaultConfiguredItems_ = _val_; }
#endif
        const std::vector<Mind::ConfiguredItem> & preferredConfiguredItems() const { return this->preferredConfiguredItems_; }
        std::vector<Mind::ConfiguredItem> & preferredConfiguredItems() { return this->preferredConfiguredItems_; }
        void preferredConfiguredItems(const std::vector<Mind::ConfiguredItem> & _val_) { this->preferredConfiguredItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void preferredConfiguredItems(std::vector<Mind::ConfiguredItem> && _val_) { this->preferredConfiguredItems_ = _val_; }
#endif
        const std::vector<Mind::ConfiguredItem> & learnedConfiguredItems() const { return this->learnedConfiguredItems_; }
        std::vector<Mind::ConfiguredItem> & learnedConfiguredItems() { return this->learnedConfiguredItems_; }
        void learnedConfiguredItems(const std::vector<Mind::ConfiguredItem> & _val_) { this->learnedConfiguredItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void learnedConfiguredItems(std::vector<Mind::ConfiguredItem> && _val_) { this->learnedConfiguredItems_ = _val_; }
#endif
    };

    class Configuration_Command_Set_Active_Item_Configuration OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        Mind::ConfigurationType activeItemConfiguration_;

    public:
        Configuration_Command_Set_Active_Item_Configuration() :
                activeItemConfiguration_(OSPL_ENUM_LABEL(Mind,ConfigurationType,CONFIGURATION_TYPE_DEFAULT)) {}

        explicit Configuration_Command_Set_Active_Item_Configuration(
            const std::string& UUID,
            Mind::ConfigurationType activeItemConfiguration) : 
                UUID_(UUID),
                activeItemConfiguration_(activeItemConfiguration) {}

        Configuration_Command_Set_Active_Item_Configuration(const Configuration_Command_Set_Active_Item_Configuration &_other) : 
                UUID_(_other.UUID_),
                activeItemConfiguration_(_other.activeItemConfiguration_) {}

#ifdef OSPL_DDS_CXX11
        Configuration_Command_Set_Active_Item_Configuration(Configuration_Command_Set_Active_Item_Configuration &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                activeItemConfiguration_(::std::move(_other.activeItemConfiguration_)) {}

        Configuration_Command_Set_Active_Item_Configuration& operator=(Configuration_Command_Set_Active_Item_Configuration &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                activeItemConfiguration_ = ::std::move(_other.activeItemConfiguration_);
            }
            return *this;
        }
#endif

        Configuration_Command_Set_Active_Item_Configuration& operator=(const Configuration_Command_Set_Active_Item_Configuration &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                activeItemConfiguration_ = _other.activeItemConfiguration_;
            }
            return *this;
        }

        bool operator==(const Configuration_Command_Set_Active_Item_Configuration& _other) const
        {
            return UUID_ == _other.UUID_ &&
                activeItemConfiguration_ == _other.activeItemConfiguration_;
        }

        bool operator!=(const Configuration_Command_Set_Active_Item_Configuration& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        Mind::ConfigurationType activeItemConfiguration() const { return this->activeItemConfiguration_; }
        Mind::ConfigurationType& activeItemConfiguration() { return this->activeItemConfiguration_; }
        void activeItemConfiguration(Mind::ConfigurationType _val_) { this->activeItemConfiguration_ = _val_; }
    };

    class Configuration_Command_Set_Preferred_Virtual_Items_Configuration OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::VirtualItem>  _preferredVirtualItems_seq;

        std::string UUID_;
        std::vector<Mind::VirtualItem>  preferredVirtualItems_;

    public:
        Configuration_Command_Set_Preferred_Virtual_Items_Configuration() {}

        explicit Configuration_Command_Set_Preferred_Virtual_Items_Configuration(
            const std::string& UUID,
            const std::vector<Mind::VirtualItem> & preferredVirtualItems) : 
                UUID_(UUID),
                preferredVirtualItems_(preferredVirtualItems) {}

        Configuration_Command_Set_Preferred_Virtual_Items_Configuration(const Configuration_Command_Set_Preferred_Virtual_Items_Configuration &_other) : 
                UUID_(_other.UUID_),
                preferredVirtualItems_(_other.preferredVirtualItems_) {}

#ifdef OSPL_DDS_CXX11
        Configuration_Command_Set_Preferred_Virtual_Items_Configuration(Configuration_Command_Set_Preferred_Virtual_Items_Configuration &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                preferredVirtualItems_(::std::move(_other.preferredVirtualItems_)) {}

        Configuration_Command_Set_Preferred_Virtual_Items_Configuration& operator=(Configuration_Command_Set_Preferred_Virtual_Items_Configuration &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                preferredVirtualItems_ = ::std::move(_other.preferredVirtualItems_);
            }
            return *this;
        }
#endif

        Configuration_Command_Set_Preferred_Virtual_Items_Configuration& operator=(const Configuration_Command_Set_Preferred_Virtual_Items_Configuration &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                preferredVirtualItems_ = _other.preferredVirtualItems_;
            }
            return *this;
        }

        bool operator==(const Configuration_Command_Set_Preferred_Virtual_Items_Configuration& _other) const
        {
            return UUID_ == _other.UUID_ &&
                preferredVirtualItems_ == _other.preferredVirtualItems_;
        }

        bool operator!=(const Configuration_Command_Set_Preferred_Virtual_Items_Configuration& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::VirtualItem> & preferredVirtualItems() const { return this->preferredVirtualItems_; }
        std::vector<Mind::VirtualItem> & preferredVirtualItems() { return this->preferredVirtualItems_; }
        void preferredVirtualItems(const std::vector<Mind::VirtualItem> & _val_) { this->preferredVirtualItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void preferredVirtualItems(std::vector<Mind::VirtualItem> && _val_) { this->preferredVirtualItems_ = _val_; }
#endif
    };

    class Configuration_Command_Set_Preferred_Configured_Items_Configuration OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::ConfiguredItem>  _preferredConfiguredItems_seq;

        std::string UUID_;
        std::vector<Mind::ConfiguredItem>  preferredConfiguredItems_;

    public:
        Configuration_Command_Set_Preferred_Configured_Items_Configuration() {}

        explicit Configuration_Command_Set_Preferred_Configured_Items_Configuration(
            const std::string& UUID,
            const std::vector<Mind::ConfiguredItem> & preferredConfiguredItems) : 
                UUID_(UUID),
                preferredConfiguredItems_(preferredConfiguredItems) {}

        Configuration_Command_Set_Preferred_Configured_Items_Configuration(const Configuration_Command_Set_Preferred_Configured_Items_Configuration &_other) : 
                UUID_(_other.UUID_),
                preferredConfiguredItems_(_other.preferredConfiguredItems_) {}

#ifdef OSPL_DDS_CXX11
        Configuration_Command_Set_Preferred_Configured_Items_Configuration(Configuration_Command_Set_Preferred_Configured_Items_Configuration &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                preferredConfiguredItems_(::std::move(_other.preferredConfiguredItems_)) {}

        Configuration_Command_Set_Preferred_Configured_Items_Configuration& operator=(Configuration_Command_Set_Preferred_Configured_Items_Configuration &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                preferredConfiguredItems_ = ::std::move(_other.preferredConfiguredItems_);
            }
            return *this;
        }
#endif

        Configuration_Command_Set_Preferred_Configured_Items_Configuration& operator=(const Configuration_Command_Set_Preferred_Configured_Items_Configuration &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                preferredConfiguredItems_ = _other.preferredConfiguredItems_;
            }
            return *this;
        }

        bool operator==(const Configuration_Command_Set_Preferred_Configured_Items_Configuration& _other) const
        {
            return UUID_ == _other.UUID_ &&
                preferredConfiguredItems_ == _other.preferredConfiguredItems_;
        }

        bool operator!=(const Configuration_Command_Set_Preferred_Configured_Items_Configuration& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::ConfiguredItem> & preferredConfiguredItems() const { return this->preferredConfiguredItems_; }
        std::vector<Mind::ConfiguredItem> & preferredConfiguredItems() { return this->preferredConfiguredItems_; }
        void preferredConfiguredItems(const std::vector<Mind::ConfiguredItem> & _val_) { this->preferredConfiguredItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void preferredConfiguredItems(std::vector<Mind::ConfiguredItem> && _val_) { this->preferredConfiguredItems_ = _val_; }
#endif
    };

}

#endif /* _CONFIGURATION_H_ */
