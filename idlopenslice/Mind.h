#ifndef _MIND_H_
#define _MIND_H_

#include <dds/core/ddscore.hpp>

namespace MindInternal
{
    class House OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        std::string address_;
        std::string city_;
        std::string zip_;
        std::string state_;
        std::string senderID_;

    public:
        House() {}

        explicit House(
            const std::string& UUID,
            const std::string& address,
            const std::string& city,
            const std::string& zip,
            const std::string& state,
            const std::string& senderID) : 
                UUID_(UUID),
                address_(address),
                city_(city),
                zip_(zip),
                state_(state),
                senderID_(senderID) {}

        House(const House &_other) : 
                UUID_(_other.UUID_),
                address_(_other.address_),
                city_(_other.city_),
                zip_(_other.zip_),
                state_(_other.state_),
                senderID_(_other.senderID_) {}

#ifdef OSPL_DDS_CXX11
        House(House &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                address_(::std::move(_other.address_)),
                city_(::std::move(_other.city_)),
                zip_(::std::move(_other.zip_)),
                state_(::std::move(_other.state_)),
                senderID_(::std::move(_other.senderID_)) {}

        House& operator=(House &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                address_ = ::std::move(_other.address_);
                city_ = ::std::move(_other.city_);
                zip_ = ::std::move(_other.zip_);
                state_ = ::std::move(_other.state_);
                senderID_ = ::std::move(_other.senderID_);
            }
            return *this;
        }
#endif

