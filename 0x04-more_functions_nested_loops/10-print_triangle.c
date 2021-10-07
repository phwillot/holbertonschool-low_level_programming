#include "main.h"

/**
  * print_triangle - Prints a triangle
  * @size: integer (size of the triangle)
  *
  * Return: void
  */

void print_triangle(int size)
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
