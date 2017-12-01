#ifndef MINDSPLTYPES_H
#define MINDSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Mind_DCPS.hpp"


extern c_metaObject __Mind_MindInternal__load (c_base base);

extern const char *MindInternal_House_metaDescriptor[];
extern const int MindInternal_House_metaDescriptorArrLength;
extern const int MindInternal_House_metaDescriptorLength;
extern c_metaObject __MindInternal_House__load (c_base base);
struct _MindInternal_House ;
extern  v_copyin_result __MindInternal_House__copyIn(c_base base, const class MindInternal::House *from, struct _MindInternal_House *to);
extern  void __MindInternal_House__copyOut(const void *_from, void *_to);
struct _MindInternal_House {
    c_string UUID;
    c_string address;
    c_string city;
    c_string zip;
    c_string state;
    c_string senderID;
};

extern const char *MindInternal_User_metaDescriptor[];
extern const int MindInternal_User_metaDescriptorArrLength;
extern const int MindInternal_User_metaDescriptorLength;
extern c_metaObject __MindInternal_User__load (c_base base);
struct _MindInternal_User ;
extern  v_copyin_result __MindInternal_User__copyIn(c_base base, const class MindInternal::User *from, struct _MindInternal_User *to);
extern  void __MindInternal_User__copyOut(const void *_from, void *_to);
struct _MindInternal_User {
    c_string UUID;
    c_string fiscalCode;
    c_string name;
    c_string surname;
    c_string phoneNumber;
    c_string gender;
    c_string birthday;
    c_string email;
    c_string token;
    c_string username;
    c_string password;
    c_string bluetoothMACAddress;
    c_string voipID;
    c_string recipientID;
    c_bool gotCertificate;
    c_sequence UUIDHouses;
};

#undef OS_API
#endif
