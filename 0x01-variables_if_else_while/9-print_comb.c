#include <stdio.h>

/**
  * main - Entry point
  *
  * Descripition: Prints all possible combinations of single-digit numbers
  * without printf or puts and type char
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
