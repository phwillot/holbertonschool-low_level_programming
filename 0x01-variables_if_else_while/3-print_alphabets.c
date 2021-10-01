#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the whole alphabet in lower case
  * followed by alphabet in UpperCase
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char alphabetLower[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetUpper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int a, b;
	int size = sizeof(alphabetLower);

	for (a = 0; a < size; a++)
	{
		putchar(alphabetLower[a]);
	}

	for (b = 0; b < size; b++)
	{
		putchar(alphabetUpper[b]);
	}

	putchar('\n');
	return (0);
}
