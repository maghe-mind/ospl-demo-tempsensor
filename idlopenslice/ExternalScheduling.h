#ifndef _EXTERNALSCHEDULING_H_
#define _EXTERNALSCHEDULING_H_

#include <dds/core/ddscore.hpp>

namespace Mind
{
    class IrrigationScheduleItem OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _pumps_seq;

        std::string name_;
        std::string dailyMask_;
        std::string timeStart_;
        std::string timeEnd_;
        std::vector<std::string>  pumps_;

    public:
        IrrigationScheduleItem() {}

        explicit IrrigationScheduleItem(
            const std::string& name,
            const std::string& dailyMask,
            const std::string& timeStart,
            const std::string& timeEnd,
            const std::vector<std::string> & pumps) : 
                name_(name),
                dailyMask_(dailyMask),
                timeStart_(timeStart),
                timeEnd_(timeEnd),
                pumps_(pumps) {}

        IrrigationScheduleItem(const IrrigationScheduleItem &_other) : 
                name_(_other.name_),
                dailyMask_(_other.dailyMask_),
                timeStart_(_other.timeStart_),
                timeEnd_(_other.timeEnd_),
                pumps_(_other.pumps_) {}

#ifdef OSPL_DDS_CXX11
        IrrigationScheduleItem(IrrigationScheduleItem &&_other) : 
                name_(::std::move(_other.name_)),
                dailyMask_(::std::move(_other.dailyMask_)),
                timeStart_(::std::move(_other.timeStart_)),
                timeEnd_(::std::move(_other.timeEnd_)),
                pumps_(::std::move(_other.pumps_)) {}

        IrrigationScheduleItem& operator=(IrrigationScheduleItem &&_other)
        {
            if (this != &_other) {
                name_ = ::std::move(_other.name_);
                dailyMask_ = ::std::move(_other.dailyMask_);
                timeStart_ = ::std::move(_other.timeStart_);
                timeEnd_ = ::std::move(_other.timeEnd_);
                pumps_ = ::std::move(_other.pumps_);
            }
            return *this;
        }
#endif

        IrrigationScheduleItem& operator=(const IrrigationScheduleItem &_other)
        {
            if (this != &_other) {
                name_ = _other.name_;
                dailyMask_ = _other.dailyMask_;
                timeStart_ = _other.timeStart_;
                timeEnd_ = _other.timeEnd_;
                pumps_ = _other.pumps_;
            }
            return *this;
        }

        bool operator==(const IrrigationScheduleItem& _other) const
        {
            return name_ == _other.name_ &&
                dailyMask_ == _other.dailyMask_ &&
                timeStart_ == _other.timeStart_ &&
                timeEnd_ == _other.timeEnd_ &&
                pumps_ == _other.pumps_;
        }

