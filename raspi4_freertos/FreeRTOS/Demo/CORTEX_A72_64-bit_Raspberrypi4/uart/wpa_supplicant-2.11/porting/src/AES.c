// SPDX-License-Identifier: MIT
#include "porting.h"

int AES_set_encrypt_key(const unsigned char *userKey, const int bits, AES_KEY *key)
{
	panic();
}

int AES_set_decrypt_key(const unsigned char *userKey, const int bits, AES_KEY *key)
{
	panic();
}

int AES_wrap_key(unsigned char *out, const unsigned char *key, unsigned char *data, const unsigned char *iv)
{
	panic();
}

int AES_unwrap_key(unsigned char *out, const unsigned char *key, unsigned char *data, const unsigned char *iv)
{
	panic();
}
