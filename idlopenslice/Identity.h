#ifndef _IDENTITY_H_
#define _IDENTITY_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    class Identity OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _clusterUUID_seq;

        std::string UUID_;
        std::vector<std::string>  clusterUUID_;

    public:
        Identity() {}

        explicit Identity(
            const std::string& UUID,
            const std::vector<std::string> & clusterUUID) : 
                UUID_(UUID),
                clusterUUID_(clusterUUID) {}

        Identity(const Identity &_other) : 
                UUID_(_other.UUID_),
                clusterUUID_(_other.clusterUUID_) {}

#ifdef OSPL_DDS_CXX11
        Identity(Identity &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                clusterUUID_(::std::move(_other.clusterUUID_)) {}

        Identity& operator=(Identity &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                clusterUUID_ = ::std::move(_other.clusterUUID_);
            }
            return *this;
        }
#endif

        Identity& operator=(const Identity &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                clusterUUID_ = _other.clusterUUID_;
            }
            return *this;
        }

        bool operator==(const Identity& _other) const
        {
            return UUID_ == _other.UUID_ &&
                clusterUUID_ == _other.clusterUUID_;
        }

        bool operator!=(const Identity& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<std::string> & clusterUUID() const { return this->clusterUUID_; }
        std::vector<std::string> & clusterUUID() { return this->clusterUUID_; }
        void clusterUUID(const std::vector<std::string> & _val_) { this->clusterUUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void clusterUUID(std::vector<std::string> && _val_) { this->clusterUUID_ = _val_; }
#endif
    };

    class Identity_Command OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string command_;

    public:
        Identity_Command() {}

        explicit Identity_Command(
            const std::string& UUID,
            const std::string& command) : 
                UUID_(UUID),
                command_(command) {}

        Identity_Command(const Identity_Command &_other) : 
                UUID_(_other.UUID_),
                command_(_other.command_) {}

#ifdef OSPL_DDS_CXX11
        Identity_Command(Identity_Command &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                command_(::std::move(_other.command_)) {}

        Identity_Command& operator=(Identity_Command &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                command_ = ::std::move(_other.command_);
            }
            return *this;
        }
#endif

        Identity_Command& operator=(const Identity_Command &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                command_ = _other.command_;
            }
            return *this;
        }

        bool operator==(const Identity_Command& _other) const
        {
            return UUID_ == _other.UUID_ &&
                command_ == _other.command_;
        }

        bool operator!=(const Identity_Command& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& command() const { return this->command_; }
        std::string& command() { return this->command_; }
        void command(const std::string& _val_) { this->command_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void command(std::string&& _val_) { this->command_ = _val_; }
#endif
    };

}

#endif /* _IDENTITY_H_ */
