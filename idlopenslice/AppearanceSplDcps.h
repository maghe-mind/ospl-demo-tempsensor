#ifndef APPEARANCESPLTYPES_H
#define APPEARANCESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Appearance_DCPS.hpp"


extern c_metaObject __Appearance_Mind__load (c_base base);

extern c_metaObject __Mind_AppearanceDummyEndType__load (c_base base);
enum _Mind_AppearanceDummyEndType {
    _Mind_APPEARANCE_NOTHING,
    _Mind_APPEARANCE_MODEL
};

extern const char *Mind_Appearance_metaDescriptor[];
extern const int Mind_Appearance_metaDescriptorArrLength;
extern const int Mind_Appearance_metaDescriptorLength;
extern c_metaObject __Mind_Appearance__load (c_base base);
struct _Mind_Appearance ;
extern  v_copyin_result __Mind_Appearance__copyIn(c_base base, const class Mind::Appearance *from, struct _Mind_Appearance *to);
extern  void __Mind_Appearance__copyOut(const void *_from, void *_to);
struct _Mind_Appearance {
    c_string UUID;
    c_sequence featureData;
    c_sequence imageData;
    c_long timestamp;
    c_string oldClusterUUID;
    c_string clusterUUID;
    c_sequence faceClusterUUIDs;
    c_long label;
    c_bool isMedoid;
    enum _Mind_AppearanceDummyEndType endType;
};

#undef OS_API
#endif
