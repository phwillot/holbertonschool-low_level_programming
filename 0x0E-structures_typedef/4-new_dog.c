#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);

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
	int sizeName = _strlen(name);
	int sizeOwner = _strlen(owner);
	char *copyName = {0};
	char *copyOwner = {0};

	_memcpy(copyName, name, sizeName);
	_memcpy(copyOwner, owner, sizeOwner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

/**
  * _memcpy - Fills that copies memory area
  * @dest: memory area destination
  * @src: pointer to string that'll copy bytes from
  * @n: Number of bytes to copy from src
  *
  * Return: Pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
  * _strlen - Prints length of a string
  * @s: pointer to an char
  *
  * Return: Length of a string
  */

int _strlen(char *s)
{
	int i = 0, n = 0;

	while (s[i] != '\0')
	{
		n++;
		i++;
	}

	return (n);
}
