#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - struct format
 * @format: format
 * @func: function to print
 */
typedef struct type
{
	char type;
	void (*func)(va_list);
} type_t;

#endif /* #ifndef _VARIADIC_FUNCTIONS_H */
