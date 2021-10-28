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
	int i, difference;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(ptr) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);

	difference = max - min;

	for (i = 0; i <= difference; i++, min++)
		ptr[i] = min;

	return (ptr);
}
