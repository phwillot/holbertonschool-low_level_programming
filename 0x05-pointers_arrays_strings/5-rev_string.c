#include "main.h"

/**
  * rev_string - Reverse a string
  * @s: pointer to a string (char)
  *
  * Return: void
  */

void rev_string(char *s)
{
	int length = 0, i = 0, y = 0, temp;

	while (s[length] != '\0')
		length++;

	y = length - 1;

	while (i < y)
	{
		temp = s[y];
		s[y] = s[i];
		s[i] = temp;
		i++;
		y--;
	}
	s[length] = '\0';
}
