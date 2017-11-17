#ifndef IDENTITYSPLTYPES_H
#define IDENTITYSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Identity_DCPS.hpp"


extern c_metaObject __Identity_Mind__load (c_base base);

extern const char *Mind_Identity_metaDescriptor[];
extern const int Mind_Identity_metaDescriptorArrLength;
extern const int Mind_Identity_metaDescriptorLength;
extern c_metaObject __Mind_Identity__load (c_base base);
struct _Mind_Identity ;
extern  v_copyin_result __Mind_Identity__copyIn(c_base base, const class Mind::Identity *from, struct _Mind_Identity *to);
extern  void __Mind_Identity__copyOut(const void *_from, void *_to);
struct _Mind_Identity {
    c_string UUID;
    c_sequence clusterUUID;
};

extern const char *Mind_Identity_Command_metaDescriptor[];
extern const int Mind_Identity_Command_metaDescriptorArrLength;
extern const int Mind_Identity_Command_metaDescriptorLength;
extern c_metaObject __Mind_Identity_Command__load (c_base base);
struct _Mind_Identity_Command ;
extern  v_copyin_result __Mind_Identity_Command__copyIn(c_base base, const class Mind::Identity_Command *from, struct _Mind_Identity_Command *to);
extern  void __Mind_Identity_Command__copyOut(const void *_from, void *_to);
struct _Mind_Identity_Command {
    c_string UUID;
    c_string command;
};

#undef OS_API
#endif
