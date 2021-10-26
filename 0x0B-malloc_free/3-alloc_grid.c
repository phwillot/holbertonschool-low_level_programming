#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Returns a pointer to a 2 dimensional array of integers
  * @width: width of the array
  * @height: height of the array
  *
  * Return: pointer to a 2 dimensionnal arrray of integers.
  */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **ptr = {0};

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		i++;
	}

	return (ptr);
}
