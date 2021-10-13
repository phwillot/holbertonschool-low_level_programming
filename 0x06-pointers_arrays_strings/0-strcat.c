#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: String that'll concatenates next to src string
  * @src: Base string.
  *
  * Return: Pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
