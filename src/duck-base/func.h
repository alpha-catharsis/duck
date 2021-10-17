#ifndef DUCK_BASE_FUNC_H
#define DUCK_BASE_FUNC_H

// duck base headers
#include "defs.h"
#include "func_kind.h"
#include "object.h"

// function descriptor
typedef struct s_func_desc {
    t_cstr name;
    t_opaque_ptr func;
    o_func_kind *kind;
} t_func_desc;

// function object
typedef struct s_func {
    t_obj obj;
    t_func_desc desc;
} o_func;

#endif /* DUCK_BASE_FUNC_H */
