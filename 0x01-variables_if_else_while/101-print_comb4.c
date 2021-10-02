#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all possible different combinations of three digits
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = 48; firstDigit < 58; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit < 58; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit < 58; thirdDigit++)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);

				if (firstDigit != 55 || secondDigit != 56
				|| thirdDigit != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
