#ifndef _SMARTCOMMAND_H_
#define _SMARTCOMMAND_H_

#include <dds/core/ddscore.hpp>
#include "Commons.h"

namespace Mind
{
    class SmartCommand OSPL_DDS_FINAL
    {
    public:
        Mind::SmartCommandType commandType_;
        int32_t position_;

    public:
        SmartCommand() :
                commandType_(OSPL_ENUM_LABEL(Mind,SmartCommandType,SMART_COMMAND_LIGHTS)),
                position_(0) {}

        explicit SmartCommand(
            Mind::SmartCommandType commandType,
            int32_t position) : 
                commandType_(commandType),
                position_(position) {}

        SmartCommand(const SmartCommand &_other) : 
                commandType_(_other.commandType_),
                position_(_other.position_) {}

#ifdef OSPL_DDS_CXX11
        SmartCommand(SmartCommand &&_other) : 
                commandType_(::std::move(_other.commandType_)),
                position_(::std::move(_other.position_)) {}

        SmartCommand& operator=(SmartCommand &&_other)
        {
            if (this != &_other) {
                commandType_ = ::std::move(_other.commandType_);
                position_ = ::std::move(_other.position_);
            }
            return *this;
        }
#endif

        SmartCommand& operator=(const SmartCommand &_other)
        {
            if (this != &_other) {
                commandType_ = _other.commandType_;
                position_ = _other.position_;
            }
            return *this;
        }

        bool operator==(const SmartCommand& _other) const
        {
            return commandType_ == _other.commandType_ &&
                position_ == _other.position_;
        }

        bool operator!=(const SmartCommand& _other) const
        {
            return !(*this == _other);
        }

        Mind::SmartCommandType commandType() const { return this->commandType_; }
        Mind::SmartCommandType& commandType() { return this->commandType_; }
        void commandType(Mind::SmartCommandType _val_) { this->commandType_ = _val_; }
        int32_t position() const { return this->position_; }
        int32_t& position() { return this->position_; }
        void position(int32_t _val_) { this->position_ = _val_; }
    };

    class Ambience_SmartCommandSettings OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::SmartCommand>  _smartCommands_seq;

        std::vector<Mind::SmartCommand>  smartCommands_;
        std::string UUIDAmbience_;

    public:
        Ambience_SmartCommandSettings() {}

        explicit Ambience_SmartCommandSettings(
            const std::vector<Mind::SmartCommand> & smartCommands,
            const std::string& UUIDAmbience) : 
                smartCommands_(smartCommands),
                UUIDAmbience_(UUIDAmbience) {}

        Ambience_SmartCommandSettings(const Ambience_SmartCommandSettings &_other) : 
                smartCommands_(_other.smartCommands_),
                UUIDAmbience_(_other.UUIDAmbience_) {}

#ifdef OSPL_DDS_CXX11
        Ambience_SmartCommandSettings(Ambience_SmartCommandSettings &&_other) : 
                smartCommands_(::std::move(_other.smartCommands_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)) {}

