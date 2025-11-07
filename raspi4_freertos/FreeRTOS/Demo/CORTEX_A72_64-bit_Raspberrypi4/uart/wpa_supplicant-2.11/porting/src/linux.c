// SPDX-License-Identifier: MIT
#include "porting.h"

typedef int socklen_t;
int socket(int domain, int type, int protocol)
{
	panic();
}

int stat(const char *path, struct stat *buf)
{
	panic();
}

void *dlsym(void *handle, const char *symbol)
{
	panic();
}

void *dlopen(const char *path, int mode)
{
	panic();
}

int raise(int sig)
{
	panic();
}

char *dlerror(void)
{
	panic();
}

int mkdir(const char *pathname, mode_t mode)
{
	panic();
}

int rmdir(const char *pathname)
{
	panic();
}

int chmod(const char *path, mode_t mode)
{
	panic();
}

int lchown(const char *path, uid_t owner, gid_t group)
{
	panic();
}

int getopt(int argc, char *const argv[], const char *optstring)
{
	panic();
}

char *getenv(const char *name)
{
	panic();
}

int tcgetattr(int __fd, struct termios *__termios_p) __THROW
{
	panic();
}

int inet_pton(int af, const char *src, void *dst)
{
	panic();
}

int tcsetattr(int __fd, int __optional_actions,
		const struct termios *__termios_p) __THROW
{
	panic();
}

struct group *getgrnam(const char *name)
{
	panic();
}

int dlclose(void *handle)
{
	panic();
}

ssize_t recvmsg(int sockfd, struct msghdr *msg, int flags)
{
	panic();
}

ssize_t send(int sockfd, const void *buf, size_t len, int flags)
{
	panic();
}

int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
	panic();
}

int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
	panic();
}

int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen)
{
	panic();
}

int ioctl(int fd, unsigned long request, ...)
{
	panic();
}

ssize_t sendmsg(int sockfd, const struct msghdr *msg, int flags)
{
	panic();
}

unsigned int if_nametoindex(const char *ifname)
{
	panic();
}

unsigned int rand(void)
{
	panic();
}

ssize_t readlink(const char *__restrict __path,
		char *__restrict __buf, size_t __buflen)
{
	panic();
}

ssize_t recvfrom(int sockfd, void *buf, size_t len, int flags, struct sockaddr *src_addr, socklen_t *addrlen)
{
	panic();
}

int scandir(const char *dir, struct dirent ***namelist, int (*filter)(const struct dirent *), int (*compar)(const struct dirent **, const struct dirent **))
{
	panic();
}

ssize_t recv(int __fd, void *__buf, size_t __n, int __flags)
{
	panic();
}

int if_indextoname(unsigned int ifindex, char *ifname)
{
	panic();
}

int write(int fd, const void *buf, size_t count)
{
	panic();
}

struct cmsghdr *__cmsg_nxthdr(struct msghdr *msg, struct cmsghdr *cmsg)
{
	panic();
}

int uname(struct utsname *name)
{
	panic();
}

ssize_t sendto(int sockfd, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr, socklen_t addrlen)
{
	panic();
}

char *realpath(const char *path, char *resolved_path)
{
	panic();
}
