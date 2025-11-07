// SPDX-License-Identifier: MIT
#include "porting.h"

int setenv(const char *name, const char *value, int overwrite)
{
	panic();
}

int unsetenv(const char *name)
{
	panic();
}

