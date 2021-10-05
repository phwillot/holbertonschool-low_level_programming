#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of the Jack Bauer
  * starting from 00:00 to 23:59
  *
  */

void jack_bauer(void)
{
	int a = 48, b = 48, c = 48, d = 48;

	while (a < 50 || b < 52)
	{
		while (c < 54 && d < 58)
		{
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			if (c != 54 || d != 58)
				_putchar('\n');

			d == 57 ? d = 48, c++ : d++;
		}
		d = c = 48;
		b == 57 ? b = 48, a++ : b++;
	}
}
