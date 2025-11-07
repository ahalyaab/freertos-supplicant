// SPDX-License-Identifier: MIT
#include "porting.h"

typedef uint8_t u8;
int tls_connection_client_hello_ext(void *ssl_ctx, struct tls_connection *conn,
		int ext_type, const u8 *data,
		size_t data_len)
{
	panic();
}
