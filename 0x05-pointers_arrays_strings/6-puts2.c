#include "main.h"

/**
  * puts2 - Prints even character
  * @str: pointer to a string (char)
  *
  * Return: void
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
