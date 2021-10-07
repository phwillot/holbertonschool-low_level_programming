#include "main.h"

/**
  * print_number - Prints an integer
  * @n: Print this integer
  *
  * Return: void
  */

void print_number(int n)
{
	if (n == 0)
		_putchar('0' + n);

	else
	{
		if (n < 0)
		{
			n -= n * 2;
			_putchar('-');
		}
			if (n >= 1000)
				_putchar(n / 1000 + '0');
			if (n >= 100)
				_putchar(n / 100 % 10 + '0');
			if (n >= 10)
				_putchar(n / 10 % 10 + '0');
			_putchar(n % 10 + '0');
	}

}
