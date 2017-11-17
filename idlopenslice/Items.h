#ifndef _ITEMS_H_
#define _ITEMS_H_

#include <dds/core/ddscore.hpp>
#include "Commons.h"

namespace Mind
{
    class User_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        Mind::Category itemCategory_;
        std::string command_;

    public:
        User_Command() :
                itemCategory_(OSPL_ENUM_LABEL(Mind,Category,CATEGORY_NONE)) {}

        explicit User_Command(
            const std::string& UUID,
            Mind::Category itemCategory,
            const std::string& command) : 
                UUID_(UUID),
                itemCategory_(itemCategory),
                command_(command) {}

        User_Command(const User_Command &_other) : 
                UUID_(_other.UUID_),
                itemCategory_(_other.itemCategory_),
                command_(_other.command_) {}

#ifdef OSPL_DDS_CXX11
        User_Command(User_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                itemCategory_(::std::move(_other.itemCategory_)),
                command_(::std::move(_other.command_)) {}

        User_Command& operator=(User_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                itemCategory_ = ::std::move(_other.itemCategory_);
                command_ = ::std::move(_other.command_);
            }
            return *this;
        }
#endif

        User_Command& operator=(const User_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                itemCategory_ = _other.itemCategory_;
                command_ = _other.command_;
            }
            return *this;
        }

        bool operator==(const User_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                itemCategory_ == _other.itemCategory_ &&
                command_ == _other.command_;
        }

        bool operator!=(const User_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        Mind::Category itemCategory() const { return this->itemCategory_; }
        Mind::Category& itemCategory() { return this->itemCategory_; }
        void itemCategory(Mind::Category _val_) { this->itemCategory_ = _val_; }
        const std::string& command() const { return this->command_; }
        std::string& command() { return this->command_; }
        void command(const std::string& _val_) { this->command_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void command(std::string&& _val_) { this->command_ = _val_; }
#endif
    };

    class Item_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        Mind::Category itemCategory_;
        std::string command_;

    public:
        Item_Command() :
                itemCategory_(OSPL_ENUM_LABEL(Mind,Category,CATEGORY_NONE)) {}

        explicit Item_Command(
            const std::string& UUID,
            Mind::Category itemCategory,
            const std::string& command) : 
                UUID_(UUID),
                itemCategory_(itemCategory),
                command_(command) {}

        Item_Command(const Item_Command &_other) : 
                UUID_(_other.UUID_),
                itemCategory_(_other.itemCategory_),
                command_(_other.command_) {}

#ifdef OSPL_DDS_CXX11
        Item_Command(Item_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                itemCategory_(::std::move(_other.itemCategory_)),
                command_(::std::move(_other.command_)) {}

        Item_Command& operator=(Item_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                itemCategory_ = ::std::move(_other.itemCategory_);
                command_ = ::std::move(_other.command_);
            }
            return *this;
        }
#endif

        Item_Command& operator=(const Item_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                itemCategory_ = _other.itemCategory_;
                command_ = _other.command_;
            }
            return *this;
        }

        bool operator==(const Item_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                itemCategory_ == _other.itemCategory_ &&
                command_ == _other.command_;
        }

        bool operator!=(const Item_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        Mind::Category itemCategory() const { return this->itemCategory_; }
        Mind::Category& itemCategory() { return this->itemCategory_; }
        void itemCategory(Mind::Category _val_) { this->itemCategory_ = _val_; }
        const std::string& command() const { return this->command_; }
        std::string& command() { return this->command_; }
        void command(const std::string& _val_) { this->command_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void command(std::string&& _val_) { this->command_ = _val_; }
#endif
    };

    class Actuation_Command OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Item_Command>  _commands_seq;

        std::string UUID_;
        std::vector<Mind::Item_Command>  commands_;

    public:
        Actuation_Command() {}

        explicit Actuation_Command(
            const std::string& UUID,
            const std::vector<Mind::Item_Command> & commands) : 
                UUID_(UUID),
                commands_(commands) {}

        Actuation_Command(const Actuation_Command &_other) : 
                UUID_(_other.UUID_),
                commands_(_other.commands_) {}

#ifdef OSPL_DDS_CXX11
        Actuation_Command(Actuation_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                commands_(::std::move(_other.commands_)) {}

        Actuation_Command& operator=(Actuation_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                commands_ = ::std::move(_other.commands_);
            }
            return *this;
        }
#endif

        Actuation_Command& operator=(const Actuation_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                commands_ = _other.commands_;
            }
            return *this;
        }

        bool operator==(const Actuation_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                commands_ == _other.commands_;
        }

        bool operator!=(const Actuation_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::Item_Command> & commands() const { return this->commands_; }
        std::vector<Mind::Item_Command> & commands() { return this->commands_; }
        void commands(const std::vector<Mind::Item_Command> & _val_) { this->commands_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void commands(std::vector<Mind::Item_Command> && _val_) { this->commands_ = _val_; }
#endif
    };

    class Item_Command_Update_Category OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        Mind::Category itemCategory_;
        std::string command_;

    public:
        Item_Command_Update_Category() :
                itemCategory_(OSPL_ENUM_LABEL(Mind,Category,CATEGORY_NONE)) {}

        explicit Item_Command_Update_Category(
            const std::string& UUID,
            Mind::Category itemCategory,
            const std::string& command) : 
                UUID_(UUID),
                itemCategory_(itemCategory),
                command_(command) {}

        Item_Command_Update_Category(const Item_Command_Update_Category &_other) : 
                UUID_(_other.UUID_),
                itemCategory_(_other.itemCategory_),
                command_(_other.command_) {}

#ifdef OSPL_DDS_CXX11
        Item_Command_Update_Category(Item_Command_Update_Category &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                itemCategory_(::std::move(_other.itemCategory_)),
                command_(::std::move(_other.command_)) {}

        Item_Command_Update_Category& operator=(Item_Command_Update_Category &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                itemCategory_ = ::std::move(_other.itemCategory_);
                command_ = ::std::move(_other.command_);
            }
            return *this;
        }
#endif

        Item_Command_Update_Category& operator=(const Item_Command_Update_Category &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                itemCategory_ = _other.itemCategory_;
                command_ = _other.command_;
            }
            return *this;
        }

        bool operator==(const Item_Command_Update_Category& _other) const
        {
            return UUID_ == _other.UUID_ &&
                itemCategory_ == _other.itemCategory_ &&
                command_ == _other.command_;
        }

        bool operator!=(const Item_Command_Update_Category& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        Mind::Category itemCategory() const { return this->itemCategory_; }
        Mind::Category& itemCategory() { return this->itemCategory_; }
        void itemCategory(Mind::Category _val_) { this->itemCategory_ = _val_; }
        const std::string& command() const { return this->command_; }
        std::string& command() { return this->command_; }
        void command(const std::string& _val_) { this->command_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void command(std::string&& _val_) { this->command_ = _val_; }
#endif
    };

    class Item_Consumption OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;
        Mind::Category itemCategory_;
        double power_;
        double energy_;
        int32_t timestamp_;

    public:
        Item_Consumption() :
                itemCategory_(OSPL_ENUM_LABEL(Mind,Category,CATEGORY_NONE)),
                power_(0.0),
                energy_(0.0),
                timestamp_(0) {}

        explicit Item_Consumption(
            const std::string& UUID,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse,
            Mind::Category itemCategory,
            double power,
            double energy,
            int32_t timestamp) : 
                UUID_(UUID),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse),
                itemCategory_(itemCategory),
                power_(power),
                energy_(energy),
                timestamp_(timestamp) {}

        Item_Consumption(const Item_Consumption &_other) : 
                UUID_(_other.UUID_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_),
                itemCategory_(_other.itemCategory_),
                power_(_other.power_),
                energy_(_other.energy_),
                timestamp_(_other.timestamp_) {}

#ifdef OSPL_DDS_CXX11
        Item_Consumption(Item_Consumption &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)),
                itemCategory_(::std::move(_other.itemCategory_)),
                power_(::std::move(_other.power_)),
                energy_(::std::move(_other.energy_)),
                timestamp_(::std::move(_other.timestamp_)) {}

        Item_Consumption& operator=(Item_Consumption &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
                itemCategory_ = ::std::move(_other.itemCategory_);
                power_ = ::std::move(_other.power_);
                energy_ = ::std::move(_other.energy_);
                timestamp_ = ::std::move(_other.timestamp_);
            }
            return *this;
        }
