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
	unsigned long int count = 0, num = 1;

	if (n == m)
		return (0);

	while (num < n || num < m)
		num <<= 1;

	while (num != 0)
	{
		if ((n & num) != (m & num))
			count++;
		num >>= 1;
	}

	return (count);
}
