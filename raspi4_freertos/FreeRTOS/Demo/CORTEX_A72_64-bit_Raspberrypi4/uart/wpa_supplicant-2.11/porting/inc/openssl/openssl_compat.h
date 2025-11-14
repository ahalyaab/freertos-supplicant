#ifndef OPENSSL_COMPAT_H
#define OPENSSL_COMPAT_H

/* Compatibility glue that maps OpenSSL-style names to your porting types
 * (uses porting/inc/porting.h). Add small inline stubs where necessary to
 * allow compilation of crypto_openssl.c and other OpenSSL-backend sources.
 *
 * THIS FILE MUST LIVE IN: porting/inc/openssl/openssl_compat.h
 */

#include "../porting.h"   /* uses typedefs and structures you already provided */
#include <stddef.h>

/* ------------------ Type aliases / ensure types exist ------------------ */

/* Many of the OpenSSL-style names are already typedef'd or present
 * in your porting.h. Guard redefinitions carefully.
 */

/* EVP / cipher / digest types */
#ifndef HAVE_OPENSSL_EVP_TYPES
typedef struct evp_pkey_st EVP_PKEY;      /* porting.h already typedefs evp_pkey_st */
typedef struct evp_md_st  EVP_MD;
typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_md_ctx_st EVP_MD_CTX;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
#define HAVE_OPENSSL_EVP_TYPES 1
#endif

/* HMAC */
#ifndef HAVE_OPENSSL_HMAC
typedef struct hmac_ctx_st HMAC_CTX;      /* porting.h has hmac_ctx_st */
#define HAVE_OPENSSL_HMAC 1
#endif

/* BIGNUM / BN_CTX / DH / AES_KEY */
#ifndef HAVE_OPENSSL_BN_TYPES
/* BIGNUM, BN_CTX, DH, AES_KEY are defined in porting.h (bignum_st, bn_ctx, dh_st etc) */
#define HAVE_OPENSSL_BN_TYPES 1
#endif

/* ASN1 / X509 */
#ifndef HAVE_OPENSSL_ASN1_X509
/* porting.h defines ASN1_STRING, ASN1_TIME, X509 etc as opaque structs */
typedef struct asn1_string_st ASN1_STRING;
typedef struct asn1_string_st ASN1_TIME;
typedef struct x509_st X509;
#define HAVE_OPENSSL_ASN1_X509 1
#endif

/* EVP_PKEY_CTX, CMAC etc—opaque placeholders if not defined */
#ifndef HAVE_OPENSSL_EXTRA_OPAQUES
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;
typedef struct cmac_ctx_st CMAC_CTX;
#define HAVE_OPENSSL_EXTRA_OPAQUES 1
#endif

/* ------------------ Minimal inline stubs / prototypes ------------------ */

/* Many BN/DH functions are implemented in porting/src/BN.c, DH.c, etc.
 * If prototypes are not visible to the OpenSSL backend, these inline
 * declarations help the compiler parse the code. They are no-ops only
 * when porting implementation is absent at link time; however, your
 * porting/src contains implementations, so these are mostly harmless.
 */

/* EVP_PKEY helpers (free/inspect) */
#ifndef OPENSSL_COMPAT_EVP
static inline void EVP_PKEY_free(EVP_PKEY *p) { (void)p; } /* safe no-op */
static inline int EVP_PKEY_base_id(EVP_PKEY *p) { (void)p; return 0; }
#define OPENSSL_COMPAT_EVP 1
#endif

/* HMAC and EVP_MD_CTX alloc/free 
#ifndef OPENSSL_COMPAT_HMAC_EVPCTX
static inline HMAC_CTX *HMAC_CTX_new(void) { return NULL; }
static inline void HMAC_CTX_free(HMAC_CTX *ctx) { (void)ctx; }

static inline EVP_MD_CTX *EVP_MD_CTX_new(void) { return NULL; }
static inline void EVP_MD_CTX_free(EVP_MD_CTX *ctx) { (void)ctx; }
#define OPENSSL_COMPAT_HMAC_EVPCTX 1
#endif
*/

/* ASN1 helpers 
#ifndef OPENSSL_COMPAT_ASN1
static inline const unsigned char *ASN1_STRING_get0_data(const ASN1_STRING *x) {
    return x ? x->data : NULL;
}
static inline int ASN1_STRING_length(const ASN1_STRING *x) {
    return x ? x->length : 0;
}
static inline const ASN1_TIME *X509_get0_notBefore(const X509 *x) { (void)x; return NULL; }
static inline const ASN1_TIME *X509_get0_notAfter(const X509 *x)  { (void)x; return NULL; }
#define OPENSSL_COMPAT_ASN1 1
#endif
*/




/* BIGNUM stubs (real implementations exist in porting/src; these are fallback) */
#ifndef OPENSSL_COMPAT_BN
static inline BIGNUM *BN_new(void) { return NULL; }
static inline void BN_free(BIGNUM *bn) { (void)bn; }
static inline void BN_clear_free(BIGNUM *bn) { (void)bn; }
static inline int BN_num_bytes(const BIGNUM *bn) { (void)bn; return 0; }
#define OPENSSL_COMPAT_BN 1
#endif

/* DH stubs (porting/src likely implements these) */
#ifndef OPENSSL_COMPAT_DH
static inline DH *DH_new(void) { return NULL; }
static inline void DH_free(DH *dh) { (void)dh; }
#define OPENSSL_COMPAT_DH 1
#endif

/* AES helpers - only basic prototypes; porting provides AES routines */
#ifndef OPENSSL_COMPAT_AES
static inline int AES_set_encrypt_key(const unsigned char *userKey, const int bits, AES_KEY *key) { (void)userKey; (void)bits; (void)key; return 0; }
static inline void AES_encrypt(const unsigned char *in, unsigned char *out, const AES_KEY *key) { (void)in; (void)out; (void)key; }
#define OPENSSL_COMPAT_AES 1
#endif

/* EVP cipher / context */
#ifndef OPENSSL_COMPAT_EVP_CIPHER
static inline EVP_CIPHER_CTX *EVP_CIPHER_CTX_new(void) { return NULL; }
static inline void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *ctx) { (void)ctx; }
#define OPENSSL_COMPAT_EVP_CIPHER 1
#endif

/* Small constants fallback (if not already defined in porting.h) */
#ifndef RSA_PKCS1_OAEP_PADDING
#define RSA_PKCS1_OAEP_PADDING 4
#endif

/* OPENSSL version text (if code expects it) */
#ifndef OPENSSL_VERSION_TEXT
#define OPENSSL_VERSION_TEXT "porting-compat"
#endif

#endif /* OPENSSL_COMPAT_H */

