#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
  * _calloc - Allocates memory for an array of nmemb elements of size bytes
  * each.
  * @nmemb: Array (number of elements)
  * @size: Number of bytes for each element
  *
  * Return: (NULL) if nmemb or size = 0 and if it fails, or pointer to the
  * allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	ptr = _memset(ptr, 0, nmemb * size);

	return (ptr);
}

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
