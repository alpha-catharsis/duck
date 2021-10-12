#ifndef DUCK_BASE_TYPE_H
#define DUCK_BASE_TYPE_H

// duck base headers
#include "defs.h"

// type id typedef
typedef t_u32 t_type_id;

// type id constants
static const t_type_id v_type_invalid = 0;
static const t_type_id v_type_uint8 = 1;
static const t_type_id v_type_uint16 = 2;
static const t_type_id v_type_uint32 = 3;
static const t_type_id v_type_uint64 = 4;
static const t_type_id v_type_int8 = 5;
static const t_type_id v_type_int16 = 6;
static const t_type_id v_type_int32 = 7;
static const t_type_id v_type_int64 = 8;
static const t_type_id v_type_f32 = 9;
static const t_type_id v_type_f64 = 10;
static const t_type_id v_bool = 11;

// type descriptor
typedef struct s_type_desc {
    t_type_id id;
    t_cstr name;
    t_opaque_ptr extra;
} t_type_desc;

#endif /* DUCK_BASE_TYPE_H */
