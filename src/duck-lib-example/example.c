// Standard C library headers
#include <stdlib.h>
#include <stdint.h>

// duck base headers
#include "../duck-base/data.h"

// int32 data definition
void *int32_ctor(void) {
    int32_t *res = malloc(sizeof(int32_t));
    if(res) *res = 0;
    return res;
}

void int32_dtor(void *a_ptr)
{
    free(a_ptr);
}

t_data_desc int32_desc = {
    "int32",
    int32_ctor,
    int32_dtor
};

// data descriptors
t_data_desc *data_descs[] = {
    &int32_desc,
    NULL
};
