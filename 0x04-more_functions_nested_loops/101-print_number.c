#include "main.h"
#include <limits.h>
/**
  * print_number - Prints an integer
  * @n: Print this integer
  *
  * Return: void
  */

void print_number(int n)
{
	unsigned int i = 0;

	if (n == 0)
		_putchar('0' + n);

	else
	{
		if (n < 0)
		{
			n -= n * 2;
			_putchar('-');
		}

		if (n > INT_MAX)
		{
			i = n;
			_putchar(i / 1000000000 % 10 + '0');
		}

		if (n >= 1000000000 && n <= INT_MAX)
			_putchar(n / 1000000000 % 10 + '0');
		if (n >= 100000000)
			_putchar(n / 100000000 % 10 + '0');
		if (n >= 10000000)
			_putchar(n / 10000000 % 10 + '0');
		if (n >= 1000000)
			_putchar(n / 1000000 % 10 + '0');
		if (n >= 100000)
			_putchar(n / 100000 % 10 + '0');
		if (n >= 10000)
			_putchar(n / 10000 % 10 + '0');
		if (n >= 1000)
			_putchar(n / 1000 % 10 + '0');
		if (n >= 100)
			_putchar(n / 100 % 10 + '0');
		if (n >= 10)
			_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}

}
