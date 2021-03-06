#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

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

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

/**
  * _strdup - Returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: String to copy
  *
  * Return: On fail (NULL) if str = NULL and insufficient memory,
  * On success, pointer to the duplicated string
  */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ar = malloc(i * sizeof(char) + 1);

	if (ar == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		ar[i] = str[i];
		i++;
	}

	ar[i] = '\0';

	return (ar);
}
