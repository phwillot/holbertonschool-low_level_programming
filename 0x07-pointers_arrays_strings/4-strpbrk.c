#include "main.h"

/**
  * _strpbrk - Searches a string for any of a set of bytes.
  * @s: Initial string to test
  * @accept: Bytes accepted in the string
  *
  * Return: Pointer to the byte in s that matches one of the bytes in accept,
  * NULL if no such byte is found.
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, y = 0, count = 0;

	while (s[i] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[i] == accept[y])
				count++;
			y++;
		}
		if (count >= 1)
			break;
		y = count = 0;
		i++;
	}
	return (s + i);
}
