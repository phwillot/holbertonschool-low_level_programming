#include "search_algos.h"

int binary_search_recursion(int *array, int l, int r, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array of int
 * @size: size of the array
 * @value: value to search
 * Return: (-1) if array is NULL or value not found, otherwise index.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t powerOfTwo = 1, divideByTwo;

	if (array == NULL)
		return (-1);

	while (powerOfTwo < size && array[powerOfTwo] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", powerOfTwo, array[powerOfTwo]);
		powerOfTwo *= 2;
	}
	divideByTwo = powerOfTwo / 2;
	if (powerOfTwo >= size)
		powerOfTwo -= 1;
	printf("Value found between indexes [%ld] and [%ld]\n", divideByTwo, powerOfTwo);
	return binary_search_recursion(array, divideByTwo, powerOfTwo, value);
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

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_search_recursion(array, l, mid - 1, value));

		if (array[mid] < value)
			return (binary_search_recursion(array, mid + 1, r, value));
	}

	return (-1);
}
