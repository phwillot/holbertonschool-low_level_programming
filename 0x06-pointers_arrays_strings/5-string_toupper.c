#include "main.h"

/**
  * string_toupper - Change all lowercases letters of a string to uppercase.
  * @s: string to convert to uppercase.
  *
  * Return: pointer to the string uppercase
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	}

	return (s);

}
