#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program that multiplies two numbers.
  * @argc: Number of arguments passed when we execute the file.
  * @argv: Array of strings listing arguments
  *
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
