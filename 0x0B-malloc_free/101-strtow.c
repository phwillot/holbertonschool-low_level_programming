#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * strtow - Splits a string into words.
  * @str: String to split
  *
  * Return: Pointer to a new string.
  */

char **strtow(char *str)
{
	int i = 0, size, count;
	char **ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *));
	size = _strlen(str);

	if (ptr == NULL || size == 0)
		return (NULL);

	size = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			count++;

	ptr[0] = malloc(count + 1);

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				ptr[count][size] = str[i];
				size++;
				i++;
			}
			ptr[count][size] = '\n';
			ptr[count][size + 1] = '\0';
			size++;
		}
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
