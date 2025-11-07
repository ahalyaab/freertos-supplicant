#ifndef _LINUX_GENETLINK_H_
#define _LINUX_GENETLINK_H_

#include <linux/types.h>
#include <linux/netlink.h>

/*
 * Minimal stub of <linux/genetlink.h>
 * Provides generic netlink macros and message structures.
 * Safe for FreeRTOS or bare-metal cross-builds.
 */

/* Generic Netlink message header */
struct genlmsghdr {
    __u8 cmd;       /* command (e.g., NL80211_CMD_*) */
    __u8 version;   /* interface version */
    __u16 reserved; /* padding/reserved */
};

/* Common Generic Netlink constants */
#define GENL_ID_CTRL 0x10
#define GENL_HDRLEN  ((int) sizeof(struct genlmsghdr))

/* Example Control Commands */
#define CTRL_CMD_NEWFAMILY 1
#define CTRL_CMD_DELFAMILY 2
#define CTRL_CMD_GETFAMILY 3
#define CTRL_CMD_NEWOPS    4
#define CTRL_CMD_DELOPS    5
#define CTRL_CMD_GETOPS    6

/* Example Attributes */
#define CTRL_ATTR_UNSPEC        0
#define CTRL_ATTR_FAMILY_ID     1
#define CTRL_ATTR_FAMILY_NAME   2
#define CTRL_ATTR_VERSION       3
#define CTRL_ATTR_HDRSIZE       4
#define CTRL_ATTR_MAXATTR       5

#endif /* _LINUX_GENETLINK_H_ */

