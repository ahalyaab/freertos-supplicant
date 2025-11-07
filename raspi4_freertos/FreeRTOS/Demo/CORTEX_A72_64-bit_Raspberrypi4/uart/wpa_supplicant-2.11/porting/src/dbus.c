// SPDX-License-Identifier: MIT
#include "porting.h"

typedef void (*DBusFreeFunction)(void *data);
const char *dbus_message_get_sender(DBusMessage *message)
{
	panic();
}

DBusMessage *dbus_message_set_destination(DBusMessage *message, const char *destination)
{
	panic();
}

dbus_bool_t dbus_bus_name_has_owner(DBusConnection *connection, const char *name)
{
	panic();
}

dbus_bool_t dbus_bus_add_match(DBusConnection *connection, const char *rule, DBusError *error)
{
	panic();
}

dbus_bool_t dbus_bus_remove_match(DBusConnection *connection, const char *rule, DBusError *error)
{
	panic();
}

dbus_bool_t dbus_message_get_type(DBusMessage *message)
{
	panic();
}

dbus_bool_t dbus_watch_handle(DBusWatch *watch, unsigned int flags)
{
	panic();
}

DBusConnection *dbus_connection_ref(DBusConnection *connection)
{
	panic();
}

int dbus_timeout_get_interval(DBusTimeout *timeout)
{
	panic();
}

void dbus_connection_set_exit_on_disconnect(DBusConnection *connection, dbus_bool_t exit_on_disconnect)
{
	panic();
}

dbus_bool_t dbus_message_is_signal(DBusMessage *message, const char *iface, const char *signal_name)
{
	panic();
}

DBusDispatchStatus dbus_connection_dispatch(DBusConnection *connection)
{
	panic();
}

DBusDispatchStatus dbus_connection_get_dispatch_status(DBusConnection *connection)
{
	panic();
}

dbus_bool_t dbus_timeout_get_enabled(DBusTimeout *timeout)
{
	panic();
}

dbus_bool_t dbus_watch_get_enabled(DBusWatch *watch)
{
	panic();
}

DBusConnection *dbus_bus_get(DBusBusType type, DBusError *error)
{
	panic();
}

void dbus_connection_unref(DBusConnection *connection)
{
	panic();
}

typedef void (*DBusHandleMessageFunction)(DBusConnection *connection, void *message, void *user_data);

void dbus_connection_remove_filter(DBusConnection *connection,
		DBusHandleMessageFunction function,
		void *user_data)
{

	panic();
}

dbus_bool_t dbus_message_iter_append_fixed_array(DBusMessageIter *iter, int element_type, const void *value, int n_elements)
{
	panic();
}

dbus_bool_t dbus_type_is_basic(int typecode)
{
	panic();
}

typedef void (*DBusWakeupMainFunction)(void *data);
typedef void (*DBusFreeFunction)(void *data);

dbus_bool_t dbus_connection_add_filter(DBusConnection *connection,
		DBusHandleMessageFunction function,
		void *user_data, DBusFreeFunction free_data_function)
{
	panic();
}

typedef void (*DBusAddTimeoutFunction)(void *data);
typedef void (*DBusRemoveTimeoutFunction)(void *data);
typedef void (*DBusTimeoutToggledFunction)(void *data);

dbus_bool_t dbus_connection_set_timeout_functions(DBusConnection *connection,
		DBusAddTimeoutFunction add_function,
		DBusRemoveTimeoutFunction remove_function,
		DBusTimeoutToggledFunction toggled_function,
		void *data,
		DBusFreeFunction free_data_function)
{
	panic();
}
typedef void (*DBusAddWatchFunction)(void *data);
typedef void (*DBusRemoveWatchFunction)(void *data);
typedef void (*DBusWatchToggledFunction)(void *data);

dbus_bool_t dbus_connection_set_watch_functions(DBusConnection *connection,
		DBusAddWatchFunction add_function,
		DBusRemoveWatchFunction remove_function,
		DBusWatchToggledFunction toggled_function,
		void *data, DBusFreeFunction free_data_function)
{
	panic();
}

void dbus_connection_set_wakeup_main_function(DBusConnection *connection, DBusWakeupMainFunction wakeup_main_function, void *data, DBusFreeFunction free_data_function)
{
	panic();
}

void dbus_set_error(DBusError *error, const char *name, const char *message, ...)
{
	panic();
}

int dbus_message_iter_get_element_type(DBusMessageIter *iter)
{
	panic();
}

