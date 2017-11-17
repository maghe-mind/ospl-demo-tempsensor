#ifndef _CHANGELOG_H_
#define _CHANGELOG_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    OSPL_ENUM ChangeLogType {
        KNOWN_FACES,
        UNKNOWN_FACES,
        APPEARANCES
    };

    OSPL_ENUM ChangeItemType {
        FACE,
        APPEARANCE
    };

    OSPL_ENUM ChangeItemAction {
        NEW,
        MODIFY,
        DELETE
    };

    class ChangeItem OSPL_DDS_FINAL
    {
    public:
        std::string UUID_;
        Mind::ChangeItemType type_;
        Mind::ChangeItemAction action_;

    public:
        ChangeItem() :
                type_(OSPL_ENUM_LABEL(Mind,ChangeItemType,FACE)),
                action_(OSPL_ENUM_LABEL(Mind,ChangeItemAction,NEW)) {}

        explicit ChangeItem(
            const std::string& UUID,
            Mind::ChangeItemType type,
            Mind::ChangeItemAction action) : 
                UUID_(UUID),
                type_(type),
                action_(action) {}

        ChangeItem(const ChangeItem &_other) : 
                UUID_(_other.UUID_),
                type_(_other.type_),
                action_(_other.action_) {}

#ifdef OSPL_DDS_CXX11
        ChangeItem(ChangeItem &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                type_(::std::move(_other.type_)),
                action_(::std::move(_other.action_)) {}

        ChangeItem& operator=(ChangeItem &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                type_ = ::std::move(_other.type_);
                action_ = ::std::move(_other.action_);
            }
            return *this;
        }
#endif

        ChangeItem& operator=(const ChangeItem &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                type_ = _other.type_;
                action_ = _other.action_;
            }
            return *this;
        }

        bool operator==(const ChangeItem& _other) const
        {
            return UUID_ == _other.UUID_ &&
                type_ == _other.type_ &&
                action_ == _other.action_;
        }

        bool operator!=(const ChangeItem& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        Mind::ChangeItemType type() const { return this->type_; }
        Mind::ChangeItemType& type() { return this->type_; }
        void type(Mind::ChangeItemType _val_) { this->type_ = _val_; }
        Mind::ChangeItemAction action() const { return this->action_; }
        Mind::ChangeItemAction& action() { return this->action_; }
        void action(Mind::ChangeItemAction _val_) { this->action_ = _val_; }
    };

    class ChangeLog OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::ChangeItem>  _changes_seq;

        std::string UUID_;
        int32_t timestamp_;
        Mind::ChangeItemType itemType_;
        Mind::ChangeLogType changeLogType_;
        std::vector<Mind::ChangeItem>  changes_;

    public:
        ChangeLog() :
                timestamp_(0),
                itemType_(OSPL_ENUM_LABEL(Mind,ChangeItemType,FACE)),
                changeLogType_(OSPL_ENUM_LABEL(Mind,ChangeLogType,KNOWN_FACES)) {}

        explicit ChangeLog(
            const std::string& UUID,
            int32_t timestamp,
            Mind::ChangeItemType itemType,
            Mind::ChangeLogType changeLogType,
            const std::vector<Mind::ChangeItem> & changes) : 
                UUID_(UUID),
                timestamp_(timestamp),
                itemType_(itemType),
                changeLogType_(changeLogType),
                changes_(changes) {}

        ChangeLog(const ChangeLog &_other) : 
                UUID_(_other.UUID_),
                timestamp_(_other.timestamp_),
                itemType_(_other.itemType_),
                changeLogType_(_other.changeLogType_),
                changes_(_other.changes_) {}

#ifdef OSPL_DDS_CXX11
        ChangeLog(ChangeLog &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                timestamp_(::std::move(_other.timestamp_)),
                itemType_(::std::move(_other.itemType_)),
                changeLogType_(::std::move(_other.changeLogType_)),
                changes_(::std::move(_other.changes_)) {}

        ChangeLog& operator=(ChangeLog &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                timestamp_ = ::std::move(_other.timestamp_);
                itemType_ = ::std::move(_other.itemType_);
                changeLogType_ = ::std::move(_other.changeLogType_);
                changes_ = ::std::move(_other.changes_);
            }
            return *this;
        }
#endif

        ChangeLog& operator=(const ChangeLog &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                timestamp_ = _other.timestamp_;
                itemType_ = _other.itemType_;
                changeLogType_ = _other.changeLogType_;
                changes_ = _other.changes_;
            }
            return *this;
        }

        bool operator==(const ChangeLog& _other) const
        {
            return UUID_ == _other.UUID_ &&
                timestamp_ == _other.timestamp_ &&
                itemType_ == _other.itemType_ &&
                changeLogType_ == _other.changeLogType_ &&
                changes_ == _other.changes_;
        }

        bool operator!=(const ChangeLog& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        int32_t timestamp() const { return this->timestamp_; }
        int32_t& timestamp() { return this->timestamp_; }
        void timestamp(int32_t _val_) { this->timestamp_ = _val_; }
        Mind::ChangeItemType itemType() const { return this->itemType_; }
        Mind::ChangeItemType& itemType() { return this->itemType_; }
        void itemType(Mind::ChangeItemType _val_) { this->itemType_ = _val_; }
        Mind::ChangeLogType changeLogType() const { return this->changeLogType_; }
        Mind::ChangeLogType& changeLogType() { return this->changeLogType_; }
        void changeLogType(Mind::ChangeLogType _val_) { this->changeLogType_ = _val_; }
        const std::vector<Mind::ChangeItem> & changes() const { return this->changes_; }
        std::vector<Mind::ChangeItem> & changes() { return this->changes_; }
        void changes(const std::vector<Mind::ChangeItem> & _val_) { this->changes_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void changes(std::vector<Mind::ChangeItem> && _val_) { this->changes_ = _val_; }
#endif
    };

}

#endif /* _CHANGELOG_H_ */
