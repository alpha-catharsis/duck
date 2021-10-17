// duck base headers
#include "builtin_func_kinds.h"
#include "builtin_kinds.h"
#include "builtin_guids.h"
#include "cstr.h"
#include "func.h"

// kind kind
o_cstr fi_kind_show_kind(o_kind *kind) {
    (void)kind;
    return CSTR_OBJ("Kind");
}

const o_func f_kind_show_kind = {{&k_func},
                                 {&fk_show_kind, "show",
                                  (t_opaque_func_ptr)&fi_kind_show_kind}};

const o_kind k_kind = {{NULL}, {g_kind_kind, &f_kind_show_kind}};

// func kind
o_cstr fi_func_show_kind(o_kind *kind) {
  (void)kind;
  return CSTR_OBJ("Functions");
}

const o_func f_func_show_kind = {{&k_func},
                                 {&fk_show_kind, "show",
                                  (t_opaque_func_ptr)&fi_func_show_kind}};

const o_kind k_func = {{&k_kind}, {g_kind_func, &f_func_show_kind}};
