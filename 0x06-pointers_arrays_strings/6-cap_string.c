#include "main.h"

/**
  * cap_string - Capitalize all words of a string.
  * @s: string to capitalize
  *
  * Return: pointer to the string capitalized.
  */

char *cap_string(char *s)
{
	int i, y;
	char sep[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y < 13; y++)
		{
			if (s[i - 1] == sep[y] && s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
			}
		}
	}

	return (s);

}
