#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Print all possible different combinations of two digits
  *
  * Return: Always 0 (success)
  */

int main(void)
{

	int firstDigit = 0, secondDigit = 1, modifier = 2;

	while (firstDigit < 9)
	{
		while (secondDigit <= 9)
		{
			putchar('0' + firstDigit);
			putchar('0' + secondDigit);
			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
			secondDigit++;
		}

		secondDigit = modifier;
		modifier++;
		firstDigit++;
	}

	putchar('\n');
	return (0);
}