        bool operator!=(const IrrigationScheduleItem& _other) const
        {
            return !(*this == _other);
        }

        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        const std::string& dailyMask() const { return this->dailyMask_; }
        std::string& dailyMask() { return this->dailyMask_; }
        void dailyMask(const std::string& _val_) { this->dailyMask_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void dailyMask(std::string&& _val_) { this->dailyMask_ = _val_; }
#endif
        const std::string& timeStart() const { return this->timeStart_; }
        std::string& timeStart() { return this->timeStart_; }
        void timeStart(const std::string& _val_) { this->timeStart_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void timeStart(std::string&& _val_) { this->timeStart_ = _val_; }
#endif
        const std::string& timeEnd() const { return this->timeEnd_; }
        std::string& timeEnd() { return this->timeEnd_; }
        void timeEnd(const std::string& _val_) { this->timeEnd_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void timeEnd(std::string&& _val_) { this->timeEnd_ = _val_; }
#endif
        const std::vector<std::string> & pumps() const { return this->pumps_; }
        std::vector<std::string> & pumps() { return this->pumps_; }
        void pumps(const std::vector<std::string> & _val_) { this->pumps_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void pumps(std::vector<std::string> && _val_) { this->pumps_ = _val_; }
#endif
    };

    class IrrigationSchedule OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<Mind::IrrigationScheduleItem>  _scheduleItems_seq;

        std::string UUID_;
        std::string name_;
        std::string monthlyMask_;
        bool automatic_;
        std::vector<Mind::IrrigationScheduleItem>  scheduleItems_;

    public:
        IrrigationSchedule() :
                automatic_(false) {}

        explicit IrrigationSchedule(
            const std::string& UUID,
            const std::string& name,
            const std::string& monthlyMask,
            bool automatic,
            const std::vector<Mind::IrrigationScheduleItem> & scheduleItems) : 
                UUID_(UUID),
                name_(name),
                monthlyMask_(monthlyMask),
                automatic_(automatic),
                scheduleItems_(scheduleItems) {}

        IrrigationSchedule(const IrrigationSchedule &_other) : 
                UUID_(_other.UUID_),
                name_(_other.name_),
                monthlyMask_(_other.monthlyMask_),
                automatic_(_other.automatic_),
                scheduleItems_(_other.scheduleItems_) {}

#ifdef OSPL_DDS_CXX11
        IrrigationSchedule(IrrigationSchedule &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                name_(::std::move(_other.name_)),
                monthlyMask_(::std::move(_other.monthlyMask_)),
                automatic_(::std::move(_other.automatic_)),
                scheduleItems_(::std::move(_other.scheduleItems_)) {}

        IrrigationSchedule& operator=(IrrigationSchedule &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                name_ = ::std::move(_other.name_);
                monthlyMask_ = ::std::move(_other.monthlyMask_);
                automatic_ = ::std::move(_other.automatic_);
                scheduleItems_ = ::std::move(_other.scheduleItems_);
            }
            return *this;
        }
#endif

        IrrigationSchedule& operator=(const IrrigationSchedule &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                name_ = _other.name_;
                monthlyMask_ = _other.monthlyMask_;
                automatic_ = _other.automatic_;
                scheduleItems_ = _other.scheduleItems_;
            }
            return *this;
        }

        bool operator==(const IrrigationSchedule& _other) const
        {
            return UUID_ == _other.UUID_ &&
                name_ == _other.name_ &&
                monthlyMask_ == _other.monthlyMask_ &&
                automatic_ == _other.automatic_ &&
                scheduleItems_ == _other.scheduleItems_;
        }

        bool operator!=(const IrrigationSchedule& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        const std::string& monthlyMask() const { return this->monthlyMask_; }
        std::string& monthlyMask() { return this->monthlyMask_; }
        void monthlyMask(const std::string& _val_) { this->monthlyMask_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void monthlyMask(std::string&& _val_) { this->monthlyMask_ = _val_; }
#endif
        bool automatic() const { return this->automatic_; }
        bool& automatic() { return this->automatic_; }
        void automatic(bool _val_) { this->automatic_ = _val_; }
        const std::vector<Mind::IrrigationScheduleItem> & scheduleItems() const { return this->scheduleItems_; }
        std::vector<Mind::IrrigationScheduleItem> & scheduleItems() { return this->scheduleItems_; }
        void scheduleItems(const std::vector<Mind::IrrigationScheduleItem> & _val_) { this->scheduleItems_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void scheduleItems(std::vector<Mind::IrrigationScheduleItem> && _val_) { this->scheduleItems_ = _val_; }
#endif
    };

    class ExternalLightsSchedule OSPL_DDS_FINAL
    {
    public:
        typedef std::vector<std::string>  _diffLights_seq;

        std::string UUID_;
        std::string name_;
        std::string timeStart_;
        std::string timeEnd_;
        bool automatic_;
        std::vector<std::string>  diffLights_;

    public:
        ExternalLightsSchedule() :
                automatic_(false) {}

        explicit ExternalLightsSchedule(
            const std::string& UUID,
            const std::string& name,
            const std::string& timeStart,
            const std::string& timeEnd,
            bool automatic,
            const std::vector<std::string> & diffLights) : 
                UUID_(UUID),
                name_(name),
                timeStart_(timeStart),
                timeEnd_(timeEnd),
                automatic_(automatic),
                diffLights_(diffLights) {}

        ExternalLightsSchedule(const ExternalLightsSchedule &_other) : 
                UUID_(_other.UUID_),
                name_(_other.name_),
                timeStart_(_other.timeStart_),
                timeEnd_(_other.timeEnd_),
                automatic_(_other.automatic_),
                diffLights_(_other.diffLights_) {}

#ifdef OSPL_DDS_CXX11
        ExternalLightsSchedule(ExternalLightsSchedule &&_other) : 
                UUID_(::std::move(_other.UUID_)),
                name_(::std::move(_other.name_)),
                timeStart_(::std::move(_other.timeStart_)),
                timeEnd_(::std::move(_other.timeEnd_)),
                automatic_(::std::move(_other.automatic_)),
                diffLights_(::std::move(_other.diffLights_)) {}

        ExternalLightsSchedule& operator=(ExternalLightsSchedule &&_other)
        {
            if (this != &_other) {
                UUID_ = ::std::move(_other.UUID_);
                name_ = ::std::move(_other.name_);
                timeStart_ = ::std::move(_other.timeStart_);
                timeEnd_ = ::std::move(_other.timeEnd_);
                automatic_ = ::std::move(_other.automatic_);
                diffLights_ = ::std::move(_other.diffLights_);
            }
            return *this;
        }
#endif

        ExternalLightsSchedule& operator=(const ExternalLightsSchedule &_other)
        {
            if (this != &_other) {
                UUID_ = _other.UUID_;
                name_ = _other.name_;
                timeStart_ = _other.timeStart_;
                timeEnd_ = _other.timeEnd_;
                automatic_ = _other.automatic_;
                diffLights_ = _other.diffLights_;
            }
            return *this;
        }

        bool operator==(const ExternalLightsSchedule& _other) const
        {
            return UUID_ == _other.UUID_ &&
                name_ == _other.name_ &&
                timeStart_ == _other.timeStart_ &&
                timeEnd_ == _other.timeEnd_ &&
                automatic_ == _other.automatic_ &&
                diffLights_ == _other.diffLights_;
        }

        bool operator!=(const ExternalLightsSchedule& _other) const
        {
            return !(*this == _other);
        }

        const std::string& UUID() const { return this->UUID_; }
        std::string& UUID() { return this->UUID_; }
        void UUID(const std::string& _val_) { this->UUID_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void UUID(std::string&& _val_) { this->UUID_ = _val_; }
#endif
        const std::string& name() const { return this->name_; }
        std::string& name() { return this->name_; }
        void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void name(std::string&& _val_) { this->name_ = _val_; }
#endif
        const std::string& timeStart() const { return this->timeStart_; }
        std::string& timeStart() { return this->timeStart_; }
        void timeStart(const std::string& _val_) { this->timeStart_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void timeStart(std::string&& _val_) { this->timeStart_ = _val_; }
#endif
        const std::string& timeEnd() const { return this->timeEnd_; }
        std::string& timeEnd() { return this->timeEnd_; }
        void timeEnd(const std::string& _val_) { this->timeEnd_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void timeEnd(std::string&& _val_) { this->timeEnd_ = _val_; }
#endif
        bool automatic() const { return this->automatic_; }
        bool& automatic() { return this->automatic_; }
        void automatic(bool _val_) { this->automatic_ = _val_; }
        const std::vector<std::string> & diffLights() const { return this->diffLights_; }
        std::vector<std::string> & diffLights() { return this->diffLights_; }
        void diffLights(const std::vector<std::string> & _val_) { this->diffLights_ = _val_; }
#ifdef OSPL_DDS_CXX11
        void diffLights(std::vector<std::string> && _val_) { this->diffLights_ = _val_; }
#endif
    };

}

#endif /* _EXTERNALSCHEDULING_H_ */
