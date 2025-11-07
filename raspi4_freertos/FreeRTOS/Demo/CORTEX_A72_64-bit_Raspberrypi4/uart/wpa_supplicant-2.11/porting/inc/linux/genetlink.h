#ifndef _LINUX_GENETLINK_H_
#define _LINUX_GENETLINK_H_

#include <linux/netlink.h>

/*
 * Minimal stub of <linux/genetlink.h>
 * Provides generic netlink macros and message structures
 */

#define GENL_ID_CTRL 0x10

#define CTRL_CMD_NEWFAMILY 1
#define CTRL_CMD_DELFAMILY 2
#define CTRL_CMD_GETFAMILY 3
#define CTRL_CMD_NEWOPS    4
#define CTRL_CMD_DELOPS    5
#define CTRL_CMD_GETOPS    6

#define CTRL_ATTR_UNSPEC        0
#define CTRL_ATTR_FAMILY_ID     1
#define CTRL_ATTR_FAMILY_NAME   2
#define CTRL_ATTR_VERSION       3
#define CTRL_ATTR_HDRSIZE       4
#define CTRL_ATTR_MAXATTR       5

#endif /* _LINUX_GENETLINK_H_ */

