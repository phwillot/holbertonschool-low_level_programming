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
	int i = 0, y = 0, stringLength, countNoSpace;
	char **ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * 20);
	stringLength = _strlen(str);

	if (ptr == NULL || stringLength == 0)
		return (NULL);

	stringLength = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			countNoSpace++;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			ptr[y] = malloc(countNoSpace + 1);
			while (str[i] != ' ')
			{
				ptr[y][stringLength] = str[i];
				stringLength++;
				i++;
			}
			ptr[y][stringLength] = '\0';
			stringLength = 0;
			y++;
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
