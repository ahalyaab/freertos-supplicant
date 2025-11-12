#ifndef _NETINET_IP_H
#define _NETINET_IP_H

#include <stdint.h>

struct ip {
    uint8_t  ip_hl:4;
    uint8_t  ip_v:4;
    uint8_t  ip_tos;
    uint16_t ip_len;
    uint16_t ip_id;
    uint16_t ip_off;
    uint8_t  ip_ttl;
    uint8_t  ip_p;
    uint16_t ip_sum;
    uint32_t ip_src;
    uint32_t ip_dst;
};





/* Minimal IPv4 header definition for FreeRTOS/lwIP build 
  struct iphdr {
    uint8_t  ihl:4;
    uint8_t  version:4;
    uint8_t  tos;
    uint16_t tot_len;
    uint16_t id;
    uint16_t frag_off;
    uint8_t  ttl;
    uint8_t  protocol;
    uint16_t check;
    uint32_t saddr;
    uint32_t daddr;
};
*/



#endif /* _NETINET_IP_H */

