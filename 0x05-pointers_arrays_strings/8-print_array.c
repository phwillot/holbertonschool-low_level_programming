#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints an array of integers
  * @a: pointer to an array of integer
  * @n: number of element to be printed
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");

	for (i = 1; i <= n; i++)
		if (i != n)
			printf("%d, ", a[i - 1]);
		else if (i == n)
			printf("%d\n", a[i - 1]);
}
