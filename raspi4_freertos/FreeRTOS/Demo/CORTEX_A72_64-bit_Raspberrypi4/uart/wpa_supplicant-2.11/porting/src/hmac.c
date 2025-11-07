// SPDX-License-Identifier: MIT
#include "porting.h"
#include <stdint.h>

typedef uint8_t u8;
#define U8 unsigned char
void HMAC_CTX_init(HMAC_CTX * ctx)
{
	panic();
}
void hmac_sha256(const u8 *key, size_t key_len,
		const u8 *data, size_t data_len,
		u8 *output)
{
	panic();
}

int HMAC_Init_ex(HMAC_CTX *ctx, const void *key, int len, const EVP_MD *md, ENGINE *impl)
{
	panic();
}

void HMAC_CTX_cleanup(HMAC_CTX *ctx)
{
	panic();
}

int HMAC_Update(HMAC_CTX *ctx, const unsigned char *data, size_t len)
{
	panic();
}

int HMAC_Final(HMAC_CTX *ctx, unsigned char *md, unsigned int *len)
{
	panic();
}

int hmac_sha512_vector(const u8 *key, size_t key_len, size_t num_elem,
		const u8 *addr[], const size_t *len, u8 *mac)

{
	panic();
}

int hmac_sha384_vector(const u8 *key, size_t key_len, size_t num_elem,
		const u8 *addr[], const size_t *len, u8 *mac)
{
	panic();
}


int hmac_sha512(const u8 *key, size_t key_len, const u8 *data,
		size_t data_len, u8 *mac)
{
	panic();
}

int hmac_sha384(const u8 *key, size_t key_len, const u8 *data,
		size_t data_len, u8 *mac)
{
	panic();
}

int hmac_sha256_vector(const U8 *key, size_t key_len, size_t num_elem,
		const U8 *addr[], const size_t *len, U8 *mac)
{
	panic();
}


