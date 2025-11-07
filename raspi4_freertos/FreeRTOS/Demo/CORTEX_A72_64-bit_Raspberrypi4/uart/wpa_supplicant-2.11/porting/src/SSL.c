// SPDX-License-Identifier: MIT
#include "porting.h"
#  define __owur __attribute__((__warn_unused_result__))

void *SSL_get_app_data(const SSL *ssl)
{
	panic();
}

size_t SSL_get_finished(const SSL *s, void *buf, size_t count)
{
	panic();
}

__owur int SSL_session_reused(const SSL *s)
{
	panic();
}

__owur int SSL_CTX_check_private_key(const SSL_CTX *ctx)
{
	panic();
}

EVP_PKEY *X509_get_pubkey(X509 *x)
{
	panic();
}

uint64_t SSL_CTX_set_options(SSL_CTX *ctx, uint64_t op)
{
	panic();
}
__owur X509_STORE *SSL_CTX_get_cert_store(const SSL_CTX *ctx)
{
	panic();
}

size_t SSL_get_peer_finished(const SSL *s, void *buf, size_t count)
{
	panic();
}

__owur const SSL_CIPHER *SSL_get_current_cipher(const SSL *s)
{
	panic();
}

int SSL_CTX_remove_session(SSL_CTX *ctx, SSL_SESSION *session)
{
	panic();
}

__owur SSL_SESSION *SSL_get_session(const SSL *ssl)
{
	panic();
}

void *SSL_SESSION_get_ex_data(const SSL_SESSION *ss, int idx)
{
	panic();
}

__owur int SSL_SESSION_set_ex_data(SSL_SESSION *ss, int idx, void *data)
{
	panic();
}

long SSL_CTX_ctrl(SSL_CTX *ctx, int cmd, long larg, void *parg)
{
	panic();
}

uint64_t SSL_CTX_clear_options(SSL_CTX *ctx, uint64_t op)
{
	panic();
}

void SSL_free(SSL *ssl)
{
	panic();
}

__owur const char *SSL_get_cipher_list(const SSL *s, int n)
{
	panic();
}

SSL *SSL_new(SSL_CTX *ctx)
{
	panic();
}

__owur int SSL_CTX_set_cipher_list(SSL_CTX *ctox, const char *str)
{
	panic();
}

int SSL_CTX_set0_tmp_dh_pkey(SSL_CTX *ctx, EVP_PKEY *dhpkey)
{
	panic();
}

void SSL_CTX_set_client_CA_list(SSL_CTX *ctx, STACK_OF(X509_NAME) * name_list)
{
	panic();
}

__owur STACK_OF(X509_NAME) * SSL_load_client_CA_file(const char *file)
{
	panic();
}

__owur int SSL_CTX_load_verify_locations(SSL_CTX *ctx,
		const char *CAfile,
		const char *CApath)
{
	panic();
}

long SSL_CTX_callback_ctrl(SSL_CTX *ctx, int cmd, void (*fp)(void))
{
	panic();
}

long SSL_ctrl(SSL *ssl, int cmd, long larg, void *parg)
{
	panic();
}

__owur int SSL_set_cipher_list(SSL *s, const char *str)
{
	panic();
}

__owur int SSL_check_private_key(const SSL *ctx)
{
	panic();
}

__owur int SSL_use_certificate_chain_file(SSL *ssl, const char *file)
{
	panic();
}

__owur int SSL_use_certificate_file(SSL *ssl, const char *file, int type)
{
	panic();
}

__owur int SSL_use_PrivateKey(SSL *ssl, EVP_PKEY *pkey)
{
	panic();
}

__owur int SSL_use_PrivateKey_ASN1(int pk, SSL *ssl, const unsigned char *d,
		long len)
{
	panic();
}

__owur int SSL_use_certificate(SSL *ssl, X509 *x)
{
	panic();
}

__owur int SSL_use_certificate_ASN1(SSL *ssl, const unsigned char *d, int len)
{
	panic();
}

typedef int (*SSL_verify_cb)(int preverify_ok, X509_STORE_CTX * x509_ctx);
void SSL_set_verify(SSL *s, int mode, SSL_verify_cb callback)
{
	panic();
}

void SSL_CTX_set_cert_store(SSL_CTX *ctx, X509_STORE *store)
{
	panic();
}

uint64_t SSL_set_options(SSL *s, uint64_t op)
{
	panic();
}

__owur const char *SSL_CIPHER_get_name(const SSL_CIPHER *c)
{
	panic();
}

__owur const char *SSL_get_version(const SSL *s)
{
	panic();
}

__owur int SSL_get_error(const SSL *s, int ret_code)
{
	panic();
}

__owur char *SSL_get_shared_ciphers(const SSL *s, char *buf, int size)
{
	panic();
}

__owur int SSL_read(SSL *ssl, void *buf, int num)
{
	panic();
}

__owur int SSL_accept(SSL *ssl)
{
	panic();
}

int SSL_is_init_finished(const SSL *s)
{
	panic();
}

__owur int SSL_export_keying_material(SSL *s, unsigned char *out, size_t olen,
		const char *label, size_t llen,
		const unsigned char *context,
		size_t contextlen, int use_context)
{
	panic();
}

__owur size_t SSL_get_server_random(const SSL *ssl, unsigned char *out,
		size_t outlen)
{
	panic();
}

__owur size_t SSL_get_client_random(const SSL *ssl, unsigned char *out,
		size_t outlen)
{
	panic();
}

__owur int SSL_set_session_id_context(SSL *ssl, const unsigned char *sid_ctx,
		unsigned int sid_ctx_len)
{
	panic();
}

