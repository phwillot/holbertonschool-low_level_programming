#include "main.h"

/**
  * set_string - set the value of a pointer to a char.
  * @s: Pointer to a pointer
  * @to: pointer to a string.
  *
  * Return: void
  */

void set_string(char **s, char *to)
{
	*s = to;
}
