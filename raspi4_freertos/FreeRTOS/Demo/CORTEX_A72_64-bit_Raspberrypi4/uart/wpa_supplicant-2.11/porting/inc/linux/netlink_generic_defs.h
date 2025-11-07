#ifndef _LINUX_NETLINK_GENERIC_DEFS_H_
#define _LINUX_NETLINK_GENERIC_DEFS_H_

/*
 * Supplemental netlink constants used in nl80211/nlutils.
 */

#define NL_OK    0
#define NL_SKIP  1
#define NL_STOP  2

/* Attribute policy types */
#define NLA_UNSPEC 0
#define NLA_U8     1
#define NLA_U16    2
#define NLA_U32    3
#define NLA_U64    4
#define NLA_STRING 5
#define NLA_FLAG   6
#define NLA_NESTED 7

/* Macros to fake nla iteration loops */
#define nla_for_each_nested(pos, nla, rem) for (rem = 0; rem < 1; rem++)
#define for_each_nested(pos, nla, rem)     for (rem = 0; rem < 1; rem++)

struct nla_policy {
    int type;
};

#endif /* _LINUX_NETLINK_GENERIC_DEFS_H_ */

