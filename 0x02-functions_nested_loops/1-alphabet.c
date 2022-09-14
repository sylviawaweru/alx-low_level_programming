#include"main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (sucess)
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)

	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
