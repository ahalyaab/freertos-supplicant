#ifndef _FREERTOS_LINUX_FILTER_H_
#define _FREERTOS_LINUX_FILTER_H_

/*
 * Minimal stub for <linux/filter.h>
 * Provides fake BPF structures and macros so wpa_supplicant builds under FreeRTOS.
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


typedef int socklen_t;

#define SOCK_STREAM 1
#define SOCK_DGRAM  2
#define SOCK_RAW    3

#define SOL_SOCKET  1
#define SO_ATTACH_FILTER 26




/* ---- BPF instruction classes ---- */
#define BPF_LD     0x00
#define BPF_LDX    0x01
#define BPF_ST     0x02
#define BPF_STX    0x03
#define BPF_ALU    0x04
#define BPF_JMP    0x05
#define BPF_RET    0x06
#define BPF_MISC   0x07

/* ---- Data widths ---- */
#define BPF_W      0x00
#define BPF_H      0x08
#define BPF_B      0x10

/* ---- Addressing modes ---- */
#define BPF_IMM    0x00
#define BPF_ABS    0x20
#define BPF_IND    0x40
#define BPF_MEM    0x60
#define BPF_LEN    0x80
#define BPF_MSH    0xa0

/* ---- ALU operations ---- */
#define BPF_ADD    0x00
#define BPF_SUB    0x10
#define BPF_MUL    0x20
#define BPF_DIV    0x30
#define BPF_OR     0x40
#define BPF_AND    0x50
#define BPF_LSH    0x60
#define BPF_RSH    0x70
#define BPF_NEG    0x80

/* ---- Jump operations ---- */
#define BPF_JA     0x00
#define BPF_JEQ    0x10
#define BPF_JGT    0x20
#define BPF_JGE    0x30
#define BPF_JSET   0x40

/* ---- Source operand ---- */
#define BPF_K      0x00
#define BPF_X      0x08
#define BPF_A      0x10

/* ---- Misc ---- */
#define BPF_TAX    0x00
#define BPF_TXA    0x80

/* ---- Helper macros ---- */
#define BPF_CLASS(code)   ((code) & 0x07)
#define BPF_STMT(code, k) { (uint16_t)(code), 0, 0, (uint32_t)(k) }
#define BPF_JUMP(code, k, jt, jf) { (uint16_t)(code), (uint8_t)(jt), (uint8_t)(jf), (uint32_t)(k) }

/* ---- Socket filter attach options ---- */
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27

#endif /* _FREERTOS_LINUX_FILTER_H_ */

