// SPDX-License-Identifier: MIT
#include "porting.h"

void GENERAL_NAME_free(GENERAL_NAME *a)
{
	panic();
}

int OBJ_obj2txt(char *buf, int buf_len, const ASN1_OBJECT *a, int no_name)
{
	panic();
}

int PKCS5_PBKDF2_HMAC_SHA1(const char *pass, int passlen,
		const unsigned char *salt, int saltlen, int iter,
		int keylen, unsigned char *out)
{
	panic();
}

int RAND_bytes(unsigned char *buf, int num)
{
	panic();
}
