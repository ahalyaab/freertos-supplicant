#pragma once

#include "porting.h"

// Dummy hostent structure
struct hostent {
    char *h_name;
    char **h_aliases;
    int h_addrtype;
    int h_length;
    char **h_addr_list;
};

static inline struct hostent* gethostbyname(const char *name)
{
    (void)name;
    return NULL;        // No DNS support
}

static inline int getaddrinfo(const char *node,
                              const char *service,
                              const void *hints,
                              void **res)
{
    (void)node;
    (void)service;
    (void)hints;
    (void)res;
    return -1; // fail
}

static inline void freeaddrinfo(void *res)
{
    (void)res;
}

