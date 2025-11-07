#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

/*
 * Minimal FreeRTOS stub for <netinet/in.h>
 */

#include <sys/socket.h>

typedef unsigned short in_port_t;
typedef unsigned int in_addr_t;

/* Byte order stubs */
static inline unsigned short htons(unsigned short x) { return ((x << 8) | (x >> 8)); }
static inline unsigned short ntohs(unsigned short x) { return htons(x); }
static inline unsigned int htonl(unsigned int x) {
    return ((x << 24) | ((x << 8) & 0x00FF0000) | ((x >> 8) & 0x0000FF00) | (x >> 24));
}
static inline unsigned int ntohl(unsigned int x) { return htonl(x); }

/* Address constants */
#ifndef INADDR_ANY
#define INADDR_ANY       ((in_addr_t)0x00000000)
#endif

#define INADDR_BROADCAST ((in_addr_t)0xffffffff)

#endif /* _NETINET_IN_H_ */
