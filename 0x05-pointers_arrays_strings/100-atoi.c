#include "main.h"
/**
  * _atoi - Convert a string to a number
  * @s: String to pass
  *
  * Return: s Converted to number
  */

int _atoi(char *s)
{
	unsigned int i = 0, number = 0, ct1 = 0, ct2 = 0, ct3 = 0;
	int y = 0;

	while (s[y] != '\0')
	{
		if (s[y] >= 48 && s[y] <= 57)
			ct3++;
		y++;
	}

	if (y == 0)
		return (0);
	if (ct3 == 0)
		return (0);

	while (s[i] < 48 || s[i] > 57)
	{
		if (s[i] == 45)
			ct1++;
		if (s[i] == 43)
			ct2++;
		i++;
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		if (s[i] < 48 && s[i] > 57)
			break;
		number += s[i] - '0';
		if (s[i + 1] != '\0')
			number *= 10;
		if ((s[i + 1] < 47 || s[i + 1] > 57) && s[i + 1] != '\0')
			number /= 10;
		i++;
	}
	if (ct1 == ct2)
		return (number);
	else
		return (-number);
}
