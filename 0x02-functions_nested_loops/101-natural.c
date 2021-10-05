#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: Prints the sum of all the multiples of 3 or 5 below 1024
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int cur = 0, sum = 0;

	while (cur < 1024)
	{
		if (cur % 3 == 0 || cur % 5 == 0)
			sum += cur;
		cur++;
	}

	printf("%d\n", sum);

	return (0);
}
