#include "main.h"

/**
  * _memcpy - Fills that copies memory area
  * @dest: memory area destination
  * @src: pointer to string that'll copy bytes from
  * @n: Number of bytes to copy from src
  *
  * Return: Pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
