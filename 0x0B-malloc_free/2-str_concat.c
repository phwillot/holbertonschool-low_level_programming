#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	ar = malloc((i * sizeof(char)) + (y * sizeof(char) + 1));
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
