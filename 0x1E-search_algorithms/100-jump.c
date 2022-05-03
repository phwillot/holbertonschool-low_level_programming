#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of the elements in the array
 * @value: value to search for
 *
 * Return: -1 if array is NULL or not found, otherwise the index
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t i = 0, j = 0;

	if (array[0] > value)
		return (-1);

	if (array != NULL)
	{
		while (j < size)
		{
			j += step;
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[j] >= value)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", i, j);
				while (i <= j)
				{
					printf("Value checked array[%ld] = [%d]\n", i, array[i]);
					if (array[i] == value)
						return (i);
					i++;
				}
				return (-1);
			}
			i += step;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
		printf("Value checked array[%ld] = [%d]\n", i - step, array[i - step]);
	}
	return (-1);
}
