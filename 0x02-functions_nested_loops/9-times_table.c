#include "main.h"

/**
  * times_table - Prints the 9 times tables, starting with 0
  */

void times_table(void)
{
	int i = 0, y = 0, result = 0;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			result = i * y;

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			else
			{
				if (y != 0)
					_putchar(' ');
			}

			_putchar(result % 10 + '0');

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
