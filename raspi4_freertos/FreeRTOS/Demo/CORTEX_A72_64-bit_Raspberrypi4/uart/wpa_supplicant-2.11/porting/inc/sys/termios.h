#pragma once

// Minimal stub for POSIX <sys/termios.h> used only for wpa_passphrase.
// FreeRTOS does not support real terminal line discipline.

struct termios {
    unsigned int c_lflag;    // only field referenced so stub is enough
};

#define TCSANOW 0
#define ECHO    0x00000008

// No real tcsetattr/tcgetattr — provide no-op stubs
static inline int tcgetattr(int fd, struct termios *term) { (void)fd; (void)term; return 0; }
static inline int tcsetattr(int fd, int optional_actions, const struct termios *term)
{
    (void)fd; (void)optional_actions; (void)term;
    return 0;
}

