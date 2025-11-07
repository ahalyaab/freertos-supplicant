#ifndef _FREERTOS_SYS_IOCTL_H_
#define _FREERTOS_SYS_IOCTL_H_

/* Stub definitions for ioctl to satisfy Linux socket code in FreeRTOS builds */

#define SIOCGIFINDEX 0x8933
#define SIOCGIFFLAGS 0x8913
#define SIOCSIFFLAGS 0x8914
#define SIOCGIFADDR  0x8915
#define SIOCSIFADDR  0x8916
#define SIOCGIFHWADDR 0x8927

/* Dummy ioctl implementation */
static inline int ioctl(int fd, unsigned long request, ...)
{
    (void)fd;
    (void)request;
    return 0; /* Always succeed in FreeRTOS stub */
}

#endif /* _FREERTOS_SYS_IOCTL_H_ */

