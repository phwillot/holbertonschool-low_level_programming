#include "main.h"

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: Starting number to print all the way to 98
  *
  */

void print_to_98(int n)
{
	if (n >= 98 && n > 0)
	{
		while (n >= 98)
		{
			if (n >= 100)
				_putchar(n / 100 + '0');
			_putchar(n / 10 % 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
				_putchar(',');
			if (n != 98)
				_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n <= -100)
					_putchar((n - (n * 2)) / 100 + '0');
				if (n <= -10)
					_putchar((n - (n * 2)) / 10 % 10 + '0');
				_putchar((n - (n * 2)) % 10 + '0');
			}
			if (n >= 10)
				_putchar(n / 10 + '0');
			if (n >= 0)
				_putchar(n % 10 + '0');
			if (n != 98)
				_putchar(',');
			if (n != 98)
				_putchar(' ');
			n++;
		}
	}
	_putchar('\n');
}
