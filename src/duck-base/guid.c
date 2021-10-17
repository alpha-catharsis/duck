// standard headers
#include <stdio.h>
#include <time.h>

// duck base headers
#include "guid.h"

// helper functions prototypes
t_bool hexstr_to_u64(t_u64 *a_val, const char *a_str);
void u64_to_hexstr(t_u64 a_val, char *a_str);

// guid creation
t_bool init_guid_new(t_guid *a_guid) {
    t_u64 random;
    t_u64 time;

    FILE *file;
    file = fopen("/dev/urandom", "r");
    if (!file || (fread(&random, 8, 1, file) != 1)) {
        return v_false;
    }

    struct timespec ts;
    if(clock_gettime(CLOCK_REALTIME, &ts) == -1) {
        return v_false;
    }
    time = (((t_u64)ts.tv_sec)) << 32 | ((t_u64)ts.tv_nsec);

    a_guid->random = random;
    a_guid->time = time;
    return v_true;
}

// guid copying
void guid_copy(t_guid *a_dest, t_guid *a_src)
{
    a_dest->random = a_src->random;
    a_dest->time = a_src->time;
}

// guid comparison
t_bool guid_eq(t_guid *a_lguid, t_guid *a_rguid) {
    return (a_lguid->random = a_rguid->random) &&
        (a_lguid->time = a_rguid->time);
}

t_bool guid_le(t_guid *a_lguid, t_guid *a_rguid) {
    if(a_lguid->random < a_rguid->random) {
        return v_true;
    }else if (a_lguid->random > a_rguid->random) {
        return v_false;
    }else{
        return a_lguid->time <= a_rguid->time;
    }
}

// guid/string conversion
t_bool guid_from_str(t_guid *a_guid, const char *a_str) {
    t_u64 random;
    t_u64 time;
    if(hexstr_to_u64(&random, a_str) &&
       hexstr_to_u64(&time, a_str + 8)) {
        a_guid->random = random;
        a_guid->time = time;
        return v_true;
    }
    return v_false;
}

void guid_to_str(t_guid *a_guid, char *a_str) {
    u64_to_hexstr(a_guid->random, a_str);
    u64_to_hexstr(a_guid->time, a_str + 8);
    a_str[16] = '\0';
}

// helper functions implementation
t_bool hexstr_to_u64(t_u64 *a_val, const char *a_str) {
    t_u64 val = 0;
    for(int i = 0; i < 8; i++) {
        val <<= 8;
        char c = *a_str;
        if((c >= 'A') && (c <= 'F')) {
            val += (t_u64)(c - 'A' + 10);
        } else if ((c >= 'a') && (c <= 'f')) {
            val += (t_u64)(c - 'a' + 10);
        }else if ((c >= '0') && (c <= 9)) {
            val += (t_u64)(c - '0');
        }else{
            return v_false;
        }
        a_str++;
    }
    *a_val = val;
    return v_true;
}

void u64_to_hexstr(t_u64 a_val, char *a_str) {
    a_str += 7;
    for (int i = 0; i < 8; i++) {
      t_u8 nibble = a_val & 0xF;
      if (nibble < 10) {
          *a_str = (char)('0' + nibble);
      }else{
        *a_str = (char)('A' + nibble - 10);
      }
    a_val >>= 8;
    a_str--;
  }
}
