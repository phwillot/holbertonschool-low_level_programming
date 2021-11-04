#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <strings.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct ch
{
	char ch;
	void (*func)(va_list);
} ch_t;

void ch_char(va_list);
void int_char(va_list);
void float_char(va_list);
void string_char(va_list);

#endif /* _VARIADIC_FUNCTIONS_H_ */
