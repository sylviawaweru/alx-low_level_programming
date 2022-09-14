#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input int number from which is going to be get its last digit
 *
 * Return: the last number of n
 */

int print_last_digit(int n)
{
	int i = false;

	if (i < 0)
		n = n * -1;
	i = n % 10;
	_putchar (i + '0');
	return (i);
}


