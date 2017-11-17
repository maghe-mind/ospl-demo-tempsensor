#ifndef FACESPLTYPES_H
#define FACESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "Face_DCPS.hpp"


extern c_metaObject __Face_Mind__load (c_base base);

extern c_metaObject __Mind_FaceDummyEndType__load (c_base base);
enum _Mind_FaceDummyEndType {
    _Mind_FACE_NOTHING,
    _Mind_FACE_MODEL,
    _Mind_FACE_UNKNOWN_MODEL
};

extern const char *Mind_Face_metaDescriptor[];
extern const int Mind_Face_metaDescriptorArrLength;
extern const int Mind_Face_metaDescriptorLength;
extern c_metaObject __Mind_Face__load (c_base base);
struct _Mind_Face ;
extern  v_copyin_result __Mind_Face__copyIn(c_base base, const class Mind::Face *from, struct _Mind_Face *to);
extern  void __Mind_Face__copyOut(const void *_from, void *_to);
struct _Mind_Face {
    c_string UUID;
    c_string appearanceUUID;
    c_string oldClusterUUID;
    c_string clusterUUID;
    c_sequence featureData;
    c_sequence imageData;
    c_long timestamp;
    c_long label;
    c_bool isMedoid;
    enum _Mind_FaceDummyEndType endType;
};

#undef OS_API
#endif
