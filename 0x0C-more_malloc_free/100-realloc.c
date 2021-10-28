#include "main.h"
#include <stdlib.h>


/**
  * _realloc - Reallocates a memory block using malloc and free.
  * @ptr: Void pointer to reallocate memory
  * @old_size: previous size in bytes
  * @new_size: new size in bytes
  *
  * Return: Pointer the new size of memory allocated, NULL if it fails.
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

	if (ptr == NULL || new_size > old_size || new_size < old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}

	return (ptr);
}
