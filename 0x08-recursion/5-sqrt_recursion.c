#include "main.h"
/**
  * _sqrt_recursion - return the natural square root of a number.
  * @n: Integer
  *
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	int i = get_square(n);

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (i);
}

/**
  * get_square - get the index of number
  * @n: Integer
  *
  * Return: number if (i * i == n)
  */

int get_square(int n)
{
	int i = 0;

	while (i < n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (-1);
}
