// SPDX-License-Identifier: MIT
#include "porting.h"

typedef uint8_t __u8;
typedef uint64_t __u64;

void *nla_data(const struct nlattr *nla)
{
	panic();
}

int nla_get_flag(const struct nlattr *attr)
{
	panic();
}

char *nla_get_string(const struct nlattr *attr)
{
	panic();
}

int nla_put(struct nl_msg *msg, int type, int len, const void *data)
{
	panic();
}

struct nlattr *nla_find(const struct nlattr *start, int len, int type)
{
	panic();
}

int8_t nla_get_s8(const struct nlattr *attr)
{
	panic();
}

int nla_put_nested(struct nl_msg *msg, int attrtype, const struct nl_msg *nested_msg)
{
	panic();
}

int nla_put_string(struct nl_msg *msg, int type, const char *str)
{
	panic();
}

struct nlattr *nlmsg_find_attr(struct nlmsghdr *nlh, int hdrlen, int type)
{
	panic();
}

int nla_type(const struct nlattr *attr)
{
	panic();
}

int nla_total_size(int payload)
{
	panic();
}

struct nlattr *nla_next(const struct nlattr *attr, int *rem)
{
	panic();
}

int nla_ok(const struct nlattr *nla, int len)
{
	panic();
}

__u64 nla_get_u64(const struct nlattr *nla)
{
	panic();
}

__u8 nla_get_u8(const struct nlattr *nla)
{
	panic();
}

__u32 nla_get_u32(const struct nlattr *nla)
{
	panic();
}

int nla_parse(struct nlattr **tb, int maxtype, struct nlattr *head, int len, struct netlink_ext_ack *extack)
{
	panic();
}

int nla_parse_nested(struct nlattr **tb, int maxtype, const struct nlattr *nla)
{
	panic();
}

int nla_len(const struct nlattr *nla)
{
	panic();
}
__u16 nla_get_u16(const struct nlattr *nla)
{
	panic();
}

void nla_nest_end(struct sk_buff *skb, struct nlattr *nla)
{
	panic();
}

struct nlattr *nla_nest_start(struct sk_buff *skb, int type)
{
	panic();
}

int nla_put_u32(struct nl_msg *msg, int attrtype, uint32_t value)
{
	panic();
}

int nla_put_u8(struct nl_msg *msg, int attrtype, uint8_t value)
{
	panic();
}

int nla_put_u64(struct nl_msg *msg, int attrtype, uint64_t value)
{
	panic();
}

int nla_put_u16(struct sk_buff *skb, int type, __u16 value)
{
	panic();
}

int nla_put_flag(struct sk_buff *skb, int type)
{
	panic();
}

