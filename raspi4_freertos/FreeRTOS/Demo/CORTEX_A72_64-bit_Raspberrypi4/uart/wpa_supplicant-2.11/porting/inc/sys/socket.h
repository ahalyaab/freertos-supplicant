#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

/*
 * Minimal stub for FreeRTOS cross-compile of wpa_supplicant.
 * These definitions only satisfy compile-time references — no actual socket use.
 */

#include <stdint.h>

typedef int socklen_t;

/* ==== Address Structures ==== */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

struct in_addr {
    uint32_t s_addr;
};

struct sockaddr_in {
    short sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

/* ==== Basic Socket Constants ==== */
#define AF_INET        2
#define PF_INET        AF_INET
#define AF_PACKET      17
#define PF_PACKET      AF_PACKET

#define SOCK_STREAM    1
#define SOCK_DGRAM     2
#define SOCK_RAW       3

#define SOL_SOCKET     1
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27

#define INADDR_ANY     ((unsigned long)0x00000000)

/* ==== Dummy ioctl-related structures ==== */


#ifndef IFNAMSIZ
#define IFNAMSIZ 16
#endif

/* Simplified Linux-style ifreq structure for wpa_supplicant stubbing */
struct ifreq {
    char ifr_name[IFNAMSIZ]; /* Interface name, e.g., "eth0" */

    union {
        struct sockaddr ifru_addr;
        struct sockaddr ifru_dstaddr;
        struct sockaddr ifru_broadaddr;

        struct {
            unsigned short sa_family;
            char sa_data[14];
        } ifru_hwaddr; /* Hardware address (MAC) */

        short ifru_flags;
        int ifru_ivalue;
        char ifru_slave[IFNAMSIZ];
        char *ifru_newname;
        void *ifru_data;
    } ifr_ifru;
};

/* Linux-style convenience macros */
#define ifr_addr        ifr_ifru.ifru_addr
#define ifr_dstaddr     ifr_ifru.ifru_dstaddr
#define ifr_broadaddr   ifr_ifru.ifru_broadaddr
#define ifr_hwaddr      ifr_ifru.ifru_hwaddr
#define ifr_flags       ifr_ifru.ifru_flags
#define ifr_ifindex     ifr_ifru.ifru_ivalue
#define ifr_slave       ifr_ifru.ifru_slave
#define ifr_newname     ifr_ifru.ifru_newname
#define ifr_data        ifr_ifru.ifru_data




/* ==== Stubbed Socket API ==== */
static inline int socket(int domain, int type, int protocol)
{
    (void)domain; (void)type; (void)protocol;
    return 0;
}

static inline int setsockopt(int fd, int level, int optname, const void *optval, unsigned int optlen)
{
    (void)fd; (void)level; (void)optname; (void)optval; (void)optlen;
    return 0;
}

static inline int bind(int s, const struct sockaddr *addr, socklen_t len)
{
    (void)s; (void)addr; (void)len;
    return -1;
}

static inline int connect(int s, const struct sockaddr *addr, socklen_t len)
{
    (void)s; (void)addr; (void)len;
    return -1;
}

static inline int send(int s, const void *buf, int len, int flags)
{
    (void)s; (void)buf; (void)len; (void)flags;
    return -1;
}

static inline int recv(int s, void *buf, int len, int flags)
{
    (void)s; (void)buf; (void)len; (void)flags;
    return -1;
}

//static inline int close(int fd)
//{
  //  (void)fd;
    //return 0;
//}

#endif /* _SYS_SOCKET_H_ */

