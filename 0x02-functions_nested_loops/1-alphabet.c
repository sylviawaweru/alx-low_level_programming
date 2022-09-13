#include<stdio.h>
#include"main.h"

/*
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 success
 */
int main(void)
{
	int c;

	c = getchar();
	while (c != EOF);
	{
		putchar(c);
		c = getchar();
	}
	putchar('\n')
		return (0);
}

