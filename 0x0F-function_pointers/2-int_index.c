#include <string.h>

/**
 * int_index - check if element at index of supplied array is an int
 *
 * @array: array whose elements are to be considered
 * @size: size of array
 * @cmp: pointer to function (callback)
 *
 * Return: integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int retval;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (array[i])
			{
				retval = cmp(array[i]);

				if (retval != 0)
					return (i);
			}
		}
	}

	return (-1);
}
