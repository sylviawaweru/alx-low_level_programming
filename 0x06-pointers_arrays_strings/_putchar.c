#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1,-1 on fail
 */
int _putchar(char c)
{
	return (wrrite (1, &c , 1));
}