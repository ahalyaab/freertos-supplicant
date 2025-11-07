// SPDX-License-Identifier: MIT
#include "porting.h"

void sk_GENERAL_NAME_pop_free(STACK_OF(GENERAL_NAME) * st, void (*free_func)(GENERAL_NAME *))
{
	panic();
}

void sk_X509_pop_free(STACK_OF(X509) * st, void (*free_func)(X509 *))
{
	panic();
}

int sk_POLICYINFO_num(STACK_OF(POLICYINFO) * sk)
{
	panic();
}

void sk_POLICYINFO_pop_free(STACK_OF(POLICYINFO) * sk, void (*free_func)(POLICYINFO *))
{
	panic();
}

int sk_GENERAL_NAME_num(STACK_OF(GENERAL_NAME) * sk)
{
	panic();
}

GENERAL_NAME *sk_GENERAL_NAME_value(STACK_OF(GENERAL_NAME) * sk, int idx)
{
	panic();
}

int sk_X509_num(STACK_OF(X509) * sk)
{
	panic();
}

X509 *sk_X509_value(STACK_OF(X509) * sk, int idx)
{
	panic();
}
