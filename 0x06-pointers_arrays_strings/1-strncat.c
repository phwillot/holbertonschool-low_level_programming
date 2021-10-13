#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: String that'll concatenates next to src string
  * @src: Base string.
  * @n: number of bytes to src
  *
  *
  * Return: Pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		if (j == n)
			break;
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
