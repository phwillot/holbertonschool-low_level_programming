#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - Initialize a variable of type struct dog
  * @d: Pointer to type struct dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  *
  * Return: Void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	free(d);
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
