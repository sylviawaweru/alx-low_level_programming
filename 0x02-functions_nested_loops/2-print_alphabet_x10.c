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
	int x;
	int x2;

	for (x = 0; x = 9; x++)
	{
		for (x2 = 'a'; x2 <= 'z'; x2++)
		{
			_putchar(x2);
		}
		_putchar('\n');
	}
}