        House& operator=(const House &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                address_ = _other.address_;
                city_ = _other.city_;
                zip_ = _other.zip_;
                state_ = _other.state_;
                senderID_ = _other.senderID_;
            }
            return *this;
        }

        bool operator==(const House& _other) const
        {
            return UUID_ == _other.UUID_ &&
                address_ == _other.address_ &&
                city_ == _other.city_ &&
                zip_ == _other.zip_ &&
                state_ == _other.state_ &&
                senderID_ == _other.senderID_;
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
        const std::string& address() const { return this->address_; }
        std::string& address() { return this->address_; }
        void address(const std::string& _val_) { this->address_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void address(std::string&& _val_) { this->address_ = _val_; }
#endif
        const std::string& city() const { return this->city_; }
        std::string& city() { return this->city_; }
        void city(const std::string& _val_) { this->city_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void city(std::string&& _val_) { this->city_ = _val_; }
#endif
        const std::string& zip() const { return this->zip_; }
        std::string& zip() { return this->zip_; }
        void zip(const std::string& _val_) { this->zip_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void zip(std::string&& _val_) { this->zip_ = _val_; }
#endif
        const std::string& state() const { return this->state_; }
        std::string& state() { return this->state_; }
        void state(const std::string& _val_) { this->state_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void state(std::string&& _val_) { this->state_ = _val_; }
#endif
        const std::string& senderID() const { return this->senderID_; }
        std::string& senderID() { return this->senderID_; }
        void senderID(const std::string& _val_) { this->senderID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void senderID(std::string&& _val_) { this->senderID_ = _val_; }
#endif
    };

    class User OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _UUIDHouses_seq;

        std::string UUID_;
        std::string fiscalCode_;
        std::string name_;
        std::string surname_;
        std::string phoneNumber_;
        std::string gender_;
        std::string birthday_;
        std::string email_;
        std::string token_;
        std::string username_;
        std::string password_;
        std::string bluetoothMACAddress_;
        std::string voipID_;
        std::string recipientID_;
        bool gotCertificate_;
        std::vector<std::string>  UUIDHouses_;

    public:
        User() :
                gotCertificate_(false) {}

        explicit User(
            const std::string& UUID,
            const std::string& fiscalCode,
            const std::string& name,
            const std::string& surname,
            const std::string& phoneNumber,
            const std::string& gender,
            const std::string& birthday,
            const std::string& email,
            const std::string& token,
            const std::string& username,
            const std::string& password,
            const std::string& bluetoothMACAddress,
            const std::string& voipID,
            const std::string& recipientID,
            bool gotCertificate,
            const std::vector<std::string> & UUIDHouses) : 
                UUID_(UUID),
                fiscalCode_(fiscalCode),
                name_(name),
                surname_(surname),
                phoneNumber_(phoneNumber),
                gender_(gender),
                birthday_(birthday),
                email_(email),
                token_(token),
                username_(username),
                password_(password),
                bluetoothMACAddress_(bluetoothMACAddress),
                voipID_(voipID),
                recipientID_(recipientID),
                gotCertificate_(gotCertificate),
                UUIDHouses_(UUIDHouses) {}

        User(const User &_other) : 
                UUID_(_other.UUID_),
                fiscalCode_(_other.fiscalCode_),
                name_(_other.name_),
                surname_(_other.surname_),
                phoneNumber_(_other.phoneNumber_),
                gender_(_other.gender_),
                birthday_(_other.birthday_),
                email_(_other.email_),
                token_(_other.token_),
                username_(_other.username_),
                password_(_other.password_),
                bluetoothMACAddress_(_other.bluetoothMACAddress_),
                voipID_(_other.voipID_),
                recipientID_(_other.recipientID_),
                gotCertificate_(_other.gotCertificate_),
                UUIDHouses_(_other.UUIDHouses_) {}

#ifdef OSPL_DDS_CXX11
        User(User &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                fiscalCode_(::std::move(_other.fiscalCode_)),
                name_(::std::move(_other.name_)),
                surname_(::std::move(_other.surname_)),
                phoneNumber_(::std::move(_other.phoneNumber_)),
                gender_(::std::move(_other.gender_)),
                birthday_(::std::move(_other.birthday_)),
                email_(::std::move(_other.email_)),
                token_(::std::move(_other.token_)),
                username_(::std::move(_other.username_)),
                password_(::std::move(_other.password_)),
                bluetoothMACAddress_(::std::move(_other.bluetoothMACAddress_)),
                voipID_(::std::move(_other.voipID_)),
                recipientID_(::std::move(_other.recipientID_)),
                gotCertificate_(::std::move(_other.gotCertificate_)),
                UUIDHouses_(::std::move(_other.UUIDHouses_)) {}

        User& operator=(User &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                fiscalCode_ = ::std::move(_other.fiscalCode_);
                name_ = ::std::move(_other.name_);
                surname_ = ::std::move(_other.surname_);
                phoneNumber_ = ::std::move(_other.phoneNumber_);
                gender_ = ::std::move(_other.gender_);
                birthday_ = ::std::move(_other.birthday_);
                email_ = ::std::move(_other.email_);
                token_ = ::std::move(_other.token_);
                username_ = ::std::move(_other.username_);
                password_ = ::std::move(_other.password_);
                bluetoothMACAddress_ = ::std::move(_other.bluetoothMACAddress_);
                voipID_ = ::std::move(_other.voipID_);
                recipientID_ = ::std::move(_other.recipientID_);
                gotCertificate_ = ::std::move(_other.gotCertificate_);
                UUIDHouses_ = ::std::move(_other.UUIDHouses_);
            }
            return *this;
        }
#endif

        User& operator=(const User &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                fiscalCode_ = _other.fiscalCode_;
                name_ = _other.name_;
                surname_ = _other.surname_;
                phoneNumber_ = _other.phoneNumber_;
                gender_ = _other.gender_;
                birthday_ = _other.birthday_;
                email_ = _other.email_;
                token_ = _other.token_;
                username_ = _other.username_;
                password_ = _other.password_;
                bluetoothMACAddress_ = _other.bluetoothMACAddress_;
                voipID_ = _other.voipID_;
                recipientID_ = _other.recipientID_;
                gotCertificate_ = _other.gotCertificate_;
                UUIDHouses_ = _other.UUIDHouses_;
            }
            return *this;
        }

        bool operator==(const User& _other) const
        {
            return UUID_ == _other.UUID_ &&
                fiscalCode_ == _other.fiscalCode_ &&
                name_ == _other.name_ &&
                surname_ == _other.surname_ &&
                phoneNumber_ == _other.phoneNumber_ &&
                gender_ == _other.gender_ &&
                birthday_ == _other.birthday_ &&
                email_ == _other.email_ &&
                token_ == _other.token_ &&
                username_ == _other.username_ &&
                password_ == _other.password_ &&
                bluetoothMACAddress_ == _other.bluetoothMACAddress_ &&
                voipID_ == _other.voipID_ &&
                recipientID_ == _other.recipientID_ &&
                gotCertificate_ == _other.gotCertificate_ &&
                UUIDHouses_ == _other.UUIDHouses_;
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
        const std::string& fiscalCode() const { return this->fiscalCode_; }
        std::string& fiscalCode() { return this->fiscalCode_; }
        void fiscalCode(const std::string& _val_) { this->fiscalCode_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void fiscalCode(std::string&& _val_) { this->fiscalCode_ = _val_; }
#endif
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        const std::string& surname() const { return this->surname_; }
        std::string& surname() { return this->surname_; }
        void surname(const std::string& _val_) { this->surname_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void surname(std::string&& _val_) { this->surname_ = _val_; }
#endif
        const std::string& phoneNumber() const { return this->phoneNumber_; }
        std::string& phoneNumber() { return this->phoneNumber_; }
        void phoneNumber(const std::string& _val_) { this->phoneNumber_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void phoneNumber(std::string&& _val_) { this->phoneNumber_ = _val_; }
#endif
        const std::string& gender() const { return this->gender_; }
        std::string& gender() { return this->gender_; }
        void gender(const std::string& _val_) { this->gender_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void gender(std::string&& _val_) { this->gender_ = _val_; }
#endif
        const std::string& birthday() const { return this->birthday_; }
        std::string& birthday() { return this->birthday_; }
        void birthday(const std::string& _val_) { this->birthday_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void birthday(std::string&& _val_) { this->birthday_ = _val_; }
#endif
        const std::string& email() const { return this->email_; }
        std::string& email() { return this->email_; }
        void email(const std::string& _val_) { this->email_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void email(std::string&& _val_) { this->email_ = _val_; }
#endif
        const std::string& token() const { return this->token_; }
        std::string& token() { return this->token_; }
        void token(const std::string& _val_) { this->token_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void token(std::string&& _val_) { this->token_ = _val_; }
#endif
        const std::string& username() const { return this->username_; }
        std::string& username() { return this->username_; }
        void username(const std::string& _val_) { this->username_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void username(std::string&& _val_) { this->username_ = _val_; }
#endif
        const std::string& password() const { return this->password_; }
        std::string& password() { return this->password_; }
        void password(const std::string& _val_) { this->password_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void password(std::string&& _val_) { this->password_ = _val_; }
#endif
        const std::string& bluetoothMACAddress() const { return this->bluetoothMACAddress_; }
        std::string& bluetoothMACAddress() { return this->bluetoothMACAddress_; }
        void bluetoothMACAddress(const std::string& _val_) { this->bluetoothMACAddress_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void bluetoothMACAddress(std::string&& _val_) { this->bluetoothMACAddress_ = _val_; }
#endif
        const std::string& voipID() const { return this->voipID_; }
        std::string& voipID() { return this->voipID_; }
        void voipID(const std::string& _val_) { this->voipID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void voipID(std::string&& _val_) { this->voipID_ = _val_; }
#endif
        const std::string& recipientID() const { return this->recipientID_; }
        std::string& recipientID() { return this->recipientID_; }
        void recipientID(const std::string& _val_) { this->recipientID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void recipientID(std::string&& _val_) { this->recipientID_ = _val_; }
#endif
        bool gotCertificate() const { return this->gotCertificate_; }
        bool& gotCertificate() { return this->gotCertificate_; }
        void gotCertificate(bool _val_) { this->gotCertificate_ = _val_; }
        const std::vector<std::string> & UUIDHouses() const { return this->UUIDHouses_; }
        std::vector<std::string> & UUIDHouses() { return this->UUIDHouses_; }
        void UUIDHouses(const std::vector<std::string> & _val_) { this->UUIDHouses_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDHouses(std::vector<std::string> && _val_) { this->UUIDHouses_ = _val_; }
#endif
    };

}

#endif /* _MIND_H_ */
