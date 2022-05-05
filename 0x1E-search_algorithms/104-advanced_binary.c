#include "search_algos.h"

int binary_search_recursion(int *array, int l, int r, int value);

/**
 * advanced_binary - searches for a value in an array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of the elements in the array
 * @value: value to search for
 *
 * Return: The first index where value is located
 * if array is NULL or value is not present return (-1)
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursion(array, 0, size - 1, value));
}

/**
 * binary_search_recursion - Using recursion to find value
 * with binary search
 * @array: array to search the value
 * @l: begin of the array
 * @r: end of the array
 * @value: value to search
 *
 * Return: index or -1 if it fails
 */

int binary_search_recursion(int *array, int l, int r, int value)
{
	int mid, i;

	if (r >= l)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);

		if (array[l] == array[r] || value == array[l])
		{
			if (array[l] == value)
				return (l);
			else
				return (-1);
		}

		if (array[mid] >= value)
			return (binary_search_recursion(array, l, mid, value));

		if (array[mid] < value)
			return (binary_search_recursion(array, mid + 1, r, value));
	}
	return (-1);
}
