#include"main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Prints lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
