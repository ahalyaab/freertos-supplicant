#ifndef _FREERTOS_NETINET_IN_H_
#define _FREERTOS_NETINET_IN_H_

/*
 * Minimal FreeRTOS stub for <netinet/in.h>
 * Provides struct in_addr and sockaddr_in used by arpa/inet.h and other sources.
 */

#include <stdint.h>

/* basic types */
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;

/* IPv4 address structure */
struct in_addr {
    in_addr_t s_addr;
};

/* sockaddr_in for IPv4 sockets */
struct sockaddr_in {
    uint16_t sin_family;
    uint16_t sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
};

/* Byte order helpers (simple stubs) */
static inline uint16_t htons(uint16_t x) { return (uint16_t)((x << 8) | (x >> 8)); }
static inline uint16_t ntohs(uint16_t x) { return htons(x); }
static inline uint32_t htonl(uint32_t x) {
    return ((x << 24) | ((x << 8) & 0x00FF0000) | ((x >> 8) & 0x0000FF00) | (x >> 24));
}
static inline uint32_t ntohl(uint32_t x) { return htonl(x); }

/* constants */
#ifndef INADDR_ANY
#define INADDR_ANY ((in_addr_t)0x00000000)
#endif
#define INADDR_BROADCAST ((in_addr_t)0xffffffff)

#ifndef AF_INET
#define AF_INET 2
#endif

#endif /* _FREERTOS_NETINET_IN_H_ */

