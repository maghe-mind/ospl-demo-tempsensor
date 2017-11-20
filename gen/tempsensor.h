#ifndef _TEMPSENSOR_H_
#define _TEMPSENSOR_H_

#include <dds/core/ddscore.hpp>

OSPL_ENUM TemperatureScale {
    CELSIUS,
    KELVIN,
    FAHRENHEIT
};

class TempSensorType OSPL_DDS_FINAL
{
public:
    std::string UUID_;
    float temp_;
    float hum_;
    TemperatureScale scale_;

public:
    TempSensorType() :
            temp_(0.0f),
            hum_(0.0f),
            scale_(OSPL_ENUM_LABEL(,TemperatureScale,CELSIUS)) {}

    explicit TempSensorType(
        const std::string& UUID,
        float temp,
        float hum,
        TemperatureScale scale) : 
            UUID_(UUID),
            temp_(temp),
            hum_(hum),
            scale_(scale) {}

    TempSensorType(const TempSensorType &_other) : 
            UUID_(_other.UUID_),
            temp_(_other.temp_),
            hum_(_other.hum_),
            scale_(_other.scale_) {}

#ifdef OSPL_DDS_CXX11
    TempSensorType(TempSensorType &&_other) : 
            UUID_(::std::move(_other.UUID_)),
            temp_(::std::move(_other.temp_)),
            hum_(::std::move(_other.hum_)),
            scale_(::std::move(_other.scale_)) {}

    TempSensorType& operator=(TempSensorType &&_other)
    {
        if (this != &_other) {
            UUID_ = ::std::move(_other.UUID_);
            temp_ = ::std::move(_other.temp_);
            hum_ = ::std::move(_other.hum_);
            scale_ = ::std::move(_other.scale_);
        }
        return *this;
    }
#endif

    TempSensorType& operator=(const TempSensorType &_other)
    {
        if (this != &_other) {
            UUID_ = _other.UUID_;
            temp_ = _other.temp_;
            hum_ = _other.hum_;
            scale_ = _other.scale_;
        }
        return *this;
    }

    bool operator==(const TempSensorType& _other) const
    {
        return UUID_ == _other.UUID_ &&
            temp_ == _other.temp_ &&
            hum_ == _other.hum_ &&
            scale_ == _other.scale_;
    }

    bool operator!=(const TempSensorType& _other) const
    {
        return !(*this == _other);
    }

    const std::string& UUID() const { return this->UUID_; }
    std::string& UUID() { return this->UUID_; }
    void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
    void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
    float temp() const { return this->temp_; }
    float& temp() { return this->temp_; }
    void temp(float _val_) { this->temp_ = _val_; }
    float hum() const { return this->hum_; }
    float& hum() { return this->hum_; }
    void hum(float _val_) { this->hum_ = _val_; }
    TemperatureScale scale() const { return this->scale_; }
    TemperatureScale& scale() { return this->scale_; }
    void scale(TemperatureScale _val_) { this->scale_ = _val_; }
};

#endif /* _TEMPSENSOR_H_ */
