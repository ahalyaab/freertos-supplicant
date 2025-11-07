#ifndef _LINUX_TYPES_H_
#define _LINUX_TYPES_H_

/*
 * Minimal stub of <linux/types.h>
 * For cross-compiling Linux networking code under FreeRTOS or bare-metal.
 * Only defines common typedefs and macros used by driver code.
 */

#include <stdint.h>

/* Unsigned types */
typedef uint8_t  __u8;
typedef uint16_t __u16;
typedef uint32_t __u32;
typedef uint64_t __u64;

/* Signed types */
typedef int8_t   __s8;
typedef int16_t  __s16;
typedef int32_t  __s32;
typedef int64_t  __s64;

/* Compatibility aliases */
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;

/* Boolean compatibility */
#ifndef __bool_defined
#define __bool_defined
#ifndef bool
typedef unsigned char bool;
#endif
#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif
#endif

#endif /* _LINUX_TYPES_H_ */