dbus_bool_t dbus_message_get_args(DBusMessage *message, DBusError *error, int first_arg_type, ...)
{
	panic();
}

void dbus_set_error_const(DBusError *error, const char *name, const char *message)
{
	panic();
}

void dbus_message_iter_get_fixed_array(DBusMessageIter *iter, void *value, int *n_elements)
{
	panic();
}

void dbus_message_iter_recurse(DBusMessageIter *iter, DBusMessageIter *sub)
{
	panic();
}

dbus_bool_t dbus_connection_try_register_object_path(DBusConnection *connection,
		const char *path,
		const DBusObjectPathVTable *vtable,
		void *user_data,
		DBusError *error)
{
	panic();

}
int dbus_bus_request_name(DBusConnection *connection,
		const char *name,
		unsigned int flags,
		DBusError *error)
{
	panic();
}

dbus_bool_t dbus_connection_register_object_path(DBusConnection *connection,
		const char *path,
		const DBusObjectPathVTable *vtable,
		void *user_data)
{
	panic();
}

dbus_bool_t dbus_error_is_set(const DBusError *error)
{
	panic();
}

dbus_bool_t dbus_message_get_no_reply(DBusMessage *message)
{
	panic();
}

dbus_bool_t dbus_connection_get_object_path_data(DBusConnection *connection,
		const char *path,
		void **data_p)
{
	panic();
}

const char *dbus_message_get_member(DBusMessage *message)
{
	panic();
}

const char *dbus_message_get_interface(DBusMessage *message)
{
	panic();
}

int dbus_message_iter_get_arg_type(DBusMessageIter *iter)
{
	panic();
}

dbus_bool_t dbus_message_iter_next(DBusMessageIter *iter)
{
	panic();
}

dbus_bool_t dbus_message_iter_init(DBusMessage *message, DBusMessageIter *iter)
{
	panic();
}

void dbus_message_iter_get_basic(DBusMessageIter *iter, void *value)
{
	panic();
}

DBusMessage *dbus_message_new_error(DBusMessage *reply_to, const char *error_name, const char *error_message)
{
	panic();
}

const char *dbus_message_get_signature(DBusMessage *message)
{
	panic();
}

void dbus_error_free(DBusError *error)
{
	panic();
}

void dbus_error_init(DBusError *error)
{
	panic();
}

dbus_bool_t dbus_message_iter_open_container(DBusMessageIter *iter,
		int type,
		const char *contained_signature,
		DBusMessageIter *sub)
{
	panic();
}

dbus_bool_t dbus_message_iter_close_container(DBusMessageIter *iter, DBusMessageIter *sub)
{
	panic();
}

const char *dbus_message_get_path(DBusMessage *message)
{
	panic();
}

dbus_bool_t dbus_connection_list_registered(DBusConnection *connection,
		const char *parent_path,
		char ****child_entries)
{
	panic();
}

void dbus_free_string_array(char **str_array)
{
	panic();
}

DBusMessage *dbus_message_new_method_return(DBusMessage *method_call)
{
	panic();
}

void dbus_message_iter_init_append(DBusMessage *message, DBusMessageIter *iter)
{
	panic();
}

dbus_bool_t dbus_message_iter_append_basic(DBusMessageIter *iter, int type, const void *value)
{
	panic();
}

dbus_bool_t dbus_message_append_args(DBusMessage *message, int first_arg_type, ...)
{
	panic();
}

DBusMessage *dbus_message_new_signal(const char *path, const char *iface, const char *name)
{
	panic();
}

dbus_bool_t dbus_connection_unregister_object_path(DBusConnection *connection, const char *path)
{
	panic();
}

void dbus_message_unref(DBusMessage *message)
{
	panic();
}

dbus_bool_t dbus_connection_send(DBusConnection *connection,
		DBusMessage *message, uint32_t *client_serial)
{
	panic();
}

void dbus_watch_set_data(DBusWatch *watch, void *data, DBusFreeFunction free_data_function)
{
	panic();
}

int dbus_watch_get_unix_fd(DBusWatch *watch)
{
	panic();
}

unsigned int dbus_watch_get_flags(DBusWatch *watch)
{
	panic();
}

void dbus_timeout_set_data(DBusTimeout *timeout, void *data, DBusFreeFunction free_data_function)
{
	panic();
}

dbus_bool_t dbus_timeout_handle(DBusTimeout *timeout)
{
	panic();
}
