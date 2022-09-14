#include"main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int x2;

	for (i = 0; i <= 9; i++)
	{
		for (x2 = 'a'; x2 <= 'z'; x2++)
		{
			_putchar(x2);
		}
		_putchar('\n');
	}
}
