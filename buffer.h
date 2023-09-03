#ifndef REDISNET_AEBUFFER_H_
#define REDISNET_AEBUFFER_H_

#include <sys/types.h>

typedef struct {
    unsigned char *buff;
    size_t size;
    size_t read_idx;
    size_t write_idx;
} buffer_t;

buffer_t *alloc_buffer();

void free_buffer(buffer_t *buffer);

void check_buffer_size(buffer_t *buffer, size_t avlid_size);

size_t get_readable_size(buffer_t *buffer);

size_t get_writeable_size(buffer_t *buffer);

#endif
