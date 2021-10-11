#include "main.h"

/**
  * print_rev - Prints a string in reverse.
  * @s: pointer to a string (char)
  *
  * Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	/* counts the number of characters */
	while (s[i] != '\0')
		i++;

	while (i)
	{
		_putchar(s[i - 1]);
		i--;
	}

	_putchar('\n');
}
