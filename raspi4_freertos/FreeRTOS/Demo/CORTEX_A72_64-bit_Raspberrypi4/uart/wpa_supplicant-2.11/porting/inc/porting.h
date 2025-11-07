#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//#ifndef _NL_MSG_H_
//#define _NL_MSG_H_

typedef struct nl_msg* my_nl_msg;

//#endif // _NL_MSG_H_

#define stdout 0
#define stdin  1
#define stderr -1
#define LIBNL_VER(a, b) ((a) * 100 + (b))

#define LIBNL_VER_NUM 306  // For version 3.6
#define TLS_DEFAULT_CIPHERS "HIGH:!aNULL:!eNULL:!EXPORT:!DES:!3DES:!RC4:!MD5:!PSK"
#define TCSANOW 0
#define ECHO 0x00000008
#define FD_ZERO(set) do { for (int i = 0; i < 8; i++) (set)->bits[i] = 0; } while (0)
#define FD_SET(fd, set) ((set)->bits[(fd) / 32] |= (1 << ((fd) % 32)))
#define FD_ISSET(fd, set) ((set)->bits[(fd) / 32] & (1 << ((fd) % 32)))
#define NL_CB_SEQ_CHECK 1
#define NL_CB_CUSTOM 3
#define NL_CB_FINISH 4
#define NL_CB_ACK 5
#define NL_CB_VALID 6
#define NLE_DUMP_INTR 7
#define CTRL_ATTR_MAX 8
#define CTRL_ATTR_MCAST_GROUPS 9
#define CTRL_ATTR_MCAST_GRP_MAX 12
#define CTRL_ATTR_MCAST_GRP_NAME 13
#define CTRL_ATTR_MCAST_GRP_ID 14
#define CTRL_CMD_GETFAMILY 15
#define CTRL_ATTR_FAMILY_NAME 16
#define NLE_NOMEM 12
#define NLMSG_HDRLEN 13
#define NL_CB_DEFAULT 0
#define NLMSG_ALIGNTO 4
#define GENL_HDRLEN 16
#define NLE_BUSY 16  // Or another appropriate value
#define NL_AUTO_PORT    0
#define NL_AUTO_SEQ     0
#define NETLINK_ROUTE 0
#define NLM_F_CREATE    0x400
//#define isprint(c)  ((c) >= 32 && (c) <= 126)
#define NLM_F_ROOT      0x100 
#define NLM_F_MATCH     0x200
#define NLM_F_DUMP      (NLM_F_ROOT|NLM_F_MATCH)
#define NL_SKIP 0
#define NL_OK 1
#define NLA_F_NESTED            (1 << 15)
#define NL_STOP 2
# define SSL3_RANDOM_SIZE                        32
# define SSL_OP_NO_SSLv2                                 0x0
# define SSL_OP_NO_SSLv3                                 SSL_OP_BIT(25)
# define SSL_MODE_AUTO_RETRY 0x00000004U
# define SSL_SESS_CACHE_SERVER                   0x0002
# define SSL_SESS_CACHE_OFF                      0x0000
# define SSL_OP_SINGLE_DH_USE                            0x0
# define X509_V_FLAG_CRL_CHECK                   0x4
# define X509_V_FLAG_CRL_CHECK_ALL               0x8
# define SSL_ST_MASK                     0x0FFF
# define SSL_ST_CONNECT                  0x1000
# define SSL_ST_ACCEPT                   0x2000
# define SSL_CB_LOOP                     0x01
# define SSL_CB_ALERT                    0x4000
# define SSL3_AL_FATAL                   2
# define SSL_CB_EXIT                     0x02
# define SSL_CB_READ                     0x04
# define OPENSSL_VERSION                0
#  define SSLEAY_VERSION          OPENSSL_VERSION
# define OPENSSL_VERSION_TEXT "OpenSSL 3.0.13 30 Jan 2024"
#define SSL_CERT_SET_FIRST 1
#define SSL_CERT_SET_NEXT 2
#define NID_rsaEncryption               6
#define NID_dsa_2               67
#define NID_X9_62_id_ecPublicKey                408
#define NID_dsa         116
# define X509_R_CERT_ALREADY_IN_HASH_TABLE                101
# define ERR_LIB_X509            11
#define FALSE 0
#define TRUE 1
#define DBUS_TYPE_BYTE  'y'  // 'y' represents the byte type in DBus

