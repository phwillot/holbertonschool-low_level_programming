#include "main.h"
/**
  * rot13 - Encodes a string using rot13
  * @s: string to encode.
  *
  * Return: pointer to the string encoded.
  */

char *rot13(char *s)
{
	int i, y;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char converted[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[i] == letters[y])
			{
				s[i] = converted[y];
				break;
			}
		}
	}
	return (s);
}
