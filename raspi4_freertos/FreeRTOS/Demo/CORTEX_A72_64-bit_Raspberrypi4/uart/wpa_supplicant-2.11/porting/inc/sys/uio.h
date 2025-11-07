#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

/*
 * Minimal stub for FreeRTOS cross-compilation of wpa_supplicant.
 * These are placeholders to satisfy includes; they have no runtime effect.
 */

#include <stddef.h>

struct iovec {
    void  *iov_base; /* Starting address */
    size_t iov_len;  /* Number of bytes */
};

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

#endif /* _SYS_UIO_H_ */
