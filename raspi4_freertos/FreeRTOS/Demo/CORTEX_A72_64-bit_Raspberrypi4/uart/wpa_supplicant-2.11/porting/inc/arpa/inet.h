#ifndef _FREERTOS_ARPA_INET_H_
#define _FREERTOS_ARPA_INET_H_

#include <stdint.h>
#include <netinet/in.h>

/*
 * Minimal stub for <arpa/inet.h>
 */

static inline unsigned int inet_addr(const char *cp) { (void)cp; return 0; }
static inline const char *inet_ntoa(struct in_addr in) { (void)in; return "0.0.0.0"; }
static inline int inet_aton(const char *cp, struct in_addr *inp) { (void)cp; (void)inp; return 1; }

#endif /* _FREERTOS_ARPA_INET_H_ */

