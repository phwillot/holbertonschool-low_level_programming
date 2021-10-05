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
	_putchar('0' + x);
	return (x);
}