#define DBUS_TYPE_INT32  0x02
#define DBUS_TYPE_STRING  0x03
#define DBUS_TYPE_OBJECT_PATH  0x04
#define DBUS_TYPE_BOOLEAN  0x05
#define DBUS_TYPE_DOUBLE  0x06
#define DBUS_TYPE_UINT32  0x07
#define DBUS_TYPE_INT16  0x08
#define DBUS_TYPE_UINT16  0x09
#define DBUS_TYPE_INT64  0x0A
#define DBUS_TYPE_UINT64  0x0B
#define DBUS_TYPE_STRING_AS_STRING  (0x10)
#define DBUS_TYPE_OBJECT_PATH_AS_STRING  0x11
#define DBUS_TYPE_BYTE_AS_STRING "byte"
#define DBUS_TYPE_BOOLEAN_AS_STRING "boolean"
#define DBUS_TYPE_INT16_AS_STRING "int16"
#define DBUS_TYPE_UINT16_AS_STRING "uint16"
#define DBUS_TYPE_INT32_AS_STRING "int32"
#define DBUS_TYPE_UINT32_AS_STRING "uint32"
#define DBUS_TYPE_INT64_AS_STRING "int64"
#define DBUS_TYPE_UINT64_AS_STRING "uint64"
#define DBUS_TYPE_DOUBLE_AS_STRING "double"
#define DBUS_TYPE_ARRAY 0x10
#define DBUS_TYPE_VARIANT 0x11
#define DBUS_TYPE_DICT_ENTRY 0x12
#define DBUS_TYPE_ARRAY_AS_STRING "array"
#define DBUS_DICT_ENTRY_BEGIN_CHAR_AS_STRING "{"
#define DBUS_TYPE_VARIANT_AS_STRING "variant"
#define DBUS_ERROR_INVALID_ARGS "org.freedesktop.DBus.Error.InvalidArgs"
#define DBUS_ERROR_FAILED "org.freedesktop.DBus.Error.Failed"
#define DBUS_TYPE_INVALID 0
#define DBUS_DICT_ENTRY_END_CHAR_AS_STRING "}"
#ifdef __cplusplus
#define DBUS_BEGIN_DECLS extern "C" {
#define DBUS_END_DECLS }
#else
#define DBUS_BEGIN_DECLS
#define DBUS_END_DECLS
#endif

#define NLA_PUT(msg, attr_type, len, data) 0


#define NLA_PUT_U64(msg, attrtype, value) NLA_PUT(msg, attrtype, sizeof(u64), &value)
#define NLA_PUT_U32(msg, attrtype, value) NLA_PUT(msg, attrtype, sizeof(u32), &value)

#define NLA_PUT_U8(msg, attrtype, value) NLA_PUT(msg, attrtype, sizeof(u8), &value)

#define SSL_OP_BIT(n)  ((uint64_t)1 << (uint64_t)n)
#define DBUS_INTERFACE_PROPERTIES "org.freedesktop.DBus.Properties"
#define DBUS_ERROR_OBJECT_PATH_IN_USE "org.freedesktop.DBus.Error.ObjectPathInUse"
#define DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER 1
#define DBUS_REQUEST_NAME_REPLY_EXISTS 2
#define DBUS_REQUEST_NAME_REPLY_IN_QUEUE 3
#define DBUS_REQUEST_NAME_REPLY_ALREADY_OWNER 4
#define DBUS_ERROR_UNKNOWN_METHOD "org.freedesktop.DBus.Error.UnknownMethod"
#define DBUS_ERROR_NO_MEMORY "org.freedesktop.DBus.Error.NoMemory"
#ifndef _DBUS_GNUC_EXTENSION
#define _DBUS_GNUC_EXTENSION
#endif
#define BN_ULONG unsigned int
#define DBUS_TYPE_STRUCT 0x10
#define DBUS_INTERFACE_LOCAL "org.freedesktop.DBus.Local"
#define DBUS_WATCH_READABLE (1 << 0)
#define DBUS_WATCH_WRITABLE (1 << 1)
#define DBUS_WATCH_ERROR (1 << 2)
#define DBUS_DISPATCH_DATA_REMAINS (1 << 3)
#define DBUS_INTROSPECT_1_0_XML_DOCTYPE_DECL_NODE "<?xml version='1.0' encoding='UTF-8'?>"
#define DBUS_MESSAGE_TYPE_SIGNAL 1
#define DBUS_INTERFACE_DBUS "org.freedesktop.DBus"

