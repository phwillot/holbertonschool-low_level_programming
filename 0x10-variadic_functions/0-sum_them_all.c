#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: Numbers of parameters.
 *
 * Return: 0 if n == 0, otherwise sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}

	va_end(ptr);

	return (sum);
}
