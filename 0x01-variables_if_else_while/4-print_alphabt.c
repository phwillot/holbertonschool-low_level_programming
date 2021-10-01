#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the whole alphabet in lower case excluding "q" and "e"
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char alphabetLower[26] = "abcdefghijklmnopqrstuvwxyz";

	int a;
	int size = sizeof(alphabetLower);

	for (a = 0; a < size; a++)
	{
		if (alphabetLower[a] != 'q' && alphabetLower[a] != 'e')
		{
		putchar(alphabetLower[a]);
		}
	}


	putchar('\n');
	return (0);
}
