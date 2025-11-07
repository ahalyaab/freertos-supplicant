// SPDX-License-Identifier: MIT
#include "porting.h"

uint32_t genl_family_get_maxattr(struct genl_family *family)
{
	panic();
}

void genl_family_put(struct genl_family *family)
{
	panic();
}

struct genl_family *genl_ctrl_search(struct nl_cache *cache, int family_id)
{
	panic();
}

int genl_ctrl_resolve(struct nl_sock *sk, const char *name)
{
	panic();
}

int genl_ctrl_alloc_cache(struct nl_sock *sk, struct nl_cache **cache)
{
	panic();
}

void *genlmsg_put(struct nl_msg *msg, uint32_t pid, uint32_t seq,
		int family, int cmd, int flags, uint8_t version, uint8_t res)
{
	panic();
}

int genl_connect(struct nl_sock *sk)
{
	panic();
}

int genlmsg_attrlen(const struct nlmsghdr *nlh)
{
	panic();
}

void *genlmsg_attrdata(const struct nlmsghdr *nlh, int *len)
{
	panic();
}
