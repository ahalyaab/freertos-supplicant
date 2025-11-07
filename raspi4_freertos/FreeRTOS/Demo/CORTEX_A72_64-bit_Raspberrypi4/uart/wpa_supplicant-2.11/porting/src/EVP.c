// SPDX-License-Identifier: MIT
#include "porting.h"
#  define __owur __attribute__((__warn_unused_result__))

void EVP_cleanup(void)
{
	panic();
}

int EVP_PKEY_type(int type)
{
	panic();
}

EVP_PKEY *PEM_read_bio_PrivateKey(BIO *bp, EVP_PKEY **x, pem_password_cb *cb, void *u)
{
	panic();
}

int EVP_PKEY_id(const EVP_PKEY *pkey)
{
	panic();
}

int EVP_PKEY_base_id(const EVP_PKEY *pkey)
{
	panic();
}

int EVP_MD_CTX_init(EVP_MD_CTX *ctx)
{
	panic();
}

int EVP_MD_CTX_cleanup(EVP_MD_CTX *ctx)
{
	panic();
}

void EVP_PKEY_free(EVP_PKEY *pkey)
{
	panic();
}

int EVP_PKEY_is_a(const EVP_PKEY *pkey, const char *name)
{
	panic();
}

const OSSL_PARAM * params;
int EVP_PKEY_fromdata(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey, int selection,
		OSSL_PARAM param[])
{
	panic();
}

int EVP_PKEY_fromdata_init(EVP_PKEY_CTX *ctx)
{
	panic();
}

EVP_PKEY_CTX *EVP_PKEY_CTX_new_from_name(OSSL_LIB_CTX *libctx,
		const char *name,
		const char *propquery)
{
	panic();
}

int EVP_PKEY_get_bn_param(const EVP_PKEY *pkey, const char *key_name,
		BIGNUM **bn)
{
	panic();
}

void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx)
{
	panic();
}

const EVP_MD *EVP_sha256(void)
{
	panic();
}

EVP_MD_CTX *EVP_MD_CTX_new(void)
{
	panic();
}

__owur int EVP_DigestInit_ex(EVP_MD_CTX *ctx, const EVP_MD *type,
		ENGINE *impl)
{
	panic();
}

__owur int EVP_DigestUpdate(EVP_MD_CTX *ctx, const void *d,
		size_t cnt)
{
	panic();
}

void EVP_MD_CTX_free(EVP_MD_CTX *ctx)
{
	panic();
}

__owur int EVP_DigestFinal(EVP_MD_CTX *ctx, unsigned char *md,
		unsigned int *s)
{
	panic();
}

EVP_MAC *EVP_MAC_fetch(OSSL_LIB_CTX *libctx, const char *algorithm,
		const char *properties)
{
	panic();
}

EVP_MAC_CTX *EVP_MAC_CTX_new(EVP_MAC *mac)
{
	panic();
}

void EVP_MAC_free(EVP_MAC *mac)
{
	panic();
}

int EVP_MAC_init(EVP_MAC_CTX *ctx, const unsigned char *key, size_t keylen,
		const OSSL_PARAM params[])
{
	panic();
}

int EVP_MAC_update(EVP_MAC_CTX *ctx, const unsigned char *data, size_t datalen)
{
	panic();
}

int EVP_MAC_final(EVP_MAC_CTX *ctx,
		unsigned char *out, size_t *outl, size_t outsize)
{
	panic();
}

const EVP_MD *EVP_md4(void)
{
	panic();
}

EVP_CIPHER_CTX *EVP_CIPHER_CTX_new(void)
{
	panic();
}

const EVP_CIPHER *EVP_des_ecb(void)
{
	panic();
}

int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx,
		const EVP_CIPHER *cipher, ENGINE *impl,
		const unsigned char *key,
		const unsigned char *iv)
{
	panic();
}

int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c, int pad)
{
	panic();
}

int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
		int *outl, const unsigned char *in, int inl)
{
	panic();
}

int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *out,
		int *outl)
{
	panic();
}

void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *c)
{
	panic();
}

void EVP_MAC_CTX_free(EVP_MAC_CTX *ctx)
{
	panic();
}

