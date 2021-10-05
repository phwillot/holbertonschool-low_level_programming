#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @x: The number to check
  *
  * Return: Always x
  */

int _abs(int x)
{
	if (x < 0)
		x -= 2 * x;

	return (x);
}
