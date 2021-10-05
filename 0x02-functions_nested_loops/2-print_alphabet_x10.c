#include "main.h"

/**
  * print_alphabet_x10 - Prints the alphabet 10 times
  *
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int character = 97, i = 0;

	while (i < 10)
	{
		while (character <= 122)
		{
			_putchar(character);
			character++;
		}
		character = 97;
		_putchar('\n');
		i++;
	}
}
