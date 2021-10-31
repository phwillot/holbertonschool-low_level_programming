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
	if (nameC != NULL)
		dog->name = nameC;
	else
		dog->name = NULL;

	dog->age = age;

	ownerC = owner;
	if (ownerC != NULL)
		dog->owner = ownerC;
	else
		dog->owner = NULL;
	return (dog);
}
