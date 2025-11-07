// SPDX-License-Identifier: MIT
#include "porting.h"
#include <sys/socket.h>

size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream)
{
	panic();
}

void rewind(FILE *stream)
{
	panic();
}

int setvbuf(FILE *stream, char *buf, int mode, size_t size)
{
	panic();
}

typedef int MyFileDescriptor;
MyFileDescriptor open(const char *filename, const char *mode)
{
	panic();
}

ssize_t read(MyFileDescriptor fd, void *buffer, size_t count)
{
	panic();
}

int close(MyFileDescriptor fd)
{
	panic();
}

int fcntl(MyFileDescriptor fd, int cmd, ...)
{
	panic();
}

int *__errno(void)
{
	panic();
}

int daemon(int nochdir, int noclose)
{
	panic();
}

FILE *fopen(const char *filename, const char *mode)
{
	panic();
}

size_t fread(void *ptr, size_t size, size_t count, FILE *stream)
{
	panic();
}

int fseek(FILE *stream, long offset, int whence)
{
	panic();
}

int fclose(FILE *stream)
{
	panic();
}

long random(void)
{
	panic();
}

int unlink(const char *pathname)
{
	panic();
}

void srandom(unsigned int seed)
{
	panic();
}

long ftell(MyFile *myfile)
{
	panic();
}

int access(const char *pathname, int mode)
{
	panic();
}

int fileno(FILE *stream)
{
	panic();
}

int fsync(FILE *stream)
{
	panic();
}

int fputc(int c, FILE *stream)
{
	panic();
}

int putc(int character, FILE *stream)
{
	panic();
}

char *getcwd(char *buf, size_t size)
{
	panic();
}

int rename(const char *oldname, const char *newname)
{
	panic();
}

int getnameinfo(const struct sockaddr *sa, socklen_t salen,
		char *host, size_t hostlen,
		char *serv, size_t servlen,
		int flags)
{
	panic();
}
