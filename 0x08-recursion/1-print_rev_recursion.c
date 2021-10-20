#include "main.h"
#include <stdio.h>
/**
  * _print_rev_recursion - Prints a string in reverse.
  * @s: String to print
  *
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
