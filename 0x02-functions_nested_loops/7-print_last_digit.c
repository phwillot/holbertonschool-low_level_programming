#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @x: The number to check
  *
  * Return: Always lastDigit
  */

int print_last_digit(int x)
{
	x %= 10;

	if (x < 0)
		x -= 2 * x;

	_putchar(x + '0');
	return (x);
}
