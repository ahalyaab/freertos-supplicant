#pragma once

// UNIX domain sockets are not supported on FreeRTOS.
// Provide minimal stubs so wpa_supplicant compiles.

#define AF_UNIX 1            // dummy value

struct sockaddr_un {
    unsigned short sun_family;   // AF_UNIX
    char sun_path[108];          // unused
};


