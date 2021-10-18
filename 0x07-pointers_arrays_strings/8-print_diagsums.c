#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of two diagnals square matrix of integers.
  * @a: An array of two dimensions
  * @size: The size of the array
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, y, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		sum1 += a[i];

	for (y = size - 1; y < (size * size) - (size - 1); y += (size - 1))
		sum2 += a[y];

	printf("%d, %d\n", sum1, sum2);
}
