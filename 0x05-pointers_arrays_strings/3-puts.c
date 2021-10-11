#include "main.h"

/**
  * _puts - Prints a string to stdout
  * @str: pointer to a string (char)
  *
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
