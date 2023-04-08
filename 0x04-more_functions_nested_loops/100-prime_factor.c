#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: return 0 on completion
 */
int main(void)
{
	long int num = 612852475143;
	int counter;
	int prime_factor;

	for (counter = 2; num > 1; counter++)
	{
		while (num % counter == 0)
		{
			num = num / counter;
			prime_factor = counter;
		}
	}

	printf("%d\n", prime_factor);
	return (0);
}
