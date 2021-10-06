#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints Fibonacci number until 4 000 000 and add the sum of
  * even-valued terms.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long int i, y = 0, z = 1, number, sum = 0;

	for (i = 0; i < 50; i++)
	{
		number = y + z;
		if (number > 4000000)
			break;

		if (number % 2 == 0)
		{
			sum += number;
		}
		y = z;
		z = number;
	}
	printf("%ld\n", sum);
	return (0);
}
