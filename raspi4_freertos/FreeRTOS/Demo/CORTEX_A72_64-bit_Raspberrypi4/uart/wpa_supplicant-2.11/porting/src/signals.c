// SPDX-License-Identifier: MIT
#include "porting.h"

void abort(void)
{
	panic();
}

int fflush(FILE *stream)
{
	panic();
}

void perror(const char *s)
{
	panic();
}

void (*signal(int signum, void (*handler)(int)))(int)
{
	panic();
}

int select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout)
{
	panic();
}

unsigned int alarm(unsigned int seconds)
{
	panic();
}

void exit(int status)
{
	panic();
}
const char *strerror(int errnum)
{
	panic();
}

pid_t fork(void)
{
	panic();
}

pid_t waitpid(pid_t pid, int *status, int options)
{
	panic();
}

pid_t getpid(void)
{
	panic();
}
