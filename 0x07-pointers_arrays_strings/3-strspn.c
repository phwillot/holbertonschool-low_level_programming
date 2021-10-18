#include "main.h"

/**
  * _strspn - Get the length of a prefix substring.
  * @s: Initial string to test
  * @accept: Bytes accepted in the string
  *
  * Return: Number of bytes in the initials segment of as which consist
  * only from bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, y = 0, count = 0, sum = 0;

	while (s[i] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[i] == accept[y])
				count++;
			y++;
		}
		if (count == 0)
			break;
		sum += count;
		y = count = 0;
		i++;
	}
	return (sum);
}
