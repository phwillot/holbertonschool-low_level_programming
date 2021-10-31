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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (dog->name != NULL)
		dog->name = name;
	else
	{
		free(dog);
		return (NULL);
	}
	if (!dog->name && dog->name != 0)
		dog->age = age;
	else
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner != NULL)
		dog->owner = owner;
	else
	{
		free(dog);
		return (NULL);
	}

	return (dog);
}
