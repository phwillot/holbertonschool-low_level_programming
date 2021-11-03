#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: String to print
  * @f: pointer function returning void and taking a string as argument
  *
  * Return: Void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
