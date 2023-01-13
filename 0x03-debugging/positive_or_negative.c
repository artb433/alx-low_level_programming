#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * @i: number to ne tested
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);

	return (0);
}
