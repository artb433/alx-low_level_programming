#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev;
	int curr;
	int next;
	int sum;

	prev = 0;
	curr = 1;
	next = 0;
	sum = 0;

	while (next < 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;

		if (next % 2 == 0)
		{
			sum = sum + next;
		}
	}

	printf("%i\n", sum);
	return (0);
}
