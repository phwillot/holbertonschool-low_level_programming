#include "main.h"
/**
  * is_prime_number - Check if the integer is a prime number.
  * @n: Integer
  *
  * Return: (1) if it's a prime number otherwise 0
  */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);

	return (check_prime(n, 2));
}

/**
  * check_prime - get the index of number
  * @n: Integer
  * @i: Integer
  *
  * Return: 0 or 1
  */

int check_prime(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);

	if (i == n)
		return (1);

	return (check_prime(n, i + 1));
}
