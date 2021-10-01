#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all the numbers of base 16 in lowercase with a newline
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char hexadecimal[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hexadecimal[i]);
	}

	putchar('\n');

	return (0);
}
