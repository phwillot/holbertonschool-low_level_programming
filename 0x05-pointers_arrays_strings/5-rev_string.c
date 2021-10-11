#include "main.h"

/**
  * rev_string - Reverse a string
  * @s: pointer to a string (char)
  *
  * Return: void
  */

void rev_string(char *s)
{
	int length = 0, i = 0, y = 0;

	while (s[length] != '\0')
		length++;

	y = length - 1;

	while (i < length)
	{
		s[i] = s[y];
		i++;
		y--;
	}
}
