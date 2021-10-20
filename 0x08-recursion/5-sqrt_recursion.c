#include "main.h"
/**
  * _sqrt_recursion - return the natural square root of a number.
  * @n: Integer
  *
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (get_square(n, 1));
}

/**
  * get_square - get the index of number
  * @n: Integer
  * @i: Integer
  *
  * Return: number if (i * i == n)
  */

int get_square(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (get_square(n, i + 1));
}