typedef enum {
    DBUS_HANDLER_RESULT_HANDLED = 1,
    DBUS_HANDLER_RESULT_NOT_YET_HANDLED = 0,
    DBUS_HANDLER_RESULT_IGNORE = -1
} DBusHandlerResult;

# define X509_FILETYPE_PEM       1
# define X509_FILETYPE_ASN1      2
# define SSL_VERIFY_NONE                 0x00
# define SSL_VERIFY_FAIL_IF_NO_PEER_CERT 0x02
# define SSL_VERIFY_CLIENT_ONCE          0x04
# define SSL_VERIFY_PEER                 0x01
# define SSL_FILETYPE_PEM        X509_FILETYPE_PEM
# define SSL_FILETYPE_ASN1       X509_FILETYPE_ASN1
#define NID_dhKeyAgreement              28
# define EVP_PKEY_EC     NID_X9_62_id_ecPublicKey
# define EVP_PKEY_DH     NID_dhKeyAgreement
# define EVP_PKEY_DSA    NID_dsa
# define EVP_PKEY_RSA    NID_rsaEncryption
# define SSL_OP_DONT_INSERT_EMPTY_FRAGMENTS              SSL_OP_BIT(11)
# define SSL_ERROR_WANT_READ             2
# define SSL_ERROR_WANT_WRITE            3
# define SSL_R_UNSAFE_LEGACY_RENEGOTIATION_DISABLED       338
# define ERR_LIB_SSL             20
#define SSL3_RANDOM_SIZE 32
#define NID_subject_alt_name            85
#define NID_commonName          13
#define NID_countryName         14
#define NID_localityName                15
#define NID_stateOrProvinceName         16
#define NID_organizationName            17
#define NID_organizationalUnitName              18
#define NID_pkcs9_emailAddress          48
# define X509_V_ERR_CERT_REVOKED                         23
# define X509_V_ERR_CERT_NOT_YET_VALID                   9
# define X509_V_ERR_CRL_NOT_YET_VALID                    11
# define X509_V_ERR_CERT_HAS_EXPIRED                     10
# define X509_V_ERR_CRL_HAS_EXPIRED                      12
# define X509_V_ERR_UNABLE_TO_GET_ISSUER_CERT            2
# define X509_V_ERR_UNABLE_TO_GET_CRL                    3
# define X509_V_ERR_UNABLE_TO_GET_CRL_ISSUER             33
# define X509_V_ERR_SELF_SIGNED_CERT_IN_CHAIN            19
# define X509_V_ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY    20
# define X509_V_ERR_DEPTH_ZERO_SELF_SIGNED_CERT          18
#define X509_V_ERR_UNABLE_TO_VERIFY_LEAF_SIGNATURE 	 21
# define X509_V_ERR_CERT_CHAIN_TOO_LONG                  22
# define X509_V_ERR_PATH_LENGTH_EXCEEDED                 25
# define X509_V_ERR_INVALID_CA                           79
# define X509_V_ERR_UNABLE_TO_DECRYPT_CERT_SIGNATURE     4
# define X509_V_ERR_UNABLE_TO_DECRYPT_CRL_SIGNATURE      5
# define X509_V_ERR_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY   6
# define X509_V_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD       13
# define X509_V_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD        14
# define X509_V_ERR_ERROR_IN_CRL_LAST_UPDATE_FIELD       15
# define X509_V_ERR_ERROR_IN_CRL_NEXT_UPDATE_FIELD       16
# define X509_V_ERR_CERT_UNTRUSTED                       27
# define X509_V_ERR_CERT_REJECTED                        28
# define RSA_PKCS1_OAEP_PADDING     4
#define NID_certificate_policies                89
# define BN_FLG_CONSTTIME        0x04
#define nla_for_each_nested(pos, nla, rem) \
        for (pos = (struct nlattr *) nla_data(nla), rem = nla_len(nla); \
             nla_ok(pos, rem); \
             pos = nla_next(pos, &(rem)))
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
                    int __modes, size_t __n) __THROW __nonnull ((1));
