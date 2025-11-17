/*
 * porting/src/dbus_stub.c
 * Minimal DBus compile-time stub implementations for wpa_supplicant.
 *
 * Functions intentionally do nothing or return safe defaults.
 * This is NOT a real DBus implementation — it only allows DBus source
 * files to compile and link on FreeRTOS.
 */

#include "dbus/dbus_stub.h"
#include "porting.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/* Minimal internal structures */
struct DBusConnection { int dummy; };
struct DBusMessage   { int dummy; };
struct DBusPendingCall { int dummy; };
struct DBusServer    { int dummy; };

/* ------------------- Connection / bus ------------------- */

dbus_bool_t dbus_error_is_set(const DBusError *error)
{
    return (error && error->name);
}


void dbus_error_init(DBusError *error)
{
    if (!error) return;
    error->name = NULL;
    error->message = NULL;
}

void dbus_set_error_const(DBusError *error,
                          const char *name,
                          const char *message)
{
    if (!error) return;
    error->name = (char *) name;
    error->message = (char *) message;
}











DBusConnection *dbus_bus_get_private(const char *address, DBusError *error)
{
    (void)address; (void)error;
    return NULL;
}
DBusConnection *dbus_bus_get(DBusError *error)
{
    (void)error;
    return NULL;
}
DBusConnection *dbus_connection_open_private(const char *address, DBusError *err)
{
    (void)address; (void)err;
    return NULL;
}

dbus_bool_t dbus_connection_send(DBusConnection *conn,
                                 DBusMessage *msg,
                                 dbus_uint32_t *serial)
{
    (void)conn; (void)msg; (void)serial;
    return TRUE;
}


void dbus_connection_flush(DBusConnection *conn)
{
    (void)conn;
}


void dbus_connection_unref(DBusConnection *conn)
{
    (void)conn;
}
dbus_bool_t dbus_connection_register_fallback(DBusConnection *con, void *data)
{
    (void)con; (void)data;
    return FALSE;
}
dbus_bool_t dbus_connection_set_exit_on_disconnect(DBusConnection *conn, int on)
{
    (void)conn; (void)on;
    return FALSE;
}
dbus_bool_t dbus_connection_read_write_dispatch(DBusConnection *connection, int timeout_milliseconds)
{
    (void)connection; (void)timeout_milliseconds;
    return FALSE;
}
dbus_bool_t dbus_connection_dispatch(DBusConnection *connection)
{
    (void)connection;
    return FALSE;
}

/* ------------------- Sending / receiving ------------------- */

dbus_bool_t dbus_connection_send(DBusConnection *connection, DBusMessage *message, uint32_t *serial)
{
    (void)connection; (void)message;
    if (serial) *serial = 0;
    return TRUE; /* pretend sent */
}

dbus_bool_t dbus_connection_send_with_reply_and_block(DBusConnection *conn, DBusMessage *msg, DBusMessage **reply, int timeout_ms)
{
    (void)conn; (void)msg; (void)timeout_ms;
    if (reply) *reply = NULL;
    return FALSE;
}

dbus_bool_t dbus_connection_queue_message(DBusConnection *conn, DBusMessage *msg, uint32_t *serial)
{
    (void)conn; (void)msg;
    if (serial) *serial = 0;
    return TRUE;
}

DBusMessage *dbus_connection_pop_message(DBusConnection *connection)
{
    (void)connection;
    return NULL;
}

/* ------------------- Message creation / destruction ------------------- */

DBusMessage *dbus_message_new_method_call(const char *bus_name, const char *path, const char *iface, const char *method)
{
    (void)bus_name; (void)path; (void)iface; (void)method;
    DBusMessage *m = (DBusMessage *)malloc(sizeof(DBusMessage));
    if (m) memset(m, 0, sizeof(*m));
    return m;
}

DBusMessage *dbus_message_new_signal(const char *path, const char *iface, const char *name)
{
    (void)path; (void)iface; (void)name;
    DBusMessage *m = (DBusMessage *)malloc(sizeof(DBusMessage));
    if (m) memset(m, 0, sizeof(*m));
    return m;
}

