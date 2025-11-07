// SPDX-License-Identifier: MIT

void ERR_remove_thread_state(void *td)
{
	panic();
}

void ERR_free_strings(void)
{
	panic();
}

char *ERR_error_string(unsigned long e, char *buf)
{
	panic();
}

unsigned long ERR_get_error(void)
{
	panic();
}

unsigned long ERR_peek_error(void)
{
	panic();
}

void ERR_clear_error(void)
{
	panic();
}

unsigned long ERR_GET_REASON(unsigned long e)
{
	panic();
}

int ERR_GET_LIB(unsigned long e)
{
	panic();
}

unsigned long ERR_peek_last_error(void)
{
	panic();
}
