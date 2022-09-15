#include"main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: inputs number
 *
 * Return: 1 if c is uppercase,otherwise 0
 */
int _isupper(int c)
{
	int c;

		for (c >= 'A'; c <= 'Z'; c++)
		{
			_putchar (c);
		}
	_putchar('\n');
	return (1);
}