#endif

        Item_Consumption& operator=(const Item_Consumption &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
                itemCategory_ = _other.itemCategory_;
                power_ = _other.power_;
                energy_ = _other.energy_;
                timestamp_ = _other.timestamp_;
            }
            return *this;
        }

        bool operator==(const Item_Consumption& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_ &&
                itemCategory_ == _other.itemCategory_ &&
                power_ == _other.power_ &&
                energy_ == _other.energy_ &&
                timestamp_ == _other.timestamp_;
        }

        bool operator!=(const Item_Consumption& _other) const
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
        Mind::Category itemCategory() const { return this->itemCategory_; }
        Mind::Category& itemCategory() { return this->itemCategory_; }
        void itemCategory(Mind::Category _val_) { this->itemCategory_ = _val_; }
        double power() const { return this->power_; }
        double& power() { return this->power_; }
        void power(double _val_) { this->power_ = _val_; }
        double energy() const { return this->energy_; }
        double& energy() { return this->energy_; }
        void energy(double _val_) { this->energy_ = _val_; }
        int32_t timestamp() const { return this->timestamp_; }
        int32_t& timestamp() { return this->timestamp_; }
        void timestamp(int32_t _val_) { this->timestamp_ = _val_; }
    };

    class ExtractorFan OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        ExtractorFan() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit ExtractorFan(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        ExtractorFan(const ExtractorFan &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        ExtractorFan(ExtractorFan &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        ExtractorFan& operator=(ExtractorFan &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        ExtractorFan& operator=(const ExtractorFan &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const ExtractorFan& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const ExtractorFan& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class VMC OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        VMC() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit VMC(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        VMC(const VMC &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        VMC(VMC &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        VMC& operator=(VMC &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        VMC& operator=(const VMC &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const VMC& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const VMC& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class CappaAspirazione OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddressOnOff_;
        int32_t numRelayOnOff_;
        std::string MACAddressLight_;
        int32_t numRelayLight_;
        std::string MACAddressSpeed1_;
        int32_t numRelaySpeed1_;
        std::string MACAddressSpeed2_;
        int32_t numRelaySpeed2_;
        std::string MACAddressSpeed3_;
        int32_t numRelaySpeed3_;
        std::vector<Mind::Category>  categories_;
        bool connectedOnOff_;
        bool connectedLight_;
        bool connectedSpeed1_;
        bool connectedSpeed2_;
        bool connectedSpeed3_;
        int32_t statusOnOff_;
        int32_t statusLight_;
        int32_t statusSpeed1_;
        int32_t statusSpeed2_;
        int32_t statusSpeed3_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        CappaAspirazione() :
                numRelayOnOff_(0),
                numRelayLight_(0),
                numRelaySpeed1_(0),
                numRelaySpeed2_(0),
                numRelaySpeed3_(0),
                connectedOnOff_(false),
                connectedLight_(false),
                connectedSpeed1_(false),
                connectedSpeed2_(false),
                connectedSpeed3_(false),
                statusOnOff_(0),
                statusLight_(0),
                statusSpeed1_(0),
                statusSpeed2_(0),
                statusSpeed3_(0),
                blocked_(false) {}

        explicit CappaAspirazione(
            const std::string& UUID,
            const std::string& MACAddressOnOff,
            int32_t numRelayOnOff,
            const std::string& MACAddressLight,
            int32_t numRelayLight,
            const std::string& MACAddressSpeed1,
            int32_t numRelaySpeed1,
            const std::string& MACAddressSpeed2,
            int32_t numRelaySpeed2,
            const std::string& MACAddressSpeed3,
            int32_t numRelaySpeed3,
            const std::vector<Mind::Category> & categories,
            bool connectedOnOff,
            bool connectedLight,
            bool connectedSpeed1,
            bool connectedSpeed2,
            bool connectedSpeed3,
            int32_t statusOnOff,
            int32_t statusLight,
            int32_t statusSpeed1,
            int32_t statusSpeed2,
            int32_t statusSpeed3,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddressOnOff_(MACAddressOnOff),
                numRelayOnOff_(numRelayOnOff),
                MACAddressLight_(MACAddressLight),
                numRelayLight_(numRelayLight),
                MACAddressSpeed1_(MACAddressSpeed1),
                numRelaySpeed1_(numRelaySpeed1),
                MACAddressSpeed2_(MACAddressSpeed2),
                numRelaySpeed2_(numRelaySpeed2),
                MACAddressSpeed3_(MACAddressSpeed3),
                numRelaySpeed3_(numRelaySpeed3),
                categories_(categories),
                connectedOnOff_(connectedOnOff),
                connectedLight_(connectedLight),
                connectedSpeed1_(connectedSpeed1),
                connectedSpeed2_(connectedSpeed2),
                connectedSpeed3_(connectedSpeed3),
                statusOnOff_(statusOnOff),
                statusLight_(statusLight),
                statusSpeed1_(statusSpeed1),
                statusSpeed2_(statusSpeed2),
                statusSpeed3_(statusSpeed3),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        CappaAspirazione(const CappaAspirazione &_other) : 
                UUID_(_other.UUID_),
                MACAddressOnOff_(_other.MACAddressOnOff_),
                numRelayOnOff_(_other.numRelayOnOff_),
                MACAddressLight_(_other.MACAddressLight_),
                numRelayLight_(_other.numRelayLight_),
                MACAddressSpeed1_(_other.MACAddressSpeed1_),
                numRelaySpeed1_(_other.numRelaySpeed1_),
                MACAddressSpeed2_(_other.MACAddressSpeed2_),
                numRelaySpeed2_(_other.numRelaySpeed2_),
                MACAddressSpeed3_(_other.MACAddressSpeed3_),
                numRelaySpeed3_(_other.numRelaySpeed3_),
                categories_(_other.categories_),
                connectedOnOff_(_other.connectedOnOff_),
                connectedLight_(_other.connectedLight_),
                connectedSpeed1_(_other.connectedSpeed1_),
                connectedSpeed2_(_other.connectedSpeed2_),
                connectedSpeed3_(_other.connectedSpeed3_),
                statusOnOff_(_other.statusOnOff_),
                statusLight_(_other.statusLight_),
                statusSpeed1_(_other.statusSpeed1_),
                statusSpeed2_(_other.statusSpeed2_),
                statusSpeed3_(_other.statusSpeed3_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        CappaAspirazione(CappaAspirazione &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddressOnOff_(::std::move(_other.MACAddressOnOff_)),
                numRelayOnOff_(::std::move(_other.numRelayOnOff_)),
                MACAddressLight_(::std::move(_other.MACAddressLight_)),
                numRelayLight_(::std::move(_other.numRelayLight_)),
                MACAddressSpeed1_(::std::move(_other.MACAddressSpeed1_)),
                numRelaySpeed1_(::std::move(_other.numRelaySpeed1_)),
                MACAddressSpeed2_(::std::move(_other.MACAddressSpeed2_)),
                numRelaySpeed2_(::std::move(_other.numRelaySpeed2_)),
                MACAddressSpeed3_(::std::move(_other.MACAddressSpeed3_)),
                numRelaySpeed3_(::std::move(_other.numRelaySpeed3_)),
                categories_(::std::move(_other.categories_)),
                connectedOnOff_(::std::move(_other.connectedOnOff_)),
                connectedLight_(::std::move(_other.connectedLight_)),
                connectedSpeed1_(::std::move(_other.connectedSpeed1_)),
                connectedSpeed2_(::std::move(_other.connectedSpeed2_)),
                connectedSpeed3_(::std::move(_other.connectedSpeed3_)),
                statusOnOff_(::std::move(_other.statusOnOff_)),
                statusLight_(::std::move(_other.statusLight_)),
                statusSpeed1_(::std::move(_other.statusSpeed1_)),
                statusSpeed2_(::std::move(_other.statusSpeed2_)),
                statusSpeed3_(::std::move(_other.statusSpeed3_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        CappaAspirazione& operator=(CappaAspirazione &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddressOnOff_ = ::std::move(_other.MACAddressOnOff_);
                numRelayOnOff_ = ::std::move(_other.numRelayOnOff_);
                MACAddressLight_ = ::std::move(_other.MACAddressLight_);
                numRelayLight_ = ::std::move(_other.numRelayLight_);
                MACAddressSpeed1_ = ::std::move(_other.MACAddressSpeed1_);
                numRelaySpeed1_ = ::std::move(_other.numRelaySpeed1_);
                MACAddressSpeed2_ = ::std::move(_other.MACAddressSpeed2_);
                numRelaySpeed2_ = ::std::move(_other.numRelaySpeed2_);
                MACAddressSpeed3_ = ::std::move(_other.MACAddressSpeed3_);
                numRelaySpeed3_ = ::std::move(_other.numRelaySpeed3_);
                categories_ = ::std::move(_other.categories_);
                connectedOnOff_ = ::std::move(_other.connectedOnOff_);
                connectedLight_ = ::std::move(_other.connectedLight_);
                connectedSpeed1_ = ::std::move(_other.connectedSpeed1_);
                connectedSpeed2_ = ::std::move(_other.connectedSpeed2_);
                connectedSpeed3_ = ::std::move(_other.connectedSpeed3_);
                statusOnOff_ = ::std::move(_other.statusOnOff_);
                statusLight_ = ::std::move(_other.statusLight_);
                statusSpeed1_ = ::std::move(_other.statusSpeed1_);
                statusSpeed2_ = ::std::move(_other.statusSpeed2_);
                statusSpeed3_ = ::std::move(_other.statusSpeed3_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        CappaAspirazione& operator=(const CappaAspirazione &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddressOnOff_ = _other.MACAddressOnOff_;
                numRelayOnOff_ = _other.numRelayOnOff_;
                MACAddressLight_ = _other.MACAddressLight_;
                numRelayLight_ = _other.numRelayLight_;
                MACAddressSpeed1_ = _other.MACAddressSpeed1_;
                numRelaySpeed1_ = _other.numRelaySpeed1_;
                MACAddressSpeed2_ = _other.MACAddressSpeed2_;
                numRelaySpeed2_ = _other.numRelaySpeed2_;
                MACAddressSpeed3_ = _other.MACAddressSpeed3_;
                numRelaySpeed3_ = _other.numRelaySpeed3_;
                categories_ = _other.categories_;
                connectedOnOff_ = _other.connectedOnOff_;
                connectedLight_ = _other.connectedLight_;
                connectedSpeed1_ = _other.connectedSpeed1_;
                connectedSpeed2_ = _other.connectedSpeed2_;
                connectedSpeed3_ = _other.connectedSpeed3_;
                statusOnOff_ = _other.statusOnOff_;
                statusLight_ = _other.statusLight_;
                statusSpeed1_ = _other.statusSpeed1_;
                statusSpeed2_ = _other.statusSpeed2_;
                statusSpeed3_ = _other.statusSpeed3_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const CappaAspirazione& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddressOnOff_ == _other.MACAddressOnOff_ &&
                numRelayOnOff_ == _other.numRelayOnOff_ &&
                MACAddressLight_ == _other.MACAddressLight_ &&
                numRelayLight_ == _other.numRelayLight_ &&
                MACAddressSpeed1_ == _other.MACAddressSpeed1_ &&
                numRelaySpeed1_ == _other.numRelaySpeed1_ &&
                MACAddressSpeed2_ == _other.MACAddressSpeed2_ &&
                numRelaySpeed2_ == _other.numRelaySpeed2_ &&
                MACAddressSpeed3_ == _other.MACAddressSpeed3_ &&
                numRelaySpeed3_ == _other.numRelaySpeed3_ &&
                categories_ == _other.categories_ &&
                connectedOnOff_ == _other.connectedOnOff_ &&
                connectedLight_ == _other.connectedLight_ &&
                connectedSpeed1_ == _other.connectedSpeed1_ &&
                connectedSpeed2_ == _other.connectedSpeed2_ &&
                connectedSpeed3_ == _other.connectedSpeed3_ &&
                statusOnOff_ == _other.statusOnOff_ &&
                statusLight_ == _other.statusLight_ &&
                statusSpeed1_ == _other.statusSpeed1_ &&
                statusSpeed2_ == _other.statusSpeed2_ &&
                statusSpeed3_ == _other.statusSpeed3_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const CappaAspirazione& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddressOnOff() const { return this->MACAddressOnOff_; }
        std::string& MACAddressOnOff() { return this->MACAddressOnOff_; }
        void MACAddressOnOff(const std::string& _val_) { this->MACAddressOnOff_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressOnOff(std::string&& _val_) { this->MACAddressOnOff_ = _val_; }
#endif
        int32_t numRelayOnOff() const { return this->numRelayOnOff_; }
        int32_t& numRelayOnOff() { return this->numRelayOnOff_; }
        void numRelayOnOff(int32_t _val_) { this->numRelayOnOff_ = _val_; }
        const std::string& MACAddressLight() const { return this->MACAddressLight_; }
        std::string& MACAddressLight() { return this->MACAddressLight_; }
        void MACAddressLight(const std::string& _val_) { this->MACAddressLight_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressLight(std::string&& _val_) { this->MACAddressLight_ = _val_; }
#endif
        int32_t numRelayLight() const { return this->numRelayLight_; }
        int32_t& numRelayLight() { return this->numRelayLight_; }
        void numRelayLight(int32_t _val_) { this->numRelayLight_ = _val_; }
        const std::string& MACAddressSpeed1() const { return this->MACAddressSpeed1_; }
        std::string& MACAddressSpeed1() { return this->MACAddressSpeed1_; }
        void MACAddressSpeed1(const std::string& _val_) { this->MACAddressSpeed1_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressSpeed1(std::string&& _val_) { this->MACAddressSpeed1_ = _val_; }
#endif
        int32_t numRelaySpeed1() const { return this->numRelaySpeed1_; }
        int32_t& numRelaySpeed1() { return this->numRelaySpeed1_; }
        void numRelaySpeed1(int32_t _val_) { this->numRelaySpeed1_ = _val_; }
        const std::string& MACAddressSpeed2() const { return this->MACAddressSpeed2_; }
        std::string& MACAddressSpeed2() { return this->MACAddressSpeed2_; }
        void MACAddressSpeed2(const std::string& _val_) { this->MACAddressSpeed2_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressSpeed2(std::string&& _val_) { this->MACAddressSpeed2_ = _val_; }
#endif
        int32_t numRelaySpeed2() const { return this->numRelaySpeed2_; }
        int32_t& numRelaySpeed2() { return this->numRelaySpeed2_; }
        void numRelaySpeed2(int32_t _val_) { this->numRelaySpeed2_ = _val_; }
        const std::string& MACAddressSpeed3() const { return this->MACAddressSpeed3_; }
        std::string& MACAddressSpeed3() { return this->MACAddressSpeed3_; }
        void MACAddressSpeed3(const std::string& _val_) { this->MACAddressSpeed3_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressSpeed3(std::string&& _val_) { this->MACAddressSpeed3_ = _val_; }
#endif
        int32_t numRelaySpeed3() const { return this->numRelaySpeed3_; }
        int32_t& numRelaySpeed3() { return this->numRelaySpeed3_; }
        void numRelaySpeed3(int32_t _val_) { this->numRelaySpeed3_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connectedOnOff() const { return this->connectedOnOff_; }
        bool& connectedOnOff() { return this->connectedOnOff_; }
        void connectedOnOff(bool _val_) { this->connectedOnOff_ = _val_; }
        bool connectedLight() const { return this->connectedLight_; }
        bool& connectedLight() { return this->connectedLight_; }
        void connectedLight(bool _val_) { this->connectedLight_ = _val_; }
        bool connectedSpeed1() const { return this->connectedSpeed1_; }
        bool& connectedSpeed1() { return this->connectedSpeed1_; }
        void connectedSpeed1(bool _val_) { this->connectedSpeed1_ = _val_; }
        bool connectedSpeed2() const { return this->connectedSpeed2_; }
        bool& connectedSpeed2() { return this->connectedSpeed2_; }
        void connectedSpeed2(bool _val_) { this->connectedSpeed2_ = _val_; }
        bool connectedSpeed3() const { return this->connectedSpeed3_; }
        bool& connectedSpeed3() { return this->connectedSpeed3_; }
        void connectedSpeed3(bool _val_) { this->connectedSpeed3_ = _val_; }
        int32_t statusOnOff() const { return this->statusOnOff_; }
        int32_t& statusOnOff() { return this->statusOnOff_; }
        void statusOnOff(int32_t _val_) { this->statusOnOff_ = _val_; }
        int32_t statusLight() const { return this->statusLight_; }
        int32_t& statusLight() { return this->statusLight_; }
        void statusLight(int32_t _val_) { this->statusLight_ = _val_; }
        int32_t statusSpeed1() const { return this->statusSpeed1_; }
        int32_t& statusSpeed1() { return this->statusSpeed1_; }
        void statusSpeed1(int32_t _val_) { this->statusSpeed1_ = _val_; }
        int32_t statusSpeed2() const { return this->statusSpeed2_; }
        int32_t& statusSpeed2() { return this->statusSpeed2_; }
        void statusSpeed2(int32_t _val_) { this->statusSpeed2_ = _val_; }
        int32_t statusSpeed3() const { return this->statusSpeed3_; }
        int32_t& statusSpeed3() { return this->statusSpeed3_; }
        void statusSpeed3(int32_t _val_) { this->statusSpeed3_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Light OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Light() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Light(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Light(const Light &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Light(Light &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Light& operator=(Light &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Light& operator=(const Light &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Light& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Light& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class LightDimmable OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        bool hasFilter_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        LightDimmable() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false),
                hasFilter_(false) {}

        explicit LightDimmable(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            bool hasFilter,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                hasFilter_(hasFilter),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        LightDimmable(const LightDimmable &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                hasFilter_(_other.hasFilter_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        LightDimmable(LightDimmable &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                hasFilter_(::std::move(_other.hasFilter_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        LightDimmable& operator=(LightDimmable &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                hasFilter_ = ::std::move(_other.hasFilter_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        LightDimmable& operator=(const LightDimmable &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                hasFilter_ = _other.hasFilter_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const LightDimmable& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                hasFilter_ == _other.hasFilter_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const LightDimmable& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        bool hasFilter() const { return this->hasFilter_; }
        bool& hasFilter() { return this->hasFilter_; }
        void hasFilter(bool _val_) { this->hasFilter_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class LightMind OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::vector<Mind::Category>  categories_;
        int32_t statusDimmer_;
        int32_t statusTemperature_;
        bool status_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        LightMind() :
                statusDimmer_(0),
                statusTemperature_(0),
                status_(false) {}

        explicit LightMind(
            const std::string& UUID,
            const std::vector<Mind::Category> & categories,
            int32_t statusDimmer,
            int32_t statusTemperature,
            bool status,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                categories_(categories),
                statusDimmer_(statusDimmer),
                statusTemperature_(statusTemperature),
                status_(status),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        LightMind(const LightMind &_other) : 
                UUID_(_other.UUID_),
                categories_(_other.categories_),
                statusDimmer_(_other.statusDimmer_),
                statusTemperature_(_other.statusTemperature_),
                status_(_other.status_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        LightMind(LightMind &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                categories_(::std::move(_other.categories_)),
                statusDimmer_(::std::move(_other.statusDimmer_)),
                statusTemperature_(::std::move(_other.statusTemperature_)),
                status_(::std::move(_other.status_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        LightMind& operator=(LightMind &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                categories_ = ::std::move(_other.categories_);
                statusDimmer_ = ::std::move(_other.statusDimmer_);
                statusTemperature_ = ::std::move(_other.statusTemperature_);
                status_ = ::std::move(_other.status_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        LightMind& operator=(const LightMind &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                categories_ = _other.categories_;
                statusDimmer_ = _other.statusDimmer_;
                statusTemperature_ = _other.statusTemperature_;
                status_ = _other.status_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const LightMind& _other) const
        {
            return UUID_ == _other.UUID_ &&
                categories_ == _other.categories_ &&
                statusDimmer_ == _other.statusDimmer_ &&
                statusTemperature_ == _other.statusTemperature_ &&
                status_ == _other.status_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const LightMind& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        int32_t statusDimmer() const { return this->statusDimmer_; }
        int32_t& statusDimmer() { return this->statusDimmer_; }
        void statusDimmer(int32_t _val_) { this->statusDimmer_ = _val_; }
        int32_t statusTemperature() const { return this->statusTemperature_; }
        int32_t& statusTemperature() { return this->statusTemperature_; }
        void statusTemperature(int32_t _val_) { this->statusTemperature_ = _val_; }
        bool status() const { return this->status_; }
        bool& status() { return this->status_; }
        void status(bool _val_) { this->status_ = _val_; }
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

    class LightMindLED OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::vector<Mind::Category>  categories_;
        bool status_;
        int32_t r_;
        int32_t g_;
        int32_t b_;
        int32_t w_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        LightMindLED() :
                status_(false),
                r_(0),
                g_(0),
                b_(0),
                w_(0) {}

        explicit LightMindLED(
            const std::string& UUID,
            const std::vector<Mind::Category> & categories,
            bool status,
            int32_t r,
            int32_t g,
            int32_t b,
            int32_t w,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                categories_(categories),
                status_(status),
                r_(r),
                g_(g),
                b_(b),
                w_(w),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        LightMindLED(const LightMindLED &_other) : 
                UUID_(_other.UUID_),
                categories_(_other.categories_),
                status_(_other.status_),
                r_(_other.r_),
                g_(_other.g_),
                b_(_other.b_),
                w_(_other.w_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        LightMindLED(LightMindLED &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                categories_(::std::move(_other.categories_)),
                status_(::std::move(_other.status_)),
                r_(::std::move(_other.r_)),
                g_(::std::move(_other.g_)),
                b_(::std::move(_other.b_)),
                w_(::std::move(_other.w_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        LightMindLED& operator=(LightMindLED &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                categories_ = ::std::move(_other.categories_);
                status_ = ::std::move(_other.status_);
                r_ = ::std::move(_other.r_);
                g_ = ::std::move(_other.g_);
                b_ = ::std::move(_other.b_);
                w_ = ::std::move(_other.w_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        LightMindLED& operator=(const LightMindLED &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                categories_ = _other.categories_;
                status_ = _other.status_;
                r_ = _other.r_;
                g_ = _other.g_;
                b_ = _other.b_;
                w_ = _other.w_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const LightMindLED& _other) const
        {
            return UUID_ == _other.UUID_ &&
                categories_ == _other.categories_ &&
                status_ == _other.status_ &&
                r_ == _other.r_ &&
                g_ == _other.g_ &&
                b_ == _other.b_ &&
                w_ == _other.w_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const LightMindLED& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool status() const { return this->status_; }
        bool& status() { return this->status_; }
        void status(bool _val_) { this->status_ = _val_; }
        int32_t r() const { return this->r_; }
        int32_t& r() { return this->r_; }
        void r(int32_t _val_) { this->r_ = _val_; }
        int32_t g() const { return this->g_; }
        int32_t& g() { return this->g_; }
        void g(int32_t _val_) { this->g_ = _val_; }
        int32_t b() const { return this->b_; }
        int32_t& b() { return this->b_; }
        void b(int32_t _val_) { this->b_ = _val_; }
        int32_t w() const { return this->w_; }
        int32_t& w() { return this->w_; }
        void w(int32_t _val_) { this->w_ = _val_; }
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

    class BSwitch OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        bool disabled_;
        std::string description_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        BSwitch() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false) {}

        explicit BSwitch(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            bool disabled,
            const std::string& description,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                disabled_(disabled),
                description_(description),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        BSwitch(const BSwitch &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                disabled_(_other.disabled_),
                description_(_other.description_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        BSwitch(BSwitch &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                disabled_(::std::move(_other.disabled_)),
                description_(::std::move(_other.description_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        BSwitch& operator=(BSwitch &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                disabled_ = ::std::move(_other.disabled_);
                description_ = ::std::move(_other.description_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        BSwitch& operator=(const BSwitch &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                disabled_ = _other.disabled_;
                description_ = _other.description_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const BSwitch& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                disabled_ == _other.disabled_ &&
                description_ == _other.description_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const BSwitch& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Button OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        bool disabled_;
        std::string description_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Button() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false) {}

        explicit Button(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            bool disabled,
            const std::string& description,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                disabled_(disabled),
                description_(description),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Button(const Button &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                disabled_(_other.disabled_),
                description_(_other.description_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Button(Button &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                disabled_(::std::move(_other.disabled_)),
                description_(::std::move(_other.description_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Button& operator=(Button &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                disabled_ = ::std::move(_other.disabled_);
                description_ = ::std::move(_other.description_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Button& operator=(const Button &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                disabled_ = _other.disabled_;
                description_ = _other.description_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Button& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                disabled_ == _other.disabled_ &&
                description_ == _other.description_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Button& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class ShutterButton OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string UUIDShutter_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        bool disabled_;
        std::string description_;
        bool updownType_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        ShutterButton() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false),
                updownType_(false) {}

        explicit ShutterButton(
            const std::string& UUID,
            const std::string& UUIDShutter,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            bool disabled,
            const std::string& description,
            bool updownType,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                UUIDShutter_(UUIDShutter),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                disabled_(disabled),
                description_(description),
                updownType_(updownType),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        ShutterButton(const ShutterButton &_other) : 
                UUID_(_other.UUID_),
                UUIDShutter_(_other.UUIDShutter_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                disabled_(_other.disabled_),
                description_(_other.description_),
                updownType_(_other.updownType_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        ShutterButton(ShutterButton &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDShutter_(::std::move(_other.UUIDShutter_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                disabled_(::std::move(_other.disabled_)),
                description_(::std::move(_other.description_)),
                updownType_(::std::move(_other.updownType_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        ShutterButton& operator=(ShutterButton &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDShutter_ = ::std::move(_other.UUIDShutter_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                disabled_ = ::std::move(_other.disabled_);
                description_ = ::std::move(_other.description_);
                updownType_ = ::std::move(_other.updownType_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        ShutterButton& operator=(const ShutterButton &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDShutter_ = _other.UUIDShutter_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                disabled_ = _other.disabled_;
                description_ = _other.description_;
                updownType_ = _other.updownType_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const ShutterButton& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDShutter_ == _other.UUIDShutter_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                disabled_ == _other.disabled_ &&
                description_ == _other.description_ &&
                updownType_ == _other.updownType_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const ShutterButton& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& UUIDShutter() const { return this->UUIDShutter_; }
        std::string& UUIDShutter() { return this->UUIDShutter_; }
        void UUIDShutter(const std::string& _val_) { this->UUIDShutter_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDShutter(std::string&& _val_) { this->UUIDShutter_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool updownType() const { return this->updownType_; }
        bool& updownType() { return this->updownType_; }
        void updownType(bool _val_) { this->updownType_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class DoorContact OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        std::string description_;
        bool disabled_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        DoorContact() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false) {}

        explicit DoorContact(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            const std::string& description,
            bool disabled,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                description_(description),
                disabled_(disabled),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        DoorContact(const DoorContact &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                description_(_other.description_),
                disabled_(_other.disabled_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        DoorContact(DoorContact &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                disabled_(::std::move(_other.disabled_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        DoorContact& operator=(DoorContact &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                disabled_ = ::std::move(_other.disabled_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        DoorContact& operator=(const DoorContact &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                disabled_ = _other.disabled_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const DoorContact& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                disabled_ == _other.disabled_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const DoorContact& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class WindowContact OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        std::string description_;
        bool disabled_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        WindowContact() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false) {}

        explicit WindowContact(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            const std::string& description,
            bool disabled,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                description_(description),
                disabled_(disabled),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        WindowContact(const WindowContact &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                description_(_other.description_),
                disabled_(_other.disabled_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        WindowContact(WindowContact &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                disabled_(::std::move(_other.disabled_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        WindowContact& operator=(WindowContact &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                disabled_ = ::std::move(_other.disabled_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        WindowContact& operator=(const WindowContact &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                disabled_ = _other.disabled_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const WindowContact& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                disabled_ == _other.disabled_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const WindowContact& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Tamper OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        std::string description_;
        bool disabled_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Tamper() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false) {}

        explicit Tamper(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            const std::string& description,
            bool disabled,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                description_(description),
                disabled_(disabled),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Tamper(const Tamper &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                description_(_other.description_),
                disabled_(_other.disabled_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Tamper(Tamper &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                disabled_(::std::move(_other.disabled_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Tamper& operator=(Tamper &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                disabled_ = ::std::move(_other.disabled_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Tamper& operator=(const Tamper &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                disabled_ = _other.disabled_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Tamper& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                disabled_ == _other.disabled_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Tamper& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class PIRContact OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numInput_;
        int32_t status_;
        bool connected_;
        std::string description_;
        bool disabled_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        PIRContact() :
                numInput_(0),
                status_(0),
                connected_(false),
                disabled_(false) {}

        explicit PIRContact(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numInput,
            int32_t status,
            bool connected,
            const std::string& description,
            bool disabled,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numInput_(numInput),
                status_(status),
                connected_(connected),
                description_(description),
                disabled_(disabled),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        PIRContact(const PIRContact &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numInput_(_other.numInput_),
                status_(_other.status_),
                connected_(_other.connected_),
                description_(_other.description_),
                disabled_(_other.disabled_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        PIRContact(PIRContact &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numInput_(::std::move(_other.numInput_)),
                status_(::std::move(_other.status_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                disabled_(::std::move(_other.disabled_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        PIRContact& operator=(PIRContact &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numInput_ = ::std::move(_other.numInput_);
                status_ = ::std::move(_other.status_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                disabled_ = ::std::move(_other.disabled_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        PIRContact& operator=(const PIRContact &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numInput_ = _other.numInput_;
                status_ = _other.status_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                disabled_ = _other.disabled_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const PIRContact& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numInput_ == _other.numInput_ &&
                status_ == _other.status_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                disabled_ == _other.disabled_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const PIRContact& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numInput() const { return this->numInput_; }
        int32_t& numInput() { return this->numInput_; }
        void numInput(int32_t _val_) { this->numInput_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool disabled() const { return this->disabled_; }
        bool& disabled() { return this->disabled_; }
        void disabled(bool _val_) { this->disabled_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class RollerShutter OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        RollerShutter() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit RollerShutter(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        RollerShutter(const RollerShutter &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        RollerShutter(RollerShutter &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        RollerShutter& operator=(RollerShutter &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        RollerShutter& operator=(const RollerShutter &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const RollerShutter& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const RollerShutter& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Scuro OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Scuro() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit Scuro(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Scuro(const Scuro &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Scuro(Scuro &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Scuro& operator=(Scuro &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Scuro& operator=(const Scuro &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Scuro& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Scuro& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Frangisole OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Frangisole() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit Frangisole(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Frangisole(const Frangisole &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Frangisole(Frangisole &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Frangisole& operator=(Frangisole &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Frangisole& operator=(const Frangisole &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Frangisole& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Frangisole& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Blinds OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Blinds() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit Blinds(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Blinds(const Blinds &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Blinds(Blinds &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Blinds& operator=(Blinds &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Blinds& operator=(const Blinds &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Blinds& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Blinds& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Veneziana OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Veneziana() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit Veneziana(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Veneziana(const Veneziana &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Veneziana(Veneziana &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Veneziana& operator=(Veneziana &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Veneziana& operator=(const Veneziana &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Veneziana& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Veneziana& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Grata OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Grata() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit Grata(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Grata(const Grata &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Grata(Grata &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Grata& operator=(Grata &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Grata& operator=(const Grata &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Grata& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Grata& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Forno OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Forno() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Forno(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Forno(const Forno &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Forno(Forno &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Forno& operator=(Forno &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Forno& operator=(const Forno &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Forno& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Forno& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class FornoMicroonde OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        FornoMicroonde() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit FornoMicroonde(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        FornoMicroonde(const FornoMicroonde &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        FornoMicroonde(FornoMicroonde &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        FornoMicroonde& operator=(FornoMicroonde &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        FornoMicroonde& operator=(const FornoMicroonde &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const FornoMicroonde& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const FornoMicroonde& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Frigo OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Frigo() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Frigo(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Frigo(const Frigo &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Frigo(Frigo &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Frigo& operator=(Frigo &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Frigo& operator=(const Frigo &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Frigo& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Frigo& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Freezer OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Freezer() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Freezer(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Freezer(const Freezer &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Freezer(Freezer &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Freezer& operator=(Freezer &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Freezer& operator=(const Freezer &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Freezer& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Freezer& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class CantinaVini OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        CantinaVini() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit CantinaVini(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        CantinaVini(const CantinaVini &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        CantinaVini(CantinaVini &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        CantinaVini& operator=(CantinaVini &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        CantinaVini& operator=(const CantinaVini &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const CantinaVini& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const CantinaVini& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class MacchinaCaffe OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        MacchinaCaffe() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit MacchinaCaffe(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        MacchinaCaffe(const MacchinaCaffe &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        MacchinaCaffe(MacchinaCaffe &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        MacchinaCaffe& operator=(MacchinaCaffe &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        MacchinaCaffe& operator=(const MacchinaCaffe &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const MacchinaCaffe& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const MacchinaCaffe& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class PianoCottura OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        PianoCottura() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit PianoCottura(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        PianoCottura(const PianoCottura &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        PianoCottura(PianoCottura &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        PianoCottura& operator=(PianoCottura &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        PianoCottura& operator=(const PianoCottura &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const PianoCottura& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const PianoCottura& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Lavatrice OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Lavatrice() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Lavatrice(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Lavatrice(const Lavatrice &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Lavatrice(Lavatrice &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Lavatrice& operator=(Lavatrice &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Lavatrice& operator=(const Lavatrice &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Lavatrice& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Lavatrice& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Lavastoviglie OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Lavastoviglie() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Lavastoviglie(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Lavastoviglie(const Lavastoviglie &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Lavastoviglie(Lavastoviglie &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Lavastoviglie& operator=(Lavastoviglie &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Lavastoviglie& operator=(const Lavastoviglie &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Lavastoviglie& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Lavastoviglie& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Asciugatrice OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Asciugatrice() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Asciugatrice(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Asciugatrice(const Asciugatrice &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Asciugatrice(Asciugatrice &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Asciugatrice& operator=(Asciugatrice &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Asciugatrice& operator=(const Asciugatrice &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Asciugatrice& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Asciugatrice& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class ColonnettaTesla OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        ColonnettaTesla() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit ColonnettaTesla(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        ColonnettaTesla(const ColonnettaTesla &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        ColonnettaTesla(ColonnettaTesla &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        ColonnettaTesla& operator=(ColonnettaTesla &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        ColonnettaTesla& operator=(const ColonnettaTesla &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const ColonnettaTesla& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const ColonnettaTesla& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Impianto OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Impianto() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Impianto(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Impianto(const Impianto &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Impianto(Impianto &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Impianto& operator=(Impianto &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Impianto& operator=(const Impianto &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Impianto& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Impianto& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class IrrigationPump OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        IrrigationPump() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit IrrigationPump(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        IrrigationPump(const IrrigationPump &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        IrrigationPump(IrrigationPump &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        IrrigationPump& operator=(IrrigationPump &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        IrrigationPump& operator=(const IrrigationPump &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const IrrigationPump& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const IrrigationPump& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Siren OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Siren() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Siren(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Siren(const Siren &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Siren(Siren &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Siren& operator=(Siren &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Siren& operator=(const Siren &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Siren& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Siren& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class CancelloCarraio OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        CancelloCarraio() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit CancelloCarraio(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        CancelloCarraio(const CancelloCarraio &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        CancelloCarraio(CancelloCarraio &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        CancelloCarraio& operator=(CancelloCarraio &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        CancelloCarraio& operator=(const CancelloCarraio &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const CancelloCarraio& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const CancelloCarraio& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class CancelloPedonale OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        CancelloPedonale() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit CancelloPedonale(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        CancelloPedonale(const CancelloPedonale &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        CancelloPedonale(CancelloPedonale &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        CancelloPedonale& operator=(CancelloPedonale &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        CancelloPedonale& operator=(const CancelloPedonale &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const CancelloPedonale& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const CancelloPedonale& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class CancelloGarage OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        CancelloGarage() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit CancelloGarage(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        CancelloGarage(const CancelloGarage &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        CancelloGarage(CancelloGarage &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        CancelloGarage& operator=(CancelloGarage &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        CancelloGarage& operator=(const CancelloGarage &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const CancelloGarage& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const CancelloGarage& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class GasValve OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        GasValve() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit GasValve(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        GasValve(const GasValve &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        GasValve(GasValve &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        GasValve& operator=(GasValve &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        GasValve& operator=(const GasValve &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const GasValve& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const GasValve& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class WaterValve OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        WaterValve() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit WaterValve(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        WaterValve(const WaterValve &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        WaterValve(WaterValve &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        WaterValve& operator=(WaterValve &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        WaterValve& operator=(const WaterValve &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const WaterValve& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const WaterValve& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class PompaRicircolo OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        PompaRicircolo() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit PompaRicircolo(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        PompaRicircolo(const PompaRicircolo &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        PompaRicircolo(PompaRicircolo &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        PompaRicircolo& operator=(PompaRicircolo &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        PompaRicircolo& operator=(const PompaRicircolo &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const PompaRicircolo& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const PompaRicircolo& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class Socket_16A OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Socket_16A() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Socket_16A(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Socket_16A(const Socket_16A &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Socket_16A(Socket_16A &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Socket_16A& operator=(Socket_16A &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Socket_16A& operator=(const Socket_16A &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Socket_16A& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Socket_16A& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class Socket_5A OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        bool hasFilter_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Socket_5A() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false),
                hasFilter_(false) {}

        explicit Socket_5A(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            bool hasFilter,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                hasFilter_(hasFilter),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Socket_5A(const Socket_5A &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                hasFilter_(_other.hasFilter_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Socket_5A(Socket_5A &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                hasFilter_(::std::move(_other.hasFilter_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Socket_5A& operator=(Socket_5A &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                hasFilter_ = ::std::move(_other.hasFilter_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Socket_5A& operator=(const Socket_5A &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                hasFilter_ = _other.hasFilter_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Socket_5A& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                hasFilter_ == _other.hasFilter_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Socket_5A& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        bool hasFilter() const { return this->hasFilter_; }
        bool& hasFilter() { return this->hasFilter_; }
        void hasFilter(bool _val_) { this->hasFilter_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class VoiceCommand OSPL_DDS_FINAL
    {
    public:
        std::string text_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        VoiceCommand() {}

        explicit VoiceCommand(
            const std::string& text,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                text_(text),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        VoiceCommand(const VoiceCommand &_other) : 
                text_(_other.text_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        VoiceCommand(VoiceCommand &&_other) : 
                text_(::std::move(_other.text_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        VoiceCommand& operator=(VoiceCommand &&_other)
        {
            if (this != &_other) {
                text_ = ::std::move(_other.text_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        VoiceCommand& operator=(const VoiceCommand &_other)
        {
            if (this != &_other) {
                text_ = _other.text_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const VoiceCommand& _other) const
        {
            return text_ == _other.text_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const VoiceCommand& _other) const
        {
            return !(*this == _other);
        }

        const std::string& text() const { return this->text_; }
        std::string& text() { return this->text_; }
        void text(const std::string& _val_) { this->text_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void text(std::string&& _val_) { this->text_ = _val_; }
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
    };

    class PresaMultimediale OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        PresaMultimediale() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit PresaMultimediale(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        PresaMultimediale(const PresaMultimediale &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        PresaMultimediale(PresaMultimediale &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        PresaMultimediale& operator=(PresaMultimediale &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        PresaMultimediale& operator=(const PresaMultimediale &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const PresaMultimediale& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const PresaMultimediale& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class HarmonyMultimedia OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _availableActivities_seq;

        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string IPAddress_;
        std::string currentActivity_;
        std::vector<std::string>  availableActivities_;
        std::vector<Mind::Category>  categories_;
        std::string name_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        HarmonyMultimedia() {}

        explicit HarmonyMultimedia(
            const std::string& UUID,
            const std::string& IPAddress,
            const std::string& currentActivity,
            const std::vector<std::string> & availableActivities,
            const std::vector<Mind::Category> & categories,
            const std::string& name,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                IPAddress_(IPAddress),
                currentActivity_(currentActivity),
                availableActivities_(availableActivities),
                categories_(categories),
                name_(name),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        HarmonyMultimedia(const HarmonyMultimedia &_other) : 
                UUID_(_other.UUID_),
                IPAddress_(_other.IPAddress_),
                currentActivity_(_other.currentActivity_),
                availableActivities_(_other.availableActivities_),
                categories_(_other.categories_),
                name_(_other.name_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        HarmonyMultimedia(HarmonyMultimedia &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                IPAddress_(::std::move(_other.IPAddress_)),
                currentActivity_(::std::move(_other.currentActivity_)),
                availableActivities_(::std::move(_other.availableActivities_)),
                categories_(::std::move(_other.categories_)),
                name_(::std::move(_other.name_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        HarmonyMultimedia& operator=(HarmonyMultimedia &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                IPAddress_ = ::std::move(_other.IPAddress_);
                currentActivity_ = ::std::move(_other.currentActivity_);
                availableActivities_ = ::std::move(_other.availableActivities_);
                categories_ = ::std::move(_other.categories_);
                name_ = ::std::move(_other.name_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        HarmonyMultimedia& operator=(const HarmonyMultimedia &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                IPAddress_ = _other.IPAddress_;
                currentActivity_ = _other.currentActivity_;
                availableActivities_ = _other.availableActivities_;
                categories_ = _other.categories_;
                name_ = _other.name_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const HarmonyMultimedia& _other) const
        {
            return UUID_ == _other.UUID_ &&
                IPAddress_ == _other.IPAddress_ &&
                currentActivity_ == _other.currentActivity_ &&
                availableActivities_ == _other.availableActivities_ &&
                categories_ == _other.categories_ &&
                name_ == _other.name_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const HarmonyMultimedia& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& IPAddress() const { return this->IPAddress_; }
        std::string& IPAddress() { return this->IPAddress_; }
        void IPAddress(const std::string& _val_) { this->IPAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void IPAddress(std::string&& _val_) { this->IPAddress_ = _val_; }
#endif
        const std::string& currentActivity() const { return this->currentActivity_; }
        std::string& currentActivity() { return this->currentActivity_; }
        void currentActivity(const std::string& _val_) { this->currentActivity_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void currentActivity(std::string&& _val_) { this->currentActivity_ = _val_; }
#endif
        const std::vector<std::string> & availableActivities() const { return this->availableActivities_; }
        std::vector<std::string> & availableActivities() { return this->availableActivities_; }
        void availableActivities(const std::vector<std::string> & _val_) { this->availableActivities_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void availableActivities(std::vector<std::string> && _val_) { this->availableActivities_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
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
    };

    class MindSound OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string currentSound_;
        bool enabled_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        MindSound() :
                enabled_(false) {}

        explicit MindSound(
            const std::string& UUID,
            const std::string& currentSound,
            bool enabled,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                currentSound_(currentSound),
                enabled_(enabled),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        MindSound(const MindSound &_other) : 
                UUID_(_other.UUID_),
                currentSound_(_other.currentSound_),
                enabled_(_other.enabled_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        MindSound(MindSound &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                currentSound_(::std::move(_other.currentSound_)),
                enabled_(::std::move(_other.enabled_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        MindSound& operator=(MindSound &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                currentSound_ = ::std::move(_other.currentSound_);
                enabled_ = ::std::move(_other.enabled_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        MindSound& operator=(const MindSound &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                currentSound_ = _other.currentSound_;
                enabled_ = _other.enabled_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const MindSound& _other) const
        {
            return UUID_ == _other.UUID_ &&
                currentSound_ == _other.currentSound_ &&
                enabled_ == _other.enabled_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const MindSound& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& currentSound() const { return this->currentSound_; }
        std::string& currentSound() { return this->currentSound_; }
        void currentSound(const std::string& _val_) { this->currentSound_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void currentSound(std::string&& _val_) { this->currentSound_ = _val_; }
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

    OSPL_ENUM TransportStatus {
        TRANSPORT_PLAY,
        TRANSPORT_PAUSE,
        TRANSPORT_STOP
    };

    class TransportData OSPL_DDS_FINAL
    {
    public:
        std::string title_;
        std::string artist_;
        std::string uri_;
        int32_t queueSize_;
        std::string currentTrackDuration_;
        std::string CurrentTransportActions_;
        Mind::TransportStatus status_;

    public:
        TransportData() :
                queueSize_(0),
                status_(OSPL_ENUM_LABEL(Mind,TransportStatus,TRANSPORT_PLAY)) {}

        explicit TransportData(
            const std::string& title,
            const std::string& artist,
            const std::string& uri,
            int32_t queueSize,
            const std::string& currentTrackDuration,
            const std::string& CurrentTransportActions,
            Mind::TransportStatus status) : 
                title_(title),
                artist_(artist),
                uri_(uri),
                queueSize_(queueSize),
                currentTrackDuration_(currentTrackDuration),
                CurrentTransportActions_(CurrentTransportActions),
                status_(status) {}

        TransportData(const TransportData &_other) : 
                title_(_other.title_),
                artist_(_other.artist_),
                uri_(_other.uri_),
                queueSize_(_other.queueSize_),
                currentTrackDuration_(_other.currentTrackDuration_),
                CurrentTransportActions_(_other.CurrentTransportActions_),
                status_(_other.status_) {}

#ifdef OSPL_DDS_CXX11
        TransportData(TransportData &&_other) : 
                title_(::std::move(_other.title_)),
                artist_(::std::move(_other.artist_)),
                uri_(::std::move(_other.uri_)),
                queueSize_(::std::move(_other.queueSize_)),
                currentTrackDuration_(::std::move(_other.currentTrackDuration_)),
                CurrentTransportActions_(::std::move(_other.CurrentTransportActions_)),
                status_(::std::move(_other.status_)) {}

        TransportData& operator=(TransportData &&_other)
        {
            if (this != &_other) {
                title_ = ::std::move(_other.title_);
                artist_ = ::std::move(_other.artist_);
                uri_ = ::std::move(_other.uri_);
                queueSize_ = ::std::move(_other.queueSize_);
                currentTrackDuration_ = ::std::move(_other.currentTrackDuration_);
                CurrentTransportActions_ = ::std::move(_other.CurrentTransportActions_);
                status_ = ::std::move(_other.status_);
            }
            return *this;
        }
#endif

        TransportData& operator=(const TransportData &_other)
        {
            if (this != &_other) {
                title_ = _other.title_;
                artist_ = _other.artist_;
                uri_ = _other.uri_;
                queueSize_ = _other.queueSize_;
                currentTrackDuration_ = _other.currentTrackDuration_;
                CurrentTransportActions_ = _other.CurrentTransportActions_;
                status_ = _other.status_;
            }
            return *this;
        }

        bool operator==(const TransportData& _other) const
        {
            return title_ == _other.title_ &&
                artist_ == _other.artist_ &&
                uri_ == _other.uri_ &&
                queueSize_ == _other.queueSize_ &&
                currentTrackDuration_ == _other.currentTrackDuration_ &&
                CurrentTransportActions_ == _other.CurrentTransportActions_ &&
                status_ == _other.status_;
        }

        bool operator!=(const TransportData& _other) const
        {
            return !(*this == _other);
        }

        const std::string& title() const { return this->title_; }
        std::string& title() { return this->title_; }
        void title(const std::string& _val_) { this->title_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void title(std::string&& _val_) { this->title_ = _val_; }
#endif
        const std::string& artist() const { return this->artist_; }
        std::string& artist() { return this->artist_; }
        void artist(const std::string& _val_) { this->artist_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void artist(std::string&& _val_) { this->artist_ = _val_; }
#endif
        const std::string& uri() const { return this->uri_; }
        std::string& uri() { return this->uri_; }
        void uri(const std::string& _val_) { this->uri_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void uri(std::string&& _val_) { this->uri_ = _val_; }
#endif
        int32_t queueSize() const { return this->queueSize_; }
        int32_t& queueSize() { return this->queueSize_; }
        void queueSize(int32_t _val_) { this->queueSize_ = _val_; }
        const std::string& currentTrackDuration() const { return this->currentTrackDuration_; }
        std::string& currentTrackDuration() { return this->currentTrackDuration_; }
        void currentTrackDuration(const std::string& _val_) { this->currentTrackDuration_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void currentTrackDuration(std::string&& _val_) { this->currentTrackDuration_ = _val_; }
#endif
        const std::string& CurrentTransportActions() const { return this->CurrentTransportActions_; }
        std::string& CurrentTransportActions() { return this->CurrentTransportActions_; }
        void CurrentTransportActions(const std::string& _val_) { this->CurrentTransportActions_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void CurrentTransportActions(std::string&& _val_) { this->CurrentTransportActions_ = _val_; }
#endif
        Mind::TransportStatus status() const { return this->status_; }
        Mind::TransportStatus& status() { return this->status_; }
        void status(Mind::TransportStatus _val_) { this->status_ = _val_; }
    };

    class RenderingData OSPL_DDS_FINAL
    {
    public:
        int32_t volumeMaster_;
        int32_t volumeLF_;
        int32_t volumeRF_;
        bool muteMaster_;
        bool muteLF_;
        bool muteRF_;

    public:
        RenderingData() :
                volumeMaster_(0),
                volumeLF_(0),
                volumeRF_(0),
                muteMaster_(false),
                muteLF_(false),
                muteRF_(false) {}

        explicit RenderingData(
            int32_t volumeMaster,
            int32_t volumeLF,
            int32_t volumeRF,
            bool muteMaster,
            bool muteLF,
            bool muteRF) : 
                volumeMaster_(volumeMaster),
                volumeLF_(volumeLF),
                volumeRF_(volumeRF),
                muteMaster_(muteMaster),
                muteLF_(muteLF),
                muteRF_(muteRF) {}

        RenderingData(const RenderingData &_other) : 
                volumeMaster_(_other.volumeMaster_),
                volumeLF_(_other.volumeLF_),
                volumeRF_(_other.volumeRF_),
                muteMaster_(_other.muteMaster_),
                muteLF_(_other.muteLF_),
                muteRF_(_other.muteRF_) {}

#ifdef OSPL_DDS_CXX11
        RenderingData(RenderingData &&_other) : 
                volumeMaster_(::std::move(_other.volumeMaster_)),
                volumeLF_(::std::move(_other.volumeLF_)),
                volumeRF_(::std::move(_other.volumeRF_)),
                muteMaster_(::std::move(_other.muteMaster_)),
                muteLF_(::std::move(_other.muteLF_)),
                muteRF_(::std::move(_other.muteRF_)) {}

        RenderingData& operator=(RenderingData &&_other)
        {
            if (this != &_other) {
                volumeMaster_ = ::std::move(_other.volumeMaster_);
                volumeLF_ = ::std::move(_other.volumeLF_);
                volumeRF_ = ::std::move(_other.volumeRF_);
                muteMaster_ = ::std::move(_other.muteMaster_);
                muteLF_ = ::std::move(_other.muteLF_);
                muteRF_ = ::std::move(_other.muteRF_);
            }
            return *this;
        }
#endif

        RenderingData& operator=(const RenderingData &_other)
        {
            if (this != &_other) {
                volumeMaster_ = _other.volumeMaster_;
                volumeLF_ = _other.volumeLF_;
                volumeRF_ = _other.volumeRF_;
                muteMaster_ = _other.muteMaster_;
                muteLF_ = _other.muteLF_;
                muteRF_ = _other.muteRF_;
            }
            return *this;
        }

        bool operator==(const RenderingData& _other) const
        {
            return volumeMaster_ == _other.volumeMaster_ &&
                volumeLF_ == _other.volumeLF_ &&
                volumeRF_ == _other.volumeRF_ &&
                muteMaster_ == _other.muteMaster_ &&
                muteLF_ == _other.muteLF_ &&
                muteRF_ == _other.muteRF_;
        }

        bool operator!=(const RenderingData& _other) const
        {
            return !(*this == _other);
        }

        int32_t volumeMaster() const { return this->volumeMaster_; }
        int32_t& volumeMaster() { return this->volumeMaster_; }
        void volumeMaster(int32_t _val_) { this->volumeMaster_ = _val_; }
        int32_t volumeLF() const { return this->volumeLF_; }
        int32_t& volumeLF() { return this->volumeLF_; }
        void volumeLF(int32_t _val_) { this->volumeLF_ = _val_; }
        int32_t volumeRF() const { return this->volumeRF_; }
        int32_t& volumeRF() { return this->volumeRF_; }
        void volumeRF(int32_t _val_) { this->volumeRF_ = _val_; }
        bool muteMaster() const { return this->muteMaster_; }
        bool& muteMaster() { return this->muteMaster_; }
        void muteMaster(bool _val_) { this->muteMaster_ = _val_; }
        bool muteLF() const { return this->muteLF_; }
        bool& muteLF() { return this->muteLF_; }
        void muteLF(bool _val_) { this->muteLF_ = _val_; }
        bool muteRF() const { return this->muteRF_; }
        bool& muteRF() { return this->muteRF_; }
        void muteRF(bool _val_) { this->muteRF_ = _val_; }
    };

    class Sonos OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string zoneName_;
        std::string uri_;
        std::string coordinatorUUID_;
        Mind::TransportData transportData_;
        Mind::RenderingData renderingData_;
        bool connected_;
        bool enabled_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Sonos() :
                connected_(false),
                enabled_(false) {}

        explicit Sonos(
            const std::string& UUID,
            const std::string& zoneName,
            const std::string& uri,
            const std::string& coordinatorUUID,
            const Mind::TransportData& transportData,
            const Mind::RenderingData& renderingData,
            bool connected,
            bool enabled,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                zoneName_(zoneName),
                uri_(uri),
                coordinatorUUID_(coordinatorUUID),
                transportData_(transportData),
                renderingData_(renderingData),
                connected_(connected),
                enabled_(enabled),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Sonos(const Sonos &_other) : 
                UUID_(_other.UUID_),
                zoneName_(_other.zoneName_),
                uri_(_other.uri_),
                coordinatorUUID_(_other.coordinatorUUID_),
                transportData_(_other.transportData_),
                renderingData_(_other.renderingData_),
                connected_(_other.connected_),
                enabled_(_other.enabled_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Sonos(Sonos &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                zoneName_(::std::move(_other.zoneName_)),
                uri_(::std::move(_other.uri_)),
                coordinatorUUID_(::std::move(_other.coordinatorUUID_)),
                transportData_(::std::move(_other.transportData_)),
                renderingData_(::std::move(_other.renderingData_)),
                connected_(::std::move(_other.connected_)),
                enabled_(::std::move(_other.enabled_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Sonos& operator=(Sonos &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                zoneName_ = ::std::move(_other.zoneName_);
                uri_ = ::std::move(_other.uri_);
                coordinatorUUID_ = ::std::move(_other.coordinatorUUID_);
                transportData_ = ::std::move(_other.transportData_);
                renderingData_ = ::std::move(_other.renderingData_);
                connected_ = ::std::move(_other.connected_);
                enabled_ = ::std::move(_other.enabled_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Sonos& operator=(const Sonos &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                zoneName_ = _other.zoneName_;
                uri_ = _other.uri_;
                coordinatorUUID_ = _other.coordinatorUUID_;
                transportData_ = _other.transportData_;
                renderingData_ = _other.renderingData_;
                connected_ = _other.connected_;
                enabled_ = _other.enabled_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Sonos& _other) const
        {
            return UUID_ == _other.UUID_ &&
                zoneName_ == _other.zoneName_ &&
                uri_ == _other.uri_ &&
                coordinatorUUID_ == _other.coordinatorUUID_ &&
                transportData_ == _other.transportData_ &&
                renderingData_ == _other.renderingData_ &&
                connected_ == _other.connected_ &&
                enabled_ == _other.enabled_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Sonos& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& zoneName() const { return this->zoneName_; }
        std::string& zoneName() { return this->zoneName_; }
        void zoneName(const std::string& _val_) { this->zoneName_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void zoneName(std::string&& _val_) { this->zoneName_ = _val_; }
#endif
        const std::string& uri() const { return this->uri_; }
        std::string& uri() { return this->uri_; }
        void uri(const std::string& _val_) { this->uri_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void uri(std::string&& _val_) { this->uri_ = _val_; }
#endif
        const std::string& coordinatorUUID() const { return this->coordinatorUUID_; }
        std::string& coordinatorUUID() { return this->coordinatorUUID_; }
        void coordinatorUUID(const std::string& _val_) { this->coordinatorUUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void coordinatorUUID(std::string&& _val_) { this->coordinatorUUID_ = _val_; }
#endif
        const Mind::TransportData& transportData() const { return this->transportData_; }
        Mind::TransportData& transportData() { return this->transportData_; }
        void transportData(const Mind::TransportData& _val_) { this->transportData_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void transportData(Mind::TransportData&& _val_) { this->transportData_ = _val_; }
#endif
        const Mind::RenderingData& renderingData() const { return this->renderingData_; }
        Mind::RenderingData& renderingData() { return this->renderingData_; }
        void renderingData(const Mind::RenderingData& _val_) { this->renderingData_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void renderingData(Mind::RenderingData&& _val_) { this->renderingData_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        bool enabled() const { return this->enabled_; }
        bool& enabled() { return this->enabled_; }
        void enabled(bool _val_) { this->enabled_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class ProjectionScreen OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t status_;
        int32_t numRelay_;
        bool connected_;
        std::string description_;
        bool blocked_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        ProjectionScreen() :
                status_(0),
                numRelay_(0),
                connected_(false),
                blocked_(false) {}

        explicit ProjectionScreen(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t status,
            int32_t numRelay,
            bool connected,
            const std::string& description,
            bool blocked,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                status_(status),
                numRelay_(numRelay),
                connected_(connected),
                description_(description),
                blocked_(blocked),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        ProjectionScreen(const ProjectionScreen &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                status_(_other.status_),
                numRelay_(_other.numRelay_),
                connected_(_other.connected_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        ProjectionScreen(ProjectionScreen &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                status_(::std::move(_other.status_)),
                numRelay_(::std::move(_other.numRelay_)),
                connected_(::std::move(_other.connected_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        ProjectionScreen& operator=(ProjectionScreen &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                status_ = ::std::move(_other.status_);
                numRelay_ = ::std::move(_other.numRelay_);
                connected_ = ::std::move(_other.connected_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        ProjectionScreen& operator=(const ProjectionScreen &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                status_ = _other.status_;
                numRelay_ = _other.numRelay_;
                connected_ = _other.connected_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const ProjectionScreen& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                status_ == _other.status_ &&
                numRelay_ == _other.numRelay_ &&
                connected_ == _other.connected_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const ProjectionScreen& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class Citofono OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string IPAddress_;
        std::string description_;
        bool status_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Citofono() :
                status_(false) {}

        explicit Citofono(
            const std::string& UUID,
            const std::string& IPAddress,
            const std::string& description,
            bool status,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                IPAddress_(IPAddress),
                description_(description),
                status_(status),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Citofono(const Citofono &_other) : 
                UUID_(_other.UUID_),
                IPAddress_(_other.IPAddress_),
                description_(_other.description_),
                status_(_other.status_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Citofono(Citofono &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                IPAddress_(::std::move(_other.IPAddress_)),
                description_(::std::move(_other.description_)),
                status_(::std::move(_other.status_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Citofono& operator=(Citofono &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                IPAddress_ = ::std::move(_other.IPAddress_);
                description_ = ::std::move(_other.description_);
                status_ = ::std::move(_other.status_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Citofono& operator=(const Citofono &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                IPAddress_ = _other.IPAddress_;
                description_ = _other.description_;
                status_ = _other.status_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Citofono& _other) const
        {
            return UUID_ == _other.UUID_ &&
                IPAddress_ == _other.IPAddress_ &&
                description_ == _other.description_ &&
                status_ == _other.status_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Citofono& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& IPAddress() const { return this->IPAddress_; }
        std::string& IPAddress() { return this->IPAddress_; }
        void IPAddress(const std::string& _val_) { this->IPAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void IPAddress(std::string&& _val_) { this->IPAddress_ = _val_; }
#endif
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool status() const { return this->status_; }
        bool& status() { return this->status_; }
        void status(bool _val_) { this->status_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class FloodingSensor OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string IPAddress_;
        std::string description_;
        bool status_;
        std::vector<Mind::Category>  categories_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        FloodingSensor() :
                status_(false) {}

        explicit FloodingSensor(
            const std::string& UUID,
            const std::string& IPAddress,
            const std::string& description,
            bool status,
            const std::vector<Mind::Category> & categories,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                IPAddress_(IPAddress),
                description_(description),
                status_(status),
                categories_(categories),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        FloodingSensor(const FloodingSensor &_other) : 
                UUID_(_other.UUID_),
                IPAddress_(_other.IPAddress_),
                description_(_other.description_),
                status_(_other.status_),
                categories_(_other.categories_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        FloodingSensor(FloodingSensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                IPAddress_(::std::move(_other.IPAddress_)),
                description_(::std::move(_other.description_)),
                status_(::std::move(_other.status_)),
                categories_(::std::move(_other.categories_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        FloodingSensor& operator=(FloodingSensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                IPAddress_ = ::std::move(_other.IPAddress_);
                description_ = ::std::move(_other.description_);
                status_ = ::std::move(_other.status_);
                categories_ = ::std::move(_other.categories_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        FloodingSensor& operator=(const FloodingSensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                IPAddress_ = _other.IPAddress_;
                description_ = _other.description_;
                status_ = _other.status_;
                categories_ = _other.categories_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const FloodingSensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                IPAddress_ == _other.IPAddress_ &&
                description_ == _other.description_ &&
                status_ == _other.status_ &&
                categories_ == _other.categories_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const FloodingSensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& IPAddress() const { return this->IPAddress_; }
        std::string& IPAddress() { return this->IPAddress_; }
        void IPAddress(const std::string& _val_) { this->IPAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void IPAddress(std::string&& _val_) { this->IPAddress_ = _val_; }
#endif
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool status() const { return this->status_; }
        bool& status() { return this->status_; }
        void status(bool _val_) { this->status_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
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
    };

    class EnvironmentalSensor OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::vector<Mind::Category>  categories_;
        double temperature_;
        double CO_;
        double CO2_;
        double humidity_;
        double VOC_;
        double smoke_;
        std::string timestamp_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        EnvironmentalSensor() :
                temperature_(0.0),
                CO_(0.0),
                CO2_(0.0),
                humidity_(0.0),
                VOC_(0.0),
                smoke_(0.0) {}

        explicit EnvironmentalSensor(
            const std::string& UUID,
            const std::vector<Mind::Category> & categories,
            double temperature,
            double CO,
            double CO2,
            double humidity,
            double VOC,
            double smoke,
            const std::string& timestamp,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                categories_(categories),
                temperature_(temperature),
                CO_(CO),
                CO2_(CO2),
                humidity_(humidity),
                VOC_(VOC),
                smoke_(smoke),
                timestamp_(timestamp),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        EnvironmentalSensor(const EnvironmentalSensor &_other) : 
                UUID_(_other.UUID_),
                categories_(_other.categories_),
                temperature_(_other.temperature_),
                CO_(_other.CO_),
                CO2_(_other.CO2_),
                humidity_(_other.humidity_),
                VOC_(_other.VOC_),
                smoke_(_other.smoke_),
                timestamp_(_other.timestamp_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        EnvironmentalSensor(EnvironmentalSensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                categories_(::std::move(_other.categories_)),
                temperature_(::std::move(_other.temperature_)),
                CO_(::std::move(_other.CO_)),
                CO2_(::std::move(_other.CO2_)),
                humidity_(::std::move(_other.humidity_)),
                VOC_(::std::move(_other.VOC_)),
                smoke_(::std::move(_other.smoke_)),
                timestamp_(::std::move(_other.timestamp_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        EnvironmentalSensor& operator=(EnvironmentalSensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                categories_ = ::std::move(_other.categories_);
                temperature_ = ::std::move(_other.temperature_);
                CO_ = ::std::move(_other.CO_);
                CO2_ = ::std::move(_other.CO2_);
                humidity_ = ::std::move(_other.humidity_);
                VOC_ = ::std::move(_other.VOC_);
                smoke_ = ::std::move(_other.smoke_);
                timestamp_ = ::std::move(_other.timestamp_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        EnvironmentalSensor& operator=(const EnvironmentalSensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                categories_ = _other.categories_;
                temperature_ = _other.temperature_;
                CO_ = _other.CO_;
                CO2_ = _other.CO2_;
                humidity_ = _other.humidity_;
                VOC_ = _other.VOC_;
                smoke_ = _other.smoke_;
                timestamp_ = _other.timestamp_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const EnvironmentalSensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                categories_ == _other.categories_ &&
                temperature_ == _other.temperature_ &&
                CO_ == _other.CO_ &&
                CO2_ == _other.CO2_ &&
                humidity_ == _other.humidity_ &&
                VOC_ == _other.VOC_ &&
                smoke_ == _other.smoke_ &&
                timestamp_ == _other.timestamp_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const EnvironmentalSensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        double temperature() const { return this->temperature_; }
        double& temperature() { return this->temperature_; }
        void temperature(double _val_) { this->temperature_ = _val_; }
        double CO() const { return this->CO_; }
        double& CO() { return this->CO_; }
        void CO(double _val_) { this->CO_ = _val_; }
        double CO2() const { return this->CO2_; }
        double& CO2() { return this->CO2_; }
        void CO2(double _val_) { this->CO2_ = _val_; }
        double humidity() const { return this->humidity_; }
        double& humidity() { return this->humidity_; }
        void humidity(double _val_) { this->humidity_ = _val_; }
        double VOC() const { return this->VOC_; }
        double& VOC() { return this->VOC_; }
        void VOC(double _val_) { this->VOC_ = _val_; }
        double smoke() const { return this->smoke_; }
        double& smoke() { return this->smoke_; }
        void smoke(double _val_) { this->smoke_ = _val_; }
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

    class VisionEnvironmentalSensor OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::vector<Mind::Category>  categories_;
        double brightness_;
        double motion_;
        std::string timestamp_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        VisionEnvironmentalSensor() :
                brightness_(0.0),
                motion_(0.0) {}

        explicit VisionEnvironmentalSensor(
            const std::string& UUID,
            const std::vector<Mind::Category> & categories,
            double brightness,
            double motion,
            const std::string& timestamp,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                categories_(categories),
                brightness_(brightness),
                motion_(motion),
                timestamp_(timestamp),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        VisionEnvironmentalSensor(const VisionEnvironmentalSensor &_other) : 
                UUID_(_other.UUID_),
                categories_(_other.categories_),
                brightness_(_other.brightness_),
                motion_(_other.motion_),
                timestamp_(_other.timestamp_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        VisionEnvironmentalSensor(VisionEnvironmentalSensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                categories_(::std::move(_other.categories_)),
                brightness_(::std::move(_other.brightness_)),
                motion_(::std::move(_other.motion_)),
                timestamp_(::std::move(_other.timestamp_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        VisionEnvironmentalSensor& operator=(VisionEnvironmentalSensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                categories_ = ::std::move(_other.categories_);
                brightness_ = ::std::move(_other.brightness_);
                motion_ = ::std::move(_other.motion_);
                timestamp_ = ::std::move(_other.timestamp_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        VisionEnvironmentalSensor& operator=(const VisionEnvironmentalSensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                categories_ = _other.categories_;
                brightness_ = _other.brightness_;
                motion_ = _other.motion_;
                timestamp_ = _other.timestamp_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const VisionEnvironmentalSensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                categories_ == _other.categories_ &&
                brightness_ == _other.brightness_ &&
                motion_ == _other.motion_ &&
                timestamp_ == _other.timestamp_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const VisionEnvironmentalSensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        double brightness() const { return this->brightness_; }
        double& brightness() { return this->brightness_; }
        void brightness(double _val_) { this->brightness_ = _val_; }
        double motion() const { return this->motion_; }
        double& motion() { return this->motion_; }
        void motion(double _val_) { this->motion_ = _val_; }
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

    class VisionPeopleSensor OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::vector<Mind::Category>  categories_;
        int32_t peopleCount_;
        int32_t knownPeopleCount_;
        int32_t unknownPeopleCount_;
        int32_t faceCount_;
        std::string timestamp_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        VisionPeopleSensor() :
                peopleCount_(0),
                knownPeopleCount_(0),
                unknownPeopleCount_(0),
                faceCount_(0) {}

        explicit VisionPeopleSensor(
            const std::string& UUID,
            const std::vector<Mind::Category> & categories,
            int32_t peopleCount,
            int32_t knownPeopleCount,
            int32_t unknownPeopleCount,
            int32_t faceCount,
            const std::string& timestamp,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                categories_(categories),
                peopleCount_(peopleCount),
                knownPeopleCount_(knownPeopleCount),
                unknownPeopleCount_(unknownPeopleCount),
                faceCount_(faceCount),
                timestamp_(timestamp),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        VisionPeopleSensor(const VisionPeopleSensor &_other) : 
                UUID_(_other.UUID_),
                categories_(_other.categories_),
                peopleCount_(_other.peopleCount_),
                knownPeopleCount_(_other.knownPeopleCount_),
                unknownPeopleCount_(_other.unknownPeopleCount_),
                faceCount_(_other.faceCount_),
                timestamp_(_other.timestamp_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        VisionPeopleSensor(VisionPeopleSensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                categories_(::std::move(_other.categories_)),
                peopleCount_(::std::move(_other.peopleCount_)),
                knownPeopleCount_(::std::move(_other.knownPeopleCount_)),
                unknownPeopleCount_(::std::move(_other.unknownPeopleCount_)),
                faceCount_(::std::move(_other.faceCount_)),
                timestamp_(::std::move(_other.timestamp_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        VisionPeopleSensor& operator=(VisionPeopleSensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                categories_ = ::std::move(_other.categories_);
                peopleCount_ = ::std::move(_other.peopleCount_);
                knownPeopleCount_ = ::std::move(_other.knownPeopleCount_);
                unknownPeopleCount_ = ::std::move(_other.unknownPeopleCount_);
                faceCount_ = ::std::move(_other.faceCount_);
                timestamp_ = ::std::move(_other.timestamp_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        VisionPeopleSensor& operator=(const VisionPeopleSensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                categories_ = _other.categories_;
                peopleCount_ = _other.peopleCount_;
                knownPeopleCount_ = _other.knownPeopleCount_;
                unknownPeopleCount_ = _other.unknownPeopleCount_;
                faceCount_ = _other.faceCount_;
                timestamp_ = _other.timestamp_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const VisionPeopleSensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                categories_ == _other.categories_ &&
                peopleCount_ == _other.peopleCount_ &&
                knownPeopleCount_ == _other.knownPeopleCount_ &&
                unknownPeopleCount_ == _other.unknownPeopleCount_ &&
                faceCount_ == _other.faceCount_ &&
                timestamp_ == _other.timestamp_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const VisionPeopleSensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        int32_t peopleCount() const { return this->peopleCount_; }
        int32_t& peopleCount() { return this->peopleCount_; }
        void peopleCount(int32_t _val_) { this->peopleCount_ = _val_; }
        int32_t knownPeopleCount() const { return this->knownPeopleCount_; }
        int32_t& knownPeopleCount() { return this->knownPeopleCount_; }
        void knownPeopleCount(int32_t _val_) { this->knownPeopleCount_ = _val_; }
        int32_t unknownPeopleCount() const { return this->unknownPeopleCount_; }
        int32_t& unknownPeopleCount() { return this->unknownPeopleCount_; }
        void unknownPeopleCount(int32_t _val_) { this->unknownPeopleCount_ = _val_; }
        int32_t faceCount() const { return this->faceCount_; }
        int32_t& faceCount() { return this->faceCount_; }
        void faceCount(int32_t _val_) { this->faceCount_ = _val_; }
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

    class PowerSensor OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        double consumption_;
        std::string timestamp_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        PowerSensor() :
                consumption_(0.0) {}

        explicit PowerSensor(
            const std::string& UUID,
            double consumption,
            const std::string& timestamp,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                consumption_(consumption),
                timestamp_(timestamp),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        PowerSensor(const PowerSensor &_other) : 
                UUID_(_other.UUID_),
                consumption_(_other.consumption_),
                timestamp_(_other.timestamp_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        PowerSensor(PowerSensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                consumption_(::std::move(_other.consumption_)),
                timestamp_(::std::move(_other.timestamp_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        PowerSensor& operator=(PowerSensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                consumption_ = ::std::move(_other.consumption_);
                timestamp_ = ::std::move(_other.timestamp_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        PowerSensor& operator=(const PowerSensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                consumption_ = _other.consumption_;
                timestamp_ = _other.timestamp_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const PowerSensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                consumption_ == _other.consumption_ &&
                timestamp_ == _other.timestamp_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const PowerSensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        double consumption() const { return this->consumption_; }
        double& consumption() { return this->consumption_; }
        void consumption(double _val_) { this->consumption_ = _val_; }
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

    class BluetoothIdentitySensor OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        double probability_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        BluetoothIdentitySensor() :
                probability_(0.0) {}

        explicit BluetoothIdentitySensor(
            const std::string& UUID,
            double probability,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                probability_(probability),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        BluetoothIdentitySensor(const BluetoothIdentitySensor &_other) : 
                UUID_(_other.UUID_),
                probability_(_other.probability_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        BluetoothIdentitySensor(BluetoothIdentitySensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                probability_(::std::move(_other.probability_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        BluetoothIdentitySensor& operator=(BluetoothIdentitySensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                probability_ = ::std::move(_other.probability_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        BluetoothIdentitySensor& operator=(const BluetoothIdentitySensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                probability_ = _other.probability_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const BluetoothIdentitySensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                probability_ == _other.probability_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const BluetoothIdentitySensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        double probability() const { return this->probability_; }
        double& probability() { return this->probability_; }
        void probability(double _val_) { this->probability_ = _val_; }
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

    class VisionIdentitySensor OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        double probability_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        VisionIdentitySensor() :
                probability_(0.0) {}

        explicit VisionIdentitySensor(
            const std::string& UUID,
            double probability,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                probability_(probability),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        VisionIdentitySensor(const VisionIdentitySensor &_other) : 
                UUID_(_other.UUID_),
                probability_(_other.probability_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        VisionIdentitySensor(VisionIdentitySensor &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                probability_(::std::move(_other.probability_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        VisionIdentitySensor& operator=(VisionIdentitySensor &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                probability_ = ::std::move(_other.probability_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        VisionIdentitySensor& operator=(const VisionIdentitySensor &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                probability_ = _other.probability_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const VisionIdentitySensor& _other) const
        {
            return UUID_ == _other.UUID_ &&
                probability_ == _other.probability_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const VisionIdentitySensor& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        double probability() const { return this->probability_; }
        double& probability() { return this->probability_; }
        void probability(double _val_) { this->probability_ = _val_; }
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

    class Thermostat OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        double targetTemperature_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Thermostat() :
                targetTemperature_(0.0) {}

        explicit Thermostat(
            const std::string& UUID,
            double targetTemperature,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                targetTemperature_(targetTemperature),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Thermostat(const Thermostat &_other) : 
                UUID_(_other.UUID_),
                targetTemperature_(_other.targetTemperature_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Thermostat(Thermostat &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                targetTemperature_(::std::move(_other.targetTemperature_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Thermostat& operator=(Thermostat &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                targetTemperature_ = ::std::move(_other.targetTemperature_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Thermostat& operator=(const Thermostat &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                targetTemperature_ = _other.targetTemperature_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Thermostat& _other) const
        {
            return UUID_ == _other.UUID_ &&
                targetTemperature_ == _other.targetTemperature_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Thermostat& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        double targetTemperature() const { return this->targetTemperature_; }
        double& targetTemperature() { return this->targetTemperature_; }
        void targetTemperature(double _val_) { this->targetTemperature_ = _val_; }
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

    class CurrentWeather OSPL_DDS_FINAL
    {
    public:
        int32_t referenceTimestamp_;
        double temperature_;
        double pressure_;
        double humidity_;
        double windKph_;
        double uv_;
        int32_t cloudiness_;
        int32_t conditionCode_;
        std::string conditionName_;
        std::string nextSunrise_;
        std::string nextSunset_;

    public:
        CurrentWeather() :
                referenceTimestamp_(0),
                temperature_(0.0),
                pressure_(0.0),
                humidity_(0.0),
                windKph_(0.0),
                uv_(0.0),
                cloudiness_(0),
                conditionCode_(0) {}

        explicit CurrentWeather(
            int32_t referenceTimestamp,
            double temperature,
            double pressure,
            double humidity,
            double windKph,
            double uv,
            int32_t cloudiness,
            int32_t conditionCode,
            const std::string& conditionName,
            const std::string& nextSunrise,
            const std::string& nextSunset) : 
                referenceTimestamp_(referenceTimestamp),
                temperature_(temperature),
                pressure_(pressure),
                humidity_(humidity),
                windKph_(windKph),
                uv_(uv),
                cloudiness_(cloudiness),
                conditionCode_(conditionCode),
                conditionName_(conditionName),
                nextSunrise_(nextSunrise),
                nextSunset_(nextSunset) {}

        CurrentWeather(const CurrentWeather &_other) : 
                referenceTimestamp_(_other.referenceTimestamp_),
                temperature_(_other.temperature_),
                pressure_(_other.pressure_),
                humidity_(_other.humidity_),
                windKph_(_other.windKph_),
                uv_(_other.uv_),
                cloudiness_(_other.cloudiness_),
                conditionCode_(_other.conditionCode_),
                conditionName_(_other.conditionName_),
                nextSunrise_(_other.nextSunrise_),
                nextSunset_(_other.nextSunset_) {}

#ifdef OSPL_DDS_CXX11
        CurrentWeather(CurrentWeather &&_other) : 
                referenceTimestamp_(::std::move(_other.referenceTimestamp_)),
                temperature_(::std::move(_other.temperature_)),
                pressure_(::std::move(_other.pressure_)),
                humidity_(::std::move(_other.humidity_)),
                windKph_(::std::move(_other.windKph_)),
                uv_(::std::move(_other.uv_)),
                cloudiness_(::std::move(_other.cloudiness_)),
                conditionCode_(::std::move(_other.conditionCode_)),
                conditionName_(::std::move(_other.conditionName_)),
                nextSunrise_(::std::move(_other.nextSunrise_)),
                nextSunset_(::std::move(_other.nextSunset_)) {}

        CurrentWeather& operator=(CurrentWeather &&_other)
        {
            if (this != &_other) {
                referenceTimestamp_ = ::std::move(_other.referenceTimestamp_);
                temperature_ = ::std::move(_other.temperature_);
                pressure_ = ::std::move(_other.pressure_);
                humidity_ = ::std::move(_other.humidity_);
                windKph_ = ::std::move(_other.windKph_);
                uv_ = ::std::move(_other.uv_);
                cloudiness_ = ::std::move(_other.cloudiness_);
                conditionCode_ = ::std::move(_other.conditionCode_);
                conditionName_ = ::std::move(_other.conditionName_);
                nextSunrise_ = ::std::move(_other.nextSunrise_);
                nextSunset_ = ::std::move(_other.nextSunset_);
            }
            return *this;
        }
#endif

        CurrentWeather& operator=(const CurrentWeather &_other)
        {
            if (this != &_other) {
                referenceTimestamp_ = _other.referenceTimestamp_;
                temperature_ = _other.temperature_;
                pressure_ = _other.pressure_;
                humidity_ = _other.humidity_;
                windKph_ = _other.windKph_;
                uv_ = _other.uv_;
                cloudiness_ = _other.cloudiness_;
                conditionCode_ = _other.conditionCode_;
                conditionName_ = _other.conditionName_;
                nextSunrise_ = _other.nextSunrise_;
                nextSunset_ = _other.nextSunset_;
            }
            return *this;
        }

        bool operator==(const CurrentWeather& _other) const
        {
            return referenceTimestamp_ == _other.referenceTimestamp_ &&
                temperature_ == _other.temperature_ &&
                pressure_ == _other.pressure_ &&
                humidity_ == _other.humidity_ &&
                windKph_ == _other.windKph_ &&
                uv_ == _other.uv_ &&
                cloudiness_ == _other.cloudiness_ &&
                conditionCode_ == _other.conditionCode_ &&
                conditionName_ == _other.conditionName_ &&
                nextSunrise_ == _other.nextSunrise_ &&
                nextSunset_ == _other.nextSunset_;
        }

        bool operator!=(const CurrentWeather& _other) const
        {
            return !(*this == _other);
        }

        int32_t referenceTimestamp() const { return this->referenceTimestamp_; }
        int32_t& referenceTimestamp() { return this->referenceTimestamp_; }
        void referenceTimestamp(int32_t _val_) { this->referenceTimestamp_ = _val_; }
        double temperature() const { return this->temperature_; }
        double& temperature() { return this->temperature_; }
        void temperature(double _val_) { this->temperature_ = _val_; }
        double pressure() const { return this->pressure_; }
        double& pressure() { return this->pressure_; }
        void pressure(double _val_) { this->pressure_ = _val_; }
        double humidity() const { return this->humidity_; }
        double& humidity() { return this->humidity_; }
        void humidity(double _val_) { this->humidity_ = _val_; }
        double windKph() const { return this->windKph_; }
        double& windKph() { return this->windKph_; }
        void windKph(double _val_) { this->windKph_ = _val_; }
        double uv() const { return this->uv_; }
        double& uv() { return this->uv_; }
        void uv(double _val_) { this->uv_ = _val_; }
        int32_t cloudiness() const { return this->cloudiness_; }
        int32_t& cloudiness() { return this->cloudiness_; }
        void cloudiness(int32_t _val_) { this->cloudiness_ = _val_; }
        int32_t conditionCode() const { return this->conditionCode_; }
        int32_t& conditionCode() { return this->conditionCode_; }
        void conditionCode(int32_t _val_) { this->conditionCode_ = _val_; }
        const std::string& conditionName() const { return this->conditionName_; }
        std::string& conditionName() { return this->conditionName_; }
        void conditionName(const std::string& _val_) { this->conditionName_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void conditionName(std::string&& _val_) { this->conditionName_ = _val_; }
#endif
        const std::string& nextSunrise() const { return this->nextSunrise_; }
        std::string& nextSunrise() { return this->nextSunrise_; }
        void nextSunrise(const std::string& _val_) { this->nextSunrise_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void nextSunrise(std::string&& _val_) { this->nextSunrise_ = _val_; }
#endif
        const std::string& nextSunset() const { return this->nextSunset_; }
        std::string& nextSunset() { return this->nextSunset_; }
        void nextSunset(const std::string& _val_) { this->nextSunset_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void nextSunset(std::string&& _val_) { this->nextSunset_ = _val_; }
#endif
    };

    class HourlyWeatherData OSPL_DDS_FINAL
    {
    public:
        int32_t referenceTimestamp_;
        double windKph_;
        double temperature_;
        int32_t rainChance_;
        bool willItRain_;
        bool isDay_;
        int32_t conditionCode_;
        std::string conditionName_;
        int32_t cloudiness_;
        double precipMm_;

    public:
        HourlyWeatherData() :
                referenceTimestamp_(0),
                windKph_(0.0),
                temperature_(0.0),
                rainChance_(0),
                willItRain_(false),
                isDay_(false),
                conditionCode_(0),
                cloudiness_(0),
                precipMm_(0.0) {}

        explicit HourlyWeatherData(
            int32_t referenceTimestamp,
            double windKph,
            double temperature,
            int32_t rainChance,
            bool willItRain,
            bool isDay,
            int32_t conditionCode,
            const std::string& conditionName,
            int32_t cloudiness,
            double precipMm) : 
                referenceTimestamp_(referenceTimestamp),
                windKph_(windKph),
                temperature_(temperature),
                rainChance_(rainChance),
                willItRain_(willItRain),
                isDay_(isDay),
                conditionCode_(conditionCode),
                conditionName_(conditionName),
                cloudiness_(cloudiness),
                precipMm_(precipMm) {}

        HourlyWeatherData(const HourlyWeatherData &_other) : 
                referenceTimestamp_(_other.referenceTimestamp_),
                windKph_(_other.windKph_),
                temperature_(_other.temperature_),
                rainChance_(_other.rainChance_),
                willItRain_(_other.willItRain_),
                isDay_(_other.isDay_),
                conditionCode_(_other.conditionCode_),
                conditionName_(_other.conditionName_),
                cloudiness_(_other.cloudiness_),
                precipMm_(_other.precipMm_) {}

#ifdef OSPL_DDS_CXX11
        HourlyWeatherData(HourlyWeatherData &&_other) : 
                referenceTimestamp_(::std::move(_other.referenceTimestamp_)),
                windKph_(::std::move(_other.windKph_)),
                temperature_(::std::move(_other.temperature_)),
                rainChance_(::std::move(_other.rainChance_)),
                willItRain_(::std::move(_other.willItRain_)),
                isDay_(::std::move(_other.isDay_)),
                conditionCode_(::std::move(_other.conditionCode_)),
                conditionName_(::std::move(_other.conditionName_)),
                cloudiness_(::std::move(_other.cloudiness_)),
                precipMm_(::std::move(_other.precipMm_)) {}

        HourlyWeatherData& operator=(HourlyWeatherData &&_other)
        {
            if (this != &_other) {
                referenceTimestamp_ = ::std::move(_other.referenceTimestamp_);
                windKph_ = ::std::move(_other.windKph_);
                temperature_ = ::std::move(_other.temperature_);
                rainChance_ = ::std::move(_other.rainChance_);
                willItRain_ = ::std::move(_other.willItRain_);
                isDay_ = ::std::move(_other.isDay_);
                conditionCode_ = ::std::move(_other.conditionCode_);
                conditionName_ = ::std::move(_other.conditionName_);
                cloudiness_ = ::std::move(_other.cloudiness_);
                precipMm_ = ::std::move(_other.precipMm_);
            }
            return *this;
        }
#endif

        HourlyWeatherData& operator=(const HourlyWeatherData &_other)
        {
            if (this != &_other) {
                referenceTimestamp_ = _other.referenceTimestamp_;
                windKph_ = _other.windKph_;
                temperature_ = _other.temperature_;
                rainChance_ = _other.rainChance_;
                willItRain_ = _other.willItRain_;
                isDay_ = _other.isDay_;
                conditionCode_ = _other.conditionCode_;
                conditionName_ = _other.conditionName_;
                cloudiness_ = _other.cloudiness_;
                precipMm_ = _other.precipMm_;
            }
            return *this;
        }

        bool operator==(const HourlyWeatherData& _other) const
        {
            return referenceTimestamp_ == _other.referenceTimestamp_ &&
                windKph_ == _other.windKph_ &&
                temperature_ == _other.temperature_ &&
                rainChance_ == _other.rainChance_ &&
                willItRain_ == _other.willItRain_ &&
                isDay_ == _other.isDay_ &&
                conditionCode_ == _other.conditionCode_ &&
                conditionName_ == _other.conditionName_ &&
                cloudiness_ == _other.cloudiness_ &&
                precipMm_ == _other.precipMm_;
        }

        bool operator!=(const HourlyWeatherData& _other) const
        {
            return !(*this == _other);
        }

        int32_t referenceTimestamp() const { return this->referenceTimestamp_; }
        int32_t& referenceTimestamp() { return this->referenceTimestamp_; }
        void referenceTimestamp(int32_t _val_) { this->referenceTimestamp_ = _val_; }
        double windKph() const { return this->windKph_; }
        double& windKph() { return this->windKph_; }
        void windKph(double _val_) { this->windKph_ = _val_; }
        double temperature() const { return this->temperature_; }
        double& temperature() { return this->temperature_; }
        void temperature(double _val_) { this->temperature_ = _val_; }
        int32_t rainChance() const { return this->rainChance_; }
        int32_t& rainChance() { return this->rainChance_; }
        void rainChance(int32_t _val_) { this->rainChance_ = _val_; }
        bool willItRain() const { return this->willItRain_; }
        bool& willItRain() { return this->willItRain_; }
        void willItRain(bool _val_) { this->willItRain_ = _val_; }
        bool isDay() const { return this->isDay_; }
        bool& isDay() { return this->isDay_; }
        void isDay(bool _val_) { this->isDay_ = _val_; }
        int32_t conditionCode() const { return this->conditionCode_; }
        int32_t& conditionCode() { return this->conditionCode_; }
        void conditionCode(int32_t _val_) { this->conditionCode_ = _val_; }
        const std::string& conditionName() const { return this->conditionName_; }
        std::string& conditionName() { return this->conditionName_; }
        void conditionName(const std::string& _val_) { this->conditionName_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void conditionName(std::string&& _val_) { this->conditionName_ = _val_; }
#endif
        int32_t cloudiness() const { return this->cloudiness_; }
        int32_t& cloudiness() { return this->cloudiness_; }
        void cloudiness(int32_t _val_) { this->cloudiness_ = _val_; }
        double precipMm() const { return this->precipMm_; }
        double& precipMm() { return this->precipMm_; }
        void precipMm(double _val_) { this->precipMm_ = _val_; }
    };

    class DailyWeatherData OSPL_DDS_FINAL
    {
    public:
        int32_t referenceTimestamp_;
        double maxTemperature_;
        double temperature_;
        double minTemperature_;
        double precipMm_;
        int32_t conditionCode_;
        std::string conditionName_;
        double uv_;

    public:
        DailyWeatherData() :
                referenceTimestamp_(0),
                maxTemperature_(0.0),
                temperature_(0.0),
                minTemperature_(0.0),
                precipMm_(0.0),
                conditionCode_(0),
                uv_(0.0) {}

        explicit DailyWeatherData(
            int32_t referenceTimestamp,
            double maxTemperature,
            double temperature,
            double minTemperature,
            double precipMm,
            int32_t conditionCode,
            const std::string& conditionName,
            double uv) : 
                referenceTimestamp_(referenceTimestamp),
                maxTemperature_(maxTemperature),
                temperature_(temperature),
                minTemperature_(minTemperature),
                precipMm_(precipMm),
                conditionCode_(conditionCode),
                conditionName_(conditionName),
                uv_(uv) {}

        DailyWeatherData(const DailyWeatherData &_other) : 
                referenceTimestamp_(_other.referenceTimestamp_),
                maxTemperature_(_other.maxTemperature_),
                temperature_(_other.temperature_),
                minTemperature_(_other.minTemperature_),
                precipMm_(_other.precipMm_),
                conditionCode_(_other.conditionCode_),
                conditionName_(_other.conditionName_),
                uv_(_other.uv_) {}

#ifdef OSPL_DDS_CXX11
        DailyWeatherData(DailyWeatherData &&_other) : 
                referenceTimestamp_(::std::move(_other.referenceTimestamp_)),
                maxTemperature_(::std::move(_other.maxTemperature_)),
                temperature_(::std::move(_other.temperature_)),
                minTemperature_(::std::move(_other.minTemperature_)),
                precipMm_(::std::move(_other.precipMm_)),
                conditionCode_(::std::move(_other.conditionCode_)),
                conditionName_(::std::move(_other.conditionName_)),
                uv_(::std::move(_other.uv_)) {}

        DailyWeatherData& operator=(DailyWeatherData &&_other)
        {
            if (this != &_other) {
                referenceTimestamp_ = ::std::move(_other.referenceTimestamp_);
                maxTemperature_ = ::std::move(_other.maxTemperature_);
                temperature_ = ::std::move(_other.temperature_);
                minTemperature_ = ::std::move(_other.minTemperature_);
                precipMm_ = ::std::move(_other.precipMm_);
                conditionCode_ = ::std::move(_other.conditionCode_);
                conditionName_ = ::std::move(_other.conditionName_);
                uv_ = ::std::move(_other.uv_);
            }
            return *this;
        }
#endif

        DailyWeatherData& operator=(const DailyWeatherData &_other)
        {
            if (this != &_other) {
                referenceTimestamp_ = _other.referenceTimestamp_;
                maxTemperature_ = _other.maxTemperature_;
                temperature_ = _other.temperature_;
                minTemperature_ = _other.minTemperature_;
                precipMm_ = _other.precipMm_;
                conditionCode_ = _other.conditionCode_;
                conditionName_ = _other.conditionName_;
                uv_ = _other.uv_;
            }
            return *this;
        }

        bool operator==(const DailyWeatherData& _other) const
        {
            return referenceTimestamp_ == _other.referenceTimestamp_ &&
                maxTemperature_ == _other.maxTemperature_ &&
                temperature_ == _other.temperature_ &&
                minTemperature_ == _other.minTemperature_ &&
                precipMm_ == _other.precipMm_ &&
                conditionCode_ == _other.conditionCode_ &&
                conditionName_ == _other.conditionName_ &&
                uv_ == _other.uv_;
        }

        bool operator!=(const DailyWeatherData& _other) const
        {
            return !(*this == _other);
        }

        int32_t referenceTimestamp() const { return this->referenceTimestamp_; }
        int32_t& referenceTimestamp() { return this->referenceTimestamp_; }
        void referenceTimestamp(int32_t _val_) { this->referenceTimestamp_ = _val_; }
        double maxTemperature() const { return this->maxTemperature_; }
        double& maxTemperature() { return this->maxTemperature_; }
        void maxTemperature(double _val_) { this->maxTemperature_ = _val_; }
        double temperature() const { return this->temperature_; }
        double& temperature() { return this->temperature_; }
        void temperature(double _val_) { this->temperature_ = _val_; }
        double minTemperature() const { return this->minTemperature_; }
        double& minTemperature() { return this->minTemperature_; }
        void minTemperature(double _val_) { this->minTemperature_ = _val_; }
        double precipMm() const { return this->precipMm_; }
        double& precipMm() { return this->precipMm_; }
        void precipMm(double _val_) { this->precipMm_ = _val_; }
        int32_t conditionCode() const { return this->conditionCode_; }
        int32_t& conditionCode() { return this->conditionCode_; }
        void conditionCode(int32_t _val_) { this->conditionCode_ = _val_; }
        const std::string& conditionName() const { return this->conditionName_; }
        std::string& conditionName() { return this->conditionName_; }
        void conditionName(const std::string& _val_) { this->conditionName_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void conditionName(std::string&& _val_) { this->conditionName_ = _val_; }
#endif
        double uv() const { return this->uv_; }
        double& uv() { return this->uv_; }
        void uv(double _val_) { this->uv_ = _val_; }
    };

    class HistoricalAndForecastedWeather OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::HourlyWeatherData>  _hourlyForecast_seq;

        typedef std::vector<Mind::HourlyWeatherData>  _hourlyHistory_seq;

        int32_t lastUpdateTimestamp_;
        Mind::DailyWeatherData tomorrow_;
        Mind::DailyWeatherData today_;
        Mind::DailyWeatherData yesterday_;
        std::vector<Mind::HourlyWeatherData>  hourlyForecast_;
        std::vector<Mind::HourlyWeatherData>  hourlyHistory_;

    public:
        HistoricalAndForecastedWeather() :
                lastUpdateTimestamp_(0) {}

        explicit HistoricalAndForecastedWeather(
            int32_t lastUpdateTimestamp,
            const Mind::DailyWeatherData& tomorrow,
            const Mind::DailyWeatherData& today,
            const Mind::DailyWeatherData& yesterday,
            const std::vector<Mind::HourlyWeatherData> & hourlyForecast,
            const std::vector<Mind::HourlyWeatherData> & hourlyHistory) : 
                lastUpdateTimestamp_(lastUpdateTimestamp),
                tomorrow_(tomorrow),
                today_(today),
                yesterday_(yesterday),
                hourlyForecast_(hourlyForecast),
                hourlyHistory_(hourlyHistory) {}

        HistoricalAndForecastedWeather(const HistoricalAndForecastedWeather &_other) : 
                lastUpdateTimestamp_(_other.lastUpdateTimestamp_),
                tomorrow_(_other.tomorrow_),
                today_(_other.today_),
                yesterday_(_other.yesterday_),
                hourlyForecast_(_other.hourlyForecast_),
                hourlyHistory_(_other.hourlyHistory_) {}

#ifdef OSPL_DDS_CXX11
        HistoricalAndForecastedWeather(HistoricalAndForecastedWeather &&_other) : 
                lastUpdateTimestamp_(::std::move(_other.lastUpdateTimestamp_)),
                tomorrow_(::std::move(_other.tomorrow_)),
                today_(::std::move(_other.today_)),
                yesterday_(::std::move(_other.yesterday_)),
                hourlyForecast_(::std::move(_other.hourlyForecast_)),
                hourlyHistory_(::std::move(_other.hourlyHistory_)) {}

        HistoricalAndForecastedWeather& operator=(HistoricalAndForecastedWeather &&_other)
        {
            if (this != &_other) {
                lastUpdateTimestamp_ = ::std::move(_other.lastUpdateTimestamp_);
                tomorrow_ = ::std::move(_other.tomorrow_);
                today_ = ::std::move(_other.today_);
                yesterday_ = ::std::move(_other.yesterday_);
                hourlyForecast_ = ::std::move(_other.hourlyForecast_);
                hourlyHistory_ = ::std::move(_other.hourlyHistory_);
            }
            return *this;
        }
#endif

        HistoricalAndForecastedWeather& operator=(const HistoricalAndForecastedWeather &_other)
        {
            if (this != &_other) {
                lastUpdateTimestamp_ = _other.lastUpdateTimestamp_;
                tomorrow_ = _other.tomorrow_;
                today_ = _other.today_;
                yesterday_ = _other.yesterday_;
                hourlyForecast_ = _other.hourlyForecast_;
                hourlyHistory_ = _other.hourlyHistory_;
            }
            return *this;
        }

        bool operator==(const HistoricalAndForecastedWeather& _other) const
        {
            return lastUpdateTimestamp_ == _other.lastUpdateTimestamp_ &&
                tomorrow_ == _other.tomorrow_ &&
                today_ == _other.today_ &&
                yesterday_ == _other.yesterday_ &&
                hourlyForecast_ == _other.hourlyForecast_ &&
                hourlyHistory_ == _other.hourlyHistory_;
        }

        bool operator!=(const HistoricalAndForecastedWeather& _other) const
        {
            return !(*this == _other);
        }

        int32_t lastUpdateTimestamp() const { return this->lastUpdateTimestamp_; }
        int32_t& lastUpdateTimestamp() { return this->lastUpdateTimestamp_; }
        void lastUpdateTimestamp(int32_t _val_) { this->lastUpdateTimestamp_ = _val_; }
        const Mind::DailyWeatherData& tomorrow() const { return this->tomorrow_; }
        Mind::DailyWeatherData& tomorrow() { return this->tomorrow_; }
        void tomorrow(const Mind::DailyWeatherData& _val_) { this->tomorrow_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void tomorrow(Mind::DailyWeatherData&& _val_) { this->tomorrow_ = _val_; }
#endif
        const Mind::DailyWeatherData& today() const { return this->today_; }
        Mind::DailyWeatherData& today() { return this->today_; }
        void today(const Mind::DailyWeatherData& _val_) { this->today_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void today(Mind::DailyWeatherData&& _val_) { this->today_ = _val_; }
#endif
        const Mind::DailyWeatherData& yesterday() const { return this->yesterday_; }
        Mind::DailyWeatherData& yesterday() { return this->yesterday_; }
        void yesterday(const Mind::DailyWeatherData& _val_) { this->yesterday_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void yesterday(Mind::DailyWeatherData&& _val_) { this->yesterday_ = _val_; }
#endif
        const std::vector<Mind::HourlyWeatherData> & hourlyForecast() const { return this->hourlyForecast_; }
        std::vector<Mind::HourlyWeatherData> & hourlyForecast() { return this->hourlyForecast_; }
        void hourlyForecast(const std::vector<Mind::HourlyWeatherData> & _val_) { this->hourlyForecast_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void hourlyForecast(std::vector<Mind::HourlyWeatherData> && _val_) { this->hourlyForecast_ = _val_; }
#endif
        const std::vector<Mind::HourlyWeatherData> & hourlyHistory() const { return this->hourlyHistory_; }
        std::vector<Mind::HourlyWeatherData> & hourlyHistory() { return this->hourlyHistory_; }
        void hourlyHistory(const std::vector<Mind::HourlyWeatherData> & _val_) { this->hourlyHistory_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void hourlyHistory(std::vector<Mind::HourlyWeatherData> && _val_) { this->hourlyHistory_ = _val_; }
#endif
    };

    class Caldaia OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Caldaia() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit Caldaia(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Caldaia(const Caldaia &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Caldaia(Caldaia &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Caldaia& operator=(Caldaia &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Caldaia& operator=(const Caldaia &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Caldaia& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Caldaia& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class PompaCalore OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddressOnOff_;
        int32_t numRelayOnOff_;
        std::string MACAddressCF_;
        int32_t numRelayCF_;
        std::vector<Mind::Category>  categories_;
        bool connectedOnOff_;
        bool connectedCF_;
        bool statusOnOff_;
        bool statusCF_;
        std::string description_;
        bool blocked_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        PompaCalore() :
                numRelayOnOff_(0),
                numRelayCF_(0),
                connectedOnOff_(false),
                connectedCF_(false),
                statusOnOff_(false),
                statusCF_(false),
                blocked_(false) {}

        explicit PompaCalore(
            const std::string& UUID,
            const std::string& MACAddressOnOff,
            int32_t numRelayOnOff,
            const std::string& MACAddressCF,
            int32_t numRelayCF,
            const std::vector<Mind::Category> & categories,
            bool connectedOnOff,
            bool connectedCF,
            bool statusOnOff,
            bool statusCF,
            const std::string& description,
            bool blocked,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddressOnOff_(MACAddressOnOff),
                numRelayOnOff_(numRelayOnOff),
                MACAddressCF_(MACAddressCF),
                numRelayCF_(numRelayCF),
                categories_(categories),
                connectedOnOff_(connectedOnOff),
                connectedCF_(connectedCF),
                statusOnOff_(statusOnOff),
                statusCF_(statusCF),
                description_(description),
                blocked_(blocked),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        PompaCalore(const PompaCalore &_other) : 
                UUID_(_other.UUID_),
                MACAddressOnOff_(_other.MACAddressOnOff_),
                numRelayOnOff_(_other.numRelayOnOff_),
                MACAddressCF_(_other.MACAddressCF_),
                numRelayCF_(_other.numRelayCF_),
                categories_(_other.categories_),
                connectedOnOff_(_other.connectedOnOff_),
                connectedCF_(_other.connectedCF_),
                statusOnOff_(_other.statusOnOff_),
                statusCF_(_other.statusCF_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        PompaCalore(PompaCalore &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddressOnOff_(::std::move(_other.MACAddressOnOff_)),
                numRelayOnOff_(::std::move(_other.numRelayOnOff_)),
                MACAddressCF_(::std::move(_other.MACAddressCF_)),
                numRelayCF_(::std::move(_other.numRelayCF_)),
                categories_(::std::move(_other.categories_)),
                connectedOnOff_(::std::move(_other.connectedOnOff_)),
                connectedCF_(::std::move(_other.connectedCF_)),
                statusOnOff_(::std::move(_other.statusOnOff_)),
                statusCF_(::std::move(_other.statusCF_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        PompaCalore& operator=(PompaCalore &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddressOnOff_ = ::std::move(_other.MACAddressOnOff_);
                numRelayOnOff_ = ::std::move(_other.numRelayOnOff_);
                MACAddressCF_ = ::std::move(_other.MACAddressCF_);
                numRelayCF_ = ::std::move(_other.numRelayCF_);
                categories_ = ::std::move(_other.categories_);
                connectedOnOff_ = ::std::move(_other.connectedOnOff_);
                connectedCF_ = ::std::move(_other.connectedCF_);
                statusOnOff_ = ::std::move(_other.statusOnOff_);
                statusCF_ = ::std::move(_other.statusCF_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        PompaCalore& operator=(const PompaCalore &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddressOnOff_ = _other.MACAddressOnOff_;
                numRelayOnOff_ = _other.numRelayOnOff_;
                MACAddressCF_ = _other.MACAddressCF_;
                numRelayCF_ = _other.numRelayCF_;
                categories_ = _other.categories_;
                connectedOnOff_ = _other.connectedOnOff_;
                connectedCF_ = _other.connectedCF_;
                statusOnOff_ = _other.statusOnOff_;
                statusCF_ = _other.statusCF_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const PompaCalore& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddressOnOff_ == _other.MACAddressOnOff_ &&
                numRelayOnOff_ == _other.numRelayOnOff_ &&
                MACAddressCF_ == _other.MACAddressCF_ &&
                numRelayCF_ == _other.numRelayCF_ &&
                categories_ == _other.categories_ &&
                connectedOnOff_ == _other.connectedOnOff_ &&
                connectedCF_ == _other.connectedCF_ &&
                statusOnOff_ == _other.statusOnOff_ &&
                statusCF_ == _other.statusCF_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const PompaCalore& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddressOnOff() const { return this->MACAddressOnOff_; }
        std::string& MACAddressOnOff() { return this->MACAddressOnOff_; }
        void MACAddressOnOff(const std::string& _val_) { this->MACAddressOnOff_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressOnOff(std::string&& _val_) { this->MACAddressOnOff_ = _val_; }
#endif
        int32_t numRelayOnOff() const { return this->numRelayOnOff_; }
        int32_t& numRelayOnOff() { return this->numRelayOnOff_; }
        void numRelayOnOff(int32_t _val_) { this->numRelayOnOff_ = _val_; }
        const std::string& MACAddressCF() const { return this->MACAddressCF_; }
        std::string& MACAddressCF() { return this->MACAddressCF_; }
        void MACAddressCF(const std::string& _val_) { this->MACAddressCF_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressCF(std::string&& _val_) { this->MACAddressCF_ = _val_; }
#endif
        int32_t numRelayCF() const { return this->numRelayCF_; }
        int32_t& numRelayCF() { return this->numRelayCF_; }
        void numRelayCF(int32_t _val_) { this->numRelayCF_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connectedOnOff() const { return this->connectedOnOff_; }
        bool& connectedOnOff() { return this->connectedOnOff_; }
        void connectedOnOff(bool _val_) { this->connectedOnOff_ = _val_; }
        bool connectedCF() const { return this->connectedCF_; }
        bool& connectedCF() { return this->connectedCF_; }
        void connectedCF(bool _val_) { this->connectedCF_ = _val_; }
        bool statusOnOff() const { return this->statusOnOff_; }
        bool& statusOnOff() { return this->statusOnOff_; }
        void statusOnOff(bool _val_) { this->statusOnOff_ = _val_; }
        bool statusCF() const { return this->statusCF_; }
        bool& statusCF() { return this->statusCF_; }
        void statusCF(bool _val_) { this->statusCF_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
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

    class FloorHeating OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        typedef std::vector<std::string>  _UUIDAmbiences_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::vector<std::string>  UUIDAmbiences_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        FloorHeating() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit FloorHeating(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::vector<std::string> & UUIDAmbiences,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                UUIDAmbiences_(UUIDAmbiences),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        FloorHeating(const FloorHeating &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                UUIDAmbiences_(_other.UUIDAmbiences_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        FloorHeating(FloorHeating &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbiences_(::std::move(_other.UUIDAmbiences_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        FloorHeating& operator=(FloorHeating &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbiences_ = ::std::move(_other.UUIDAmbiences_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        FloorHeating& operator=(const FloorHeating &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                UUIDAmbiences_ = _other.UUIDAmbiences_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const FloorHeating& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbiences_ == _other.UUIDAmbiences_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const FloorHeating& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<std::string> & UUIDAmbiences() const { return this->UUIDAmbiences_; }
        std::vector<std::string> & UUIDAmbiences() { return this->UUIDAmbiences_; }
        void UUIDAmbiences(const std::vector<std::string> & _val_) { this->UUIDAmbiences_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbiences(std::vector<std::string> && _val_) { this->UUIDAmbiences_ = _val_; }
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
    };

    class FanCoil OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        typedef std::vector<std::string>  _UUIDAmbiences_seq;

        std::string UUID_;
        std::string description_;
        std::string MACAddressOnOff_;
        int32_t numRelayOnOff_;
        std::string MACAddressSpeed1_;
        int32_t numRelaySpeed1_;
        std::string MACAddressSpeed2_;
        int32_t numRelaySpeed2_;
        std::string MACAddressSpeed3_;
        int32_t numRelaySpeed3_;
        std::vector<Mind::Category>  categories_;
        bool connectedOnOff_;
        bool connectedSpeed1_;
        bool connectedSpeed2_;
        bool connectedSpeed3_;
        int32_t statusOnOff_;
        int32_t statusSpeed1_;
        int32_t statusSpeed2_;
        int32_t statusSpeed3_;
        bool blocked_;
        std::vector<std::string>  UUIDAmbiences_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        FanCoil() :
                numRelayOnOff_(0),
                numRelaySpeed1_(0),
                numRelaySpeed2_(0),
                numRelaySpeed3_(0),
                connectedOnOff_(false),
                connectedSpeed1_(false),
                connectedSpeed2_(false),
                connectedSpeed3_(false),
                statusOnOff_(0),
                statusSpeed1_(0),
                statusSpeed2_(0),
                statusSpeed3_(0),
                blocked_(false) {}

        explicit FanCoil(
            const std::string& UUID,
            const std::string& description,
            const std::string& MACAddressOnOff,
            int32_t numRelayOnOff,
            const std::string& MACAddressSpeed1,
            int32_t numRelaySpeed1,
            const std::string& MACAddressSpeed2,
            int32_t numRelaySpeed2,
            const std::string& MACAddressSpeed3,
            int32_t numRelaySpeed3,
            const std::vector<Mind::Category> & categories,
            bool connectedOnOff,
            bool connectedSpeed1,
            bool connectedSpeed2,
            bool connectedSpeed3,
            int32_t statusOnOff,
            int32_t statusSpeed1,
            int32_t statusSpeed2,
            int32_t statusSpeed3,
            bool blocked,
            const std::vector<std::string> & UUIDAmbiences,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                description_(description),
                MACAddressOnOff_(MACAddressOnOff),
                numRelayOnOff_(numRelayOnOff),
                MACAddressSpeed1_(MACAddressSpeed1),
                numRelaySpeed1_(numRelaySpeed1),
                MACAddressSpeed2_(MACAddressSpeed2),
                numRelaySpeed2_(numRelaySpeed2),
                MACAddressSpeed3_(MACAddressSpeed3),
                numRelaySpeed3_(numRelaySpeed3),
                categories_(categories),
                connectedOnOff_(connectedOnOff),
                connectedSpeed1_(connectedSpeed1),
                connectedSpeed2_(connectedSpeed2),
                connectedSpeed3_(connectedSpeed3),
                statusOnOff_(statusOnOff),
                statusSpeed1_(statusSpeed1),
                statusSpeed2_(statusSpeed2),
                statusSpeed3_(statusSpeed3),
                blocked_(blocked),
                UUIDAmbiences_(UUIDAmbiences),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        FanCoil(const FanCoil &_other) : 
                UUID_(_other.UUID_),
                description_(_other.description_),
                MACAddressOnOff_(_other.MACAddressOnOff_),
                numRelayOnOff_(_other.numRelayOnOff_),
                MACAddressSpeed1_(_other.MACAddressSpeed1_),
                numRelaySpeed1_(_other.numRelaySpeed1_),
                MACAddressSpeed2_(_other.MACAddressSpeed2_),
                numRelaySpeed2_(_other.numRelaySpeed2_),
                MACAddressSpeed3_(_other.MACAddressSpeed3_),
                numRelaySpeed3_(_other.numRelaySpeed3_),
                categories_(_other.categories_),
                connectedOnOff_(_other.connectedOnOff_),
                connectedSpeed1_(_other.connectedSpeed1_),
                connectedSpeed2_(_other.connectedSpeed2_),
                connectedSpeed3_(_other.connectedSpeed3_),
                statusOnOff_(_other.statusOnOff_),
                statusSpeed1_(_other.statusSpeed1_),
                statusSpeed2_(_other.statusSpeed2_),
                statusSpeed3_(_other.statusSpeed3_),
                blocked_(_other.blocked_),
                UUIDAmbiences_(_other.UUIDAmbiences_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        FanCoil(FanCoil &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                description_(::std::move(_other.description_)),
                MACAddressOnOff_(::std::move(_other.MACAddressOnOff_)),
                numRelayOnOff_(::std::move(_other.numRelayOnOff_)),
                MACAddressSpeed1_(::std::move(_other.MACAddressSpeed1_)),
                numRelaySpeed1_(::std::move(_other.numRelaySpeed1_)),
                MACAddressSpeed2_(::std::move(_other.MACAddressSpeed2_)),
                numRelaySpeed2_(::std::move(_other.numRelaySpeed2_)),
                MACAddressSpeed3_(::std::move(_other.MACAddressSpeed3_)),
                numRelaySpeed3_(::std::move(_other.numRelaySpeed3_)),
                categories_(::std::move(_other.categories_)),
                connectedOnOff_(::std::move(_other.connectedOnOff_)),
                connectedSpeed1_(::std::move(_other.connectedSpeed1_)),
                connectedSpeed2_(::std::move(_other.connectedSpeed2_)),
                connectedSpeed3_(::std::move(_other.connectedSpeed3_)),
                statusOnOff_(::std::move(_other.statusOnOff_)),
                statusSpeed1_(::std::move(_other.statusSpeed1_)),
                statusSpeed2_(::std::move(_other.statusSpeed2_)),
                statusSpeed3_(::std::move(_other.statusSpeed3_)),
                blocked_(::std::move(_other.blocked_)),
                UUIDAmbiences_(::std::move(_other.UUIDAmbiences_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        FanCoil& operator=(FanCoil &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                description_ = ::std::move(_other.description_);
                MACAddressOnOff_ = ::std::move(_other.MACAddressOnOff_);
                numRelayOnOff_ = ::std::move(_other.numRelayOnOff_);
                MACAddressSpeed1_ = ::std::move(_other.MACAddressSpeed1_);
                numRelaySpeed1_ = ::std::move(_other.numRelaySpeed1_);
                MACAddressSpeed2_ = ::std::move(_other.MACAddressSpeed2_);
                numRelaySpeed2_ = ::std::move(_other.numRelaySpeed2_);
                MACAddressSpeed3_ = ::std::move(_other.MACAddressSpeed3_);
                numRelaySpeed3_ = ::std::move(_other.numRelaySpeed3_);
                categories_ = ::std::move(_other.categories_);
                connectedOnOff_ = ::std::move(_other.connectedOnOff_);
                connectedSpeed1_ = ::std::move(_other.connectedSpeed1_);
                connectedSpeed2_ = ::std::move(_other.connectedSpeed2_);
                connectedSpeed3_ = ::std::move(_other.connectedSpeed3_);
                statusOnOff_ = ::std::move(_other.statusOnOff_);
                statusSpeed1_ = ::std::move(_other.statusSpeed1_);
                statusSpeed2_ = ::std::move(_other.statusSpeed2_);
                statusSpeed3_ = ::std::move(_other.statusSpeed3_);
                blocked_ = ::std::move(_other.blocked_);
                UUIDAmbiences_ = ::std::move(_other.UUIDAmbiences_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        FanCoil& operator=(const FanCoil &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                description_ = _other.description_;
                MACAddressOnOff_ = _other.MACAddressOnOff_;
                numRelayOnOff_ = _other.numRelayOnOff_;
                MACAddressSpeed1_ = _other.MACAddressSpeed1_;
                numRelaySpeed1_ = _other.numRelaySpeed1_;
                MACAddressSpeed2_ = _other.MACAddressSpeed2_;
                numRelaySpeed2_ = _other.numRelaySpeed2_;
                MACAddressSpeed3_ = _other.MACAddressSpeed3_;
                numRelaySpeed3_ = _other.numRelaySpeed3_;
                categories_ = _other.categories_;
                connectedOnOff_ = _other.connectedOnOff_;
                connectedSpeed1_ = _other.connectedSpeed1_;
                connectedSpeed2_ = _other.connectedSpeed2_;
                connectedSpeed3_ = _other.connectedSpeed3_;
                statusOnOff_ = _other.statusOnOff_;
                statusSpeed1_ = _other.statusSpeed1_;
                statusSpeed2_ = _other.statusSpeed2_;
                statusSpeed3_ = _other.statusSpeed3_;
                blocked_ = _other.blocked_;
                UUIDAmbiences_ = _other.UUIDAmbiences_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const FanCoil& _other) const
        {
            return UUID_ == _other.UUID_ &&
                description_ == _other.description_ &&
                MACAddressOnOff_ == _other.MACAddressOnOff_ &&
                numRelayOnOff_ == _other.numRelayOnOff_ &&
                MACAddressSpeed1_ == _other.MACAddressSpeed1_ &&
                numRelaySpeed1_ == _other.numRelaySpeed1_ &&
                MACAddressSpeed2_ == _other.MACAddressSpeed2_ &&
                numRelaySpeed2_ == _other.numRelaySpeed2_ &&
                MACAddressSpeed3_ == _other.MACAddressSpeed3_ &&
                numRelaySpeed3_ == _other.numRelaySpeed3_ &&
                categories_ == _other.categories_ &&
                connectedOnOff_ == _other.connectedOnOff_ &&
                connectedSpeed1_ == _other.connectedSpeed1_ &&
                connectedSpeed2_ == _other.connectedSpeed2_ &&
                connectedSpeed3_ == _other.connectedSpeed3_ &&
                statusOnOff_ == _other.statusOnOff_ &&
                statusSpeed1_ == _other.statusSpeed1_ &&
                statusSpeed2_ == _other.statusSpeed2_ &&
                statusSpeed3_ == _other.statusSpeed3_ &&
                blocked_ == _other.blocked_ &&
                UUIDAmbiences_ == _other.UUIDAmbiences_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const FanCoil& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        const std::string& MACAddressOnOff() const { return this->MACAddressOnOff_; }
        std::string& MACAddressOnOff() { return this->MACAddressOnOff_; }
        void MACAddressOnOff(const std::string& _val_) { this->MACAddressOnOff_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressOnOff(std::string&& _val_) { this->MACAddressOnOff_ = _val_; }
#endif
        int32_t numRelayOnOff() const { return this->numRelayOnOff_; }
        int32_t& numRelayOnOff() { return this->numRelayOnOff_; }
        void numRelayOnOff(int32_t _val_) { this->numRelayOnOff_ = _val_; }
        const std::string& MACAddressSpeed1() const { return this->MACAddressSpeed1_; }
        std::string& MACAddressSpeed1() { return this->MACAddressSpeed1_; }
        void MACAddressSpeed1(const std::string& _val_) { this->MACAddressSpeed1_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressSpeed1(std::string&& _val_) { this->MACAddressSpeed1_ = _val_; }
#endif
        int32_t numRelaySpeed1() const { return this->numRelaySpeed1_; }
        int32_t& numRelaySpeed1() { return this->numRelaySpeed1_; }
        void numRelaySpeed1(int32_t _val_) { this->numRelaySpeed1_ = _val_; }
        const std::string& MACAddressSpeed2() const { return this->MACAddressSpeed2_; }
        std::string& MACAddressSpeed2() { return this->MACAddressSpeed2_; }
        void MACAddressSpeed2(const std::string& _val_) { this->MACAddressSpeed2_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressSpeed2(std::string&& _val_) { this->MACAddressSpeed2_ = _val_; }
#endif
        int32_t numRelaySpeed2() const { return this->numRelaySpeed2_; }
        int32_t& numRelaySpeed2() { return this->numRelaySpeed2_; }
        void numRelaySpeed2(int32_t _val_) { this->numRelaySpeed2_ = _val_; }
        const std::string& MACAddressSpeed3() const { return this->MACAddressSpeed3_; }
        std::string& MACAddressSpeed3() { return this->MACAddressSpeed3_; }
        void MACAddressSpeed3(const std::string& _val_) { this->MACAddressSpeed3_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressSpeed3(std::string&& _val_) { this->MACAddressSpeed3_ = _val_; }
#endif
        int32_t numRelaySpeed3() const { return this->numRelaySpeed3_; }
        int32_t& numRelaySpeed3() { return this->numRelaySpeed3_; }
        void numRelaySpeed3(int32_t _val_) { this->numRelaySpeed3_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connectedOnOff() const { return this->connectedOnOff_; }
        bool& connectedOnOff() { return this->connectedOnOff_; }
        void connectedOnOff(bool _val_) { this->connectedOnOff_ = _val_; }
        bool connectedSpeed1() const { return this->connectedSpeed1_; }
        bool& connectedSpeed1() { return this->connectedSpeed1_; }
        void connectedSpeed1(bool _val_) { this->connectedSpeed1_ = _val_; }
        bool connectedSpeed2() const { return this->connectedSpeed2_; }
        bool& connectedSpeed2() { return this->connectedSpeed2_; }
        void connectedSpeed2(bool _val_) { this->connectedSpeed2_ = _val_; }
        bool connectedSpeed3() const { return this->connectedSpeed3_; }
        bool& connectedSpeed3() { return this->connectedSpeed3_; }
        void connectedSpeed3(bool _val_) { this->connectedSpeed3_ = _val_; }
        int32_t statusOnOff() const { return this->statusOnOff_; }
        int32_t& statusOnOff() { return this->statusOnOff_; }
        void statusOnOff(int32_t _val_) { this->statusOnOff_ = _val_; }
        int32_t statusSpeed1() const { return this->statusSpeed1_; }
        int32_t& statusSpeed1() { return this->statusSpeed1_; }
        void statusSpeed1(int32_t _val_) { this->statusSpeed1_ = _val_; }
        int32_t statusSpeed2() const { return this->statusSpeed2_; }
        int32_t& statusSpeed2() { return this->statusSpeed2_; }
        void statusSpeed2(int32_t _val_) { this->statusSpeed2_ = _val_; }
        int32_t statusSpeed3() const { return this->statusSpeed3_; }
        int32_t& statusSpeed3() { return this->statusSpeed3_; }
        void statusSpeed3(int32_t _val_) { this->statusSpeed3_ = _val_; }
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::vector<std::string> & UUIDAmbiences() const { return this->UUIDAmbiences_; }
        std::vector<std::string> & UUIDAmbiences() { return this->UUIDAmbiences_; }
        void UUIDAmbiences(const std::vector<std::string> & _val_) { this->UUIDAmbiences_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbiences(std::vector<std::string> && _val_) { this->UUIDAmbiences_ = _val_; }
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
    };

    class CoolingFan OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        std::string UUID_;
        std::string MACAddress_;
        int32_t numRelay_;
        std::vector<Mind::Category>  categories_;
        bool connected_;
        int32_t status_;
        std::string description_;
        bool blocked_;
        std::string physicalLocationUUIDAmbience_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        CoolingFan() :
                numRelay_(0),
                connected_(false),
                status_(0),
                blocked_(false) {}

        explicit CoolingFan(
            const std::string& UUID,
            const std::string& MACAddress,
            int32_t numRelay,
            const std::vector<Mind::Category> & categories,
            bool connected,
            int32_t status,
            const std::string& description,
            bool blocked,
            const std::string& physicalLocationUUIDAmbience,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddress_(MACAddress),
                numRelay_(numRelay),
                categories_(categories),
                connected_(connected),
                status_(status),
                description_(description),
                blocked_(blocked),
                physicalLocationUUIDAmbience_(physicalLocationUUIDAmbience),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        CoolingFan(const CoolingFan &_other) : 
                UUID_(_other.UUID_),
                MACAddress_(_other.MACAddress_),
                numRelay_(_other.numRelay_),
                categories_(_other.categories_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                blocked_(_other.blocked_),
                physicalLocationUUIDAmbience_(_other.physicalLocationUUIDAmbience_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        CoolingFan(CoolingFan &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddress_(::std::move(_other.MACAddress_)),
                numRelay_(::std::move(_other.numRelay_)),
                categories_(::std::move(_other.categories_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                blocked_(::std::move(_other.blocked_)),
                physicalLocationUUIDAmbience_(::std::move(_other.physicalLocationUUIDAmbience_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        CoolingFan& operator=(CoolingFan &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddress_ = ::std::move(_other.MACAddress_);
                numRelay_ = ::std::move(_other.numRelay_);
                categories_ = ::std::move(_other.categories_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                blocked_ = ::std::move(_other.blocked_);
                physicalLocationUUIDAmbience_ = ::std::move(_other.physicalLocationUUIDAmbience_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        CoolingFan& operator=(const CoolingFan &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddress_ = _other.MACAddress_;
                numRelay_ = _other.numRelay_;
                categories_ = _other.categories_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                blocked_ = _other.blocked_;
                physicalLocationUUIDAmbience_ = _other.physicalLocationUUIDAmbience_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const CoolingFan& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddress_ == _other.MACAddress_ &&
                numRelay_ == _other.numRelay_ &&
                categories_ == _other.categories_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                blocked_ == _other.blocked_ &&
                physicalLocationUUIDAmbience_ == _other.physicalLocationUUIDAmbience_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const CoolingFan& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddress() const { return this->MACAddress_; }
        std::string& MACAddress() { return this->MACAddress_; }
        void MACAddress(const std::string& _val_) { this->MACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddress(std::string&& _val_) { this->MACAddress_ = _val_; }
#endif
        int32_t numRelay() const { return this->numRelay_; }
        int32_t& numRelay() { return this->numRelay_; }
        void numRelay(int32_t _val_) { this->numRelay_ = _val_; }
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        int32_t status() const { return this->status_; }
        int32_t& status() { return this->status_; }
        void status(int32_t _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        bool blocked() const { return this->blocked_; }
        bool& blocked() { return this->blocked_; }
        void blocked(bool _val_) { this->blocked_ = _val_; }
        const std::string& physicalLocationUUIDAmbience() const { return this->physicalLocationUUIDAmbience_; }
        std::string& physicalLocationUUIDAmbience() { return this->physicalLocationUUIDAmbience_; }
        void physicalLocationUUIDAmbience(const std::string& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void physicalLocationUUIDAmbience(std::string&& _val_) { this->physicalLocationUUIDAmbience_ = _val_; }
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
    };

    class HarmonySplit OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        typedef std::vector<std::string>  _UUIDAmbience_seq;

        std::string UUID_;
        std::string IPAddress_;
        std::string description_;
        std::vector<Mind::Category>  categories_;
        int32_t temperature_;
        bool deumidifica_;
        int32_t speed_;
        int32_t airOrientation_;
        std::vector<std::string>  UUIDAmbience_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        HarmonySplit() :
                temperature_(0),
                deumidifica_(false),
                speed_(0),
                airOrientation_(0) {}

        explicit HarmonySplit(
            const std::string& UUID,
            const std::string& IPAddress,
            const std::string& description,
            const std::vector<Mind::Category> & categories,
            int32_t temperature,
            bool deumidifica,
            int32_t speed,
            int32_t airOrientation,
            const std::vector<std::string> & UUIDAmbience,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                IPAddress_(IPAddress),
                description_(description),
                categories_(categories),
                temperature_(temperature),
                deumidifica_(deumidifica),
                speed_(speed),
                airOrientation_(airOrientation),
                UUIDAmbience_(UUIDAmbience),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        HarmonySplit(const HarmonySplit &_other) : 
                UUID_(_other.UUID_),
                IPAddress_(_other.IPAddress_),
                description_(_other.description_),
                categories_(_other.categories_),
                temperature_(_other.temperature_),
                deumidifica_(_other.deumidifica_),
                speed_(_other.speed_),
                airOrientation_(_other.airOrientation_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        HarmonySplit(HarmonySplit &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                IPAddress_(::std::move(_other.IPAddress_)),
                description_(::std::move(_other.description_)),
                categories_(::std::move(_other.categories_)),
                temperature_(::std::move(_other.temperature_)),
                deumidifica_(::std::move(_other.deumidifica_)),
                speed_(::std::move(_other.speed_)),
                airOrientation_(::std::move(_other.airOrientation_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        HarmonySplit& operator=(HarmonySplit &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                IPAddress_ = ::std::move(_other.IPAddress_);
                description_ = ::std::move(_other.description_);
                categories_ = ::std::move(_other.categories_);
                temperature_ = ::std::move(_other.temperature_);
                deumidifica_ = ::std::move(_other.deumidifica_);
                speed_ = ::std::move(_other.speed_);
                airOrientation_ = ::std::move(_other.airOrientation_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        HarmonySplit& operator=(const HarmonySplit &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                IPAddress_ = _other.IPAddress_;
                description_ = _other.description_;
                categories_ = _other.categories_;
                temperature_ = _other.temperature_;
                deumidifica_ = _other.deumidifica_;
                speed_ = _other.speed_;
                airOrientation_ = _other.airOrientation_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const HarmonySplit& _other) const
        {
            return UUID_ == _other.UUID_ &&
                IPAddress_ == _other.IPAddress_ &&
                description_ == _other.description_ &&
                categories_ == _other.categories_ &&
                temperature_ == _other.temperature_ &&
                deumidifica_ == _other.deumidifica_ &&
                speed_ == _other.speed_ &&
                airOrientation_ == _other.airOrientation_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const HarmonySplit& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& IPAddress() const { return this->IPAddress_; }
        std::string& IPAddress() { return this->IPAddress_; }
        void IPAddress(const std::string& _val_) { this->IPAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void IPAddress(std::string&& _val_) { this->IPAddress_ = _val_; }
#endif
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        int32_t temperature() const { return this->temperature_; }
        int32_t& temperature() { return this->temperature_; }
        void temperature(int32_t _val_) { this->temperature_ = _val_; }
        bool deumidifica() const { return this->deumidifica_; }
        bool& deumidifica() { return this->deumidifica_; }
        void deumidifica(bool _val_) { this->deumidifica_ = _val_; }
        int32_t speed() const { return this->speed_; }
        int32_t& speed() { return this->speed_; }
        void speed(int32_t _val_) { this->speed_ = _val_; }
        int32_t airOrientation() const { return this->airOrientation_; }
        int32_t& airOrientation() { return this->airOrientation_; }
        void airOrientation(int32_t _val_) { this->airOrientation_ = _val_; }
        const std::vector<std::string> & UUIDAmbience() const { return this->UUIDAmbience_; }
        std::vector<std::string> & UUIDAmbience() { return this->UUIDAmbience_; }
        void UUIDAmbience(const std::vector<std::string> & _val_) { this->UUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbience(std::vector<std::string> && _val_) { this->UUIDAmbience_ = _val_; }
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

    class Termosifone OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::Category>  _categories_seq;

        typedef std::vector<std::string>  _UUIDAmbience_seq;

        std::string UUID_;
        std::string MACAddressBT_;
        std::vector<Mind::Category>  categories_;
        double batteryStatus_;
        bool connected_;
        bool status_;
        std::string description_;
        std::vector<std::string>  UUIDAmbience_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Termosifone() :
                batteryStatus_(0.0),
                connected_(false),
                status_(false) {}

        explicit Termosifone(
            const std::string& UUID,
            const std::string& MACAddressBT,
            const std::vector<Mind::Category> & categories,
            double batteryStatus,
            bool connected,
            bool status,
            const std::string& description,
            const std::vector<std::string> & UUIDAmbience,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                UUID_(UUID),
                MACAddressBT_(MACAddressBT),
                categories_(categories),
                batteryStatus_(batteryStatus),
                connected_(connected),
                status_(status),
                description_(description),
                UUIDAmbience_(UUIDAmbience),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Termosifone(const Termosifone &_other) : 
                UUID_(_other.UUID_),
                MACAddressBT_(_other.MACAddressBT_),
                categories_(_other.categories_),
                batteryStatus_(_other.batteryStatus_),
                connected_(_other.connected_),
                status_(_other.status_),
                description_(_other.description_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Termosifone(Termosifone &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                MACAddressBT_(::std::move(_other.MACAddressBT_)),
                categories_(::std::move(_other.categories_)),
                batteryStatus_(::std::move(_other.batteryStatus_)),
                connected_(::std::move(_other.connected_)),
                status_(::std::move(_other.status_)),
                description_(::std::move(_other.description_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Termosifone& operator=(Termosifone &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                MACAddressBT_ = ::std::move(_other.MACAddressBT_);
                categories_ = ::std::move(_other.categories_);
                batteryStatus_ = ::std::move(_other.batteryStatus_);
                connected_ = ::std::move(_other.connected_);
                status_ = ::std::move(_other.status_);
                description_ = ::std::move(_other.description_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Termosifone& operator=(const Termosifone &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                MACAddressBT_ = _other.MACAddressBT_;
                categories_ = _other.categories_;
                batteryStatus_ = _other.batteryStatus_;
                connected_ = _other.connected_;
                status_ = _other.status_;
                description_ = _other.description_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Termosifone& _other) const
        {
            return UUID_ == _other.UUID_ &&
                MACAddressBT_ == _other.MACAddressBT_ &&
                categories_ == _other.categories_ &&
                batteryStatus_ == _other.batteryStatus_ &&
                connected_ == _other.connected_ &&
                status_ == _other.status_ &&
                description_ == _other.description_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Termosifone& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& MACAddressBT() const { return this->MACAddressBT_; }
        std::string& MACAddressBT() { return this->MACAddressBT_; }
        void MACAddressBT(const std::string& _val_) { this->MACAddressBT_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void MACAddressBT(std::string&& _val_) { this->MACAddressBT_ = _val_; }
#endif
        const std::vector<Mind::Category> & categories() const { return this->categories_; }
        std::vector<Mind::Category> & categories() { return this->categories_; }
        void categories(const std::vector<Mind::Category> & _val_) { this->categories_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void categories(std::vector<Mind::Category> && _val_) { this->categories_ = _val_; }
#endif
        double batteryStatus() const { return this->batteryStatus_; }
        double& batteryStatus() { return this->batteryStatus_; }
        void batteryStatus(double _val_) { this->batteryStatus_ = _val_; }
        bool connected() const { return this->connected_; }
        bool& connected() { return this->connected_; }
        void connected(bool _val_) { this->connected_ = _val_; }
        bool status() const { return this->status_; }
        bool& status() { return this->status_; }
        void status(bool _val_) { this->status_ = _val_; }
        const std::string& description() const { return this->description_; }
        std::string& description() { return this->description_; }
        void description(const std::string& _val_) { this->description_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void description(std::string&& _val_) { this->description_ = _val_; }
#endif
        const std::vector<std::string> & UUIDAmbience() const { return this->UUIDAmbience_; }
        std::vector<std::string> & UUIDAmbience() { return this->UUIDAmbience_; }
        void UUIDAmbience(const std::vector<std::string> & _val_) { this->UUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbience(std::vector<std::string> && _val_) { this->UUIDAmbience_ = _val_; }
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

}

#endif /* _ITEMS_H_ */
