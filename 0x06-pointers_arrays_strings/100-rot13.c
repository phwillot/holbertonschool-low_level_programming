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
	char min[] = "abcdefghijklmnopqrstuvwxyz";
	char maj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y < 26; y++)
		{
			if ((s[i] == min[y] || s[i] == maj[y]) && y <= 12)
			{
				s[i] += 13;
				break;
			}
			else if ((s[i] == min[y] || s[i] == maj[y]) && y >= 12)
			{
				s[i] -= 13;
				break;
			}
		}
	}
	return (s);
}
