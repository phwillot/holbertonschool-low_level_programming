#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at given index.
  * @n: pointer to long unsigned int
  * @index: index
  *
  * Return: 1 if it worked, or -1 if an error occured
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	if (*n != 0)
		*n &= ~(1 << (index - 1));

	return (1);
}
