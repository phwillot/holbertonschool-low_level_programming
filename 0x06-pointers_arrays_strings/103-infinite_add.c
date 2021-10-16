#include "main.h"

/**
  * infinite_add - Adds two numbers.
  * @n1: first integer
  * @n2: second integer
  * @r: buffer who'll store the result
  * @size_r: buffer size
  *
  * Return: Pointer to the result
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, y, p = 0, result, ret = 0;

	i = _strlen(n1) - 1;
	y = _strlen(n2) - 1;
	while (i > 0 || y > 0)
	{
		result = (n1[i] - 48) + (n2[y] - 48) + ret;
		if (result >= 10)
		{
			ret = 1;
			if (n1[i] == 57 && n2[y] == 49)
				ret = 0;
		}
		else
			ret = 0;
		r[p] = (result % 10) + 48;
		if (i != 0)
			i--;
		if (y != 0)
			y--;
		p++;
	}
	result = (n1[0] - 48) + (n2[0] - 48);
	r[p] = (result % 10) + 48;
	if (result >= 10)
	{
		r[p + 1] = 49;
		r[p + 2] = '\0';
		p += 2;
	}
	else
	{
		r[p + 1] = '\0';
		p += 1;
	}
	reverse_array_s(r, p);
	if (p > size_r - 1)
		return (0);
	else
		return (r);
}

/**
  * _strlen - Prints length of a string
  * @s: pointer to an char
  *
  * Return: Length of a string
  */

int _strlen(char *s)
{
	int i = 0, n = 0;

	while (s[i] != '\0')
	{
		n++;
		i++;
	}

	return (n);
}

/**
  * reverse_array_s - Reverse the content of an array of characters.
  * @a: an array of characters
  * @n: Number of elements of the array
  *
  * Return: void
  */

void reverse_array_s(char *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
