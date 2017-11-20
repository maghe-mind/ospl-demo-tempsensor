#include "Identity_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__Mind_Identity__copyIn(
    c_base base,
    const class ::Mind::Identity *from,
    struct _Mind_Identity *to)
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
    {
/* Code generated by /home/dds/OvernightTests/overnight/ospli/heads/OSPL_V6_8-02-branch/ubuntu1604-64a/x86_64.linux-release-inner/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 826 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_string *dest0;
        const ::Mind::Identity::_clusterUUID_seq *src = &from->clusterUUID_;

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
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'Mind::Identity.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->clusterUUID = (c_sequence)dest0;
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
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'Mind::Identity.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0].c_str());
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->clusterUUID = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
    }
    return result;
}

v_copyin_result
__Mind_Identity_Command__copyIn(
    c_base base,
    const class ::Mind::Identity_Command *from,
    struct _Mind_Identity_Command *to)
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
        to->command = c_stringNew_s(base, from->command_.c_str());
        if(to->command == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->command = c_stringNew_s(base, from->command_.c_str());
            if(to->command == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    return result;
}

void
__Mind_Identity__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Identity *from = (const struct _Mind_Identity *)_from;
    class ::Mind::Identity *to = (class ::Mind::Identity *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    {
        long size0;
        const c_string *src0 = (const c_string *)from->clusterUUID;
        std::vector< std::string > *dst = &to->clusterUUID();

        size0 = c_arraySize(c_sequence(from->clusterUUID));
        to->clusterUUID().clear();
        to->clusterUUID().reserve(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst).push_back(src0[i0] ? src0[i0] : "");
            }
        }
    }
}

void
__Mind_Identity_Command__copyOut(
    const void *_from,
    void *_to)
{
    const struct _Mind_Identity_Command *from = (const struct _Mind_Identity_Command *)_from;
    class ::Mind::Identity_Command *to = (class ::Mind::Identity_Command *)_to;
    to->UUID(from->UUID ? from->UUID : "");
    to->command(from->command ? from->command : "");
}
