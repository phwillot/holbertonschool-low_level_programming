#include "main.h"
/**
  * _atoi - Convert a string to a number
  * @s: String to pass
  *
  * Return: s Converted to number
  */

int _atoi(char *s)
{
	int i = 0, number = 0, ct1 = 0, ct2 = 0;

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
		number *= 10;
		i++;
	}

	number /= 10;

	if (ct1 < ct2 || ct1 == ct2)
		return (number);
	else
		return (-number);
}
