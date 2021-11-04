#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: separator between numbers.
 * @n: numbers of integers passed to the functions.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;
	char *arg;

	va_start(ptr, n);

	if (n <= 0 && !separator)
		exit(0);

	if (separator)
	{
		while (i < n)
		{
			arg = va_arg(ptr, char *);
			if (i == n - 1)
				printf("%s", arg ? arg : "(nil)");
			else
			{
				printf("%s", arg ? arg : "(nil)");
				printf("%s", separator);
			}
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			arg = va_arg(ptr, char *);
			printf("%s", arg ? arg : "(nil)");
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}
