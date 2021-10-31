#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dog - Frees dogs.
  * @d: Pointer to type dog_t (struct dog)
  *
  * Return: Void
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		free(d);
	}
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
	}

	free(d->owner);
}
