// SPDX-License-Identifier: MIT
#include "porting.h"

int BIO_free(BIO *a)
{
	panic();
}

BIO *BIO_new_file(const char *filename, const char *mode)
{
	panic();
}

BIO *BIO_new_mem_buf(const void *buf, int len)
{
	panic();
}

int BIO_write(BIO *b, const void *data, int dlen)
{
	panic();
}

const BIO_METHOD *BIO_s_mem(void)
{
	panic();
}

BIO *BIO_new(const BIO_METHOD *type)
{
	panic();
}

long BIO_ctrl(BIO *bp, int cmd, long larg, void *parg)
{
	panic();
}

int BIO_read(BIO *b, void *data, int dlen)
{
	panic();
}

size_t BIO_ctrl_pending(BIO *b)
{
	panic();
}

int BIO_reset(BIO *b)
{
	panic();
}
