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
	int firstDigit = 0, secondDigit = 1, thirdDigit = 2;
	int secondModifier = 2, thirdModifier = 3;
	int resetThirdDigit = 3;

	while (firstDigit < 8)
	{
		while (secondDigit <= 9)
		{
			while (thirdDigit <= 9)
			{
				putchar('0' + firstDigit);
				putchar('0' + secondDigit);
				putchar('0' + thirdDigit);

				if (firstDigit != 7 || secondDigit != 8
					 || thirdDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
				thirdDigit++;
				printf("\n%d\n", thirdDigit);
			}

			thirdDigit = thirdModifier;
			thirdModifier++;

			secondDigit++;
		}

		secondDigit = secondModifier++;

		thirdDigit = resetThirdDigit++;

		firstDigit++;
	}
	putchar('\n');
	return (0);
}
