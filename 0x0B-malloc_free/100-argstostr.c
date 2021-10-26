#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * argstostr - Concatenates all the arguments of your program.
  * @ac: Number of arguments
  * @av: Array of strings containing name of the arguments.
  *
  * Return: Pointer to a new string.
  */

char *argstostr(int ac, char **av)
{
	int i, y, compteur = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
		compteur += _strlen(av[i]) + 1;

	ptr = malloc(compteur);
	compteur = 0;

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
		{
			ptr[compteur] = av[i][y];
			compteur++;
		}
		ptr[compteur] = '\n';
		compteur++;
	}

	return (ptr);
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
