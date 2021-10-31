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
	dog_t *dog;
	dog_t *copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
		return (NULL);

	dog->name = name;
	if (dog->name != NULL)
		copy->name = dog->name;

	dog->age = age;

	dog->owner = owner;
	if (dog->owner != NULL)
		copy->owner = dog->owner;

	return (dog);
}
