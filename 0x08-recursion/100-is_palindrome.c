#include "main.h"

/**
  * is_palindrome - Check if the string is a palindrome.
  * @s: string to check
  *
  * Return: (1) if it's a palindrome otherwise (0).
  */

int is_palindrome(char *s)
{
	int length = _strlength(s, 0) - 1;

	if (!*s)
		return (1);

	return (check_letters(s, 0, length));
}

/**
  * check_letters - Check the letters of the string.
  * @s: The string to check
  * @start: index begin of the string
  * @end: index end of the string
  *
  * Return: (1) if it's palindrome otherwise (0)
  */

int check_letters(char *s, int start, int end)
{
	int i = 0;

	if (*(s + start) != *(s + end) && i <= (end / 2))
		return (0);

	if (*(s + start) == *(s + end) && i == (end / 2))
		return (1);

	i++;

	return (check_letters(s, start + 1, end - 1));
}

/**
  * _strlength - Get the length of a string
  * @s: string to count characters
  * @i: length
  *
  * Return: length of the string
  */

int _strlength(char *s, int i)
{
	if (!*(s + i))
		return (i);

	return (_strlength(s, i + 1));
}
