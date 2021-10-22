#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program that prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: Number of arguments passed when we execute the file.
  * @argv: Array of strings listing arguments
  *
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	int cents, i;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents >= 0)
	{
		for (i = 0; cents > 0; i++)
		{
			if (cents >= 25)
				cents -= 25;

			else if (cents >= 10)
				cents -= 10;

			else if (cents >= 5)
				cents -= 5;

			else if (cents >= 2)
				cents -= 2;

			else if (cents >= 1)
				cents--;
		}
		printf("%d\n", i);
	}
	else
		printf("%d\n", 0);

	return (0);
}
