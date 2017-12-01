#ifndef _HOUSEUSER_H_
#define _HOUSEUSER_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    class HouseUser OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _UUIDHouses_seq;

        std::string UUID_;
        std::vector<std::string>  UUIDHouses_;

    public:
        HouseUser() {}

        explicit HouseUser(
            const std::string& UUID,
            const std::vector<std::string> & UUIDHouses) : 
                UUID_(UUID),
                UUIDHouses_(UUIDHouses) {}

        HouseUser(const HouseUser &_other) : 
                UUID_(_other.UUID_),
                UUIDHouses_(_other.UUIDHouses_) {}

#ifdef OSPL_DDS_CXX11
        HouseUser(HouseUser &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                UUIDHouses_(::std::move(_other.UUIDHouses_)) {}

        HouseUser& operator=(HouseUser &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                UUIDHouses_ = ::std::move(_other.UUIDHouses_);
            }
            return *this;
        }
#endif

        HouseUser& operator=(const HouseUser &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                UUIDHouses_ = _other.UUIDHouses_;
            }
            return *this;
        }

        bool operator==(const HouseUser& _other) const
        {
            return UUID_ == _other.UUID_ &&
                UUIDHouses_ == _other.UUIDHouses_;
        }

        bool operator!=(const HouseUser& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::vector<std::string> & UUIDHouses() const { return this->UUIDHouses_; }
        std::vector<std::string> & UUIDHouses() { return this->UUIDHouses_; }
        void UUIDHouses(const std::vector<std::string> & _val_) { this->UUIDHouses_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUIDHouses(std::vector<std::string> && _val_) { this->UUIDHouses_ = _val_; }
#endif
    };

}

#endif /* _HOUSEUSER_H_ */
