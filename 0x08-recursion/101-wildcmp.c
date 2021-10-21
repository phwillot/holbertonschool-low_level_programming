#include "main.h"

/**
  * wildcmp - Compare two strings.
  * @s1: first string to check
  * @s2: second string to check
  *
  * Return: (1) if both string can be consideral identical, otherwise (0).
  */

int wildcmp(char *s1, char *s2)
{
	return (checkLetters(s1, s2));
}

/**
  * checkLetters - Compare the letters of two strings at the same index.
  * @s1: First string
  * @s2: Second string
  *
  * Return: (0)
  */

int checkLetters(char *s1, char *s2)
{
	if (*s2 == '*' && !*(s2 + 1))
		return (1);

	if (*s1 != *s2 && *s2 == '*')
		return (checkLetters(s1, s2 + 1));

	if (*s1 != *s2 && !*s1 && *(s2 + 1) == '*')
		return (1);

	if (*s1 != *s2 && *s1 != '\0' && *(s2 - 1) != '*' && *(s2 + 1) == '*')
		return (0);

	if (*s1 != *s2 && *s1 != '\0')
		return (checkLetters(s1 + 1, s2));

	if (*s1 == *s2 && (*(s2 + 1) == '\0' && (*(s1 + 1) == '\0')))
		return (1);

	if (*s1 == *s2 && *s1 != '\0')
		return (checkLetters(s1 + 1, s2 + 1));

	if (*s1 != *s2 && *s1 == '\0')
		return (0);

	return (checkLetters(s1 + 1, s2 + 1));
}
