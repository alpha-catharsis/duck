#ifndef DUCK_BASE_OBJECT_H
#define DUCK_BASE_OBJECT_H

// duck base headers
#include "guid.h"

typedef struct s_kind o_kind;

// object
typedef struct s_obj {
    const o_kind *kind_guid;
} t_obj;

#endif /* DUCK_BASE_OBJECT_H */
