// SPDX-License-Identifier: MIT
#include "porting.h"

int BN_num_bytes(const BIGNUM *bn)
{
	panic();
}

int BN_mod(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx)
{
	panic();
}

void BN_free(BIGNUM *a)
{
	panic();
}

BN_CTX *BN_CTX_new(void)
{
	panic();
}

void BN_clear_free(BIGNUM *a)
{
	panic();
}

void BN_CTX_free(BN_CTX *c)
{
	panic();
}

int BN_mod_exp_mont_consttime(BIGNUM *rr, const BIGNUM *a, const BIGNUM *p,
		const BIGNUM *m, BN_CTX *ctx,
		BN_MONT_CTX *in_mont)
{
	panic();
}

int BN_is_zero(const BIGNUM *a)
{
	panic();
}

int BN_is_one(const BIGNUM *a)
{
	panic();
}

int BN_cmp(const BIGNUM *a, const BIGNUM *b)
{
	panic();
}

int BN_bn2bin(const BIGNUM *a, unsigned char *to)
{
	panic();
}

int BN_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
		const BIGNUM *m, BN_CTX *ctx)
{
	panic();
}

int BN_num_bits(const BIGNUM *a)
{
	panic();
}

int BN_set_word(BIGNUM *a, BN_ULONG w)
{
	panic();
}

int BN_bn2binpad(const BIGNUM *a, unsigned char *to, int tolen)
{
	panic();
}

int BN_rand_range(BIGNUM *rnd, const BIGNUM *range)
{
	panic();
}

int BN_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b)
{
	panic();
}

int BN_div(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m, const BIGNUM *d,
		BN_CTX *ctx)
{
	panic();
}

void BN_set_flags(BIGNUM *b, int n)
{
	panic();
}

BIGNUM *BN_mod_inverse(BIGNUM *ret,
		const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx)
{
	panic();
}

int BN_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b)
{
	panic();
}

int BN_mod_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
		BN_CTX *ctx)
{
	panic();
}

int BN_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
		BN_CTX *ctx)
{
	panic();
}

int BN_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx)
{
	panic();
}

int BN_rshift(BIGNUM *r, const BIGNUM *a, int n)
{
	panic();
}

int BN_is_odd(const BIGNUM *a)
{
	panic();
}

const BIGNUM *BN_value_one(void)
{
	panic();
}

int BN_rshift1(BIGNUM *r, const BIGNUM *a)
{
	panic();
}

int BN_is_word(const BIGNUM *a, const BN_ULONG w)
{
	panic();
}
