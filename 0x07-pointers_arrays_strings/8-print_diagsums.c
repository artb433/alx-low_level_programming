#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals of an array
 *
 * @a: rows
 * @size: size of columns
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, row;
	int value1, value2;

	value1 = value2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		value1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		value2 += a[i];
	}

	printf("%d, %d\n", value1, value2);
}
