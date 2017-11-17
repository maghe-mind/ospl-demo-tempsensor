#include "Mind_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__MindInternal_House__copyIn(
    c_base base,
    const class ::MindInternal::House *from,
    struct _MindInternal_House *to)
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
        to->address = c_stringNew_s(base, from->address_.c_str());
        if(to->address == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->address = c_stringNew_s(base, from->address_.c_str());
            if(to->address == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->city = c_stringNew_s(base, from->city_.c_str());
        if(to->city == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->city = c_stringNew_s(base, from->city_.c_str());
            if(to->city == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->zip = c_stringNew_s(base, from->zip_.c_str());
        if(to->zip == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->zip = c_stringNew_s(base, from->zip_.c_str());
            if(to->zip == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->state = c_stringNew_s(base, from->state_.c_str());
        if(to->state == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->state = c_stringNew_s(base, from->state_.c_str());
            if(to->state == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->senderID = c_stringNew_s(base, from->senderID_.c_str());
        if(to->senderID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->senderID = c_stringNew_s(base, from->senderID_.c_str());
            if(to->senderID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    return result;
}

v_copyin_result
__MindInternal_User__copyIn(
    c_base base,
    const class ::MindInternal::User *from,
    struct _MindInternal_User *to)
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
        to->fiscalCode = c_stringNew_s(base, from->fiscalCode_.c_str());
        if(to->fiscalCode == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->fiscalCode = c_stringNew_s(base, from->fiscalCode_.c_str());
            if(to->fiscalCode == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->name = c_stringNew_s(base, from->name_.c_str());
        if(to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->name = c_stringNew_s(base, from->name_.c_str());
            if(to->name == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->surname = c_stringNew_s(base, from->surname_.c_str());
        if(to->surname == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->surname = c_stringNew_s(base, from->surname_.c_str());
            if(to->surname == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->phoneNumber = c_stringNew_s(base, from->phoneNumber_.c_str());
        if(to->phoneNumber == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->phoneNumber = c_stringNew_s(base, from->phoneNumber_.c_str());
            if(to->phoneNumber == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->gender = c_stringNew_s(base, from->gender_.c_str());
        if(to->gender == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->gender = c_stringNew_s(base, from->gender_.c_str());
            if(to->gender == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->birthday = c_stringNew_s(base, from->birthday_.c_str());
        if(to->birthday == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->birthday = c_stringNew_s(base, from->birthday_.c_str());
            if(to->birthday == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->email = c_stringNew_s(base, from->email_.c_str());
        if(to->email == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->email = c_stringNew_s(base, from->email_.c_str());
            if(to->email == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->token = c_stringNew_s(base, from->token_.c_str());
        if(to->token == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->token = c_stringNew_s(base, from->token_.c_str());
            if(to->token == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->username = c_stringNew_s(base, from->username_.c_str());
        if(to->username == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->username = c_stringNew_s(base, from->username_.c_str());
            if(to->username == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->password = c_stringNew_s(base, from->password_.c_str());
        if(to->password == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->password = c_stringNew_s(base, from->password_.c_str());
            if(to->password == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
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
        to->recipientID = c_stringNew_s(base, from->recipientID_.c_str());
        if(to->recipientID == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->recipientID = c_stringNew_s(base, from->recipientID_.c_str());
            if(to->recipientID == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->gotCertificate = (c_bool)from->gotCertificate_;
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_string *dest0;
        const ::MindInternal::User::_UUIDHouses_seq *src = &from->UUIDHouses_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).size();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'MindInternal::User.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->UUIDHouses = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2080 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'MindInternal::User.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->UUIDHouses = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    return result;
}

void
__MindInternal_House__copyOut(
    const void *_from,
    void *_to)
{
    const struct _MindInternal_House *from = (const struct _MindInternal_House *)_from;
    class ::MindInternal::House *to = (class ::MindInternal::House *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->address(from->address ? from->address : "");
    to->city(from->city ? from->city : "");
    to->zip(from->zip ? from->zip : "");
    to->state(from->state ? from->state : "");
    to->senderID(from->senderID ? from->senderID : "");
}

void
__MindInternal_User__copyOut(
    const void *_from,
    void *_to)
{
    const struct _MindInternal_User *from = (const struct _MindInternal_User *)_from;
    class ::MindInternal::User *to = (class ::MindInternal::User *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->fiscalCode(from->fiscalCode ? from->fiscalCode : "");
    to->name(from->name ? from->name : "");
    to->surname(from->surname ? from->surname : "");
    to->phoneNumber(from->phoneNumber ? from->phoneNumber : "");
    to->gender(from->gender ? from->gender : "");
    to->birthday(from->birthday ? from->birthday : "");
    to->email(from->email ? from->email : "");
    to->token(from->token ? from->token : "");
    to->username(from->username ? from->username : "");
    to->password(from->password ? from->password : "");
    to->bluetoothMACAddress(from->bluetoothMACAddress ? from->bluetoothMACAddress : "");
    to->voipID(from->voipID ? from->voipID : "");
    to->recipientID(from->recipientID ? from->recipientID : "");
    to->gotCertificate((bool)from->gotCertificate);
    {
        long size0;
        const c_string *src0 = (const c_string *)from->UUIDHouses;
        std::vector< std::string > *dst = &to->UUIDHouses();

        size0 = c_arraySize(c_sequence(from->UUIDHouses));
        to->UUIDHouses().clear();
        to->UUIDHouses().reserve(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst).push_back(src0[i0] ? src0[i0] : "");
            }
        }
    }
}

