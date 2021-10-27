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
	int i = 0, y = 0, strLength = 0;
	int numberOfWords, count = 0, temp;
	char **ptr;

	if (str == NULL)
		return (NULL);
	numberOfWords = numWords(str) + 1;
	ptr = malloc(sizeof(char *) * numberOfWords);
	if (ptr == NULL || numberOfWords == 1)
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
		{
			temp = i;
			while (str[i] != ' ' && str[i] != '\0')
				count++, i++;
			ptr[y] = malloc(count + 1);

			if (ptr[y] == NULL)
			{
				for (; y >= 0; y--)
					free(ptr[y]);
				free(ptr);
				return (NULL);
			}
			i = temp, count = 0;

			while (str[i] != ' ' && str[i + 1] != '\0')
			{
				ptr[y][strLength] = str[i];
				strLength++, i++;
			}

			if (str[i + 1] == '\0')
				ptr[y][strLength] = str[i];
			strLength = 0;
			y++;
		}
	return (ptr);
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
