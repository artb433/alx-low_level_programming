#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 *
 *@n: number to be considered
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int less;

		for (less = n; less <= 98; less++)
		{
			printf("%d", less);

			if (less == 98)
				continue;

			printf(", ");
		}

		printf("\n");
	}

	if (n > 98)
	{
		int greater;

		for (greater = n; greater >= 98; greater--)
		{
			printf("%d", greater);

			if (greater == 98)
				continue;

			printf(", ");
		}

		printf("\n");
	}

	if (n == 98)
	{
		printf("%d\n", n);
	}
}
