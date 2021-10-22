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
	int nbpiece = 0, cents, i;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents <= 0)
		printf("%d\n", 0);

	if (cents >= 25)
		for (i = 0; cents >= 25; i++)
			cents -= 25, nbpiece++;

	if (cents >= 10)
		for (i = 0; cents >= 10; i++)
			cents -= 10, nbpiece++;

	if (cents >= 5)
		for (i = 0; cents >= 5; i++)
			cents -= 5, nbpiece++;

	if (cents >= 2)
		for (i = 0; cents >= 2; i++)
			cents -= 2, nbpiece++;

	if (cents >= 1)
		for (i = 0; cents >= 1; i++)
			cents--, nbpiece++;

	printf("%d\n", nbpiece);

	return (0);
}
