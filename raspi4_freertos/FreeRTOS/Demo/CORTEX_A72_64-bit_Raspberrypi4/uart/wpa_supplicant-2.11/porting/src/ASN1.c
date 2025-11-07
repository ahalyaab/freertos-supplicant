// SPDX-License-Identifier: MIT
#include "porting.h"

unsigned char *ASN1_STRING_data(ASN1_STRING *x)
{
	panic();
}

const ASN1_TIME *X509_get_notBefore(const X509 *x)
{
	panic();
}

const ASN1_TIME *X509_get_notAfter(const X509 *x)
{
	panic();
}

int ASN1_STRING_length(const ASN1_STRING *x)
{
	panic();
}

const unsigned char *ASN1_STRING_get0_data(const ASN1_STRING *x)
{
	panic();
}

ASN1_INTEGER *X509_get_serialNumber(X509 *x)
{
	panic();
}

ASN1_STRING *X509_NAME_ENTRY_get_data(const X509_NAME_ENTRY *ne)
{
	panic();
}