void SSL_set_accept_state(SSL *s)
{
	panic();
}

__owur int SSL_connect(SSL *ssl)
{
	panic();
}

__owur int SSL_write(SSL *ssl, const void *buf, int num)
{
	panic();
}

__owur int SSL_clear(SSL *s)
{
	panic();
}

int SSL_shutdown(SSL *s)
{
	panic();
}

void SSL_set_quiet_shutdown(SSL *ssl, int mode)
{
	panic();
}

void SSL_set_bio(SSL *s, BIO *rbio, BIO *wbio)
{
	panic();
}

uint64_t SSL_clear_options(SSL *s, uint64_t op)
{
	panic();
}

void SSL_set_msg_callback(SSL *ssl, void (*cb) (int write_p, int version,
			int content_type, const void *buf,
			size_t len, SSL *ssl, void *arg))
{
	panic();
}

__owur int SSL_set_ex_data(SSL *ssl, int idx, void *data)
{
	panic();
}

void *SSL_CTX_get_ex_data(const SSL_CTX *ssl, int idx)
{
	panic();
}

int SSL_CTX_set_num_tickets(SSL_CTX *ctx, size_t num_tickets)
{
	panic();
}

void SSL_CTX_sess_set_remove_cb(SSL_CTX *ctx, void (*remove_session_cb) (struct ssl_ctx_st
			*ctx,
			SSL_SESSION *sess))
{
	panic();
}

void *SSL_get_ex_data(const SSL *ssl, int idx)
{
	panic();
}

__owur int SSL_get_ex_data_X509_STORE_CTX_idx(void)
{
	panic();
}

void SSL_set_security_level(SSL *s, int level)
{
	panic();
}

__owur int SSL_version(const SSL *ssl)
{
	panic();
}

__owur long SSL_CTX_set_timeout(SSL_CTX *ctx, long t)
{
	panic();
}
__owur int SSL_CTX_set_session_id_context(SSL_CTX *ctx,
		const unsigned char *sid_ctx,
		unsigned int sid_ctx_len)
{
	panic();
}

void SSL_CTX_set_quiet_shutdown(SSL_CTX *ctx, int mode)
{
	panic();
}

__owur int SSL_CTX_set_ex_data(SSL_CTX *ssl, int idx, void *data)
{
	panic();
}

void SSL_CTX_set_info_callback(SSL_CTX *ctx, void (*cb) (const SSL *ssl, int type, int val))
{
	panic();
}

__owur SSL_CTX *SSL_CTX_new(const SSL_METHOD *meth)
{
	panic();
}

__owur const SSL_METHOD *TLS_method(void)
{
	panic();
}

void SSL_CTX_free(SSL_CTX *ctx)
{
	panic();
}

void SSL_CTX_flush_sessions(SSL_CTX *ctx, long tm)
{
	panic();
}

__owur const char *SSL_state_string_long(const SSL *s)
{
	panic();
}

__owur const char *SSL_alert_desc_string_long(int value)
{
	panic();
}

__owur const char *SSL_alert_type_string_long(int value)
{
	panic();
}

__owur int SSL_CTX_use_certificate_file(SSL_CTX *ctx, const char *file,
		int type)
{
	panic();
}

__owur int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx, const char *file)
{
	panic();
}

__owur int SSL_CTX_use_PrivateKey(SSL_CTX *ctx, EVP_PKEY *pkey)
{
	panic();
}

int SSL_CTX_set_tmp_dh(SSL_CTX *ctx, DH *dh)
{
	panic();
}

int SSL_add0_chain_cert(SSL_CTX *ctx, X509 *cert)
{
	panic();
}

int SSL_use_RSAPrivateKey_ASN1(SSL *ssl, const unsigned char *der, long len)
{
	panic();
}

int SSL_set1_curves_list(SSL *ssl, const char *curves)
{
	panic();
}

int SSL_set_ecdh_auto(SSL *ssl, int auto_ecdh)
{
	panic();
}

const SSL_CIPHER *SSL_get_cipher(const SSL *s)
{
	panic();
}

void *SSL_CTX_get_app_data(const SSL_CTX *ctx)
{
	panic();
}

long SSL_CTX_set_session_cache_mode(SSL_CTX *ctx, long mode)
{
	panic();
}

void SSL_library_init(void)
{
	panic();
}

const SSL_METHOD *SSLv23_method(void)
{
	panic();
}

void SSL_set_app_data(SSL *ssl, void *arg)
{
	panic();
}

int SSL_SESSION_get_ex_new_index(long argl, void *argp, void (*cb)(void *))
{
	panic();
}

long SSL_CTX_set_mode(SSL_CTX *ctx, long op)
{
	panic();
}

void SSL_load_error_strings(void)
{
	panic();
}

void SSL_set_msg_callback_arg(SSL *ssl, void *arg)
{
	panic();
}

void SSL_CTX_set_app_data(SSL_CTX *ctx, void *app_data)
{
	panic();
}

STACK_OF(X509) * SSL_CTX_get0_chain_certs(SSL_CTX *ctx)
{
	panic();
}

int SSL_CTX_set_current_cert(SSL_CTX *ctx, X509 *cert)
{
	panic();
}

int SSL_CTX_set_ecdh_auto(SSL_CTX *ctx, int onoff)
{
	panic();
}

int SSL_CTX_set1_curves_list(SSL_CTX *ctx, const char *curves)
{
	panic();
}

const char *SSLeay_version(int type)
{
	panic();
}

__owur uint32_t SSL_CIPHER_get_id(const SSL_CIPHER *c)
{
	panic();
}
