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
	char *nameC;
	char *ownerC;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	nameC = name;
	dog->name = nameC;

	dog->age = age;

	ownerC = owner;
	dog->owner = ownerC;

	return (dog);
}
