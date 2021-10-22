#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program that adds positive numbers.
  * @argc: Number of arguments passed when we execute the file.
  * @argv: Array of strings listing arguments
  *
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	int i, sum = 0, checkValidFormat = 0;

	if (argc == 1)
		printf("%d\n", 0);

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) && atoi(argv[i]) > 0)
			{
				checkValidFormat++;
				sum += atoi(argv[i]);
			}
		}
		if (checkValidFormat == argc - 1)
			printf("%d\n", sum);
		else
			printf("Error\n");
	}

	return (0);
}
