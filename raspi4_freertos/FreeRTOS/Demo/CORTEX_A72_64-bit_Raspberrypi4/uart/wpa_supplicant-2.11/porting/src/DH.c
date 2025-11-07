// SPDX-License-Identifier: MIT
#include "porting.h"

DH *PEM_read_bio_DHparams(BIO *bp, DH **dh, pem_password_cb *cb, void *u)
{
	panic();
}

void DSA_free(DSA *r)
{
	panic();
}

DSA *PEM_read_bio_DSAparams(BIO *bp, DSA **dsa, pem_password_cb *cb, void *u)
{
	panic();
}

DH *DH_new(void)
{
	panic();
}

int DH_generate_key(DH *dh)
{
	panic();
}

int DH_size(const DH *dh)
{
	panic();
}

int DH_compute_key(unsigned char *key, const BIGNUM *pub_key, DH *dh)
{
	panic();
}

void DH_free(DH *dh)
{
	panic();
}

DH *DSA_dup_DH(const DSA *r)
{
	panic();
}
