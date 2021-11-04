#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: separator between numbers.
 * @n: numbers of integers passed to the functions.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n <= 0 && !separator)
		exit(0);

	if (separator)
	{
		while (i < n)
		{
			if (i == n - 1)
				printf("%d", va_arg(ptr, int));
			else
				printf("%d%s", va_arg(ptr, int), separator);
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%d", va_arg(ptr, int));
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}
