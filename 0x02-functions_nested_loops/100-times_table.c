#include <stdio.h>

/**
 * print_times_table - make a time table out of the given number
 *
 * @n: value to be considered
 */
void print_times_table(int n)
{
	int rows;
	int cols;

	if (!(n > 15 || n < 0))
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (cols = 0; cols <= n; cols++)
			{
				if (cols == 0)
				{
					printf("%d", rows * cols);
				}
				else
				{
					printf("%3d", rows * cols);
				}

				if (cols == n)
					continue;

				printf(", ");
			}

			printf("\n");
		}
	}
}
