#include <stdio.h>

/**
  * main - Entry point - Prints a sentence
  * Return: Always 1 Success
  */

int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora \
Korpar, 2015-10-19\n";

	fwrite(sentence, sizeof(sentence) - 1, 1, stdout);
	return (1);
}
