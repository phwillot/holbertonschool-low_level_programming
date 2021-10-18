#include "main.h"

/**
  * _strchr - Located a character in a string
  * @s: string to test
  * @c: character to search in the string
  *
  * Return: Pointer to the first occurence of the character c in the string s
  * or NULL if the character is not found.
  */

char *_strchr(char *s, char c)
{
	int i = 0, y = 0;

	while (s[y] != '\0')
		y++;
	y--;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (y == i)
		return (0);
	else
		return (s + i);
}
