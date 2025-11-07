// SPDX-License-Identifier: MIT
#include "porting.h"

void OCSP_RESPONSE_free(OCSP_RESPONSE *resp)
{
	panic();
}

int OCSP_response_status(OCSP_RESPONSE *resp)
{
	panic();
}

OCSP_BASICRESP *OCSP_response_get1_basic(OCSP_RESPONSE *resp)
{
	panic();
}

OCSP_CERTID *OCSP_cert_to_id(const EVP_MD *dgst, const X509 *subject,
		const X509 *issuer)
{
	panic();
}
void OCSP_BASICRESP_free(OCSP_BASICRESP *a)
{
	panic();
}
int OCSP_resp_find_status(OCSP_BASICRESP *bs, OCSP_CERTID *id, int *status,
		int *reason,
		ASN1_GENERALIZEDTIME **revtime,
		ASN1_GENERALIZEDTIME **thisupd,
		ASN1_GENERALIZEDTIME **nextupd)
{
	panic();
}

const char *OCSP_cert_status_str(long s)
{
	panic();
}

void OCSP_CERTID_free(OCSP_CERTID *a)
{
	panic();
}

int OCSP_check_validity(ASN1_GENERALIZEDTIME *thisupd,
		ASN1_GENERALIZEDTIME *nextupd, long sec, long maxsec)
{
	panic();
}

int OCSP_basic_verify(OCSP_BASICRESP *bs, STACK_OF(X509) * certs,
		X509_STORE *st, unsigned long flags)
{
	panic();
}

const char *OCSP_response_status_str(long s)
{
	panic();
}

int OCSP_RESPONSE_print(BIO *bp, OCSP_RESPONSE *o, unsigned long flags)
{
	panic();
}

OCSP_RESPONSE *d2i_OCSP_RESPONSE(OCSP_RESPONSE **a, const unsigned char **in, long len)
{
	panic();
}
