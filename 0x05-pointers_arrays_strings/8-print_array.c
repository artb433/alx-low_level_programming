#include <stdio.h>

/**
 * print_array - print array elements
 * @a: array
 * @n: max array index
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);

		if (counter == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
