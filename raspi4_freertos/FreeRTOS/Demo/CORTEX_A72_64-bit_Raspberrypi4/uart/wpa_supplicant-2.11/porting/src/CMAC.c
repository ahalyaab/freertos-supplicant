// SPDX-License-Identifier: MIT
#include "porting.h"

CMAC_CTX *CMAC_CTX_new(void)
{
	panic();
}

void CMAC_CTX_free(CMAC_CTX *ctx)
{
	panic();
}

int CMAC_Init(CMAC_CTX *ctx, const void *key, size_t keylen, const EVP_CIPHER *cipher, ENGINE *impl)
{
	panic();
}

int CMAC_Update(CMAC_CTX *ctx, const unsigned char *data, size_t dlen)
{
	panic();
}

int CMAC_Final(CMAC_CTX *ctx, unsigned char *out, size_t *outlen)
{
	panic();
}
