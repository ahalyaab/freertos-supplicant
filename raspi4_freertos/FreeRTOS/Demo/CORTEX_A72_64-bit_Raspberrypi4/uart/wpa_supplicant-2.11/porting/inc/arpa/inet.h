#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#include <netinet/in.h>

/*
 * Minimal stub for FreeRTOS build of wpa_supplicant.
 * These are placeholders for standard inet_xxx functions.
 */

static inline unsigned int inet_addr(const char *cp) { (void)cp; return 0; }
static inline const char *inet_ntoa(struct in_addr in) { (void)in; return "0.0.0.0"; }
static inline int inet_aton(const char *cp, struct in_addr *inp) { (void)cp; (void)inp; return 1; }

#endif /* _ARPA_INET_H_ */
