#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - Prints a struct dog
  * @d: Pointer to type struct dog
  *
  * Return: Void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
