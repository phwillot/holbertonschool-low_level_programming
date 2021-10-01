#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all single digit numbers of base 10 starting from 0
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	char numbers[10] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(numbers[i]);
	}
	putchar('\n');
	return (0);
}
