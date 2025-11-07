#ifndef _FREERTOS_NETPACKET_PACKET_H_
#define _FREERTOS_NETPACKET_PACKET_H_

/*
 * Minimal stub for netpacket/packet.h
 * Needed for wpa_supplicant FreeRTOS builds to compile out Linux-specific AF_PACKET usage.
 */

#include <stdint.h>
#include <sys/socket.h>

/* Define AF_PACKET if not already defined */
#ifndef AF_PACKET
#define AF_PACKET 17
#endif

/* Dummy protocol value (used by raw Ethernet sockets) */
#ifndef ETH_P_ALL
#define ETH_P_ALL 0x0003
#endif

/* Linux sockaddr_ll structure replacement */
#ifndef sockaddr_ll
struct sockaddr_ll {
    unsigned short sll_family;   /* Always AF_PACKET */
    unsigned short sll_protocol; /* Ethernet protocol */
    int            sll_ifindex;  /* Interface index */
    unsigned short sll_hatype;   /* ARP hardware type */
    unsigned char  sll_pkttype;  /* Packet type */
    unsigned char  sll_halen;    /* Length of address */
    unsigned char  sll_addr[8];  /* Physical layer address */
};
#endif

#endif /* _FREERTOS_NETPACKET_PACKET_H_ */

