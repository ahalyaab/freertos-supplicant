#ifndef _LINUX_NETLINK_H_
#define _LINUX_NETLINK_H_

/*
 * Minimal stub of <linux/netlink.h>
 * Provides only the flags and structures needed by wpa_supplicant and nl80211.
 * This header is safe for FreeRTOS/bare-metal cross-builds.
 */

#include <linux/types.h>

/* Netlink message types and flags */
#define NLM_F_REQUEST      1
#define NLM_F_MULTI        2
#define NLM_F_ACK          4
#define NLM_F_ECHO         8
#define NLM_F_DUMP_INTR    16
#define NLM_F_DUMP_FILTERED 32
#define NLM_F_DUMP         (NLM_F_ROOT | NLM_F_MATCH)
#define NLM_F_ROOT         0x100
#define NLM_F_MATCH        0x200
#define NLM_F_ATOMIC       0x400
#define NLM_F_DUMP_UNKNOWN 0x800

/* Common Netlink protocol families */
#define NETLINK_ROUTE      0
#define NETLINK_GENERIC    16

/* Minimal struct stubs */
struct nlmsghdr {
    __u32 nlmsg_len;   /* Length of message including header */
    __u16 nlmsg_type;  /* Message content */
    __u16 nlmsg_flags; /* Additional flags */
    __u32 nlmsg_seq;   /* Sequence number */
    __u32 nlmsg_pid;   /* Sending process port ID */
};

struct nlattr {
    __u16 nla_len;
    __u16 nla_type;
};

/* Attribute validation policy structure */
struct nla_policy {
    __u16 type;     /* Attribute type */
    __u16 len;      /* Fixed length if applicable */
    __u16 minlen;   /* Minimum valid length */
    __u16 maxlen;   /* Maximum valid length */
};

/* Alignment macros */
#define NLA_ALIGNTO 4
#define NLA_ALIGN(len) (((len) + NLA_ALIGNTO - 1) & ~(NLA_ALIGNTO - 1))
#define NLA_HDRLEN ((int) NLA_ALIGN(sizeof(struct nlattr)))

#endif /* _LINUX_NETLINK_H_ */

