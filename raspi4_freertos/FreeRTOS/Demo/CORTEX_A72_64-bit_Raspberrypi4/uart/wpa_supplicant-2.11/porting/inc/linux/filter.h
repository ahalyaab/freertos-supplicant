#ifndef _FREERTOS_LINUX_FILTER_H_
#define _FREERTOS_LINUX_FILTER_H_

/*
 * Minimal stub for <linux/filter.h>
 * Provides fake BPF structures so wpa_supplicant builds under FreeRTOS.
 */

#include <stdint.h>

/* Basic BPF instruction structure (simplified) */
struct sock_filter {
    uint16_t code;   /* Instruction code */
    uint8_t jt;      /* Jump if true */
    uint8_t jf;      /* Jump if false */
    uint32_t k;      /* Generic multiuse field */
};

/* Program of BPF instructions */
struct sock_fprog {
    unsigned short len;            /* Number of instructions */
    struct sock_filter *filter;    /* Pointer to array of instructions */
};

/* Dummy BPF opcode constants (to satisfy compilation) */
#define BPF_LD     0x00
#define BPF_LDX    0x01
#define BPF_ST     0x02
#define BPF_STX    0x03
#define BPF_ALU    0x04
#define BPF_JMP    0x05
#define BPF_RET    0x06
#define BPF_MISC   0x07

/* Return codes */
#define BPF_K      0x00
#define BPF_X      0x08
#define BPF_A      0x10

#define BPF_ABS    0x20
#define BPF_IMM    0x00
#define BPF_MEM    0x60

/* Optional: fake attach/detach macros */
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27

#endif /* _FREERTOS_LINUX_FILTER_H_ */

/* Add these to the end of porting/inc/linux/filter.h */

/* Additional BPF macros for Linux socket filters */
#define BPF_H  0x08
#define BPF_JEQ 0x10

#define BPF_STMT(code, k) { (uint16_t)(code), 0, 0, (uint32_t)(k) }
#define BPF_JUMP(code, k, jt, jf) { (uint16_t)(code), (uint8_t)(jt), (uint8_t)(jf), (uint32_t)(k) }

