#include "main.h"

/**
  * print_binary - print the binary representation of a number
  * @n: long unsigned int
  *
  * Return: void
  */

void print_binary(unsigned long int n)
{
	unsigned long int i = (ULONG_MAX / 2) + 1;

	if (n == 0)
		_putchar('0');

	while (i > n)
		i >>= 1;


	while (i != 0)
	{
		n & i ? _putchar('1') : _putchar('0');
		i >>= 1;
	}
}
