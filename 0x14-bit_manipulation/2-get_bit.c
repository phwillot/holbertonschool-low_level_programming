#include "main.h"

/**
  * get_bit - return the value of a bit at a given index
  * @n: long unsigned int
  * @index: index
  *
  * Return: Value of the bit, or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0, number = 1;

	while (i < index)
	{
		number *= 2;
		i++;
	}

	if (n & number)
	{
		return (1);
	}
	else
		return (0);
}
