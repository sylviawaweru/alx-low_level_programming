#include<stdio.h>
#include"main.h"

void print_alphabet(void)
/*
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 success
 */
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
		putchar('\n');
}
