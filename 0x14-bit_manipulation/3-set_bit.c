#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at given index.
  * @n: pointer to long unsigned int
  * @index: index
  *
  * Return: Value of the bit, or -1 if an error occured
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0, number = 1;

	if (index > 31)
		return (-1);

	while (i < index)
	{
		number *= 2;
		i++;
	}

	*n += number;

	return (1);
}
