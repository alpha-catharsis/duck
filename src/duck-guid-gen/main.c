// Standard C headers
#include <stdio.h>
#include <stdlib.h>

// Duck headers
#include "../duck-base/guid.h"

int main()
{
    t_guid guid;
    t_guid_str str;
    if (init_guid_new(&guid)) {
        guid_to_str(&guid, str);
        printf("GUID: %s\n", str);
    }else{
        printf("ERROR: Cannot generate GUID.\n");
    }
    return EXIT_SUCCESS;
}
