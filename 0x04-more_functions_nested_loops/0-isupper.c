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

		if ((c >= 'A') && (c <= 'Z'))
			return (1);
		else
			return (0);
}