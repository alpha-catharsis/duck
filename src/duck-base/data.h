#ifndef DUCK_BASE_DATA_H
#define DUCK_BASE_DATA_H

// data constructor
typedef void* (*t_data_ctor)(void);

// data destructor
typedef void (*t_data_dtor)(void *);

// data descriptor
typedef struct s_data_desc {
    const char *name;
    t_data_ctor ctor;
    t_data_dtor dtor;
} t_data_desc;

#endif /* DUCK_BASE_DATA_H */
