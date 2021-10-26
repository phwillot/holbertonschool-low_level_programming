#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Creates an array of chars, and initializes
  * it with a specific char.
  * @size: size of the array
  * @c: character to print
  *
  * Return: NULL if size = 0 or pointer to the array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
		return (NULL);

	else
	{
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
	}

	return (ar);
}
