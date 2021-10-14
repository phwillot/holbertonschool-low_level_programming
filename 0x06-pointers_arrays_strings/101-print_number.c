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
	unsigned int i = n;

	if (n == 0)
		_putchar('0' + n);
	else
	{
		if (n < 0)
		{
			i = -n;
			_putchar('-');
		}

		if (i >= 1000000000)
			_putchar(i / 1000000000 % 10 + '0');
		if (i >= 100000000)
			_putchar(i / 100000000 % 10 + '0');
		if (i >= 10000000)
			_putchar(i / 10000000 % 10 + '0');
		if (i >= 1000000)
			_putchar(i / 1000000 % 10 + '0');
		if (i >= 100000)
			_putchar(i / 100000 % 10 + '0');
		if (i >= 10000)
			_putchar(i / 10000 % 10 + '0');
		if (i >= 1000)
			_putchar(i / 1000 % 10 + '0');
		if (i >= 100)
			_putchar(i / 100 % 10 + '0');
		if (i >= 10)
			_putchar(i / 10 % 10 + '0');
		_putchar(i % 10 + '0');
	}

}
