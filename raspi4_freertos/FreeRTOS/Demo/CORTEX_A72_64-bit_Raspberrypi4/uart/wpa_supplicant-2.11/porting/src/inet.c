// SPDX-License-Identifier: MIT
#include "porting.h"

typedef int socklen_t;
char *inet_ntoa(uint32_t addr)
{
	panic();
}

int nanosleep(uint32_t seconds, uint32_t nanoseconds)
{
	panic();
}

int inet_aton(const char *cp, uint32_t *addr)
{
	panic();
}

const char *inet_ntop(int af, const void *src, char *dst, socklen_t size)
{
	panic();
}


