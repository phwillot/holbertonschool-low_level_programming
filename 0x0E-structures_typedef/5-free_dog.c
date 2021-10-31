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
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
