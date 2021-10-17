// duck base headers
#include "builtin_func_kinds.h"
#include "builtin_guids.h"
#include "builtin_kinds.h"

// kind to string
const t_param_desc kind_param = {"kind", &k_kind};
const t_param_desc *fk_show_kind_params[] = {&kind_param, NULL};
const o_func_kind fk_show_kind = {{&k_kind}, {1, fk_show_kind_params, &k_cstr}};
