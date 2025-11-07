// SPDX-License-Identifier: MIT

void rtnl_link_put(struct net_device *dev)
{
	panic();
}

struct macsec_link *rtnl_link_macsec_alloc(struct net_device *dev)
{
	panic();
}

int rtnl_link_add(struct net *net, struct rtnl_link *link, int flags)
{
	panic();
}

int rtnl_link_macsec_set_cipher_suite(struct rtnl_link *link, struct macsec_cipher_suite *cs)
{
	panic();
}

int rtnl_link_get_ifindex(struct rtnl_link *link)
{
	panic();
}

int rtnl_link_set_link(struct rtnl_link *link, unsigned int ifindex)
{
	panic();
}

int rtnl_link_alloc(void)
{
	panic();
}

int rtnl_link_unset_flags(struct rtnl_link *link, int flags)
{
	panic();
}

int rtnl_link_macsec_set_protect(struct rtnl_link *link, int protect)
{
	panic();
}

int rtnl_link_macsec_set_encrypt(struct rtnl_link *link, int encrypt)
{
	panic();
}

int rtnl_link_macsec_set_replay_protect(struct rtnl_link *link, int replay_protect)
{
	panic();
}

int rtnl_link_macsec_set_window(struct rtnl_link *link, int window)
{
	panic();
}

int rtnl_link_macsec_set_encoding_sa(struct rtnl_link *link, int encoding_sa)
{
	panic();
}

int rtnl_link_macsec_set_offload(struct rtnl_link *link, int offload)
{
	panic();
}

int rtnl_link_alloc_cache(struct nl_sock *sock, int family, struct nl_cache **cache)
{
	panic();
}

int rtnl_link_name2i(struct nl_cache *cache, const char *ifname)
{
	panic();
}

int rtnl_link_set_name(struct rtnl_link *link, const char *name)
{
	panic();
}

const char *rtnl_link_get_name(struct rtnl_link *link)
{
	panic();
}

int rtnl_link_set_flags(struct rtnl_link *link, int flags)
{
	panic();
}

int rtnl_link_change(struct rtnl_link *link)
{
	panic();
}

int rtnl_link_macsec_set_sci(struct rtnl_link *link, unsigned long sci)
{
	panic();
}

int rtnl_link_delete(struct nl_sock *sk, struct rtnl_link *link)
{
	panic();
}
