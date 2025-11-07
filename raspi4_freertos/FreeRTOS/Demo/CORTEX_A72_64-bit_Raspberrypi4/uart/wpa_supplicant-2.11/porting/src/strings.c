// SPDX-License-Identifier: MIT
#include "porting.h"
#include <stdio.h>
#include <stdarg.h>
unsigned short _ctype_[256] = { 0 };
void *_impure_ptr = NULL;
char *optarg;
int optind = 1;

void *memmove(void *dest, const void *src, size_t n)
{
	// Cast the source and destination to char pointers for byte-wise copying
	char *d = (char *)dest;
	const char *s = (const char *)src;

	// Check for overlapping regions
	if (d < s) {
		// Non-overlapping or src is before dest
		while (n--)
			*d++ = *s++;
	} else {
		// Overlapping regions, copy backwards
		d += n; // Move to the end of the destination
		s += n; // Move to the end of the source
		while (n--)
			*(--d) = *(--s);
		}

	return dest; // Return the destination pointer
}

int vsnprintf(char *str, size_t size, const char *format, va_list args)
{
	panic();
}

int vprintf(const char *format, va_list args)
{
	panic();
}
int abs(int x)
{
	panic();
}

int execv(const char *path, char *const argv[])
{
	panic();
}

void *calloc(size_t num, size_t size)
{
	panic();
}

int alphasort(const struct dirent **a, const struct dirent **b)
{
	panic();
}

long strtol(const char *str, char **endptr, int base)
{
	// Simple implementation of strtol
	long result = 0;
	int sign = 1;

	if (*str == '-') {
		sign = -1;
		str++;
	} else if (*str == '+') {
		str++;
	}
	while (*str >= '0' && *str <= '9') {
		result = result * base + (*str - '0');
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return result * sign;
}

void qsort(void *base, size_t num, size_t size, int (*compar)(const void*, const void*))
{
	char *arr = (char *)base;
	for (size_t i = 0; i < num - 1; i++) {
		for (size_t j = 0; j < num - i - 1; j++) {
			if (compar(arr + j * size, arr + (j + 1) * size) > 0) {
				// Swap elements
				for (size_t k = 0; k < size; k++) {
					char temp = arr[j * size + k];
					arr[j * size + k] = arr[(j + 1) * size + k];
					arr[(j + 1) * size + k] = temp;
				}
			}
		}
	}
}

char *strcpy(char *dest, const char *src)
{
	char *original_dest = dest;
	while ((*dest++ = *src++));
	return original_dest;
}

// Function to find the last occurrence of a character in a string
char *strrchr(const char *s, int c)
{
	const char *last_occurrence = NULL;
	while (*s) {
		if (*s == (char)c)
			last_occurrence = s; // Update last occurrence
		s++;
	}
	return (char *)last_occurrence; // Return the last occurrence or NULL
}

static const char *skip_whitespace(const char *str)
{
	while (*str == ' ') {
		str++;
	}
	return str;
}

int sscanf(const char *str, const char *format, ...)
{
	panic();
}

int tolower(int c)
{
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A');
	}
	return c;
}

