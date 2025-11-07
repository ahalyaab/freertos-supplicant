// SPDX-License-Identifier: MIT
#include "porting.h"

#define __owur __attribute__((__warn_unused_result__))
__owur X509 * SSL_get_certificate(const SSL * ssl)
{
	panic();
}

X509 *X509_dup(X509 *cert)
{
	panic();
}

int i2d_X509(X509 *x, unsigned char **out)
{
	panic();
}

int X509_print(BIO *bp, X509 *x)
{
	panic();
}

__owur X509 *SSL_CTX_get0_certificate(const SSL_CTX *ctx)
{
	panic();
}

void X509_free(X509 *x)
{
	panic();
}

int X509_LOOKUP_ctrl(X509_LOOKUP *ctx, int cmd, const char *argc,
		long argl, char **ret)
{
	panic();
}

X509_LOOKUP *X509_STORE_add_lookup(X509_STORE *v, X509_LOOKUP_METHOD *m)
{
	panic();
}

X509_LOOKUP_METHOD *X509_LOOKUP_file(void)
{
	panic();
}

int X509_STORE_add_cert(X509_STORE *ctx, X509 *x)
{
	panic();
}

X509_STORE *X509_STORE_new(void)
{
	panic();
}

X509 *d2i_X509(X509 **x, const unsigned char **in, long len)
{
	panic();
}

int X509_STORE_set_flags(X509_STORE *ctx, unsigned long flags)
{
	panic();
}

void X509_STORE_free(X509_STORE *v)
{
	panic();
}

int X509_STORE_load_locations(X509_STORE *ctx,
		const char *file,
		const char *dir)
{
	panic();
}

X509_NAME *X509_get_subject_name(const X509 *a)
{
	panic();
}

char *X509_NAME_oneline(const X509_NAME *a, char *buf, int size)
{
	panic();
}

X509_NAME_ENTRY *X509_NAME_get_entry(const X509_NAME *name, int loc)
{
	panic();
}

int X509_NAME_get_index_by_NID(const X509_NAME *name, int nid, int lastpos)
{
	panic();
}

STACK_OF(X509) * X509_STORE_CTX_get1_chain(const X509_STORE_CTX * ctx)
{
	panic();
}

const char *X509_verify_cert_error_string(long n)
{
	panic();
}

void *X509_get_ext_d2i(const X509 *x, int nid, int *crit, int *idx)
{
	panic();
}

void *X509_STORE_CTX_get_ex_data(const X509_STORE_CTX *ctx, int idx)
{
	panic();
}

int X509_STORE_CTX_get_error_depth(const X509_STORE_CTX *ctx)
{
	panic();
}

int X509_STORE_CTX_get_error(const X509_STORE_CTX *ctx)
{
	panic();
}

X509 *X509_STORE_CTX_get_current_cert(const X509_STORE_CTX *ctx)
{
	panic();
}

X509 *PEM_read_X509(FILE *fp, X509 **x, pem_password_cb *cb, void *userdata)
{
	panic();
}

const ASN1_TIME *X509_get0_notAfter(const X509 *x)
{
	panic();
}

int X509_cmp_current_time(const ASN1_TIME *s)
{
	panic();
}


int X509_LOOKUP_load_file(X509_LOOKUP *ctx, const char *file, int type)
{
	panic();
}

X509 *PEM_read_bio_X509(BIO *bp, X509 **x, pem_password_cb *cb, void *u)
{
	panic();
}