typedef struct ssl_ctx_st SSL_CTX;
struct ssl_st {
    SSL_CTX *ctx;                // Pointer to the SSL context
    int version;                  // SSL version
    int type;                     // Type of SSL session
    unsigned long options;        // SSL options (e.g., SSL_OP_ALL)
    unsigned long mode;           // SSL mode (e.g., SSL_MODE_AUTO_RETRY)

    struct ssl3_state_st *s3;     // Pointer to SSLv3 specific state (client/server randoms, handshake state)
    struct ssl_session_st *session; // SSL session associated with this SSL context
    unsigned int renegotiate;     // Flag indicating if renegotiation is in progress
    unsigned long flags;          // Flags used for various state transitions
    int verify_result;            // SSL certificate verification result
};
struct ssl3_state_st {
    unsigned char client_random[SSL3_RANDOM_SIZE];  // Random value sent by the client
    unsigned char server_random[SSL3_RANDOM_SIZE];  // Random value sent by the server
};
typedef int16_t dbus_int16_t;
typedef int64_t dbus_int64_t;
typedef uint16_t dbus_uint16_t;
typedef uint32_t dbus_uint32_t;
typedef uint64_t dbus_uint64_t;
typedef int32_t dbus_int32_t;
typedef struct stack_st OPENSSL_STACK;
typedef struct ossl_decoder_ctx_st OSSL_DECODER_CTX;
struct ossl_param_st {
    const char *key;             /* the name of the parameter */
    unsigned int data_type;      /* declare what kind of content is in buffer */
    void *data;                  /* value being passed in or out */
    size_t data_size;            /* data size */
    size_t return_size;          /* returned content size */
};
typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;
typedef struct bio_method_st BIO_METHOD;
typedef struct ocsp_response_st OCSP_RESPONSE;
typedef struct ossl_provider_st OSSL_PROVIDER;
typedef int pem_password_cb (char *buf, int size, int rwflag, void *userdata);
typedef struct ossl_param_st OSSL_PARAM;
typedef struct ossl_lib_ctx_st OSSL_LIB_CTX;
typedef struct ossl_param_bld_st OSSL_PARAM_BLD;
typedef struct ssl_st SSL;
//struct wpabuf *certs;
typedef struct engine_st ENGINE;
typedef struct evp_mac_ctx_st EVP_MAC_CTX;
typedef struct evp_mac_st EVP_MAC;
typedef struct bn_mont_ctx_st BN_MONT_CTX;
typedef struct ocsp_basic_response_st OCSP_BASICRESP;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct ocsp_cert_id_st OCSP_CERTID;
typedef struct ssl_method_st SSL_METHOD;
typedef struct dsa_st DSA;
typedef struct bignum_st BIGNUM;
struct dh_st {
    BIGNUM *q;
    BIGNUM *p;        // Prime modulus
    BIGNUM *g;        // Generator
    BIGNUM *priv_key; // Private key
    BIGNUM *pub_key;  // Public key
};

typedef struct dh_st DH;
typedef struct evp_pkey_st EVP_PKEY;
typedef struct asn1_string_st ASN1_STRING;
typedef struct bio_st BIO;
typedef struct evp_md_st EVP_MD;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_md_ctx_st {
    const EVP_MD *digest;   // The hash algorithm (e.g., SHA256)
    void *md_data;          // Internal state of the algorithm
    unsigned long flags;    // Flags for the digest context (e.g., for updates)
};

typedef struct evp_md_ctx_st EVP_MD_CTX;
typedef struct ec_group_st EC_GROUP;
typedef struct ec_point_st EC_POINT;
typedef struct aes_key_st {
    unsigned long rd_key[4 * (14 + 1)];  // Array to hold round keys for AES
    int rounds;                          // Number of rounds for AES (typically 10, 12, or 14)
};
enum macsec_offload {
    MACSEC_OFFLOAD_DISABLED,
    MACSEC_OFFLOAD_ENABLED,
    MACSEC_OFFLOAD_UNKNOWN
};
typedef uint32_t u32;
typedef uint16_t u16;

struct nlmsghdr
{
        u32 nlmsg_len;
        u16 nlmsg_type;
        u16 nlmsg_flags;
        u32 nlmsg_seq;
        u32 nlmsg_pid;
};


struct nlmsgerr {
        int             error;
   struct nlmsghdr msg;
};

