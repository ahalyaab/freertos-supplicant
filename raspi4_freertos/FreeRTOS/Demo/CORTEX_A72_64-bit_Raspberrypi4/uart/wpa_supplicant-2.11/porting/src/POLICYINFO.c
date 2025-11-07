// SPDX-License-Identifier: MIT
#include "porting.h"

void POLICYINFO_free(POLICYINFO *a)
{
	panic();
}

POLICYINFO *sk_POLICYINFO_value(STACK_OF(POLICYINFO) * sk, int idx)
{
	panic();
}
