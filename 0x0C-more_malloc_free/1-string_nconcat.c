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
	unsigned int i, j = 0;
	unsigned int size2 = _strlen(s2);
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(sizeof(char));
		if (ptr == NULL)
			return (NULL);
	}

	if (n >= size2)
	{
		ptr = str_concat(s1, s2);
		if (ptr == NULL)
			return (NULL);
	}

	else
	{
		ptr = malloc(_strlen(s1) + n + 1);
		if (ptr == NULL)
			return (NULL);

		for (i = 0; s1[i]; j++, i++)
			ptr[j] = s1[i];
		for (i = 0; i < n; j++, i++)
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

/**
  * str_concat - Concatenates two strings.
  * @s1: String to concatenate
  * @s2: String to concatenate
  *
  * Return: On fail (NULL)
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, y = 0;
	char *ar;

	if (s1 == NULL && s2 == NULL)
	{
		ar = malloc(1);
		return (ar);
	}
	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[y])
			y++;
	}
	ar = malloc((i * sizeof(char)) + (y * sizeof(char)) + 1);
	if (ar == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		while (s1[i])
		{
			ar[i] = s1[i];
			i++;
		}
	}
	y = 0;
	if (s2 != NULL)
	{
		while (s2[y])
		{
			ar[i] = s2[y];
			y++, i++;
		}
	}
	return (ar);
}
