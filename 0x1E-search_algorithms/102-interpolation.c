#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of the elements in the array
 * @value: value to search for
 *
 * Return: -1 if array is NULL or not found, otherwise the index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t mid;
	int l = 0;
	int r = size - 1;

	if (array == NULL)
		return (-1);

	mid = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

	while (r >= l && value >= array[l] && value <= array[r])
	{
		mid = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			r = mid - 1;

		if (array[mid] < value)
			l = mid + 1;
	}
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
