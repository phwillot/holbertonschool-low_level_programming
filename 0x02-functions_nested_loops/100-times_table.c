#include "main.h"

/**
  * print_times_table - Prints the n time table, starting with 0.
  * @n: Print the table of this int
  */

void print_times_table(int n)
{
	int i = 0, y = 0, result = 0;

	if (n == 0)
		_putchar('0');
	if (n == 0)
		_putchar('\n');
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (y = 0; y <= n; y++)
			{
				result = i * y;
				if (result >= 100)
				{
					_putchar(result / 100 + '0');
					_putchar(result / 10 % 10 + '0');
				}
				if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
				}
				else
				{
					if (y != 0 && result < 100)
						_putchar(' ');
					if (y != 0 && result < 100)
						_putchar(' ');
				}
				_putchar(result % 10 + '0');
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
