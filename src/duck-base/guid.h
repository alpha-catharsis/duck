#ifndef DUCK_BASE_GUID
#define DUCK_BASE_GUID

// duck base header
#include "defs.h"

// guid
typedef struct s_guid {
    t_u64 random;
    t_u64 time;
} t_guid;

// guid string
typedef char t_guid_str[17];

// guid creation
t_bool init_guid(t_guid *a_guid);

// guid comparison
t_bool guid_eq(t_guid *a_lguid, t_guid *a_rguid);
t_bool guid_le(t_guid *a_lguid, t_guid *a_rguid);

// guid/string conversion
t_bool guid_from_str(t_guid *a_guid, const char *a_str);
void guid_to_str(t_guid *a_guid, char *a_str);

#endif /* DUCK_BASE_GUID */
