#ifndef DUCK_BASE_KIND_H
#define DUCK_BASE_KIND_H

// duck base headers
#include "func.h"
#include "defs.h"
#include "guid.h"
#include "object.h"

typedef struct s_func o_func;

// kind descriptor
typedef struct s_kind_desc {
    t_guid guid;
    const o_func *f_show;
} t_kind_desc;

// kind object
typedef struct s_kind {
    t_obj obj;
    t_kind_desc desc;
} o_kind;

#endif /* DUCK_BASE_KIND_H */
