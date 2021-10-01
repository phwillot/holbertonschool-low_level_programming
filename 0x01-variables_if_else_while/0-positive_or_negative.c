#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * Description: Assign a random number to n and compare if it's
  * positive or negative or equal to 0
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}

	return (0);
}
