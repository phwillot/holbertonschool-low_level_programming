#include "main.h"
#include <stdio.h>
/**
  * print_buffer - Prints a buffer
  * @b: buffer to print
  * @size: size of the buffer
  *
  * Return: void
  */

void print_buffer(char *b, int size)
{
	int i, y = 0, buffer = 0x0, j = 8, temp;

	for (i = 0; i < size; i += 2)
	{
		temp = i;
		if (i % 10 == 0)
		{
			printf("%08x: ", buffer);
			buffer += 10;
		}
		if (i < size)
		{
			printf("%02x", b[i]);
			if (i < size - 1)
				printf("%02x ", b[i + 1]);
		}
		if (i == j)
		{
			for (i -= 8; i < temp + 2; i++)
				if (b[i] > 10)
					printf("%c", b[i]);
				else
					printf("%c", '.');
			printf("\n");
			j += 10;
			i = temp;
		}
	}
	if (size % 10 != 0)
	{
		for (y = 0; y < (25 - (size % 10) - 1); y++)
			printf(" ");
		for (i -= (size % 10) + 1; i < size; i++)
			if (b[i] > 10)
				printf("%c", b[i]);
			else
				printf("%c", '.');
	}
	if (i % 10 != 0 || size == 0)
		printf("\n");
}
