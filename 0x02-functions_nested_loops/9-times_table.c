#include "main.h"

/**
  * times_table - Prints the 9 times tables, starting with 0
  */

void times_table(void)
{
	int i = 0, y = 0, counter = 0;

	for (i = 0; i < 9; i++)
	{
		for (y = 0; y < 9; y++)
		{
		_putchar(counter + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		counter += 10;
		}
		_putchar('\n');
	}
}
