#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * strtow - Splits a string into words.
  * @str: String to split
  *
  * Return: Pointer to a new string.
  */

char **strtow(char *str)
{
	int i = 0, y = 0, stringLength = 0, countNoSpace = 0;
	int numberOfWords, count, temp;
	char **ptr;

	numberOfWords = numWords(str) + 1;
	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * numberOfWords);
	stringLength = _strlen(str);

	if (ptr == NULL || stringLength == 0)
		return (NULL);
	stringLength = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			countNoSpace++;
	if (countNoSpace == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
		{
			temp = i;
			while (str[i] != ' ')
				count++, i++;
			ptr[y] = malloc(count);
			i = temp, count = 0;
			while (str[i] != ' ' && str[i + 1] != '\0')
			{
				ptr[y][stringLength] = str[i];
				stringLength++;
				i++;
			}
			if (str[i + 1] == '\0')
				ptr[y][stringLength] = str[i];
			stringLength = 0;
			y++;
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

/**
  * numWords - Counts number of words in a string
  * @s: string to count the words
  *
  * Return: Number of words
  */

int numWords(char *s)
{
	int i = 0, n = 0;

	while (s[i])
	{
		if (s[i] != ' ')
		{
			n++;
			while (s[i] != ' ')
				i++;
		}
		i++;
	}
	return (n);
}