DBusMessage *dbus_message_new_method_return(DBusMessage *msg)
{
    (void)msg;
    DBusMessage *m = (DBusMessage *)malloc(sizeof(DBusMessage));
    if (m) memset(m, 0, sizeof(*m));
    return m;
}

DBusMessage *dbus_message_new_error(DBusMessage *msg, const char *name, const char *message)
{
    (void)msg; (void)name; (void)message;
    DBusMessage *m = (DBusMessage *)malloc(sizeof(DBusMessage));
    if (m) memset(m, 0, sizeof(*m));
    return m;
}

void dbus_message_unref(DBusMessage *msg)
{
    if (msg) free(msg);
}

DBusMessage *dbus_message_ref(DBusMessage *msg)
{
    (void)msg;
    return msg;
}

/* ------------------- Message query helpers ------------------- */

const char *dbus_message_get_interface(DBusMessage *msg) { (void)msg; return NULL; }
const char *dbus_message_get_member(DBusMessage *msg)    { (void)msg; return NULL; }
const char *dbus_message_get_path(DBusMessage *msg)      { (void)msg; return "/"; }
const char *dbus_message_get_sender(DBusMessage *msg)    { (void)msg; return NULL; }

dbus_bool_t dbus_message_iter_init(const DBusMessage *message, DBusMessageIter *iter)
{
    (void)message; (void)iter;
    return TRUE;
}

dbus_bool_t dbus_message_iter_open_container(DBusMessageIter *iter,
                                             int type,
                                             const char *signature,
                                             DBusMessageIter *sub)
{
    (void)iter;
    (void)type;
    (void)signature;
    (void)sub;
    return TRUE;
}


dbus_bool_t dbus_message_iter_close_container(DBusMessageIter *iter,
                                              DBusMessageIter *sub)
{
    (void)iter;
    (void)sub;
    return TRUE;
}


dbus_tool_t dbus_message_iter_init_append(DBusMessage *message, DBusMessageIter *iter)
{
    (void)message; (void)iter; return TRUE;
}

dbus_bool_t dbus_message_iter_append_basic(DBusMessageIter *iter, int type, const void *v)
{
    (void)iter; (void)type; (void)v; return TRUE;
}

int dbus_message_iter_get_arg_type(const DBusMessageIter *iter)
{
    (void)iter;
    return 0;
}

dbus_bool_t dbus_message_iter_recurse(DBusMessageIter *iter, DBusMessageIter *sub)
{
    (void)iter; (void)sub; return TRUE;
}

/* varargs based helper used by many callers; stub returns FALSE (not parsed) */
dbus_bool_t dbus_message_get_args(DBusMessage *msg, DBusError *err, int first_sig, ...)
{
    (void)msg; (void)err; (void)first_sig;
    /* consume varargs to avoid UB for callers that pass them */
    va_list ap;
    va_start(ap, first_sig);
    va_end(ap);
    return FALSE;
}

/* ------------------- Misc ------------------- */

void dbus_message_set_serial(DBusMessage *msg, uint32_t serial)
{
    (void)msg; (void)serial;
}

/* ------------------- Pending call helpers ------------------- */

DBusPendingCall *dbus_pending_call_block(DBusPendingCall *pending, int timeout_milliseconds)
{
    (void)pending; (void)timeout_milliseconds;
    return NULL;
}

void dbus_pending_call_unref(DBusPendingCall *pending)
{
    (void)pending;
}

/* ------------------- Bus helpers ------------------- */

dbus_bool_t dbus_bus_register(DBusConnection *connection, DBusError *err)
{
    (void)connection; (void)err;
    return TRUE;
}

dbus_bool_t dbus_bus_add_match(DBusConnection *connection, const char *rule, DBusError *err)
{
    (void)connection; (void)rule; (void)err;
    return TRUE;
}

/* ------------------- Server helpers ------------------- */

DBusServer *dbus_server_listen(const char *address, DBusError *error)
{
    (void)address; (void)error;
    return NULL;
}
DBusConnection *dbus_server_get_connection(DBusServer *server)
{
    (void)server;
    return NULL;
}
void dbus_server_unref(DBusServer *server)
{
    (void)server;
}

