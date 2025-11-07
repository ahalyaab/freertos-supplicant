// SPDX-License-Identifier: MIT
#include "porting.h"

time_t time(time_t* tloc)
{
	panic();
}

struct tm *gmtime(const time_t *timep)
{
	panic();
}

struct tm *localtime(const time_t *timep)
{
	panic();
}

time_t mktime(struct tm *tm)
{
	panic();
}

int clock_gettime(int clock_id, struct timespec *ts)
{
	panic();
}

int gettimeofday(struct timeval *tv, void *tz)
{
	panic();
}
