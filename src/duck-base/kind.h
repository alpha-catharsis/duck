#ifndef DUCK_BASE_KIND_H
#define DUCK_BASE_KIND_H

// duck base headers
#include "defs.h"
#include "guid.h"
#include "object.h"

// kind descriptor
typedef struct s_kind_desc {
    t_guid guid;
    t_cstr name;
} t_kind_desc;

// kind object
typedef struct s_kind {
    t_obj obj;
    t_kind_desc desc;
} o_kind;

#endif /* DUCK_BASE_KIND_H */
