#ifndef _USER_H_
#define _USER_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    OSPL_ENUM UserRole {
        USER_ROLE_ADMIN,
        USER_ROLE_RESIDENT,
        USER_ROLE_GUEST
    };

    class UserDeny OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string voipID_;
        std::string pinCode_;
        int32_t accessCount_;
        std::string bluetoothMACAddress_;
        std::string pinCodeMode_;
        std::string pinExpirationDate_;
        std::string pinMaxUsage_;
        bool geofence_;
        bool doNotDisturb_;

    public:
        UserDeny() :
                accessCount_(0),
                geofence_(false),
                doNotDisturb_(false) {}

        explicit UserDeny(
            const std::string& UUID,
            const std::string& voipID,
            const std::string& pinCode,
            int32_t accessCount,
            const std::string& bluetoothMACAddress,
            const std::string& pinCodeMode,
            const std::string& pinExpirationDate,
            const std::string& pinMaxUsage,
            bool geofence,
            bool doNotDisturb) : 
                UUID_(UUID),
                voipID_(voipID),
                pinCode_(pinCode),
                accessCount_(accessCount),
                bluetoothMACAddress_(bluetoothMACAddress),
                pinCodeMode_(pinCodeMode),
                pinExpirationDate_(pinExpirationDate),
                pinMaxUsage_(pinMaxUsage),
                geofence_(geofence),
                doNotDisturb_(doNotDisturb) {}

        UserDeny(const UserDeny &_other) : 
                UUID_(_other.UUID_),
                voipID_(_other.voipID_),
                pinCode_(_other.pinCode_),
                accessCount_(_other.accessCount_),
                bluetoothMACAddress_(_other.bluetoothMACAddress_),
                pinCodeMode_(_other.pinCodeMode_),
                pinExpirationDate_(_other.pinExpirationDate_),
                pinMaxUsage_(_other.pinMaxUsage_),
                geofence_(_other.geofence_),
                doNotDisturb_(_other.doNotDisturb_) {}

#ifdef OSPL_DDS_CXX11
        UserDeny(UserDeny &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                voipID_(::std::move(_other.voipID_)),
                pinCode_(::std::move(_other.pinCode_)),
                accessCount_(::std::move(_other.accessCount_)),
                bluetoothMACAddress_(::std::move(_other.bluetoothMACAddress_)),
                pinCodeMode_(::std::move(_other.pinCodeMode_)),
                pinExpirationDate_(::std::move(_other.pinExpirationDate_)),
                pinMaxUsage_(::std::move(_other.pinMaxUsage_)),
                geofence_(::std::move(_other.geofence_)),
                doNotDisturb_(::std::move(_other.doNotDisturb_)) {}

        UserDeny& operator=(UserDeny &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                voipID_ = ::std::move(_other.voipID_);
                pinCode_ = ::std::move(_other.pinCode_);
                accessCount_ = ::std::move(_other.accessCount_);
                bluetoothMACAddress_ = ::std::move(_other.bluetoothMACAddress_);
                pinCodeMode_ = ::std::move(_other.pinCodeMode_);
                pinExpirationDate_ = ::std::move(_other.pinExpirationDate_);
                pinMaxUsage_ = ::std::move(_other.pinMaxUsage_);
                geofence_ = ::std::move(_other.geofence_);
                doNotDisturb_ = ::std::move(_other.doNotDisturb_);
            }
            return *this;
        }
