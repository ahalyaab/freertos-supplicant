#ifndef _LINUX_SOCKET_H_
#define _LINUX_SOCKET_H_

#include <linux/types.h>

#define AF_UNSPEC  0
#define AF_UNIX    1
#define AF_INET    2
#define AF_INET6   10
#define AF_PACKET  17

#define PF_UNSPEC  AF_UNSPEC
#define PF_UNIX    AF_UNIX
#define PF_INET    AF_INET
#define PF_INET6   AF_INET6
#define PF_PACKET  AF_PACKET

#endif /* _LINUX_SOCKET_H_ */

