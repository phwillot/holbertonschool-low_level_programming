#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long double i, y = 0, z = 1, number;

	for (i = 0; i < 98; i++)
	{
		number = y + z;
		if (i != 97)
			printf("%0.2Lf, ", number);
		else
			printf("%0.2Lf\n", number);
		y = z;
		z = number;
	}
	return (0);
}
