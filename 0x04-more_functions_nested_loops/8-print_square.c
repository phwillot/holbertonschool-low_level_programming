#include "main.h"

/**
  * print_square- Prints a square with '#'
  * @size: integer (size of the square)
  *
  * Return: void
  */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, y;

		for (i = 0; i < size; i++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
