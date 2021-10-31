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
	dog_t *copy;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	copy = malloc(sizeof(dog_t));
	if (dog == NULL || copy == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	copy->name = dog->name;
	copy->owner = dog->owner;
	return (dog);
}
