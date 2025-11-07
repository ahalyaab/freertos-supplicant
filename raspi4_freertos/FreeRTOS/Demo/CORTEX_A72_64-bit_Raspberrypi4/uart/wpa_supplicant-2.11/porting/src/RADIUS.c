// SPDX-License-Identifier: MIT
#include "porting.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef unsigned long os_time_t;
typedef uint8_t u8;
typedef uint32_t u32;
typedef uint16_t u16;
typedef enum {
	RADIUS_RX_PROCESSED,

	RADIUS_RX_QUEUED,

	RADIUS_RX_UNKNOWN,

	RADIUS_RX_INVALID_AUTHENTICATOR
} RadiusRxResult;
typedef enum {
	RADIUS_AUTH,

	RADIUS_ACCT,
	RADIUS_ACCT_INTERIM
} RadiusType;

void radius_client_flush_auth(struct radius_client_data *radius,
		const u8 *addr)
{
	panic();
}

int radius_msg_add_wfa(struct radius_msg *msg, u8 subtype, const u8 *data,
		size_t len)
{
	panic();
}

int radius_gen_session_id(u8 *id, size_t len)
{
	panic();
}

struct radius_attr_hdr *radius_get_attr_hdr(struct radius_msg *msg, int idx)
{
	panic();
}

u8 *radius_msg_get_vendor_attr(struct radius_msg *msg, u32 vendor,
		u8 subtype, size_t *alen)
{
	panic();
}

const char *radius_code_string(u8 code)
{
	panic();
}

void radius_msg_dump_attr(struct radius_attr_hdr *hdr)
{
	panic();
}

bool radius_is_ext_type(u8 type)
{
	panic();
}

bool radius_is_long_ext_type(u8 type)
{
	panic();
}

void radius_client_auth_failover(struct radius_client_data *radius)
{
	panic();
}

void radius_client_acct_failover(struct radius_client_data *radius)
{
	panic();
}

u8 *radius_msg_auth_pos(struct radius_msg *msg)
{
	panic();
}

void radius_close_auth_socket(struct radius_client_data *radius)
{
	panic();
}

void radius_close_acct_socket(struct radius_client_data *radius)
{
	panic();
}

int radius_client_init_auth(struct radius_client_data *radius)
{
	panic();
}

int radius_msg_add_attr_to_array(struct radius_msg *msg,
		struct radius_attr_hdr *attr)
{
	panic();
}

int radius_msg_initialize(struct radius_msg *msg)
{
	panic();
}

void radius_msg_set_hdr(struct radius_msg *msg, u8 code, u8 identifier)
{
	panic();
}

int radius_user_password_hide(struct radius_msg *msg,
		const u8 *data, size_t data_len,
		const u8 *secret, size_t secret_len,
		u8 *buf, size_t buf_len)
{
	panic();
}

int radius_msg_verify_msg_auth(struct radius_msg *msg, const u8 *secret,
		size_t secret_len, const u8 *req_auth)
{
	panic();
}

struct radius_hdr *radius_msg_get_hdr(struct radius_msg *msg)
{
	panic();
}

int radius_msg_count_attr(struct radius_msg *msg, u8 type, int min_len)
{
	panic();
}

struct radius_ms_mppe_keys *
radius_msg_get_ms_keys(struct radius_msg *msg, struct radius_msg *sent_msg,
		const u8 *secret, size_t secret_len)
{
	panic();
}

void radius_msg_free(struct radius_msg *msg)
{
	panic();
}

struct wpabuf *radius_msg_get_buf(struct radius_msg *msg)
{
	panic();
}

void radius_msg_dump(struct radius_msg *msg)
{
	panic();
}

int radius_client_init_acct(struct radius_client_data *radius)
{
	panic();
}

int radius_client_send(struct radius_client_data *radius,
		struct radius_msg *msg, RadiusType msg_type,
		const u8 *addr)
{
	panic();
}

struct radius_attr_hdr *radius_msg_add_attr(struct radius_msg *msg, uint16_t type,
		const u8 *data, size_t data_len)
{
	panic();
}

int radius_msg_add_eap(struct radius_msg *msg, const u8 *data, size_t data_len)
{
	panic();
}

int radius_msg_copy_attr(struct radius_msg *dst, struct radius_msg *src,
		u8 type)
{
	panic();
}

