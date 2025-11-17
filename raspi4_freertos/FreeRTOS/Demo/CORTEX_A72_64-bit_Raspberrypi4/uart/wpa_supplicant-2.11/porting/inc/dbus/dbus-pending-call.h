#ifndef PORTING_DBUS_PENDING_CALL_H
#define PORTING_DBUS_PENDING_CALL_H


typedef struct DBusPendingCall {
int dummy;
} DBusPendingCall;


static inline DBusPendingCall *dbus_pending_call_block(DBusPendingCall *p, int timeout_ms) { (void)p; (void)timeout_ms; return NULL; }
static inline void dbus_pending_call_unref(DBusPendingCall *p) { (void)p; }


#endif /* PORTING_DBUS_PENDING_CALL_H */
