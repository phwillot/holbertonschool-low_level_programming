#include "main.h"
#include <stdlib.h>


/**
  * _realloc - Reallocates a memory block using malloc and free.
  * @ptr: Void pointer to reallocate memory
  * @old_size: previous size in bytes
  * @new_size: new size in bytes
  *
  * Return: (NULL) if new size == oldsize and newsize is equal to zero.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}

	if (new_size > old_size)
	{
		ptr = malloc(sizeof(ptr) * (new_size - old_size));
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size < old_size)
		free(ptr);

	return (ptr);
}
