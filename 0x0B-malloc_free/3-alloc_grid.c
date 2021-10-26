#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Returns a pointer to a 2 dimensional array of integers
  * @width: width of the array
  * @height: height of the array
  *
  * Return: pointer to a 2 dimensionnal array of integers.
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
		if (ptr[i] == NULL)
		{
			while (i <= 0)
			{
				free(ptr[i]);
				i--;
			}
		}
		i++;
	}

	return (ptr);
}
