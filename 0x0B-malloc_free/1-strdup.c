#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: String to copy
  *
  * Return: On fail (NULL) if str = NULL and insufficient memory,
  * On success, pointer to the duplicated string
  */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ar;

	while (str[i])
		i++;

	ar = malloc(i * sizeof(char) + 1);

	if (ar == NULL || str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