        Ambience_SmartCommandSettings& operator=(Ambience_SmartCommandSettings &&_other)
        {
            if (this != &_other) {
                smartCommands_ = ::std::move(_other.smartCommands_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
            }
            return *this;
        }
#endif

        Ambience_SmartCommandSettings& operator=(const Ambience_SmartCommandSettings &_other)
        {
            if (this != &_other) {
                smartCommands_ = _other.smartCommands_;
                UUIDAmbience_ = _other.UUIDAmbience_;
            }
            return *this;
        }

        bool operator==(const Ambience_SmartCommandSettings& _other) const
        {
            return smartCommands_ == _other.smartCommands_ &&
                UUIDAmbience_ == _other.UUIDAmbience_;
        }

        bool operator!=(const Ambience_SmartCommandSettings& _other) const
        {
            return !(*this == _other);
        }

        const std::vector<Mind::SmartCommand> & smartCommands() const { return this->smartCommands_; }
        std::vector<Mind::SmartCommand> & smartCommands() { return this->smartCommands_; }
        void smartCommands(const std::vector<Mind::SmartCommand> & _val_) { this->smartCommands_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void smartCommands(std::vector<Mind::SmartCommand> && _val_) { this->smartCommands_ = _val_; }
#endif
        const std::string& UUIDAmbience() const { return this->UUIDAmbience_; }
        std::string& UUIDAmbience() { return this->UUIDAmbience_; }
        void UUIDAmbience(const std::string& _val_) { this->UUIDAmbience_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDAmbience(std::string&& _val_) { this->UUIDAmbience_ = _val_; }
#endif
    };

    class Command_Trigger_SmartCommand OSPL_DDS_FINAL
    {
    public:
        Mind::SmartCommandType smartCommand_;
        std::string command_;
        std::string UUIDAmbience_;
        std::string UUIDRoom_;
        std::string UUIDFloor_;
        std::string UUIDHouse_;

    public:
        Command_Trigger_SmartCommand() :
                smartCommand_(OSPL_ENUM_LABEL(Mind,SmartCommandType,SMART_COMMAND_LIGHTS)) {}

        explicit Command_Trigger_SmartCommand(
            Mind::SmartCommandType smartCommand,
            const std::string& command,
            const std::string& UUIDAmbience,
            const std::string& UUIDRoom,
            const std::string& UUIDFloor,
            const std::string& UUIDHouse) : 
                smartCommand_(smartCommand),
                command_(command),
                UUIDAmbience_(UUIDAmbience),
                UUIDRoom_(UUIDRoom),
                UUIDFloor_(UUIDFloor),
                UUIDHouse_(UUIDHouse) {}

        Command_Trigger_SmartCommand(const Command_Trigger_SmartCommand &_other) : 
                smartCommand_(_other.smartCommand_),
                command_(_other.command_),
                UUIDAmbience_(_other.UUIDAmbience_),
                UUIDRoom_(_other.UUIDRoom_),
                UUIDFloor_(_other.UUIDFloor_),
                UUIDHouse_(_other.UUIDHouse_) {}

#ifdef OSPL_DDS_CXX11
        Command_Trigger_SmartCommand(Command_Trigger_SmartCommand &&_other) : 
                smartCommand_(::std::move(_other.smartCommand_)),
                command_(::std::move(_other.command_)),
                UUIDAmbience_(::std::move(_other.UUIDAmbience_)),
                UUIDRoom_(::std::move(_other.UUIDRoom_)),
                UUIDFloor_(::std::move(_other.UUIDFloor_)),
                UUIDHouse_(::std::move(_other.UUIDHouse_)) {}

        Command_Trigger_SmartCommand& operator=(Command_Trigger_SmartCommand &&_other)
        {
            if (this != &_other) {
                smartCommand_ = ::std::move(_other.smartCommand_);
                command_ = ::std::move(_other.command_);
                UUIDAmbience_ = ::std::move(_other.UUIDAmbience_);
                UUIDRoom_ = ::std::move(_other.UUIDRoom_);
                UUIDFloor_ = ::std::move(_other.UUIDFloor_);
                UUIDHouse_ = ::std::move(_other.UUIDHouse_);
            }
            return *this;
        }
#endif

        Command_Trigger_SmartCommand& operator=(const Command_Trigger_SmartCommand &_other)
        {
            if (this != &_other) {
                smartCommand_ = _other.smartCommand_;
                command_ = _other.command_;
                UUIDAmbience_ = _other.UUIDAmbience_;
                UUIDRoom_ = _other.UUIDRoom_;
                UUIDFloor_ = _other.UUIDFloor_;
                UUIDHouse_ = _other.UUIDHouse_;
            }
            return *this;
        }

        bool operator==(const Command_Trigger_SmartCommand& _other) const
        {
            return smartCommand_ == _other.smartCommand_ &&
                command_ == _other.command_ &&
                UUIDAmbience_ == _other.UUIDAmbience_ &&
                UUIDRoom_ == _other.UUIDRoom_ &&
                UUIDFloor_ == _other.UUIDFloor_ &&
                UUIDHouse_ == _other.UUIDHouse_;
        }

        bool operator!=(const Command_Trigger_SmartCommand& _other) const
        {
            return !(*this == _other);
        }

        Mind::SmartCommandType smartCommand() const { return this->smartCommand_; }
        Mind::SmartCommandType& smartCommand() { return this->smartCommand_; }
        void smartCommand(Mind::SmartCommandType _val_) { this->smartCommand_ = _val_; }
        const std::string& command() const { return this->command_; }
        std::string& command() { return this->command_; }
        void command(const std::string& _val_) { this->command_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void command(std::string&& _val_) { this->command_ = _val_; }
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

}

#endif /* _SMARTCOMMAND_H_ */