u8 *radius_msg_add_msg_auth(struct radius_msg *msg)
{
	panic();
}

int radius_msg_make_authenticator(struct radius_msg *msg)
{
	panic();
}

struct radius_msg *radius_msg_new(u8 code, u8 identifier)
{
	panic();
}

static void radius_client_msg_free(struct radius_msg_list *req)
{
	panic();
}

u8 radius_client_get_id(struct radius_client_data *radius)
{
	panic();
}

struct radius_attr_hdr *
radius_msg_add_attr_user_password(struct radius_msg *msg,
		const u8 *data, size_t data_len,
		const u8 *secret, size_t secret_len)
{
	panic();
}

int radius_msg_add_ext_vs(struct radius_msg *msg, u16 type, u32 vendor_id,
		u8 vendor_type, const u8 *data, size_t len)
{
	panic();
}

int radius_msg_get_attr(struct radius_msg *msg, u8 type, u8 *buf, size_t len)
{
	panic();
}

int radius_msg_get_attr_ptr(struct radius_msg *msg, u8 type, u8 **buf,
		size_t *len, const u8 *start)
{
	panic();
}

int radius_msg_verify(struct radius_msg *msg, const u8 *secret,
		size_t secret_len, struct radius_msg *sent_msg, int auth)
{
	panic();
}

char *radius_msg_get_tunnel_password(struct radius_msg *msg, int *keylen,
		const u8 *secret, size_t secret_len,
		struct radius_msg *sent_msg, size_t n)
{
	panic();
}

struct wpabuf *radius_msg_get_eap(struct radius_msg *msg)
{
	panic();
}

int radius_msg_get_vlanid(struct radius_msg *msg, int *untagged, int numtagged,
		int *tagged)
{
	panic();
}

void radius_client_reconfig(struct radius_client_data *radius,
		struct hostapd_radius_servers *conf)
{
	panic();
}

int radius_client_register(struct radius_client_data *radius,
		RadiusType msg_type,
		RadiusRxResult(*handler)(struct radius_msg *msg,
			struct radius_msg *req,
			const u8 *shared_secret,
			size_t shared_secret_len,
			void *data),
		void *data)
{
	panic();
}

int
radius_change_server(struct radius_client_data *radius,
		struct hostapd_radius_server *nserv,
		struct hostapd_radius_server *oserv,
		int auth)
{
	panic();
}

static void radius_retry_primary_timer(void *eloop_ctx, void *timeout_ctx)
{
	panic();
}

struct radius_client_data *
radius_client_init(void *ctx, struct hostapd_radius_servers *conf)

{
	panic();
}

int radius_client_retransmit(struct radius_client_data *radius,
		struct radius_msg_list *entry,
		os_time_t now)
{
	panic();
}

static void radius_client_timer(void *eloop_ctx, void *timeout_ctx)
{
	panic();
}

void radius_client_flush(struct radius_client_data *radius, int only_auth)
{
	panic();
}

int radius_msg_add_attr_int32(struct radius_msg *msg, u8 type,
		u32 value)
{
	panic();
}

u8 radius_msg_find_unlisted_attr(struct radius_msg *msg, u8 *attrs)
{
	panic();
}

static struct radius_msg *radius_das_disconnect(struct radius_das_data *das,
		struct radius_msg *msg,
		const char *abuf,
		int from_port)
{
	panic();
}

int radius_msg_finish_das_resp(struct radius_msg *msg, const u8 *secret,
		size_t secret_len,
		const struct radius_hdr *req_hdr)
{
	panic();
}

static struct radius_msg *radius_das_coa(struct radius_das_data *das,
		struct radius_msg *msg,
		const char *abuf, int from_port)
{
	panic();
}

void radius_das_receive(int sock, void *eloop_ctx, void *sock_ctx)
{
	panic();
}

struct radius_das_data *
radius_das_init(struct radius_das_conf *conf)
{
	panic();
}

void radius_client_deinit(struct radius_client_data *radius)
{
	panic();
}

int radius_copy_class(struct radius_class_data *dst,
		const struct radius_class_data *src)
{
	panic();
}

void radius_das_deinit(struct radius_das_data *das)
{
	panic();
}

void radius_free_class(struct radius_class_data *c)
{
	panic();
}
