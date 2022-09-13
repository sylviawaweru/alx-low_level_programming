#include<stdio.h>
#include"main.h"

/*
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 success
 */
void print_alphabet(void);
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
		return (0);
}

