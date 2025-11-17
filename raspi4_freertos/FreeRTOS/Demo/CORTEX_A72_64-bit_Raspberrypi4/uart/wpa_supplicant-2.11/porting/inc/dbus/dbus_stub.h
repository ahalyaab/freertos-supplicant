#pragma once
/*
 * porting/inc/dbus/dbus_stub.h
 * Single consolidated DBus compile-time stub header for wpa_supplicant.
 *
 * This header provides minimal types and function prototypes used by the
 * DBus backend in wpa_supplicant.  The implementation in dbus_stub.c
 * is a no-op-safe implementation (returns NULL/0, or allocates trivial objects).
 *
 * Put this file under: porting/inc/dbus/dbus_stub.h
 * Ensure -Iporting/inc and -Iporting/inc/dbus are in CFLAGS.
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>

/* Basic boolean */
typedef int dbus_bool_t;
#define TRUE 1
#define FALSE 0

/* Basic opaque types */
//typedef struct DBusConnection DBusConnection;
//typedef struct DBusMessage DBusMessage;
//typedef struct DBusMessageIter DBusMessageIter;
//typedef struct DBusError DBusError;
//typedef struct DBusWatch DBusWatch;
//typedef struct DBusPendingCall DBusPendingCall;
//typedef struct DBusServer DBusServer;

/* Simple handler result (used in some code paths) */
//typedef enum {
  //  DBUS_HANDLER_RESULT_HANDLED = 1,
    //DBUS_HANDLER_RESULT_NOT_YET_HANDLED = 0,
    //DBUS_HANDLER_RESULT_NEED_MEMORY = -1
//} DBusHandlerResult;

/* Common DBus types used by wpa */
#define DBUS_TYPE_STRING 0x03
#define DBUS_TYPE_INT32  0x02
#define DBUS_TYPE_UINT32 0x08

/* DBusError */
struct DBusError {
    int dummy;
    char *name;
    char *message;
};
static inline void dbus_error_init(DBusError *err) { (void)err; }
static inline void dbus_error_free(DBusError *err) { (void)err; }
static inline dbus_bool_t dbus_error_is_set(const DBusError *err) { (void)err; return FALSE; }

/* Message iterator */
struct DBusMessageIter {
    void *dummy;
};

/* Prototypes - connection / bus */
DBusConnection *dbus_bus_get_private(const char *address, DBusError *error);
DBusConnection *dbus_bus_get(DBusError *error);
DBusConnection *dbus_connection_open_private(const char *address, DBusError *err);
void dbus_connection_unref(DBusConnection *conn);
dbus_bool_t dbus_connection_register_fallback(DBusConnection *con, void *data);
dbus_bool_t dbus_connection_set_exit_on_disconnect(DBusConnection *conn, int on);
dbus_bool_t dbus_connection_read_write_dispatch(DBusConnection *connection, int timeout_milliseconds);
dbus_bool_t dbus_connection_dispatch(DBusConnection *connection);

/* Sending / receiving */
dbus_bool_t dbus_connection_send(DBusConnection *connection, DBusMessage *message, uint32_t *serial);
dbus_bool_t dbus_connection_send_with_reply_and_block(DBusConnection *conn, DBusMessage *msg, DBusMessage **reply, int timeout_ms);
dbus_bool_t dbus_connection_queue_message(DBusConnection *conn, DBusMessage *msg, uint32_t *serial);
DBusMessage *dbus_connection_pop_message(DBusConnection *connection);

/* Message creation/destruction */
DBusMessage *dbus_message_new_method_call(const char *bus_name, const char *path, const char *iface, const char *method);
DBusMessage *dbus_message_new_signal(const char *path, const char *iface, const char *name);
DBusMessage *dbus_message_new_method_return(DBusMessage *msg);
DBusMessage *dbus_message_new_error(DBusMessage *msg, const char *name, const char *message);
void dbus_message_unref(DBusMessage *msg);

/* Message query */
const char *dbus_message_get_interface(DBusMessage *msg);
const char *dbus_message_get_member(DBusMessage *msg);
const char *dbus_message_get_path(DBusMessage *msg);
const char *dbus_message_get_sender(DBusMessage *msg);
dbus_bool_t dbus_message_iter_init(const DBusMessage *message, DBusMessageIter *iter);
dbus_bool_t dbus_message_iter_init_append(DBusMessage *message, DBusMessageIter *iter);
dbus_bool_t dbus_message_iter_append_basic(DBusMessageIter *iter, int type, const void *v);
int dbus_message_iter_get_arg_type(const DBusMessageIter *iter);
dbus_bool_t dbus_message_iter_recurse(DBusMessageIter *iter, DBusMessageIter *sub);

/* Message args helpers (varargs) */
dbus_bool_t dbus_message_get_args(DBusMessage *msg, DBusError *err, int first_sig, ...);

/* Misc helpers */
void dbus_message_set_serial(DBusMessage *msg, uint32_t serial);

/* Pending call helpers (small subset) */
DBusPendingCall *dbus_pending_call_block(DBusPendingCall *pending, int timeout_milliseconds);
void dbus_pending_call_unref(DBusPendingCall *pending);

/* Bus helpers */
dbus_bool_t dbus_bus_register(DBusConnection *connection, DBusError *err);
dbus_bool_t dbus_bus_add_match(DBusConnection *connection, const char *rule, DBusError *err);

/* Server helpers (minimal) */
DBusServer *dbus_server_listen(const char *address, DBusError *error);
DBusConnection *dbus_server_get_connection(DBusServer *server);
void dbus_server_unref(DBusServer *server);

/* Additional helpers sometimes used */
DBusMessage *dbus_message_ref(DBusMessage *msg);

#ifdef __cplusplus
}
#endif

