#pragma once

#include <stdint.h>

// Standard Ethernet address length
#define ETH_ALEN 6

// Minimal replacement for struct ether_addr
struct ether_addr {
    uint8_t ether_addr_octet[ETH_ALEN];
};

// Some protocol constants used by Linux code paths (not needed by FreeRTOS)
#ifndef ETH_P_PAE
#define ETH_P_PAE 0x888E    // EAP over LAN (802.1X)
#endif

#ifndef ETH_P_ARP
#define ETH_P_ARP 0x0806
#endif

#ifndef ETH_P_IP
#define ETH_P_IP 0x0800
#endif

#ifndef ETH_P_IPV6
#define ETH_P_IPV6 0x86DD
#endif

