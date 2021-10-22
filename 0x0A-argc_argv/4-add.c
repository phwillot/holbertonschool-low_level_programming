#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  * main - Program that adds positive numbers.
  * @argc: Number of arguments passed when we execute the file.
  * @argv: Array of strings listing arguments
  *
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	int i, y, sum = 0, isnumber = 1;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (y = 0; argv[i][y]; y++)
			{
				if (!isdigit(argv[i][y]))
					isnumber = 0;
			}

			if (isnumber == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);

		}
		printf("%d\n", sum);
	}

	return (0);
}
