#include "main.h"

/**
  * print_alphabet - Prints the alphabet, in lowercase followed by a new line
  *
  * Return: Always 0 (Success)
  */

void print_alphabet(void)
{
	int character = 97;

	while (character <= 122)
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
