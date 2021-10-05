#include "main.h"

/**
  * _islower - Checks for lowercase character
  *
  * Return: 1 (if c is lowercase), 0 otherwise
  * @c: The character to check
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
