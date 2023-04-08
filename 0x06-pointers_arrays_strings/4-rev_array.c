#include <stdio.h>

/**
 * reverse_array - reverse the elements of an array
 * @a: pointer of array to be reversed
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int counter;
	int index;

	index = 0;

	for (counter = 0; counter < n; counter++)
	{
		n--;

		index = a[counter];
		a[counter] = a[n];
		a[n] = index;
	}
}
