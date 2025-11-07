// SPDX-License-Identifier: MIT

#include "porting.h"
#include <stdbool.h>

typedef uint8_t u8;
const struct crypto_bignum *crypto_ec_get_order(struct crypto_ec *e)
{
	panic();
}

const struct crypto_bignum *crypto_ec_get_prime(struct crypto_ec *e)
{
	panic();
}

struct wpabuf *crypto_ec_key_get_subject_public_key(struct crypto_ec_key *key)
{
	panic();
}

struct crypto_ec_point *crypto_ec_point_from_bin(struct crypto_ec *e,
		const u8 *val)
{
	panic();
}

size_t crypto_ec_prime_len_bits(struct crypto_ec *ec)
{
	panic();
}

size_t crypto_ec_prime_len(struct crypto_ec *e)
{
	panic();
}

struct crypto_bignum *crypto_ec_point_compute_y_sqr(struct crypto_ec *e,
		const struct crypto_bignum *x)
{
	panic();
}

void crypto_ec_point_deinit(struct crypto_ec_point *point)
{
	panic();
}

void crypto_ec_deinit(struct crypto_ec *ec)
{
	panic();
}

int crypto_ec_point_to_bin(struct crypto_ec_point *point, unsigned char *buf, size_t buf_len)
{
	panic();
}

size_t crypto_ec_order_len(struct crypto_ec *ec)
{
	panic();
}

int crypto_ec_point_x(struct crypto_ec_point *point, unsigned char *x, size_t len)
{
	panic();
}

int crypto_ec_point_is_at_infinity(struct crypto_ec_point *point)
{
	panic();
}

int crypto_ec_point_add(struct crypto_ec_point *result, struct crypto_ec_point *point1, struct crypto_ec_point *point2)
{
	panic();
}

int crypto_ec_point_invert(struct crypto_ec_point *point)
{
	panic();
}

int crypto_ec_point_mul(struct crypto_ec_point *result, struct crypto_ec_point *point, size_t scalar)
{
	panic();
}

int crypto_ec_point_init(struct crypto_ec_point *point)
{
	panic();
}

void CRYPTO_cleanup_all_ex_data(void)
{
	panic();
}

void *CRYPTO_malloc(size_t num, const char *file, int line)
{
	panic();
}

struct crypto_ecdh *crypto_ecdh_init2(int group, struct crypto_ec_key *own_key)
{
	panic();
}

struct wpabuf *crypto_ecdh_set_peerkey(struct crypto_ecdh *ecdh, int inc_y,
		const u8 *key, size_t len)
{
	panic();
}

void crypto_ecdh_deinit(struct crypto_ecdh *ecdh)
{
	panic();
}

int crypto_ec_key_group(struct crypto_ec_key *key)
{
	panic();
}

struct crypto_bignum *crypto_ec_key_get_private_key(struct crypto_ec_key *key)
{
	panic();
}

struct wpabuf *crypto_ec_key_sign_r_s(struct crypto_ec_key *key,
		const u8 *data, size_t len)
{
	panic();
}

int crypto_ec_point_is_on_curve(struct crypto_ec *e,
		const struct crypto_ec_point *p)
{
	panic();
}

struct crypto_ec_point *crypto_ec_key_get_public_key(struct crypto_ec_key *key)
{
	panic();
}

void crypto_ec_point_debug_print(const struct crypto_ec *e,
		const struct crypto_ec_point *p,
		const char *title)
{
	panic();
}

struct wpabuf *crypto_ec_key_get_ecprivate_key(struct crypto_ec_key *key, bool include_pub)
{

	panic();
}

struct crypto_ec_key *crypto_ec_key_gen(int group)
{
	panic();
}

struct crypto_ec_key *crypto_ec_key_parse_priv(const u8 *der, size_t der_len)
{
	panic();
}

uint8_t *wpabuf_mhead_u8(struct wpabuf *buf);
void crypto_ec_key_debug_print(const struct crypto_ec_key *key,
		const char *title)
{
	panic();
}


int crypto_ec_key_cmp(struct crypto_ec_key *key1, struct crypto_ec_key *key2)
{
	panic();
}

int crypto_ec_point_cmp(const struct crypto_ec *e,
		const struct crypto_ec_point *a,
		const struct crypto_ec_point *b)
{
	panic();
}

struct crypto_ec_key *crypto_ec_key_set_pub(int group, const u8 *x,
		const u8 *y, size_t len)
{
	panic();
}

const struct crypto_bignum *crypto_ec_get_b(struct crypto_ec *e)
{

	panic();
}

struct crypto_ec *crypto_ec_init(int group)
{
	panic();
}

struct crypto_ec_key *crypto_ec_key_parse_pub(const u8 *der, size_t der_len)
{
	panic();
}

int crypto_ec_key_verify_signature_r_s(struct crypto_ec_key *key,
		const u8 *data, size_t len,
		const u8 *r, size_t r_len,
		const u8 *s, size_t s_len)
{
	panic();
}

void crypto_ec_key_deinit(struct crypto_ec_key *key)
{
	panic();
}

const struct crypto_bignum *crypto_ec_get_a(struct crypto_ec *e)
{
	panic();
}

struct wpabuf *crypto_ec_key_get_pubkey_point(struct crypto_ec_key *key, int prefix)
{
	panic();
}
