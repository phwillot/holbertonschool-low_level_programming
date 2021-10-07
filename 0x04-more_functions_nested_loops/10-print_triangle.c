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
	{
		_putchar('\n');
	}
	else
	{
		if (size == 1)
		{
			_putchar('#');
			_putchar('\n');
		}
	}

	if (size > 1)
	{
		int i, y, z, taille = size;

		for (i = 1; i <= size; i++)
		{
			for (y = taille - 1; y > 0; y--)
				_putchar(' ');

			for (z = taille - 1; z < size ; z++)
				_putchar('#');
			taille--;
			_putchar('\n');
		}
	}

}
