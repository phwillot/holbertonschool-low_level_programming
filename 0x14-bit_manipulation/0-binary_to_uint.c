#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int.
  * @b: string with 0's and 1's.
  *
  * Return: Converted Number or 0 if string is incorrect or b is null
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, mult = 1;
	int i;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;

	while (i != -1)
	{
		if (b[i] == '1')
			number += mult;
		mult *= 2;
		i--;
	}

	return (number);
}
