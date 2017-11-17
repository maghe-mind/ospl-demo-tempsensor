#ifndef HOUSEUSERSPLTYPES_H
#define HOUSEUSERSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "HouseUser_DCPS.hpp"


extern c_metaObject __HouseUser_Mind__load (c_base base);

extern const char *Mind_HouseUser_metaDescriptor[];
extern const int Mind_HouseUser_metaDescriptorArrLength;
extern const int Mind_HouseUser_metaDescriptorLength;
extern c_metaObject __Mind_HouseUser__load (c_base base);
struct _Mind_HouseUser ;
extern  v_copyin_result __Mind_HouseUser__copyIn(c_base base, const class Mind::HouseUser *from, struct _Mind_HouseUser *to);
extern  void __Mind_HouseUser__copyOut(const void *_from, void *_to);
struct _Mind_HouseUser {
    c_string UUID;
    c_sequence UUIDHouses;
};

#undef OS_API
#endif
