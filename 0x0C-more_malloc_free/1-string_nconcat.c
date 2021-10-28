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
	unsigned int i, j, str1, str2;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		str1 = str2 = 0;

	else if (s1 != NULL && s2 != NULL)
	{
		if (n >= _strlen(s2))
			str1 = _strlen(s1), str2 = _strlen(s2);
		else
			str1 = _strlen(s1), str2 = n;
	}
	else if (s1 == NULL && s2 != NULL)
	{
		j = 0;
		if (n >= _strlen(s2))
			str1 = 0, str2 = _strlen(s2);
		else
			str1 = 0, str2 = n;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		str1 = _strlen(s1), str2 = 0;
		n = 0;
	}
	ptr = malloc(sizeof(char) * (str1 + str2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
		for (i = 0, j = 0; s1[i]; i++, j++)
			ptr[j] = s1[i];
	if (s2 != NULL && n >= _strlen(s2))
		for (i = 0; s2[i]; i++, j++)
			ptr[j] = s2[i];
	if (s2 != NULL && n < _strlen(s2))
		for (i = 0; i < n; i++, j++)
			ptr[j] = s2[i];
	if (s2 == NULL && s1 != NULL)
		for (i = 0, j = 0; s1[i]; i++, j++)
			ptr[j] = s1[i];
	return (ptr);
}

/**
  * _strlen - Prints length of a string
  * @s: pointer to an char
  *
  * Return: Length of a string
  */

unsigned int _strlen(char *s)
{
	int i = 0, n = 0;

	while (s[i] != '\0')
	{
		n++;
		i++;
	}

	return (n);
}