const EVP_CIPHER *EVP_rc4(void)
{
	panic();
}

int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx,
		const EVP_CIPHER *cipher, ENGINE *impl,
		const unsigned char *key,
		const unsigned char *iv, int enc)
{
	panic();
}

int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x, int keylen)
{
	panic();
}

__owur int EVP_CipherUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
		int *outl, const unsigned char *in, int inl)
{
	panic();
}

const EVP_MD *EVP_md5(void)
{
	panic();
}

const EVP_MD *EVP_sha1(void)
{
	panic();
}

const EVP_MD *EVP_sha384(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_192_ecb(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_128_ecb(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_256_ecb(void)
{
	panic();
}

int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx,
		const EVP_CIPHER *cipher, ENGINE *impl,
		const unsigned char *key,
		const unsigned char *iv)
{
	panic();
}

const EVP_MD *EVP_sha512(void)
{
	panic();
}

int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
		int *outl, const unsigned char *in, int inl)
{
	panic();
}

int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm,
		int *outl)
{
	panic();
}

const EVP_CIPHER *EVP_aes_192_wrap(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_128_wrap(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_256_wrap(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_128_cbc(void)
{
	panic();
}

const EVP_CIPHER *EVP_des_ede3_cbc(void)
{
	panic();
}

const EVP_CIPHER *EVP_des_cbc(void)
{
	panic();
}

const EVP_CIPHER *EVP_rc2_ecb(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_256_cbc(void)
{
	panic();
}

const EVP_CIPHER *EVP_aes_192_cbc(void)
{
	panic();
}

int EVP_PKEY_keygen_init(EVP_PKEY_CTX *ctx)
{
	panic();
}

int EVP_PKEY_CTX_set_params(EVP_PKEY_CTX *ctx, const OSSL_PARAM *params)
{
	panic();
}

int EVP_PKEY_generate(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey)
{
	panic();
}

int EVP_PKEY_get_octet_string_param(const EVP_PKEY *pkey, const char *key_name,
		unsigned char *buf, size_t max_buf_sz,
		size_t *out_sz)
{
	panic();
}

EVP_PKEY *EVP_PKEY_new(void)
{
	panic();
}

int EVP_PKEY_copy_parameters(EVP_PKEY *to, const EVP_PKEY *from)
{
	panic();
}

int EVP_PKEY_set1_encoded_public_key(EVP_PKEY *pkey,
		const unsigned char *pub, size_t publen)
{
	panic();
}

EVP_PKEY_CTX *EVP_PKEY_CTX_new(EVP_PKEY *pkey, ENGINE *e)
{
	panic();
}

int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx)
{
	panic();
}

int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx, EVP_PKEY *peer)
{
	panic();
}

int EVP_PKEY_derive(EVP_PKEY_CTX *ctx, unsigned char *key, size_t *keylen)
{
	panic();
}

int EVP_PKEY_get_base_id(const EVP_PKEY *pkey)
{
	panic();
}

int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx)
{
	panic();
}

int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx,
		unsigned char *out, size_t *outlen,
		const unsigned char *in, size_t inlen)
{
	panic();
}

int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx,
		unsigned char *out, size_t *outlen,
		const unsigned char *in, size_t inlen)
{
	panic();
}

EVP_PKEY *PEM_read_PUBKEY(FILE *fp, EVP_PKEY **x, pem_password_cb *cb, void *userdata)
{
	panic();
}

EVP_PKEY *PEM_read_PrivateKey(FILE *fp, EVP_PKEY **x, pem_password_cb *cb, void *userdata)
{
	panic();
}

int EVP_PKEY_CTX_set_rsa_padding(EVP_PKEY_CTX *ctx, int pad_mode)
{
	panic();
}

int EVP_PKEY_CTX_set_rsa_oaep_md(EVP_PKEY_CTX *ctx, const EVP_MD *md)
{
	panic();
}

int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx)
{
	panic();
}

EVP_PKEY *d2i_PrivateKey_bio(BIO *bp, EVP_PKEY **a)
{
	panic();
}

int EVP_add_digest(const EVP_MD *digest)
{
	panic();
}
