#ifndef BASE_DUCK_FUNC_KIND_H
#define BASE_DUCK_FUNC_KIND_H

// duck base headers
#include "defs.h"
#include "kind.h"
#include "object.h"

// parameter descriptor
typedef struct s_param_desc {
  t_cstr name;
  const o_kind *kind;
} t_param_desc;

// function signature
typedef struct s_func_kind_desc {
  t_u32 param_num;
  const t_param_desc **params;
  const o_kind *ret_kind;
} t_func_kind_desc;

// kind object
typedef struct s_func_kind {
  t_obj obj;
  t_func_kind_desc desc;
} o_func_kind;

#endif /* BASE_DUCK_FUNC_KIND_H */
