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
	unsigned int count = 0;
	unsigned long int bit;

	bit = n ^ m;

	while (bit != 0)
	{
		if (bit & 1)
			count++;
		bit >>= 1;
	}

	return (count);
}
