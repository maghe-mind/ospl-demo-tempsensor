#ifndef USERSPLTYPES_H
#define USERSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "User_DCPS.hpp"


extern c_metaObject __User_Mind__load (c_base base);

extern c_metaObject __Mind_UserRole__load (c_base base);
enum _Mind_UserRole {
    _Mind_USER_ROLE_ADMIN,
    _Mind_USER_ROLE_RESIDENT,
    _Mind_USER_ROLE_GUEST
};

extern const char *Mind_UserDeny_metaDescriptor[];
extern const int Mind_UserDeny_metaDescriptorArrLength;
extern const int Mind_UserDeny_metaDescriptorLength;
extern c_metaObject __Mind_UserDeny__load (c_base base);
struct _Mind_UserDeny ;
extern  v_copyin_result __Mind_UserDeny__copyIn(c_base base, const class Mind::UserDeny *from, struct _Mind_UserDeny *to);
extern  void __Mind_UserDeny__copyOut(const void *_from, void *_to);
struct _Mind_UserDeny {
    c_string UUID;
    c_string voipID;
    c_string pinCode;
    c_long accessCount;
    c_string bluetoothMACAddress;
    c_string pinCodeMode;
    c_string pinExpirationDate;
    c_string pinMaxUsage;
    c_bool geofence;
    c_bool doNotDisturb;
};

extern const char *Mind_User_metaDescriptor[];
extern const int Mind_User_metaDescriptorArrLength;
extern const int Mind_User_metaDescriptorLength;
extern c_metaObject __Mind_User__load (c_base base);
struct _Mind_User ;
extern  v_copyin_result __Mind_User__copyIn(c_base base, const class Mind::User *from, struct _Mind_User *to);
extern  void __Mind_User__copyOut(const void *_from, void *_to);
struct _Mind_User {
    c_string UUID;
    c_string nickname;
    c_string image;
    enum _Mind_UserRole role;
};

#undef OS_API
#endif
