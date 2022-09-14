#include"main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @ab: interger input
 *
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return ((ab * (ab > 0) - (ab < 0)));
}
