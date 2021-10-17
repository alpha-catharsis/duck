#ifndef DUCK_BASE_CSTR_H
#define DUCK_BASE_CSTR_H

// duck base headers
#include "defs.h"
#include "builtin_guids.h"
#include "builtin_kinds.h"
#include "object.h"

// cstr descriptor
typedef struct s_cstr_desc {
    t_cstr name;
} t_cstr_desc;

// cstr object
typedef struct s_cstr {
    t_obj obj;
    t_cstr_desc desc;
} o_cstr;

// helper macro
#define CSTR_OBJ(str) (o_cstr){{&k_cstr}, {str}}

#endif /* DUCK_BASE_CSTR_H */
