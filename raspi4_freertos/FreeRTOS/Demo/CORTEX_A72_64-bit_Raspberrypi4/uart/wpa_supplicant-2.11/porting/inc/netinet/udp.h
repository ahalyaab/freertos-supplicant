#ifndef _NETINET_UDP_H
#define _NETINET_UDP_H

#include <stdint.h>

/* Minimal UDP header definition for FreeRTOS/lwIP build */
struct udphdr {
    uint16_t source;
    uint16_t dest;
    uint16_t len;
    uint16_t check;
};

#endif /* _NETINET_UDP_H */

