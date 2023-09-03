#ifndef REDISNET_DEFINE_H_
#define REDISNET_DEFINE_H_

#include <stdint.h>

#define zmalloc malloc

#define zfree(p)        \
    do {                \
        if (p) free(p); \
    } while (0)         \

#define zrealloc realloc

#define DEFAULT_BUFF_SIZE 1024

#endif
