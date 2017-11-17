#include "User_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__Mind_UserDeny__copyIn(
    c_base base,
    const class ::Mind::UserDeny *from,
    struct _Mind_UserDeny *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->UUID = c_stringNew_s(base, from->UUID_.c_str());
        if(to->UUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUID = c_stringNew_s(base, from->UUID_.c_str());
            if(to->UUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->voipID = c_stringNew_s(base, from->voipID_.c_str());
        if(to->voipID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->voipID = c_stringNew_s(base, from->voipID_.c_str());
            if(to->voipID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->pinCode = c_stringNew_s(base, from->pinCode_.c_str());
        if(to->pinCode == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->pinCode = c_stringNew_s(base, from->pinCode_.c_str());
            if(to->pinCode == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->accessCount = (c_long)from->accessCount_;
#ifdef OSPL_BOUNDS_CHECK
        to->bluetoothMACAddress = c_stringNew_s(base, from->bluetoothMACAddress_.c_str());
        if(to->bluetoothMACAddress == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->bluetoothMACAddress = c_stringNew_s(base, from->bluetoothMACAddress_.c_str());
            if(to->bluetoothMACAddress == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->pinCodeMode = c_stringNew_s(base, from->pinCodeMode_.c_str());
        if(to->pinCodeMode == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->pinCodeMode = c_stringNew_s(base, from->pinCodeMode_.c_str());
            if(to->pinCodeMode == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->pinExpirationDate = c_stringNew_s(base, from->pinExpirationDate_.c_str());
        if(to->pinExpirationDate == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->pinExpirationDate = c_stringNew_s(base, from->pinExpirationDate_.c_str());
            if(to->pinExpirationDate == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->pinMaxUsage = c_stringNew_s(base, from->pinMaxUsage_.c_str());
        if(to->pinMaxUsage == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->pinMaxUsage = c_stringNew_s(base, from->pinMaxUsage_.c_str());
            if(to->pinMaxUsage == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->geofence = (c_bool)from->geofence_;
    to->doNotDisturb = (c_bool)from->doNotDisturb_;
    return result;
}

v_copyin_result
__Mind_User__copyIn(
    c_base base,
    const class ::Mind::User *from,
    struct _Mind_User *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->UUID = c_stringNew_s(base, from->UUID_.c_str());
        if(to->UUID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->UUID = c_stringNew_s(base, from->UUID_.c_str());
            if(to->UUID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->nickname = c_stringNew_s(base, from->nickname_.c_str());
        if(to->nickname == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->nickname = c_stringNew_s(base, from->nickname_.c_str());
            if(to->nickname == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->image = c_stringNew_s(base, from->image_.c_str());
        if(to->image == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->image = c_stringNew_s(base, from->image_.c_str());
            if(to->image == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->role_) >= 0) && (((c_long)from->role_) < 3) ){
        to->role = (enum _Mind_UserRole)from->role_;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'Mind::User.role' of type 'UserRole' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->role = (enum _Mind_UserRole)from->role_;
#endif
    return result;
}

void
__Mind_UserDeny__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_UserDeny *from = (const struct _Mind_UserDeny *)_from;
    class ::Mind::UserDeny *to = (class ::Mind::UserDeny *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->voipID(from->voipID ? from->voipID : "");
    to->pinCode(from->pinCode ? from->pinCode : "");
    to->accessCount((int32_t)from->accessCount);
    to->bluetoothMACAddress(from->bluetoothMACAddress ? from->bluetoothMACAddress : "");
    to->pinCodeMode(from->pinCodeMode ? from->pinCodeMode : "");
    to->pinExpirationDate(from->pinExpirationDate ? from->pinExpirationDate : "");
    to->pinMaxUsage(from->pinMaxUsage ? from->pinMaxUsage : "");
    to->geofence((bool)from->geofence);
    to->doNotDisturb((bool)from->doNotDisturb);
}

void
__Mind_User__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_User *from = (const struct _Mind_User *)_from;
    class ::Mind::User *to = (class ::Mind::User *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->nickname(from->nickname ? from->nickname : "");
    to->image(from->image ? from->image : "");
    to->role((::Mind::UserRole)from->role);
}

