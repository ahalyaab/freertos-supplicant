// SPDX-License-Identifier: MIT
#include "porting.h"

OSSL_PARAM *OSSL_PARAM_BLD_to_param(OSSL_PARAM_BLD *bld)
{
	panic();
}

int OSSL_PARAM_BLD_push_BN(OSSL_PARAM_BLD *bld, const char *key,
		const BIGNUM *bn)
{
	panic();
}

OSSL_PARAM_BLD *OSSL_PARAM_BLD_new(void)
{
	panic();
}

int OSSL_DECODER_from_bio(OSSL_DECODER_CTX *ctx, BIO *in)
{
	panic();
}

OSSL_DECODER_CTX_new_for_pkey(EVP_PKEY * *pkey,
		const char *input_type,
		const char *input_struct,
		const char *keytype, int selection,
		OSSL_LIB_CTX * libctx, const char *propquery)
{
	panic();
}
