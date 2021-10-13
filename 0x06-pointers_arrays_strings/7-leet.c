#include "main.h"
#include <stdio.h>
/**
  * leet - Encodes a string into 1337.
  * @s: string to encode.
  *
  * Return: pointer to the string encoded.
  */

char *leet(char *s)
{
	int i, y, z = 0;
	char letters[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y < 10; y += 2)
		{
			if (s[i] == letters[y] || s[i] == letters[y + 1])
				s[i] = numbers[z];
			z++;
		}
		y = z = 0;
	}
	return (s);
}