typedef struct aes_key_st AES_KEY;
typedef struct x509_store_st X509_STORE;
typedef struct x509_st X509;
typedef struct x509_lookup_st X509_LOOKUP;
typedef struct x509_store_ctx_st X509_STORE_CTX;
typedef struct ssl_session_st SSL_SESSION;
typedef uint16_t __u16;
typedef uint32_t __u32;
typedef int dbus_bool_t;
typedef struct bignum_ctx BN_CTX;
typedef struct hmac_ctx_st {
    EVP_MD_CTX *md_ctx;  // Context for the hash algorithm used in HMAC
    unsigned char *key;  // Key used for HMAC
    size_t key_len;      // Length of the key
};

typedef struct hmac_ctx_st HMAC_CTX;
typedef struct CMAC_CTX_st CMAC_CTX;
typedef struct asn1_string_st ASN1_TIME;
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct ssl_cipher_st SSL_CIPHER;

extern unsigned short _ctype_[256];  // Declare _ctype_ if needed

/*unsigned short _ctype_[256] = {
};*/
extern void* _impure_ptr;
//unsigned short _ctype_[256] = { 0 };
#define isspace(c) ((c) == ' ' || (c) == '\t' || (c) == '\n' || (c) == '\r' || (c) == '\v' || (c) == '\f')
#define isblank(c) ((c) == ' ' || (c) == '\t')
//#define tolower(c) ((c) >= 'A' && (c) <= 'Z' ? (c) + ('a' - 'A') : (c))
typedef struct X509_name_st X509_NAME;
void X509_free(X509 *x);

typedef struct asn1_object_st ASN1_OBJECT;
# define STACK_OF(type) struct stack_st_##type
typedef struct POLICYINFO_st {
    ASN1_OBJECT *policyid;
    STACK_OF(POLICYQUALINFO) *qualifiers;
} POLICYINFO;
void POLICYINFO_free(POLICYINFO *a);
typedef struct {
} CERTIFICATEPOLICIES;


typedef struct X509_name_entry_st X509_NAME_ENTRY;
typedef struct asn1_object_st ASN1_OBJECT;
typedef struct asn1_type_st ASN1_TYPE;
typedef struct otherName_st {
    ASN1_OBJECT *type_id;
    ASN1_TYPE *value;
} OTHERNAME;
typedef struct EDIPartyName_st {
    ASN1_STRING *nameAssigner;
    ASN1_STRING *partyName;
} EDIPARTYNAME;
typedef struct asn1_string_st ASN1_OCTET_STRING;
struct asn1_string_st {
    int length;            // Length of the data
    int type;              // ASN.1 type, e.g., IA5STRING type
    unsigned char *data;   // Pointer to the data
    int flags;             // Flags for handling special conditions
    // More internal fields depending on OpenSSL version
};

typedef struct asn1_string_st ASN1_STRING;
typedef ASN1_STRING ASN1_IA5STRING;

typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct GENERAL_NAME_st {
# define GEN_OTHERNAME   0
# define GEN_EMAIL       1
# define GEN_DNS         2
# define GEN_X400        3
# define GEN_DIRNAME     4
# define GEN_EDIPARTY    5
# define GEN_URI         6
# define GEN_IPADD       7
# define GEN_RID         8
    int type;
    union {
        char *ptr;
        OTHERNAME *otherName;  
        ASN1_IA5STRING *rfc822Name;
        ASN1_IA5STRING *dNSName;
        ASN1_STRING *x400Address;
        EDIPARTYNAME *ediPartyName;
        ASN1_IA5STRING *uniformResourceIdentifier;
        ASN1_OCTET_STRING *iPAddress;
        ASN1_OBJECT *registeredID;
        
        ASN1_OCTET_STRING *ip;  
        ASN1_IA5STRING *ia5;    
                                
        ASN1_OBJECT *rid;       
	ASN1_TYPE *other;       
    } d;
} GENERAL_NAME;

void GENERAL_NAME_free(GENERAL_NAME *a);
struct nlattr {
        __u16           nla_len;
        __u16           nla_type;
};
struct dirent {
    char d_name[256]; // Adjust the size as needed
};
struct nla_policy {
        uint16_t        type;

        uint16_t        minlen;

