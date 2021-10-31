#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - Creates a new dog.
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Owner of the dog.
  *
  * Return: Void
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t test;
	dog_t *dog;

	dog = &test;
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
