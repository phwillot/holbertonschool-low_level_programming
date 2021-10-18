#include "main.h"
#include <stdio.h>

/**
  * _strstr - Located a substring.
  * @haystack: String with search the occurence to.
  * @needle: Substring searched in haystack
  *
  * Return: Pointer to the beggining of the located substring, otherwise NULL
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, y = 0, count = 0, temp, size = 0;

	while (needle[size] != '\0')
		size++;

	while (haystack[i] != '\0')
	{
		temp = i;
		while (needle[y] != '\0')
		{
			if (haystack[i] == needle[y])
				count++;
			i++;
			y++;
		}
		if (count == size)
			return (haystack + temp);
		y = count = 0;
		i = temp;
		i++;
	}
	return (0);
}
