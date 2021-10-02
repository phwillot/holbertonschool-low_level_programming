#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all possible combinasation of two-digit numbers
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int a = 48, b = 48, c = 48, d = 49, ct1 = 48;

	while (a < 58 && b < 58)
	{
		while (c < 58 && d < 58)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if (a != 57 || b != 56)
			{
				putchar(',');
				putchar(' ');
			}
			if (d == 57)
				c++;
			if (d == 57)
				d = 48;
			d++;
		}
		c = ct1;
		d = b + 2;
		if (b == 56)
		{
			c = ++ct1;
			d = 48;
		}
		if (b == 57)
		{
			b = 47;
			c = ct1;
			d = 49;
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
