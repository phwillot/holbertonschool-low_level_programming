#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long int n, i = 612852475143;

	for (n = 3; n < i; n += 2)
	{
		if (i % n == 0)
			i /= n;
	}
	printf("%ld\n", i);

	return (0);
}
