#include"main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: Input character to be compared received as int
 *
 * Return: 1 if the character c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
