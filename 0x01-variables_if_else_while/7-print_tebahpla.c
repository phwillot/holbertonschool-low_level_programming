#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the lowercase alphabet in reverse with a newline
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char reverseAlphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(reverseAlphabet[i]);

	}

	putchar('\n');

	return (0);
}
