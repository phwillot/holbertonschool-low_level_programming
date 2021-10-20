#include "main.h"
/**
  * is_palindrome - Check if the string is a palindrome.
  * @s: string to check
  *
  * Return: (1) if it's a palindrome otherwise (0).
  */

int is_palindrome(char *s)
{
	int i = 0;

	if (!*s)
		return (1);

	while (s[i] != '\0')
		i++;
	i--;
	return (check_letters(s, 0, i));
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
