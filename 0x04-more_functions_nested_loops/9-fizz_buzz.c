#include <stdio.h>
#include "main.h"

/**
  * main- Entry point
  *
  * Description: Prints the numbers from 1 to 100, replace multiples of three
  * by "Fizz", multiples of 5 by "Buzz", and both multiples by "FizzBuzz"
  *
  * Return: Always 1 (Success)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
		if (i == 100)
			printf("%s\n", "Buzz");
		else
		{
			if (i % 5 == 0 && i % 3 == 0)
				printf("%s ", "FizzBuzz");

			else if (i % 3 == 0)
				printf("%s ", "Fizz");
			else if (i % 5 == 0)
				printf("%s ", "Buzz");
			else if (i % 3 != 0 || i % 5 == 0)
				printf("%d ", i);

		}
	return (0);
}
