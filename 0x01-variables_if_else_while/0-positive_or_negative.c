#include <stdio.h>
#include <time.h>

/**
 *number > 0 --->is positive
 *number < 0 --->is negative
 *number = 0 --->is zero
 */
 int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf(Enter number
