// SPDX-License-Identifier: MIT
#include "porting.h"

int nl_socket_set_nonblocking(int sock)
{
	panic();
}

void nl_cache_free(struct nl_cache *cache)
{
	panic();
}

struct nl_sock *nl_socket_alloc_cb(void (*cb)(struct nl_sock *))
{
	panic();
}

int nl_wait_for_ack(struct nl_sock *sk)
{
	panic();
}

int nlmsg_append(struct nl_msg *msg, void *data, size_t data_len, int align)
{
	panic();
}

struct nlmsghdr *nlmsg_alloc(void)
{
	panic();
}

struct nl_msg *nlmsg_alloc_simple(int type, int flags)
{
	panic();
}

int nl_connect(struct nl_sock *sock)
{
	panic();
}

struct nl_socket *nl_socket_alloc(void)
{
	panic();
}

int nl_socket_set_buffer_size(int *socket, int size, int flags)
{
	panic();
}

int nl_socket_add_membership(struct nl_sock *sock, int group)

{
	panic();
}

struct nl_msg *nlmsg_alloc_size(size_t size)
{
	panic();
}

int nlmsg_total_size(int data_len)
{
	panic();
}

int nl_socket_modify_cb(struct nl_sock *sock, int type, int flags,
		int (*cb)(struct nl_msg *, void *), void *cb_data)
{
	panic();
}

int nl_recvmsgs_default(struct nl_sock *sock)
{
	panic();
}

int nl_cache_find(struct nl_cache *cache, struct nl_object *obj)
{
	panic();
}

int nl_cache_refill(struct nl_sock *sk, struct nl_cache *cache)
{
	panic();
}

typedef int (*nl_recvmsg_msg_cb_t)(struct nl_msg *msg, void *arg);

int nl_send_auto_complete(struct nl_sock *sock, struct nlmsghdr *nlh)
{
	panic();
}

int nl_cb_err(struct nl_msg *msg, struct nl_cb *cb)
{
	panic();
}

int nl_recvmsgs(struct nl_sock *sock, struct nl_cb *cb)
{
	panic();
}

int nl_geterror(struct nl_sock *sock)
{
	panic();
}

struct nl_cb *nl_socket_get_cb(struct nl_sock *sock)
{
	panic();
}

struct nl_cb *nl_cb_alloc(void)
{
	panic();
}

struct nl_cb *nl_cb_clone(const struct nl_cb *cb)
{
	panic();
}

void nl_cb_put(struct nl_cb *cb)
{
	panic();
}

int nl_socket_get_fd(struct nl_sock *sock)
{
	panic();
}

void *nlmsg_data(const struct nlmsghdr *nlh)
{
	panic();
}

void nl_socket_free(struct nl_sock *sock)
{
	panic();
}

void nl_cb_set(struct nl_cb *cb, int type, int protocol, nl_recvmsg_msg_cb_t fn, void *arg)
{
	panic();
}

void nlmsg_free(struct nlmsghdr *nlh)
{
	panic();
}
