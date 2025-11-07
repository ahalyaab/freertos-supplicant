#ifndef _FREERTOS_NET_IF_H_
#define _FREERTOS_NET_IF_H_

/*
 * Minimal stub for <net/if.h>
 * Used to satisfy wpa_supplicant compilation on non-Linux (FreeRTOS) builds.
 */

#include <stdint.h>
#include <sys/socket.h>

/* ==== Interface name constants ==== */
#ifndef IFNAMSIZ
#define IFNAMSIZ 16
#endif

/* ==== Interface flags (used in ioctl/network state) ==== */
#define IFF_UP          0x1
#define IFF_BROADCAST   0x2
#define IFF_LOOPBACK    0x8
#define IFF_RUNNING     0x40
#define IFF_PROMISC     0x100
#define IFF_ALLMULTI    0x200

/* ==== IOCTL command numbers (dummy, to satisfy compilation) ==== */
#define SIOCGIFFLAGS    0x8913
#define SIOCSIFFLAGS    0x8914
#define SIOCGIFHWADDR   0x8927
#define SIOCADDMULTI    0x8931
#define SIOCDELMULTI    0x8932

/* ==== Forward declaration of ifreq ==== */
struct sockaddr;


struct ifreq {
    char ifr_name[IFNAMSIZ];
    union {
        struct sockaddr ifru_addr;
        struct sockaddr ifru_hwaddr;
        int ifru_flags;
        int ifru_ivalue;
        char ifru_slave[IFNAMSIZ];
        char *ifru_newname;
    } ifr_ifru;
};

#define ifr_addr    ifr_ifru.ifru_addr
#define ifr_hwaddr  ifr_ifru.ifru_hwaddr
#define ifr_flags   ifr_ifru.ifru_flags
#define ifr_ifindex ifr_ifru.ifru_ivalue

/* ==== Stub versions of if_nametoindex / if_indextoname ==== */
static inline unsigned int if_nametoindex(const char *ifname)
{
    (void)ifname;
    return 0; /* Always return 0 in FreeRTOS stub */
}

static inline char *if_indextoname(unsigned int ifindex, char *ifname)
{
    (void)ifindex;
    if (ifname)
        ifname[0] = '\0';
    return ifname;
}

#endif /* _FREERTOS_NET_IF_H_ */

