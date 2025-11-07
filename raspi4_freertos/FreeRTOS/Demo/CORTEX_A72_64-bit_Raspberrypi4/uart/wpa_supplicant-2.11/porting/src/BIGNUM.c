// SPDX-License-Identifier: MIT
#include "porting.h"

const BIGNUM *get_rfc3526_prime_1536(void)
{
	panic();
}

BIGNUM *BN_bin2bn(const unsigned char *s, int len, BIGNUM *ret)
{
	panic();
}

BIGNUM *BN_new(void)
{
	panic();
}
