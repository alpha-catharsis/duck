#ifndef DUCK_BASE_FUNC_H
#define DUCK_BASE_FUNC_H

// duck base headers
#include "defs.h"
#include "type.h"

// function descriptor
typedef struct s_func_desc {
    t_cstr name;
    t_opaque_ptr func;
    t_u32 param_num;
    t_opaque_ptr params;
} t_func_desc;

// parameter descriptor
typedef struct s_param_desc {
    t_cstr name;
    t_type_id id;
} t_param_desc;

#endif /* DUCK_BASE_FUNC_H */
