#include "main.h"

/**
  * print_chessboard - Prints the chessboard.
  * @a: An array of string
  *
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int i, y;

	for (i = 0; i < 8; i++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[i][y]);
		}
		_putchar('\n');
	}
}
