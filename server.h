#ifndef REDISNET_SERVER_H_
#define REDISNET_SERVER_H_

#include "define.h"
#include "anet.h"
#include "ae.h"
#include "buffer.h"

typedef struct {
    aeEventLoop *loop;
    int listen_fd;
    int port;
    int backlog;
    int max_client_count;
    char err_info[ANET_ERR_LEN];
} server_t;

typedef struct {
    aeEventLoop *loop;
    int fd;
    buffer_t *read_buffer;
    buffer_t *write_buffer;
} client_t;

#endif // REDISNET_SERVER_H_
