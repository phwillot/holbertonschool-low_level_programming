#include "main.h"

/**
  * _memset - Fills memory with a constant byte.
  * @s: pointer of type char
  * @b: constant byte
  * @n: Number of bytes to fill in area pointer by s
  *
  * Return: Pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
