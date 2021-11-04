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
	char *separator = "";

	ch_t ch[] = {
		{'c', ch_char},
		{'i', int_char},
		{'f', float_char},
		{'s', string_char},
	};

	va_start(args, format);

	while (format && format[i])
	{
		while (y < 4)
		{
			if (format[i] == ch[y].ch)
			{
				printf("%s", separator);
				ch[y].func(args);
			}
			y++;
		}
		separator = ", ";
		y = 0;
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * ch_char - Prints a character based on the argument
 * @arg: list of variadic arguments
 * Return: void
 */

void ch_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * int_char - Prints an integer based on the argument
 * @arg: list of variadic arguments
 *
 * Return:void
 */

void int_char(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
  * float_char - Prints a float based on the argument
  * @arg: list of variadic arguments
  *
  * Return: void
  */

void float_char(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
  * string_char - Prints a string based one the argument
  * @arg: list of variadic arguments
  *
  * Return: void
  */

void string_char(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(arg, char *));
}
