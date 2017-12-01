#ifndef _FACE_H_
#define _FACE_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    OSPL_ENUM FaceDummyEndType {
        FACE_NOTHING,
        FACE_MODEL,
        FACE_UNKNOWN_MODEL
    };

    class Face OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<uint8_t>  _featureData_seq;

        typedef std::vector<uint8_t>  _imageData_seq;

        std::string UUID_;
        std::string appearanceUUID_;
        std::string oldClusterUUID_;
        std::string clusterUUID_;
        std::vector<uint8_t>  featureData_;
        std::vector<uint8_t>  imageData_;
        int32_t timestamp_;
        int32_t label_;
        bool isMedoid_;
        Mind::FaceDummyEndType endType_;

    public:
        Face() :
                timestamp_(0),
                label_(0),
                isMedoid_(false),
                endType_(OSPL_ENUM_LABEL(Mind,FaceDummyEndType,FACE_NOTHING)) {}

        explicit Face(
            const std::string& UUID,
            const std::string& appearanceUUID,
            const std::string& oldClusterUUID,
            const std::string& clusterUUID,
            const std::vector<uint8_t> & featureData,
            const std::vector<uint8_t> & imageData,
            int32_t timestamp,
            int32_t label,
            bool isMedoid,
            Mind::FaceDummyEndType endType) : 
                UUID_(UUID),
                appearanceUUID_(appearanceUUID),
                oldClusterUUID_(oldClusterUUID),
                clusterUUID_(clusterUUID),
                featureData_(featureData),
                imageData_(imageData),
                timestamp_(timestamp),
                label_(label),
                isMedoid_(isMedoid),
                endType_(endType) {}

        Face(const Face &_other) : 
                UUID_(_other.UUID_),
                appearanceUUID_(_other.appearanceUUID_),
                oldClusterUUID_(_other.oldClusterUUID_),
                clusterUUID_(_other.clusterUUID_),
                featureData_(_other.featureData_),
                imageData_(_other.imageData_),
                timestamp_(_other.timestamp_),
                label_(_other.label_),
                isMedoid_(_other.isMedoid_),
                endType_(_other.endType_) {}

#ifdef OSPL_DDS_CXX11
        Face(Face &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                appearanceUUID_(::std::move(_other.appearanceUUID_)),
                oldClusterUUID_(::std::move(_other.oldClusterUUID_)),
                clusterUUID_(::std::move(_other.clusterUUID_)),
                featureData_(::std::move(_other.featureData_)),
                imageData_(::std::move(_other.imageData_)),
                timestamp_(::std::move(_other.timestamp_)),
                label_(::std::move(_other.label_)),
                isMedoid_(::std::move(_other.isMedoid_)),
                endType_(::std::move(_other.endType_)) {}

        Face& operator=(Face &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                appearanceUUID_ = ::std::move(_other.appearanceUUID_);
                oldClusterUUID_ = ::std::move(_other.oldClusterUUID_);
                clusterUUID_ = ::std::move(_other.clusterUUID_);
                featureData_ = ::std::move(_other.featureData_);
                imageData_ = ::std::move(_other.imageData_);
                timestamp_ = ::std::move(_other.timestamp_);
                label_ = ::std::move(_other.label_);
                isMedoid_ = ::std::move(_other.isMedoid_);
                endType_ = ::std::move(_other.endType_);
            }
            return *this;
        }
#endif

        Face& operator=(const Face &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                appearanceUUID_ = _other.appearanceUUID_;
                oldClusterUUID_ = _other.oldClusterUUID_;
                clusterUUID_ = _other.clusterUUID_;
                featureData_ = _other.featureData_;
                imageData_ = _other.imageData_;
                timestamp_ = _other.timestamp_;
                label_ = _other.label_;
                isMedoid_ = _other.isMedoid_;
                endType_ = _other.endType_;
            }
            return *this;
        }

        bool operator==(const Face& _other) const
        {
            return UUID_ == _other.UUID_ &&
                appearanceUUID_ == _other.appearanceUUID_ &&
                oldClusterUUID_ == _other.oldClusterUUID_ &&
                clusterUUID_ == _other.clusterUUID_ &&
                featureData_ == _other.featureData_ &&
                imageData_ == _other.imageData_ &&
                timestamp_ == _other.timestamp_ &&
                label_ == _other.label_ &&
                isMedoid_ == _other.isMedoid_ &&
                endType_ == _other.endType_;
        }

        bool operator!=(const Face& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& appearanceUUID() const { return this->appearanceUUID_; }
        std::string& appearanceUUID() { return this->appearanceUUID_; }
        void appearanceUUID(const std::string& _val_) { this->appearanceUUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void appearanceUUID(std::string&& _val_) { this->appearanceUUID_ = _val_; }
#endif
        const std::string& oldClusterUUID() const { return this->oldClusterUUID_; }
        std::string& oldClusterUUID() { return this->oldClusterUUID_; }
        void oldClusterUUID(const std::string& _val_) { this->oldClusterUUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void oldClusterUUID(std::string&& _val_) { this->oldClusterUUID_ = _val_; }
#endif
        const std::string& clusterUUID() const { return this->clusterUUID_; }
        std::string& clusterUUID() { return this->clusterUUID_; }
        void clusterUUID(const std::string& _val_) { this->clusterUUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void clusterUUID(std::string&& _val_) { this->clusterUUID_ = _val_; }
#endif
        const std::vector<uint8_t> & featureData() const { return this->featureData_; }
        std::vector<uint8_t> & featureData() { return this->featureData_; }
        void featureData(const std::vector<uint8_t> & _val_) { this->featureData_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void featureData(std::vector<uint8_t> && _val_) { this->featureData_ = _val_; }
#endif
        const std::vector<uint8_t> & imageData() const { return this->imageData_; }
        std::vector<uint8_t> & imageData() { return this->imageData_; }
        void imageData(const std::vector<uint8_t> & _val_) { this->imageData_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void imageData(std::vector<uint8_t> && _val_) { this->imageData_ = _val_; }
#endif
        int32_t timestamp() const { return this->timestamp_; }
        int32_t& timestamp() { return this->timestamp_; }
        void timestamp(int32_t _val_) { this->timestamp_ = _val_; }
        int32_t label() const { return this->label_; }
        int32_t& label() { return this->label_; }
        void label(int32_t _val_) { this->label_ = _val_; }
        bool isMedoid() const { return this->isMedoid_; }
        bool& isMedoid() { return this->isMedoid_; }
        void isMedoid(bool _val_) { this->isMedoid_ = _val_; }
        Mind::FaceDummyEndType endType() const { return this->endType_; }
        Mind::FaceDummyEndType& endType() { return this->endType_; }
        void endType(Mind::FaceDummyEndType _val_) { this->endType_ = _val_; }
    };

}

#endif /* _FACE_H_ */
