#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates an array of integers.
  * @min: first value (integer)
  * @max: last value (integer)
  *
  * Return: NULL if min > max and malloc fails, otherwise pointer the newly
  * created array
  */

int *array_range(int min, int max)
{
	int i = 0, difference;
	int *ptr;

	if (min > max)
		return (NULL);

	difference = max - min + 1;

	ptr = malloc(sizeof(int) * (difference));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < difference; i++, min++)
		ptr[i] = min;

	return (ptr);
}
