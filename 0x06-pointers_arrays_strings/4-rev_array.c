#include "main.h"

/**
  * reverse_array - Reverse the content of an array of integers.
  * @a: an array of integers
  * @n: Number of elements of the array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
