#include "main.h"

/**
  * flip_bits - Returns the number of bits you would need to flip to get from
  * one number to another
  * @n: unsigned int
  * @m: unsigned int
  *
  * Return: Number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, i;

	i = 0;
	while (i < 32)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
		i++;
	}

	return (count);
}
