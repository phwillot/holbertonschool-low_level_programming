#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - Concatenates two strings.
  * @s1: String
  * @s2: String to concat
  * @n: Number of bytes to concat from s2
  *
  * Return: Pointer to concatenated string, NULL if it fails.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;
	unsigned int size1 = _strlen(s1), size2 = _strlen(s2);

	if (s1 == NULL && s2 == NULL)
		ptr = malloc(sizeof(char));

	else if (s1 != NULL && s2 != NULL)
	{
		if (n >= size2)
			ptr = malloc(size1 + size2 + 1);
		else
			ptr = malloc(size1 + n + 1);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		if (n >= size2)
			ptr = malloc(size2 + 1);
		else
			ptr = malloc(n + 1);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		ptr = malloc(size1 + 1);
	}

	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0, j = 0; s1[i]; i++, j++)
			ptr[j] = s1[i];

	if (s2 != NULL)
	{
		if (n >= size2)
			for (i = 0; s2[i]; i++, j++)
				ptr[j] = s2[i];
		else
			for (i = 0; i < n; i++, j++)
				ptr[j] = s2[i];
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
