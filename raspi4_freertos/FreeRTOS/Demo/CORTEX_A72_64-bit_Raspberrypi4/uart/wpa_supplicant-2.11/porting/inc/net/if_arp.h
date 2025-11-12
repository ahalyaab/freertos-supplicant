#ifndef _NET_IF_ARP_H_
#define _NET_IF_ARP_H_

/*
 * Minimal stub for <net/if_arp.h>
 * Provides ARPHRD_* hardware type constants and related macros
 * used by Linux networking code (e.g., wpa_supplicant).
 */

#include <stdint.h>

/* ARP hardware identifiers (subset of real Linux values) */
#define ARPHRD_NETROM   0       /* From KA9Q: NET/ROM pseudo */
#define ARPHRD_ETHER    1       /* Ethernet 10/100Mbps */
#define ARPHRD_EETHER   2       /* Experimental Ethernet */
#define ARPHRD_AX25     3       /* AX.25 Level 2 */
#define ARPHRD_PRONET   4       /* PROnet token ring */
#define ARPHRD_CHAOS    5       /* Chaosnet */
#define ARPHRD_IEEE802  6       /* IEEE 802.2 Ethernet/TR/TB */
#define ARPHRD_ARCNET   7       /* ARCnet */
#define ARPHRD_APPLETLK 8       /* AppleTalk */
#define ARPHRD_SLIP     256
#define ARPHRD_CSLIP    257
#define ARPHRD_SLIP6    258
#define ARPHRD_CSLIP6   259
#define ARPHRD_PPP      512
#define ARPHRD_TUNNEL   768
#define ARPHRD_LOOPBACK 772
#define ARPHRD_LOCALTLK 773
#define ARPHRD_NONE     65534   /* Void type, no ARP */

#endif /* _NET_IF_ARP_H_ */

