#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all single digit numbers of base 10 starting from 0
  * without variable type char
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
