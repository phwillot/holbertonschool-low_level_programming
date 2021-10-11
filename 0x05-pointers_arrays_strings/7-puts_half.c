#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: pointer to a string (char)
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i, y = 0;

	while (str[y] != '\0')
		y++;

	for (i = y / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
