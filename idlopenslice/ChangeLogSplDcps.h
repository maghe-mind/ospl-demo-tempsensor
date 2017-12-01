#ifndef CHANGELOGSPLTYPES_H
#define CHANGELOGSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ChangeLog_DCPS.hpp"


extern c_metaObject __ChangeLog_Mind__load (c_base base);

extern c_metaObject __Mind_ChangeLogType__load (c_base base);
enum _Mind_ChangeLogType {
    _Mind_KNOWN_FACES,
    _Mind_UNKNOWN_FACES,
    _Mind_APPEARANCES
};

extern c_metaObject __Mind_ChangeItemType__load (c_base base);
enum _Mind_ChangeItemType {
    _Mind_FACE,
    _Mind_APPEARANCE
};

extern c_metaObject __Mind_ChangeItemAction__load (c_base base);
enum _Mind_ChangeItemAction {
    _Mind_NEW,
    _Mind_MODIFY,
    _Mind_DELETE
};

extern const char *Mind_ChangeItem_metaDescriptor[];
extern const int Mind_ChangeItem_metaDescriptorArrLength;
extern const int Mind_ChangeItem_metaDescriptorLength;
extern c_metaObject __Mind_ChangeItem__load (c_base base);
struct _Mind_ChangeItem ;
extern  v_copyin_result __Mind_ChangeItem__copyIn(c_base base, const class Mind::ChangeItem *from, struct _Mind_ChangeItem *to);
extern  void __Mind_ChangeItem__copyOut(const void *_from, void *_to);
struct _Mind_ChangeItem {
    c_string UUID;
    enum _Mind_ChangeItemType type;
    enum _Mind_ChangeItemAction action;
};

extern const char *Mind_ChangeLog_metaDescriptor[];
extern const int Mind_ChangeLog_metaDescriptorArrLength;
extern const int Mind_ChangeLog_metaDescriptorLength;
extern c_metaObject __Mind_ChangeLog__load (c_base base);
struct _Mind_ChangeLog ;
extern  v_copyin_result __Mind_ChangeLog__copyIn(c_base base, const class Mind::ChangeLog *from, struct _Mind_ChangeLog *to);
extern  void __Mind_ChangeLog__copyOut(const void *_from, void *_to);
struct _Mind_ChangeLog {
    c_string UUID;
    c_long timestamp;
    enum _Mind_ChangeItemType itemType;
    enum _Mind_ChangeLogType changeLogType;
    c_sequence changes;
};

#undef OS_API
#endif
