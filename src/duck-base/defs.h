#ifndef DUCK_BASE_DEFS_H
#define DUCK_BASE_DEFS_H

// standard C library headers
#include <stdlib.h>
#include <stdint.h>

// integers typedefs
typedef uint8_t t_u8;
typedef uint16_t t_u16;
typedef uint32_t t_u32;
typedef uint64_t t_u64;
typedef int8_t t_i8;
typedef int16_t t_i16;
typedef int32_t t_i32;
typedef int64_t t_i64;

// floating point numbers typedefs
typedef float t_f32;
typedef double t_f64;

// boolean typedefs
typedef int t_bool;

// char/string typedefs
typedef char t_char;
typedef char *t_str;
typedef const char *t_cstr;

// size typedefs
typedef size_t t_size;

// byte typedefs
typedef uint8_t t_byte;
typedef uint8_t *t_byte_ptr;

// opaque pointers typedef
typedef void *t_opaque_ptr;
typedef void *(*t_opaque_func_ptr)(void *);

// boolean enumeration
static const t_bool v_false = 0;
static const t_bool v_true = 1;

#endif /* DUCK_BASE_DEFS_H */
