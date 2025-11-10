#ifndef _FREERTOS_SYS_UIO_H_
#define _FREERTOS_SYS_UIO_H_
/*
 * Minimal stub for FreeRTOS cross-compilation of wpa_supplicant.
 * These are placeholders to satisfy includes; they have no runtime effect.
 */

#include <stddef.h>
#ifndef !defined(HAVE_STRUCT_IOVEC) && !defined(_SYS_SOCKET_H_)
struct iovec {
    void  *iov_base; /* Starting address */
    size_t iov_len;  /* Number of bytes */
};
#endif /* _SYS_SOCKET_H_ */

/* Dummy versions of the usual syscalls */
static inline int readv(int fd, const struct iovec *iov, int iovcnt)
{
    (void)fd; (void)iov; (void)iovcnt;
    return -1;
}

static inline int writev(int fd, const struct iovec *iov, int iovcnt)
{
    (void)fd; (void)iov; (void)iovcnt;
    return -1;
}

#endif /* _FREERTOS_SYS_UIO_H_ */
