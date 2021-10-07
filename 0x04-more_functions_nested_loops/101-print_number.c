#include "main.h"

/**
  * print_number - Prints an integer
  * @n: Print this integer
  *
  * Return: void
  */

void print_number(int n)
{
	if (n >= 0)
	{
		while (n >= 10)
		{
			n /= 10;
		}
	}
}
