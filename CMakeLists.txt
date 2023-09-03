cmake_minimum_required(VERSION 2.4)

project(t_net)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -g")

set(SOURCE_FILES ae.c anet.c protocol.c buffer.c)

add_executable(server server.c ${SOURCE_FILES})

add_executable(server_test server_test.c ${SOURCE_FILES})
