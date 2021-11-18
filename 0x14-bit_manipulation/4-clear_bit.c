#include "main.h"

int _pow_recursion(unsigned long int x, unsigned long int y);


/**
  * clear_bit - sets the value of a bit to 0 at given index.
  * @n: pointer to long unsigned int
  * @index: index
  *
  * Return: 1 if it worked, or -1 if an error occured
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0, number = 1, result;

	if (index > 32)
		return (-1);

	result = _pow_recursion(2, index);

	while (i < index)
	{
		number <<= 1;
		i++;
	}
	if (*n != 0)
		*n ^= result;

	return (1);
}

/**
  * _pow_recursion - return the value of x raised to the power of y.
  * @x: Integer
  * @y: Integer
  *
  * Return: return x^y
  */

int _pow_recursion(unsigned long int x, unsigned long int y)
{
	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
