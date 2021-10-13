#include "main.h"

/**
  * _strcmp - Compares to strings
  * @s1: First string to compare
  * @s2: Second string to compare
  *
  * Return: Difference between the first two characters who are different
  */

int _strcmp(char *s1, char *s2)
{
	int n = 0, i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		n = s1[i] - s2[i];
		break;

	}
	return (n);
}
