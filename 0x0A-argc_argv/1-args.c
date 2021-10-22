#include "main.h"
#include <stdio.h>

/**
  * main - Program that prints the number of arguments passed into it.
  * @argc: Number of arguments passed when we execute the file.
  * @argv: Array of strings listing arguments
  *
  * Return: Always (0)
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
