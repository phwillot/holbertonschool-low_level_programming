#include "main.h"

/**
  * print_diagonal- Draws a diagonal line on the terminal
  * @n: number of times the character \ should be printed
  *
  * Return: void
  */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, y = 1;

		for (i = 1; i <= n; i++)
		{
			while (y < i)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
			y = 1;
		}
	}
}
