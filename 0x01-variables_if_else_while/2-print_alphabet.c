#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the whole alphabet in lower case
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int a;
	int size = sizeof(alphabet) / sizeof(char);

	for (a = 0; a < size; a++)
	{
		if (alphabet[a] != '\n')
		{
		putchar(alphabet[a]);
		}

	}

	putchar('\n');
	return (0);
}