#endif

        UserDeny& operator=(const UserDeny &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                voipID_ = _other.voipID_;
                pinCode_ = _other.pinCode_;
                accessCount_ = _other.accessCount_;
                bluetoothMACAddress_ = _other.bluetoothMACAddress_;
                pinCodeMode_ = _other.pinCodeMode_;
                pinExpirationDate_ = _other.pinExpirationDate_;
                pinMaxUsage_ = _other.pinMaxUsage_;
                geofence_ = _other.geofence_;
                doNotDisturb_ = _other.doNotDisturb_;
            }
            return *this;
        }

        bool operator==(const UserDeny& _other) const
        {
            return UUID_ == _other.UUID_ &&
                voipID_ == _other.voipID_ &&
                pinCode_ == _other.pinCode_ &&
                accessCount_ == _other.accessCount_ &&
                bluetoothMACAddress_ == _other.bluetoothMACAddress_ &&
                pinCodeMode_ == _other.pinCodeMode_ &&
                pinExpirationDate_ == _other.pinExpirationDate_ &&
                pinMaxUsage_ == _other.pinMaxUsage_ &&
                geofence_ == _other.geofence_ &&
                doNotDisturb_ == _other.doNotDisturb_;
        }

        bool operator!=(const UserDeny& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& voipID() const { return this->voipID_; }
        std::string& voipID() { return this->voipID_; }
        void voipID(const std::string& _val_) { this->voipID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void voipID(std::string&& _val_) { this->voipID_ = _val_; }
#endif
        const std::string& pinCode() const { return this->pinCode_; }
        std::string& pinCode() { return this->pinCode_; }
        void pinCode(const std::string& _val_) { this->pinCode_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void pinCode(std::string&& _val_) { this->pinCode_ = _val_; }
#endif
        int32_t accessCount() const { return this->accessCount_; }
        int32_t& accessCount() { return this->accessCount_; }
        void accessCount(int32_t _val_) { this->accessCount_ = _val_; }
        const std::string& bluetoothMACAddress() const { return this->bluetoothMACAddress_; }
        std::string& bluetoothMACAddress() { return this->bluetoothMACAddress_; }
        void bluetoothMACAddress(const std::string& _val_) { this->bluetoothMACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void bluetoothMACAddress(std::string&& _val_) { this->bluetoothMACAddress_ = _val_; }
#endif
        const std::string& pinCodeMode() const { return this->pinCodeMode_; }
        std::string& pinCodeMode() { return this->pinCodeMode_; }
        void pinCodeMode(const std::string& _val_) { this->pinCodeMode_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void pinCodeMode(std::string&& _val_) { this->pinCodeMode_ = _val_; }
#endif
        const std::string& pinExpirationDate() const { return this->pinExpirationDate_; }
        std::string& pinExpirationDate() { return this->pinExpirationDate_; }
        void pinExpirationDate(const std::string& _val_) { this->pinExpirationDate_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void pinExpirationDate(std::string&& _val_) { this->pinExpirationDate_ = _val_; }
#endif
        const std::string& pinMaxUsage() const { return this->pinMaxUsage_; }
        std::string& pinMaxUsage() { return this->pinMaxUsage_; }
        void pinMaxUsage(const std::string& _val_) { this->pinMaxUsage_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void pinMaxUsage(std::string&& _val_) { this->pinMaxUsage_ = _val_; }
#endif
        bool geofence() const { return this->geofence_; }
        bool& geofence() { return this->geofence_; }
        void geofence(bool _val_) { this->geofence_ = _val_; }
        bool doNotDisturb() const { return this->doNotDisturb_; }
        bool& doNotDisturb() { return this->doNotDisturb_; }
        void doNotDisturb(bool _val_) { this->doNotDisturb_ = _val_; }
    };

    class User OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string nickname_;
        std::string image_;
        Mind::UserRole role_;

    public:
        User() :
                role_(OSPL_ENUM_LABEL(Mind,UserRole,USER_ROLE_ADMIN)) {}

        explicit User(
            const std::string& UUID,
            const std::string& nickname,
            const std::string& image,
            Mind::UserRole role) : 
                UUID_(UUID),
                nickname_(nickname),
                image_(image),
                role_(role) {}

        User(const User &_other) : 
                UUID_(_other.UUID_),
                nickname_(_other.nickname_),
                image_(_other.image_),
                role_(_other.role_) {}

#ifdef OSPL_DDS_CXX11
        User(User &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                nickname_(::std::move(_other.nickname_)),
                image_(::std::move(_other.image_)),
                role_(::std::move(_other.role_)) {}

        User& operator=(User &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                nickname_ = ::std::move(_other.nickname_);
                image_ = ::std::move(_other.image_);
                role_ = ::std::move(_other.role_);
            }
            return *this;
        }
#endif

        User& operator=(const User &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                nickname_ = _other.nickname_;
                image_ = _other.image_;
                role_ = _other.role_;
            }
            return *this;
        }

        bool operator==(const User& _other) const
        {
            return UUID_ == _other.UUID_ &&
                nickname_ == _other.nickname_ &&
                image_ == _other.image_ &&
                role_ == _other.role_;
        }

        bool operator!=(const User& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& nickname() const { return this->nickname_; }
        std::string& nickname() { return this->nickname_; }
        void nickname(const std::string& _val_) { this->nickname_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void nickname(std::string&& _val_) { this->nickname_ = _val_; }
#endif
        const std::string& image() const { return this->image_; }
        std::string& image() { return this->image_; }
        void image(const std::string& _val_) { this->image_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void image(std::string&& _val_) { this->image_ = _val_; }
#endif
        Mind::UserRole role() const { return this->role_; }
        Mind::UserRole& role() { return this->role_; }
        void role(Mind::UserRole _val_) { this->role_ = _val_; }
    };

}

#endif /* _USER_H_ */
