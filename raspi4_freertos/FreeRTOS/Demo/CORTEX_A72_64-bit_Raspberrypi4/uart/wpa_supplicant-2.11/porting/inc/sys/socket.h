#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

/*
 * Minimal stub for <sys/socket.h> and <linux/filter.h>
 * Combined version for FreeRTOS cross-compilation of wpa_supplicant.
 * Provides fake socket and BPF structures/macros so code compiles cleanly
 * without actual Linux networking.
 */

#include <stdint.h>
#include <stddef.h>

/* Marker to avoid redefinition of iovec in sys/uio.h */
#define HAVE_STRUCT_IOVEC

/* ---------------------------------------------------------------------
 *                         BASIC SOCKET DEFINITIONS
 * --------------------------------------------------------------------*/

/* Basic typedef */
typedef int socklen_t;

/* Socket types */
#define SOCK_STREAM 1
#define SOCK_DGRAM  2
#define SOCK_RAW    3

/* Address families */
#define AF_INET     2
#define PF_INET     AF_INET
#define PF_PACKET   17

/* Socket levels and options */
#define SOL_SOCKET       1
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27
#define SO_PRIORITY      12

/* ---------------------------------------------------------------------
 *                         SOCKET ADDRESS STRUCTURES
 * --------------------------------------------------------------------*/

struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

/*struct in_addr {
    unsigned int s_addr;
};

struct sockaddr_in {
    short sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};
*/

/* ---------------------------------------------------------------------
 *                         SCATTER/GATHER I/O STRUCTURES
 * --------------------------------------------------------------------*/

struct iovec {
    void  *iov_base; /* Pointer to data */
    size_t iov_len;  /* Length of data */
};

struct msghdr {
    void         *msg_name;       /* Optional address */
    socklen_t     msg_namelen;    /* Size of address */
    struct iovec *msg_iov;        /* Scatter/gather array */
    size_t        msg_iovlen;     /* # elements in msg_iov */
    void         *msg_control;    /* Ancillary data */
    size_t        msg_controllen; /* Ancillary data buffer len */
    int           msg_flags;      /* Flags on received message */
};

/* ---------------------------------------------------------------------
 *                         SOCKET FUNCTION STUBS
 * --------------------------------------------------------------------*/

static inline int socket(int domain, int type, int protocol)
{
    (void)domain; (void)type; (void)protocol;
    return -1;
}

static inline int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
    (void)sockfd; (void)addr; (void)addrlen;
    return -1;
}

static inline int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
    (void)sockfd; (void)addr; (void)addrlen;
    return -1;
}

static inline int send(int sockfd, const void *buf, int len, int flags)
{
    (void)sockfd; (void)buf; (void)len; (void)flags;
    return -1;
}

static inline int recv(int sockfd, void *buf, int len, int flags)
{
    (void)sockfd; (void)buf; (void)len; (void)flags;
    return -1;
}

static inline int setsockopt(int sockfd, int level, int optname,
                             const void *optval, socklen_t optlen)
{
    (void)sockfd; (void)level; (void)optname; (void)optval; (void)optlen;
    return 0;
}

static inline int getsockopt(int sockfd, int level, int optname,
                             void *optval, socklen_t *optlen)
{
    (void)sockfd; (void)level; (void)optname; (void)optval; (void)optlen;
    return 0;
}

/* ---------------------------------------------------------------------
 *                         BPF (FILTER) STUBS
 * --------------------------------------------------------------------*/

/* Basic BPF instruction structure */
struct sock_filter {
    uint16_t code;   /* Instruction code */
    uint8_t jt;      /* Jump if true */
    uint8_t jf;      /* Jump if false */
    uint32_t k;      /* Generic multiuse field */
};

/* BPF program */
struct sock_fprog {
    unsigned short len;            /* Number of instructions */
    struct sock_filter *filter;    /* Pointer to array of instructions */
};

/* ---- BPF instruction classes ---- */
#define BPF_LD     0x00
#define BPF_LDX    0x01
#define BPF_ST     0x02
#define BPF_STX    0x03
#define BPF_ALU    0x04
#define BPF_JMP    0x05
#define BPF_RET    0x06
#define BPF_MISC   0x07

/* ---- Data widths ---- */
#define BPF_W      0x00
#define BPF_H      0x08
#define BPF_B      0x10

/* ---- Addressing modes ---- */
#define BPF_IMM    0x00
#define BPF_ABS    0x20
#define BPF_IND    0x40
#define BPF_MEM    0x60
#define BPF_LEN    0x80
#define BPF_MSH    0xa0

/* ---- ALU operations ---- */
#define BPF_ADD    0x00
#define BPF_SUB    0x10
#define BPF_MUL    0x20
#define BPF_DIV    0x30
#define BPF_OR     0x40
#define BPF_AND    0x50
#define BPF_LSH    0x60
#define BPF_RSH    0x70
#define BPF_NEG    0x80

/* ---- Jump operations ---- */
#define BPF_JA     0x00
#define BPF_JEQ    0x10
#define BPF_JGT    0x20
#define BPF_JGE    0x30
#define BPF_JSET   0x40

/* ---- Source operand ---- */
#define BPF_K      0x00
#define BPF_X      0x08
#define BPF_A      0x10

/* ---- Misc ---- */
#define BPF_TAX    0x00
#define BPF_TXA    0x80

/* ---- Helper macros ---- */
#define BPF_CLASS(code)   ((code) & 0x07)
#define BPF_STMT(code, k) { (uint16_t)(code), 0, 0, (uint32_t)(k) }
#define BPF_JUMP(code, k, jt, jf) { (uint16_t)(code), (uint8_t)(jt), (uint8_t)(jf), (uint32_t)(k) }

/* ---- Socket filter attach options ---- */
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27

#endif /* _SYS_SOCKET_H_ */

