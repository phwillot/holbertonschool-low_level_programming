#include "3-calc.h"

/**
  * main - check the code
  * @ac: Number of arguments passed
  * @av: array of strings
  *
  * Return: Always 0
  */

int main(int ac, char **av)
{
	int a, b, result;

	if (ac != 4)
	{
		puts("Error");
		return (98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	if ((av[2][0] == '/' || av[2][0] == '%') && b == 0)
	{
		puts("Error");
		return (100);
	}

	if ((get_op_func(av[2])) == NULL)
	{
		puts("Error");
		return (99);
	}

	result = get_op_func(av[2])(a, b);
	printf("%d\n", result);

	return (0);
}
