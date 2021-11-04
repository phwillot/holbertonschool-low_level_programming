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
	va_list ptr;
	char *characters = "cifs";

	if (format == NULL)
		exit(0);

	va_start(ptr, format);

	while (format[i])
	{
		va_arg(ptr, void *);
		while (characters[y])
		{
			if (format[i] == characters[y])
			{
				if (format[i + 1])
					printf("%c, ", va_arg(ptr, int));
				else
					printf("%c", va_arg(ptr, int));
			}
			y++;
		}
		y = 0;
		i++;
	}

	va_end(ptr);
	printf("\n");
}
