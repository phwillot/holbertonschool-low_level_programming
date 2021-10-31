#include "dog.h"

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
	struct dog *dog;

	dog = d;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
