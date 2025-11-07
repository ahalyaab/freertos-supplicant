// SPDX-License-Identifier: MIT
#include "porting.h"

typedef uint8_t u8;
void OPENSSL_cleanse(void *ptr, size_t len)
{
	panic();
}

const char *OpenSSL_version(int type)
{
	panic();
}

OPENSSL_STACK *OPENSSL_sk_new_null(void)
{
	panic();
}

int OPENSSL_sk_push(OPENSSL_STACK *st, const void *data)
{
	panic();
}

void OPENSSL_sk_free(OPENSSL_STACK *st)
{
	panic();
}

int OPENSSL_sk_num(const OPENSSL_STACK *sk)
{
	panic();
}

void *OPENSSL_sk_value(const OPENSSL_STACK *sk, int idx)
{
	panic();
}

void OPENSSL_sk_pop_free(OPENSSL_STACK *st, void (*func) (void *))
{
	panic();
}

int openssl_hmac_vector(char *digest, const u8 *key,
		size_t key_len, size_t num_elem,
		const u8 *addr[], const size_t *len, u8 *mac,
		unsigned int mdlen)
{
	panic();
}
