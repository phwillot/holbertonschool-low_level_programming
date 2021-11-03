#include "function_pointers.h"

/**
  * int_index - Searches for an integer.
  * @array: array to search.
  * @size: size of the array
  * @cmp: pointer to function used to compare values.
  *
  * Return: Index of the founded element, otherwise (-1)
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp)
	{
		if (size <= 0)
			return (-1);

		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
