#include "main.h"
/**
  * print_number - Prints an integer
  * @n: Print this integer
  *
  * Return: void
  */

void print_number(int n)
{
	unsigned int i = n, div = 1000000000;

	if (n == 0)
		_putchar('0' + n);
	else
	{
		if (n < 0)
		{
			i = -n;
			_putchar('-');
		}

		while (div >= 10)
		{
			if (i > div)
				_putchar(i / div % 10 + '0');
			div /= 10;
		}
		_putchar(i % 10 + '0');
	}
}
