#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: list of type of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, y = 0;
	va_list args;
	char *characters = "cifs";

	va_start(args, format);

	while (format[i])
	{
		while (characters[y])
		{
			if (format[i] == characters[y])
			{
				printf("%d, ", va_arg(args, int));
			}
			y++;
		}
		y = 0;
		i++;
	}

	va_end(args);
	printf("\n");
}