int strncasecmp(const char *s1, const char *s2, size_t n)
{

	while (n && *s1 && *s2) {
		char c1 = tolower((unsigned char)*s1);
		char c2 = tolower((unsigned char)*s2);
		if (c1 != c2) {
			return c1 - c2;
		}
		s1++;
		s2++;
		n--;
	}
	return (n == 0) ? 0 : (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int isalpha(int c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

unsigned long strtoul(const char *str, char **endptr, int base)
{
	unsigned long result = 0;
	int sign = 1;

	// Skip whitespace
	while (*str == ' ') str++;

	// Handle optional sign
	if (*str == '-') {
		sign = -1;
		str++;
	} else if (*str == '+') {
		str++;
	}

	// Convert digits
	while ((*str >= '0' && *str <= '9') ||
			(*str >= 'A' && *str <= 'F') ||
			(*str >= 'a' && *str <= 'f')) {
		int value;
		if (*str >= '0' && *str <= '9') {
			value = *str - '0';
		} else if (*str >= 'A' && *str <= 'F') {
			value = *str - 'A' + 10;
		} else {
			value = *str - 'a' + 10;
		}

		if (value >= base) break; // Invalid digit for base
		result = result * base + value;
		str++;
	}

	if (endptr) {
		*endptr = (char *)str; // Set endptr to the next character
	}

	return result;
}

char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	// Copy characters from src to dest up to n characters or until a null character is found
	for (i = 0; i < n && src[i] != '\0'; i++) {
		dest[i] = src[i];
	}

	// If less than n characters are copied, pad with null characters
	for (; i < n; i++) {
		dest[i] = '\0';
	}

	return dest;
}

int strcasecmp(const char *s1, const char *s2)
{
	while (*s1 && *s2) {
		char c1 = tolower((unsigned char)*s1);
		char c2 = tolower((unsigned char)*s2);
		if (c1 != c2) {
			return c1 - c2;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2; // Return difference if one string ends
}

int strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2)) {
		s1++;
		s2++;
		n--;
	}
	return (n == 0) ? 0 : (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char *strchr(const char *s, int c)
{
	while (*s) {
		if (*s == (char)c) {
			return (char *)s;
		}
		s++;
	}
	return NULL; // Return NULL if the character is not found
}

char *strstr(const char *haystack, const char *needle)
{
	if (!*needle) {
		return (char *)haystack; // If needle is empty, return haystack
	}

	while (*haystack) {
		const char *h = haystack;
		const char *n = needle;

		while (*h && *n && (*h == *n)) {
			h++;
			n++;
		}

		if (!*n) {
			return (char *)haystack; // Found the substring
		}
		haystack++;
	}
	return NULL; // Return NULL if the substring is not found
}

int printf(const char *format, ...)
{
	panic();
}

int getchar(void)
{
	return 'a'; // Placeholder for demonstration
}

char *fgets(char *str, int num, void *stream)
{
	// For simplicity, we will ignore the stream parameter
	int i, c = 0;
	for (i = 0; i < num - 1; i++) {
		// Implement your own character input logic here
		// For example, read a character from UART
		char c = getchar(); // Implement my_getchar to read a character
		if (c == '\n' || c == EOF) {
			break;
		}
		str[i] = c;
	}
	str[i] = '\0'; // Null-terminate the string
	return (i > 0 || c == '\n') ? str : NULL; // Return NULL if no characters read
}

int atoi(const char *str)
{
	int num = 0;
	int sign = 1;

	// Skip whitespace
	while (*str == ' ') str++;

	// Handle optional sign
	if (*str == '-') {
		sign = -1;
		str++;
	} else if (*str == '+') {
		str++;
	}

	// Convert digits
	while (*str >= '0' && *str <= '9') {
		num = num * 10 + (*str - '0');
		str++;
	}

	return sign * num;
}

void *malloc(size_t size)
{
	panic();
}

// Simple implementation of free
void free(void *ptr)
{
	panic();
}

// Simple implementation of strdup
char *strdup(const char *s)
{
	panic();
}

// Simple implementation of strlen
size_t strlen(const char *s)
{
	const char *p = s;
	while (*p) p++;
	return p - s;
}

// Simple implementation of snprintf
int snprintf(char *str, size_t size, const char *format, ...)
{
	panic();
}

int memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;
	while (n--) {
		if (*p1 != *p2) {
			return *p1 - *p2;
		}
		p1++;
		p2++;
	}
	return 0;
}

// Simple implementation of realloc
void *realloc(void *ptr, size_t size)
{
	panic();
}

char *itoa(int value)
{
	static char buffer[12]; // Enough for 32-bit int and null terminator
	char *ptr = buffer + sizeof(buffer) - 1; // Point to the end of the buffer
	int is_negative = 0;

	// Handle special case for zero
	if (value == 0) {
		*ptr-- = '0';
	}

	// Handle negative numbers
	if (value < 0) {
		is_negative = 1;
		value = -value; // Make value positive
	}

	// Convert the integer to string
	while (value != 0) {
		int digit = value % 10;
		*ptr-- = digit + '0'; // Convert to character
		value /= 10;
	}

	// Add negative sign if needed
	if (is_negative) {
		*ptr-- = '-';
	}

	// Move the pointer to the start of the string
	ptr++;

	// Copy the result to the buffer
	return ptr; // Return the pointer to the resulting string
}

void __assert_func(const char *expr, const char *file, int line)
{
	panic();
}

size_t strspn(const char *s, const char *accept)
{
	size_t length = 0;

	// Loop through each character in string `s`
	while (*s) {
		const char *a = accept;
		int found = 0;

		// Check if the character `*s` is in the `accept` string
		while (*a) {
			if (*s == *a) {
				found = 1;
				break;
			}
			a++;
		}

		// If a character in `s` is not found in `accept`, break the loop
		if (!found) {
			break;
		}

		// Increment the length if the character was found in `accept`
		length++;
		s++;
	}

	return length;
}

size_t strnlen(const char *s, size_t maxlen)
{
	size_t len = 0;
	while (len < maxlen && s[len] != '\0') {
		len++;
	}
	return len;
}

int fprintf(void *stream, const char *format, ...)
{
	// For simplicity, we will ignore the stream parameter
	va_list args;
	va_start(args, format);
	int count = printf(format, args);
	va_end(args);
	return count;
}

size_t strcspn(const char *str, const char *reject)
{
	size_t index = 0;

	// Loop through each character in the string
	while (str[index] != '\0') {
		const char *r = reject;

		// Check if the current character is in the 'reject' set
		while (*r != '\0') {
			if (str[index] == *r) {
				return index;  // Found a match, return the index
			}
			r++;
		}

		// Move to the next character in the string
		index++;
	}

	// If no match is found, return the length of the string
	return index;
}