        uint16_t        maxlen;
};
enum {
        NLA_UNSPEC,     /**< Unspecified type, binary data chunk */
        NLA_U8,         /**< 8 bit integer */
        NLA_U16,        /**< 16 bit integer */
        NLA_U32,        /**< 32 bit integer */
        NLA_U64,        /**< 64 bit integer */
        NLA_STRING,     /**< NUL terminated character string */
        NLA_FLAG,       /**< Flag */
        NLA_MSECS,      /**< Micro seconds (64bit) */
        NLA_NESTED,     /**< Nested attributes */
        NLA_NESTED_COMPAT,
        NLA_NUL_STRING,
        NLA_BINARY,
        NLA_S8,
        NLA_S16,
        NLA_S32,
        NLA_S64,
        __NLA_TYPE_MAX,
};
struct termios {
    unsigned int c_lflag;  // This is the flag field, only store what you need
};



struct genlmsghdr {
    uint8_t cmd;  // Command type
    uint8_t version;  // Version field (usually 1)
    uint8_t reserved;  // Reserved field (set to 0)
    uint8_t hdrlen;  // Length of the header (variable)
};
#define nlmsg_hdr(msg) ((struct nlmsg_hdr *)(msg))
//struct nlmsg_hdr *msg;
struct nlmsg_hdr {
        __u32           nlmsg_len;
        __u16           nlmsg_type;
        __u16           nlmsg_flags;
        __u32           nlmsg_seq;
        __u32           nlmsg_pid;
};
int alphasort(const struct dirent **a, const struct dirent **b);
typedef struct {
    uint32_t bits[8]; // Adjust size based on the maximum number of file descriptors
} fd_set;
struct tm {
    int tm_sec;   // Seconds (0-59)
    int tm_min;   // Minutes (0-59)
    int tm_hour;  // Hours (0-23)
    int tm_mday;  // Day of the month (1-31)
    int tm_mon;   // Month (0-11)
    int tm_year;  // Year (years since 1900)
    int tm_wday;  // Day of the week (0-6, Sunday=0)
    int tm_yday;  // Day of the year (0-365)
    int tm_isdst; // Daylight Saving Time flag
};
struct ecc_curve {
    size_t size;
};
/*typedef enum {
        RADIUS_AUTH,
    
        RADIUS_ACCT,
	RADIUS_ACCT_INTERIM
}RadiusType;
*/
typedef struct {
            const char* filename;
    const char* mode;
    FILE *file;      // Pointer to the actual file
    long position;   // Current position of the file pointer
} MyFile;
typedef void (*DBusFreeFunction)(void *data);
typedef struct {
        int dummy_field;
        time_t end_time;              // The time when the timeout expires
        void (*callback)(void *data); // Callback to invoke when the timeout occurs
        void *data;                  // The user data associated with the timeout
        DBusFreeFunction free_func;  // The function to free the data when done
} DBusTimeout;
typedef enum {
    DBUS_BUS_SYSTEM,
    DBUS_BUS_SESSION,
    DBUS_BUS_STARTER
} DBusBusType;

typedef struct {
} DBusObjectPathVTable;


typedef struct {
    char **paths;
    int count;
} ObjectPathRegistry;
typedef enum {
    DBUS_DISPATCH_STATUS_SUCCESS,
    DBUS_DISPATCH_STATUS_FAILURE
} DBusDispatchStatus;
//ObjectPathRegistry registry = {NULL, 0};
typedef struct {
        int current_position;  // Current position of the iterator
    int total_arguments;
        int dummy;
    void *data;  // Pointer to the data being built into the message
    size_t size; // The size of the data
} DBusMessageIter;

typedef struct {
        int dummy_error;
        const char *error_name;  // The error name (e.g., "org.freedesktop.DBus.Error.Failed")
    const char *error_message;
    char *name;
    char *message;
} DBusError;

typedef struct {
        int no_reply;
        const char *member;
        char *error_name;
    char *error_message;
         const char *signature;
         const char *path;
        int message_type;
        int ref_count;  // Reference count to manage memory
} DBusMessage;

typedef struct {
         int dummy_field;
        const char *registered_path;
        void *data;
    int connection_id;
} DBusConnection;

typedef struct {
        int dummy_field;
         int unix_fd;
         void *data;
         DBusFreeFunction free_data_function;
         int flags;
} DBusWatch;
/*typedef enum {
        RADIUS_RX_PROCESSED,

        RADIUS_RX_QUEUED,

        RADIUS_RX_UNKNOWN,

        RADIUS_RX_INVALID_AUTHENTICATOR
}RadiusRxResult;
*/
