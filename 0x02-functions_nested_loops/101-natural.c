#include <stdio.h>
#include "main.h"

/**
 * main - sum multiples of 3 or 5
 *
 * Return: Return 0 on success
 */
int main(void)
{
	int num;
	int sum;
	int check_a;
	int check_b;

	sum = 0;

	for (num = 1; num < 1024; num++)
	{
		check_a = num % 3;
		check_b = num % 5;

		if (check_a == 0 || check_b == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
