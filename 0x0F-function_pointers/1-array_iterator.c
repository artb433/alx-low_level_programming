#include <stddef.h>

/**
 * array_iterator - iterate over an array and print its elements
 *
 * @array: pointer to integer array to be printed
 * @size: size of array
 * @action: function pointer to callbacks to be used
 *
 * Return: nothing - void return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
