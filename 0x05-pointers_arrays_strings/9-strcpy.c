#include "main.h"

/**
  * *_strcpy - Copy the string pointed to by src, with null byte, to the
  * buffer pointer to by dest
  *
  * @dest: buffer that'll copy the string
  * @src: string pointed to by *src
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i, y = 0;

	while (src[y] != '\0')
		y++;

	y++;

	for (i = 0; i <= y ; i++)
		dest[i] = src[i];

	return (dest);
}
