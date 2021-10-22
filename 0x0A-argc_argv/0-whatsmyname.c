#include "main.h"
#include <stdio.h>

/**
  * main - Program that prints its name.
  * @argc: Number of arguments passed when we execute the file.
  * @argv: Array of strings listing arguments
  *
  * Return: Always (0)
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
