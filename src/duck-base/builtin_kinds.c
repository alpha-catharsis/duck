// duck base headers
#include "builtin_kinds.h"
#include "builtin_guids.h"

// builtin kinds
const o_kind k_kind = {{NULL}, {g_kind_kind, "Kind"}};
const o_kind k_void = {{&k_kind}, {g_kind_void, "Void"}};
const o_kind k_bool = {{&k_kind}, {g_kind_bool, "Bool"}};
const o_kind k_cstr = {{&k_kind}, {g_kind_cstr, "Immutable String"}};
