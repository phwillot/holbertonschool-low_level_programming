#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocated memory using malloc
  * @b: Number of memory to alloc.
  *
  * Return: Pointer to the allocated memory. (98) if malloc fails
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		return (NULL);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
