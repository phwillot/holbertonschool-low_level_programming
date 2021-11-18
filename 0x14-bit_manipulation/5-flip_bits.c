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
	unsigned long int count = 0, i, bit;

	i = 0;
	bit = n ^ m;

	while (i < 32)
	{
		if (bit & 1)
			count++;
		bit >>= 1;
		i++;
	}

	return (count);
}
