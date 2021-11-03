#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @ac: Number of arguments.
  * @av: Array of strings
  *
  * Description: Prints the opcodes of its own main function.
  *
  * Return: 0 (Success) 1 (Incorrect number of argc), 2 (if bytes negative)
  */

int main(int ac, char **av)
{
	int byte;

	if (ac != 2)
		exit(1);

	byte = atoi(av[1]);
	if (byte < 0)
		exit(2);

	return (0);
}
