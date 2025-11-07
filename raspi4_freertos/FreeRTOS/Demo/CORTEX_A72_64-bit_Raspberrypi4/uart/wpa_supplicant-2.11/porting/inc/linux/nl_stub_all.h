#ifndef _LINUX_NL_STUB_ALL_H_
#define _LINUX_NL_STUB_ALL_H_

/*
 * Unified stub for nl80211/netlink/genetlink dependencies
 * Allows wpa_supplicant and nl80211-based driver sources to compile
 * under FreeRTOS / bare-metal toolchains with no kernel headers.
 *
 * This file consolidates linux/netlink.h, linux/genetlink.h,
 * linux/socket.h, and netlink attribute/policy types.
 */

#include <linux/types.h>

/* ===== Socket and Address families ===== */
#define AF_UNSPEC   0
#define AF_UNIX     1
#define AF_INET     2
#define AF_INET6    10
#define AF_PACKET   17

#define PF_UNSPEC   AF_UNSPEC
#define PF_UNIX     AF_UNIX
#define PF_INET     AF_INET
#define PF_INET6    AF_INET6
#define PF_PACKET   AF_PACKET

/* ===== Netlink constants ===== */
#define NETLINK_ROUTE      0
#define NETLINK_GENERIC    16

#define NLM_F_REQUEST      1
#define NLM_F_MULTI        2
#define NLM_F_ACK          4
#define NLM_F_ECHO         8
#define NLM_F_DUMP_INTR    16
#define NLM_F_DUMP_FILTERED 32
#define NLM_F_ROOT         0x100
#define NLM_F_MATCH        0x200
#define NLM_F_DUMP         (NLM_F_ROOT | NLM_F_MATCH)
#define NLM_F_ATOMIC       0x400

#define NL_OK    0
#define NL_SKIP  1
#define NL_STOP  2

/* ===== Generic Netlink families ===== */
#define GENL_ID_CTRL 0x10

#define CTRL_CMD_NEWFAMILY 1
#define CTRL_CMD_DELFAMILY 2
#define CTRL_CMD_GETFAMILY 3

#define CTRL_ATTR_UNSPEC        0
#define CTRL_ATTR_FAMILY_ID     1
#define CTRL_ATTR_FAMILY_NAME   2
#define CTRL_ATTR_VERSION       3
#define CTRL_ATTR_HDRSIZE       4
#define CTRL_ATTR_MAXATTR       5



/* ===== Attribute types ===== */
#define NLA_UNSPEC 0
#define NLA_U8     1
#define NLA_U16    2
#define NLA_U32    3
#define NLA_U64    4
#define NLA_STRING 5
#define NLA_FLAG   6
#define NLA_NESTED 7

struct nla_policy {
    int type;
};

/* ===== Alignment macros ===== */
#define NLA_ALIGNTO 4
#define NLA_ALIGN(len) (((len) + NLA_ALIGNTO - 1) & ~(NLA_ALIGNTO - 1))
#define NLA_HDRLEN ((int) NLA_ALIGN(sizeof(struct nlattr)))

/* ===== Iteration macros (no-ops for FreeRTOS) ===== */
#define nla_for_each_nested(pos, nla, rem) for (rem = 0; rem < 1; rem++)
#define for_each_nested(pos, nla, rem)     for (rem = 0; rem < 1; rem++)

/* ===== Attribute accessors (dummies) ===== */
static inline void *nla_data(const struct nlattr *nla) { return NULL; }
static inline int nla_len(const struct nlattr *nla) { (void)nla; return 0; }

#endif /* _LINUX_NL_STUB_ALL_H_ */

